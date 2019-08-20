import re
import os

DIR_IN = "Input"
DIR_OUT = "Out"

# Usage: place dumped sdk files containing SDK classes (e.g. Mordhau_Mordhau_classes.hpp) in DIR_IN and run.
# Generates .h and .cpp files in DIR_OUT

# Regex patterns
# class_pat: contains the entire class definition including the two commented lines before
class_pat = re.compile("\/\/ Class[\s\S]*?};")
# header_pat: contains class attributes (no method definitions)
header_pat = re.compile("public:[\s\S\t]([\s\S]*?)[\s\S](?=static UClass\* StaticClass\(\))")
# function_pat: contains class method definitions
function_pat = re.compile("static UClass\* StaticClass\(\)[\s\S]*?}\s*([\s\S\t]*(?=}))")
# function_cpp_pat: first group captures function return type,  second group captures function name + arguments
function_cpp_pat = re.compile("(.*?)([^\s]*?\([^;]*)")


def parse_data(class_dict):
    out = ""
    for line in class_dict['data'].splitlines():
        if line.find("MISSED OFFSET") == -1 and len(line) > 3:
            var_end = line.find(';') + 1
            out += "\tUPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)\n\t" + ' '.join(line[0:var_end].split()) + '\n'
    return out


def header_parse_functions(class_dict):
    out = ""
    file_name = get_file_name(class_dict)
    for line in class_dict['functions'].splitlines():
        if line.find(";") != -1:
            var_end = line.find(';') + 1
            out += "\tUFUNCTION(BlueprintCallable, Category = \"{}\")\n\t".format(file_name) + line[0:var_end] + '\n'
    return out


def get_file_name(class_dict):
    return class_dict['class'].splitlines()[0].split()[-1].split('.')[1]


def get_folder_name(class_dict):
    return class_dict['class'].splitlines()[0].split()[-1].split('.')[0]


def get_class_definition(class_dict):
    return class_dict['class'].splitlines()[2]


def get_class_name(class_dict):
    return class_dict['class'].splitlines()[2].split()[1]


def create_header_str(class_dict):
    out = "#pragma once\n\n#include \"CoreMinimal.h\"\n"
    file_name = get_file_name(class_dict)
    out += "#include \"{}.generated.h\"\n\n".format(file_name)
    out += "UCLASS()\n" + get_class_definition(class_dict) + "\n{\n\tGENERATED_BODY()\npublic:\n" + parse_data(class_dict)
    out += "\n" + header_parse_functions(class_dict) + "\n};"
    return out


def create_cpp_str(class_dict):
    class_name = get_class_name(class_dict)
    file_name = get_file_name(class_dict)
    out = "#include \"{}.h\"\n\n".format(file_name)
    for line in class_dict['functions'].splitlines():
        if line.find(";") != -1:
            reg_result = function_cpp_pat.search(line)
            funct_type = reg_result.group(1)
            funct_name = reg_result.group(2)
            out += funct_type + class_name + "::" + funct_name + " {\n}\n"
    return out


def read_file(filepath):
    with open(filepath) as file:
        sdk_text = file.read()
    # variable sdk is a list of dictionaries, with 3 keys "class", "data" and "functions.
    sdk = []
    classes = class_pat.findall(sdk_text)
    for i in range(len(classes)):
        sdk.append({"class": classes[i]})
        header_res = header_pat.search(classes[i])
        if header_res:
            sdk[i]['data'] = header_res.group(1)
        else:
            sdk[i]['data'] = ""
        funct_res = function_pat.search(classes[i])
        if funct_res:
            sdk[i]['functions'] = funct_res.group(1)
        else:
            sdk[i]['functions'] = ""
    return sdk


if __name__ == '__main__':
    print("Parsing files containing SDK classes in directory \"{}\"".format(DIR_IN))
    if not os.path.exists(DIR_OUT):
        print("Creating directory \"{}\"".format(DIR_OUT))
        os.mkdir(DIR_OUT)
    for i in os.listdir(DIR_IN):
        print("Parsing input file \"{}\"".format(i))
        sdk = read_file(os.path.join(DIR_IN, i))
        for c in sdk:
            filename = get_file_name(c)
            folder_name = get_folder_name(c)
            dir_name = os.path.join(DIR_OUT, folder_name)
            cpp_str = create_cpp_str(c)
            header_str = create_header_str(c)
            if not os.path.exists(dir_name):
                os.mkdir(dir_name)
            with open(os.path.join(dir_name, filename + ".cpp"), 'w') as cpp_file:
                cpp_file.write(cpp_str)
            with open(os.path.join(dir_name, filename + ".h"), 'w') as header_file:
                header_file.write(header_str)
    print("Done!")


