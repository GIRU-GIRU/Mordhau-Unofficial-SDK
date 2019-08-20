#pragma once

#include "CoreMinimal.h"
#include "KismetMathLibrary.generated.h"

UCLASS()
class UKismetMathLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
	int STATIC_Xor_IntInt(int A, int B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_VSizeXY(const struct FVector& A);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_VSizeSquared(const struct FVector& A);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_VSize2DSquared(const struct FVector2D& A);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_VSize2D(const struct FVector2D& A);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_VSize(const struct FVector& A);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector STATIC_VLerp(const struct FVector& A, const struct FVector& B, float Alpha);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector STATIC_VInterpTo_Constant(const struct FVector& Current, const struct FVector& Target, float DeltaTime, float InterpSpeed);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector STATIC_VInterpTo(const struct FVector& Current, const struct FVector& Target, float DeltaTime, float InterpSpeed);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector STATIC_VectorSpringInterp(const struct FVector& Current, const struct FVector& Target, float Stiffness, float CriticalDampingFactor, float DeltaTime, float Mass, struct FVectorSpringState* SpringState);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector2D STATIC_Vector2DInterpTo_Constant(const struct FVector2D& Current, const struct FVector2D& Target, float DeltaTime, float InterpSpeed);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector2D STATIC_Vector2DInterpTo(const struct FVector2D& Current, const struct FVector2D& Target, float DeltaTime, float InterpSpeed);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector STATIC_VEase(const struct FVector& A, const struct FVector& B, float Alpha, TEnumAsByte<EEasingFunc> EasingFunc, float BlendExp, int Steps);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FDateTime STATIC_UtcNow();
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FRotator STATIC_TransformRotation(const struct FTransform& T, const struct FRotator& Rotation);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector STATIC_TransformLocation(const struct FTransform& T, const struct FVector& Location);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector STATIC_TransformDirection(const struct FTransform& T, const struct FVector& Direction);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_Transform_Determinant(const struct FTransform& Transform);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FDateTime STATIC_Today();
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FTransform STATIC_TLerp(const struct FTransform& A, const struct FTransform& B, float Alpha, TEnumAsByte<ELerpInterpolationMode> InterpMode);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FTransform STATIC_TInterpTo(const struct FTransform& Current, const struct FTransform& Target, float DeltaTime, float InterpSpeed);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FTimespan STATIC_TimespanZeroValue();
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_TimespanRatio(const struct FTimespan& A, const struct FTimespan& B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FTimespan STATIC_TimespanMinValue();
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FTimespan STATIC_TimespanMaxValue();
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_TimespanFromString(const struct FString& TimespanString, struct FTimespan* Result);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FTransform STATIC_TEase(const struct FTransform& A, const struct FTransform& B, float Alpha, TEnumAsByte<EEasingFunc> EasingFunc, float BlendExp, int Steps);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_Tan(float A);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector STATIC_Subtract_VectorVector(const struct FVector& A, const struct FVector& B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector STATIC_Subtract_VectorInt(const struct FVector& A, int B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector STATIC_Subtract_VectorFloat(const struct FVector& A, float B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector2D STATIC_Subtract_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector2D STATIC_Subtract_Vector2DFloat(const struct FVector2D& A, float B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FTimespan STATIC_Subtract_TimespanTimespan(const struct FTimespan& A, const struct FTimespan& B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		int STATIC_Subtract_IntInt(int A, int B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_Subtract_FloatFloat(float A, float B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FDateTime STATIC_Subtract_DateTimeTimespan(const struct FDateTime& A, const struct FTimespan& B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FTimespan STATIC_Subtract_DateTimeDateTime(const struct FDateTime& A, const struct FDateTime& B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		unsigned char STATIC_Subtract_ByteByte(unsigned char A, unsigned char B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_Square(float A);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_Sqrt(float A);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_Sin(float A);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		int STATIC_SignOfInteger(int A);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_SignOfFloat(float A);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		void STATIC_SetRandomStreamSeed(int NewSeed, struct FRandomStream* Stream);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector STATIC_SelectVector(const struct FVector& A, const struct FVector& B, bool bPickA);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FTransform STATIC_SelectTransform(const struct FTransform& A, const struct FTransform& B, bool bPickA);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FString STATIC_SelectString(const struct FString& A, const struct FString& B, bool bPickA);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FRotator STATIC_SelectRotator(const struct FRotator& A, const struct FRotator& B, bool bPickA);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		class UObject* STATIC_SelectObject(class UObject* A, class UObject* B, bool bSelectA);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		int STATIC_SelectInt(int A, int B, bool bPickA);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_SelectFloat(float A, float B, bool bPickA);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FLinearColor STATIC_SelectColor(const struct FLinearColor& A, const struct FLinearColor& B, bool bPickA);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		class UClass* STATIC_SelectClass(class UClass* A, class UClass* B, bool bSelectA);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		void STATIC_SeedRandomStream(struct FRandomStream* Stream);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		int STATIC_Round(float A);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FRotator STATIC_RotatorFromAxisAndAngle(const struct FVector& Axis, float Angle);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector STATIC_RotateAngleAxis(const struct FVector& InVect, float AngleDeg, const struct FVector& Axis);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FRotator STATIC_RLerp(const struct FRotator& A, const struct FRotator& B, float Alpha, bool bShortestPath);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FRotator STATIC_RInterpTo_Constant(const struct FRotator& Current, const struct FRotator& Target, float DeltaTime, float InterpSpeed);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FRotator STATIC_RInterpTo(const struct FRotator& Current, const struct FRotator& Target, float DeltaTime, float InterpSpeed);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		void STATIC_RGBToHSV_Vector(const struct FLinearColor& RGB, struct FLinearColor* HSV);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		void STATIC_RGBToHSV(const struct FLinearColor& InColor, float* H, float* S, float* V, float* A);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		void STATIC_ResetVectorSpringState(struct FVectorSpringState* SpringState);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		void STATIC_ResetRandomStream(const struct FRandomStream& Stream);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		void STATIC_ResetFloatSpringState(struct FFloatSpringState* SpringState);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FRotator STATIC_REase(const struct FRotator& A, const struct FRotator& B, float Alpha, bool bShortestPath, TEnumAsByte<EEasingFunc> EasingFunc, float BlendExp, int Steps);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector STATIC_RandomUnitVectorInEllipticalConeInRadiansFromStream(const struct FVector& ConeDir, float MaxYawInRadians, float MaxPitchInRadians, const struct FRandomStream& Stream);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector STATIC_RandomUnitVectorInEllipticalConeInRadians(const struct FVector& ConeDir, float MaxYawInRadians, float MaxPitchInRadians);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector STATIC_RandomUnitVectorInEllipticalConeInDegreesFromStream(const struct FVector& ConeDir, float MaxYawInDegrees, float MaxPitchInDegrees, const struct FRandomStream& Stream);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector STATIC_RandomUnitVectorInEllipticalConeInDegrees(const struct FVector& ConeDir, float MaxYawInDegrees, float MaxPitchInDegrees);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector STATIC_RandomUnitVectorInConeInRadiansFromStream(const struct FVector& ConeDir, float ConeHalfAngleInRadians, const struct FRandomStream& Stream);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector STATIC_RandomUnitVectorInConeInRadians(const struct FVector& ConeDir, float ConeHalfAngleInRadians);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector STATIC_RandomUnitVectorInConeInDegreesFromStream(const struct FVector& ConeDir, float ConeHalfAngleInDegrees, const struct FRandomStream& Stream);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector STATIC_RandomUnitVectorInConeInDegrees(const struct FVector& ConeDir, float ConeHalfAngleInDegrees);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector STATIC_RandomUnitVectorFromStream(const struct FRandomStream& Stream);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector STATIC_RandomUnitVector();
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FRotator STATIC_RandomRotatorFromStream(bool bRoll, const struct FRandomStream& Stream);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FRotator STATIC_RandomRotator(bool bRoll);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector STATIC_RandomPointInBoundingBox(const struct FVector& Origin, const struct FVector& BoxExtent);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		int STATIC_RandomIntegerInRangeFromStream(int Min, int Max, const struct FRandomStream& Stream);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		int STATIC_RandomIntegerInRange(int Min, int Max);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		int STATIC_RandomIntegerFromStream(int Max, const struct FRandomStream& Stream);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		int STATIC_RandomInteger(int Max);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_RandomFloatInRangeFromStream(float Min, float Max, const struct FRandomStream& Stream);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_RandomFloatInRange(float Min, float Max);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_RandomFloatFromStream(const struct FRandomStream& Stream);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_RandomFloat();
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_RandomBoolWithWeightFromStream(float Weight, const struct FRandomStream& RandomStream);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_RandomBoolWithWeight(float Weight);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_RandomBoolFromStream(const struct FRandomStream& Stream);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_RandomBool();
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_RadiansToDegrees(float A);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector STATIC_ProjectVectorOnToVector(const struct FVector& V, const struct FVector& Target);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector STATIC_ProjectVectorOnToPlane(const struct FVector& V, const struct FVector& PlaneNormal);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector STATIC_ProjectPointOnToPlane(const struct FVector& Point, const struct FVector& PlaneBase, const struct FVector& PlaneNormal);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_PointsAreCoplanar(TArray<struct FVector> Points, float Tolerance);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		int STATIC_Percent_IntInt(int A, int B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_Percent_FloatFloat(float A, float B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		unsigned char STATIC_Percent_ByteByte(unsigned char A, unsigned char B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		int STATIC_Or_IntInt(int A, int B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FDateTime STATIC_Now();
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_NotEqual_VectorVector(const struct FVector& A, const struct FVector& B, float ErrorTolerance);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_NotEqual_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B, float ErrorTolerance);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_NotEqual_TimespanTimespan(const struct FTimespan& A, const struct FTimespan& B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_NotEqual_RotatorRotator(const struct FRotator& A, const struct FRotator& B, float ErrorTolerance);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_NotEqual_ObjectObject(class UObject* A, class UObject* B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_NotEqual_NameName(const struct FName& A, const struct FName& B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_NotEqual_IntInt(int A, int B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_NotEqual_FloatFloat(float A, float B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_NotEqual_DateTimeDateTime(const struct FDateTime& A, const struct FDateTime& B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_NotEqual_ClassClass(class UClass* A, class UClass* B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_NotEqual_ByteByte(unsigned char A, unsigned char B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_NotEqual_BoolBool(bool A, bool B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_Not_PreBool(bool A);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		int STATIC_Not_Int(int A);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_NormalizeToRange(float Value, float RangeMin, float RangeMax);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FRotator STATIC_NormalizedDeltaRotator(const struct FRotator& A, const struct FRotator& B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_NormalizeAxis(float Angle);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector2D STATIC_Normal2D(const struct FVector2D& A);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector STATIC_Normal(const struct FVector& A);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector STATIC_NegateVector(const struct FVector& A);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FRotator STATIC_NegateRotator(const struct FRotator& A);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_NearlyEqual_TransformTransform(const struct FTransform& A, const struct FTransform& B, float LocationTolerance, float RotationTolerance, float Scale3DTolerance);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_NearlyEqual_FloatFloat(float A, float B, float ErrorTolerance);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_MultiplyMultiply_FloatFloat(float Base, float Exp);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_MultiplyByPi(float Value);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector STATIC_Multiply_VectorVector(const struct FVector& A, const struct FVector& B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector STATIC_Multiply_VectorInt(const struct FVector& A, int B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector STATIC_Multiply_VectorFloat(const struct FVector& A, float B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector2D STATIC_Multiply_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector2D STATIC_Multiply_Vector2DFloat(const struct FVector2D& A, float B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FTimespan STATIC_Multiply_TimespanFloat(const struct FTimespan& A, float Scalar);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FRotator STATIC_Multiply_RotatorInt(const struct FRotator& A, int B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FRotator STATIC_Multiply_RotatorFloat(const struct FRotator& A, float B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FLinearColor STATIC_Multiply_LinearColorLinearColor(const struct FLinearColor& A, const struct FLinearColor& B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FLinearColor STATIC_Multiply_LinearColorFloat(const struct FLinearColor& A, float B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		int STATIC_Multiply_IntInt(int A, int B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_Multiply_IntFloat(int A, float B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_Multiply_FloatFloat(float A, float B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		unsigned char STATIC_Multiply_ByteByte(unsigned char A, unsigned char B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector STATIC_MirrorVectorByNormal(const struct FVector& InVect, const struct FVector& InNormal);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		void STATIC_MinOfIntArray(TArray<int> IntArray, int* IndexOfMinValue, int* MinValue);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		void STATIC_MinOfFloatArray(TArray<float> FloatArray, int* IndexOfMinValue, float* MinValue);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		void STATIC_MinOfByteArray(TArray<unsigned char> ByteArray, int* IndexOfMinValue, unsigned char* MinValue);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		void STATIC_MinimumAreaRectangle(class UObject* WorldContextObject, TArray<struct FVector> InVerts, const struct FVector& SampleSurfaceNormal, bool bDebugDraw, struct FVector* OutRectCenter, struct FRotator* OutRectRotation, float* OutSideLengthX, float* OutSideLengthY);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		int STATIC_Min(int A, int B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		void STATIC_MaxOfIntArray(TArray<int> IntArray, int* IndexOfMaxValue, int* MaxValue);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		void STATIC_MaxOfFloatArray(TArray<float> FloatArray, int* IndexOfMaxValue, float* MaxValue);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		void STATIC_MaxOfByteArray(TArray<unsigned char> ByteArray, int* IndexOfMaxValue, unsigned char* MaxValue);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		int STATIC_Max(int A, int B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_MapRangeUnclamped(float Value, float InRangeA, float InRangeB, float OutRangeA, float OutRangeB);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_MapRangeClamped(float Value, float InRangeA, float InRangeB, float OutRangeA, float OutRangeB);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector2D STATIC_MakeVector2D(float X, float Y);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector STATIC_MakeVector(float X, float Y, float Z);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FTransform STATIC_MakeTransform(const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FTimespan STATIC_MakeTimespan2(int Days, int Hours, int Minutes, int Seconds, int FractionNano);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FTimespan STATIC_MakeTimespan(int Days, int Hours, int Minutes, int Seconds, int Milliseconds);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FRotator STATIC_MakeRotFromZY(const struct FVector& Z, const struct FVector& Y);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FRotator STATIC_MakeRotFromZX(const struct FVector& Z, const struct FVector& X);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FRotator STATIC_MakeRotFromZ(const struct FVector& Z);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FRotator STATIC_MakeRotFromYZ(const struct FVector& Y, const struct FVector& Z);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FRotator STATIC_MakeRotFromYX(const struct FVector& Y, const struct FVector& X);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FRotator STATIC_MakeRotFromY(const struct FVector& Y);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FRotator STATIC_MakeRotFromXZ(const struct FVector& X, const struct FVector& Z);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FRotator STATIC_MakeRotFromXY(const struct FVector& X, const struct FVector& Y);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FRotator STATIC_MakeRotFromX(const struct FVector& X);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FRotator STATIC_MakeRotator(float Roll, float Pitch, float Yaw);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FRotator STATIC_MakeRotationFromAxes(const struct FVector& Forward, const struct FVector& Right, const struct FVector& Up);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FRandomStream STATIC_MakeRandomStream(int InitialSeed);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_MakePulsatingValue(float InCurrentTime, float InPulsesPerSecond, float InPhase);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FPlane STATIC_MakePlaneFromPointAndNormal(const struct FVector& Point, const struct FVector& Normal);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FDateTime STATIC_MakeDateTime(int Year, int Month, int Day, int Hour, int Minute, int Second, int Millisecond);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FLinearColor STATIC_MakeColor(float R, float G, float B, float A);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FBox2D STATIC_MakeBox2D(const struct FVector2D& Min, const struct FVector2D& Max);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FBox STATIC_MakeBox(const struct FVector& Min, const struct FVector& Max);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_Loge(float A);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_Log(float A, float Base);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_LinePlaneIntersection_OriginNormal(const struct FVector& LineStart, const struct FVector& LineEnd, const struct FVector& PlaneOrigin, const struct FVector& PlaneNormal, float* T, struct FVector* Intersection);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_LinePlaneIntersection(const struct FVector& LineStart, const struct FVector& LineEnd, const struct FPlane& APlane, float* T, struct FVector* Intersection);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FLinearColor STATIC_LinearColorLerpUsingHSV(const struct FLinearColor& A, const struct FLinearColor& B, float Alpha);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FLinearColor STATIC_LinearColorLerp(const struct FLinearColor& A, const struct FLinearColor& B, float Alpha);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector STATIC_LessLess_VectorRotator(const struct FVector& A, const struct FRotator& B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_LessEqual_TimespanTimespan(const struct FTimespan& A, const struct FTimespan& B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_LessEqual_IntInt(int A, int B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_LessEqual_FloatFloat(float A, float B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_LessEqual_DateTimeDateTime(const struct FDateTime& A, const struct FDateTime& B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_LessEqual_ByteByte(unsigned char A, unsigned char B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_Less_TimespanTimespan(const struct FTimespan& A, const struct FTimespan& B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_Less_IntInt(int A, int B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_Less_FloatFloat(float A, float B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_Less_DateTimeDateTime(const struct FDateTime& A, const struct FDateTime& B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_Less_ByteByte(unsigned char A, unsigned char B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_Lerp(float A, float B, float Alpha);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_IsPointInBoxWithTransform(const struct FVector& Point, const struct FTransform& BoxWorldTransform, const struct FVector& BoxExtent);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_IsPointInBox(const struct FVector& Point, const struct FVector& BoxOrigin, const struct FVector& BoxExtent);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_IsMorning(const struct FDateTime& A);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_IsLeapYear(int Year);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_IsAfternoon(const struct FDateTime& A);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FTransform STATIC_InvertTransform(const struct FTransform& T);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FRotator STATIC_InverseTransformRotation(const struct FTransform& T, const struct FRotator& Rotation);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector STATIC_InverseTransformLocation(const struct FTransform& T, const struct FVector& Location);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector STATIC_InverseTransformDirection(const struct FTransform& T, const struct FVector& Direction);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_InRange_IntInt(int Value, int Min, int Max, bool InclusiveMin, bool InclusiveMax);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_InRange_FloatFloat(float Value, float Min, float Max, bool InclusiveMin, bool InclusiveMax);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_Hypotenuse(float Width, float Height);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		void STATIC_HSVToRGB_Vector(const struct FLinearColor& HSV, struct FLinearColor* RGB);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FLinearColor STATIC_HSVToRGB(float H, float S, float V, float A);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_GridSnap_Float(float Location, float GridSize);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector STATIC_GreaterGreater_VectorRotator(const struct FVector& A, const struct FRotator& B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_GreaterEqual_TimespanTimespan(const struct FTimespan& A, const struct FTimespan& B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_GreaterEqual_IntInt(int A, int B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_GreaterEqual_FloatFloat(float A, float B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_GreaterEqual_DateTimeDateTime(const struct FDateTime& A, const struct FDateTime& B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_GreaterEqual_ByteByte(unsigned char A, unsigned char B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_Greater_TimespanTimespan(const struct FTimespan& A, const struct FTimespan& B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_Greater_IntInt(int A, int B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_Greater_FloatFloat(float A, float B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_Greater_DateTimeDateTime(const struct FDateTime& A, const struct FDateTime& B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_Greater_ByteByte(unsigned char A, unsigned char B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		int STATIC_GetYear(const struct FDateTime& A);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		void STATIC_GetYawPitchFromVector(const struct FVector& InVec, float* Yaw, float* Pitch);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector STATIC_GetVectorArrayAverage(TArray<struct FVector> Vectors);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector STATIC_GetUpVector(const struct FRotator& InRot);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_GetTotalSeconds(const struct FTimespan& A);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_GetTotalMinutes(const struct FTimespan& A);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_GetTotalMilliseconds(const struct FTimespan& A);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_GetTotalHours(const struct FTimespan& A);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_GetTotalDays(const struct FTimespan& A);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FTimespan STATIC_GetTimeOfDay(const struct FDateTime& A);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_GetTAU();
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		void STATIC_GetSlopeDegreeAngles(const struct FVector& MyRightYAxis, const struct FVector& FloorNormal, const struct FVector& UpVector, float* OutSlopePitchDegreeAngle, float* OutSlopeRollDegreeAngle);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		int STATIC_GetSeconds(const struct FTimespan& A);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		int STATIC_GetSecond(const struct FDateTime& A);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector STATIC_GetRightVector(const struct FRotator& InRot);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector STATIC_GetReflectionVector(const struct FVector& Direction, const struct FVector& SurfaceNormal);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_GetPointDistanceToSegment(const struct FVector& Point, const struct FVector& SegmentStart, const struct FVector& SegmentEnd);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_GetPointDistanceToLine(const struct FVector& Point, const struct FVector& LineOrigin, const struct FVector& LineDirection);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_GetPI();
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		int STATIC_GetMonth(const struct FDateTime& A);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		int STATIC_GetMinutes(const struct FTimespan& A);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		int STATIC_GetMinute(const struct FDateTime& A);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_GetMinElement(const struct FVector& A);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		int STATIC_GetMilliseconds(const struct FTimespan& A);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		int STATIC_GetMillisecond(const struct FDateTime& A);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_GetMaxElement(const struct FVector& A);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		int STATIC_GetHours(const struct FTimespan& A);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		int STATIC_GetHour12(const struct FDateTime& A);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		int STATIC_GetHour(const struct FDateTime& A);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector STATIC_GetForwardVector(const struct FRotator& InRot);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FTimespan STATIC_GetDuration(const struct FTimespan& A);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector STATIC_GetDirectionUnitVector(const struct FVector& From, const struct FVector& To);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		int STATIC_GetDays(const struct FTimespan& A);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		int STATIC_GetDayOfYear(const struct FDateTime& A);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		int STATIC_GetDay(const struct FDateTime& A);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FDateTime STATIC_GetDate(const struct FDateTime& A);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		void STATIC_GetAzimuthAndElevation(const struct FVector& InDirection, const struct FTransform& ReferenceFrame, float* Azimuth, float* Elevation);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		void STATIC_GetAxes(const struct FRotator& A, struct FVector* X, struct FVector* Y, struct FVector* Z);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FIntVector STATIC_FTruncVector(const struct FVector& InVector);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		int STATIC_FTrunc(float A);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FTimespan STATIC_FromSeconds(float Seconds);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FTimespan STATIC_FromMinutes(float Minutes);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FTimespan STATIC_FromMilliseconds(float Milliseconds);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FTimespan STATIC_FromHours(float Hours);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FTimespan STATIC_FromDays(float Days);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_Fraction(float A);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		int STATIC_FMod(float Dividend, float Divisor, float* Remainder);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_FMin(float A, float B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_FMax(float A, float B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_FloatSpringInterp(float Current, float Target, float Stiffness, float CriticalDampingFactor, float DeltaTime, float Mass, struct FFloatSpringState* SpringState);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_FixedTurn(float InCurrent, float InDesired, float InDeltaRate);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_FInterpTo_Constant(float Current, float Target, float DeltaTime, float InterpSpeed);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_FInterpTo(float Current, float Target, float DeltaTime, float InterpSpeed);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_FInterpEaseInOut(float A, float B, float Alpha, float Exponent);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		void STATIC_FindNearestPointsOnLineSegments(const struct FVector& Segment1Start, const struct FVector& Segment1End, const struct FVector& Segment2Start, const struct FVector& Segment2End, struct FVector* Segment1Point, struct FVector* Segment2Point);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FRotator STATIC_FindLookAtRotation(const struct FVector& Start, const struct FVector& Target);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector STATIC_FindClosestPointOnSegment(const struct FVector& Point, const struct FVector& SegmentStart, const struct FVector& SegmentEnd);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector STATIC_FindClosestPointOnLine(const struct FVector& Point, const struct FVector& LineOrigin, const struct FVector& LineDirection);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		int STATIC_FFloor(float A);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_FClamp(float Value, float Min, float Max);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		int STATIC_FCeil(float A);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_Exp(float A);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_EqualEqual_VectorVector(const struct FVector& A, const struct FVector& B, float ErrorTolerance);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_EqualEqual_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B, float ErrorTolerance);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_EqualEqual_TransformTransform(const struct FTransform& A, const struct FTransform& B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_EqualEqual_TimespanTimespan(const struct FTimespan& A, const struct FTimespan& B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_EqualEqual_RotatorRotator(const struct FRotator& A, const struct FRotator& B, float ErrorTolerance);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_EqualEqual_ObjectObject(class UObject* A, class UObject* B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_EqualEqual_NameName(const struct FName& A, const struct FName& B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_EqualEqual_IntInt(int A, int B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_EqualEqual_FloatFloat(float A, float B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_EqualEqual_DateTimeDateTime(const struct FDateTime& A, const struct FDateTime& B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_EqualEqual_ClassClass(class UClass* A, class UClass* B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_EqualEqual_ByteByte(unsigned char A, unsigned char B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_EqualEqual_BoolBool(bool A, bool B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_Ease(float A, float B, float Alpha, TEnumAsByte<EEasingFunc> EasingFunc, float BlendExp, int Steps);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_DotProduct2D(const struct FVector2D& A, const struct FVector2D& B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_Dot_VectorVector(const struct FVector& A, const struct FVector& B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector STATIC_Divide_VectorVector(const struct FVector& A, const struct FVector& B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector STATIC_Divide_VectorInt(const struct FVector& A, int B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector STATIC_Divide_VectorFloat(const struct FVector& A, float B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector2D STATIC_Divide_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector2D STATIC_Divide_Vector2DFloat(const struct FVector2D& A, float B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FTimespan STATIC_Divide_TimespanFloat(const struct FTimespan& A, float Scalar);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		int STATIC_Divide_IntInt(int A, int B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_Divide_FloatFloat(float A, float B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		unsigned char STATIC_Divide_ByteByte(unsigned char A, unsigned char B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_DegTan(float A);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_DegSin(float A);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_DegreesToRadians(float A);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_DegCos(float A);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_DegAtan2(float A, float B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_DegAtan(float A);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_DegAsin(float A);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_DegAcos(float A);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		int STATIC_DaysInYear(int Year);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		int STATIC_DaysInMonth(int Year, int Month);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FDateTime STATIC_DateTimeMinValue();
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FDateTime STATIC_DateTimeMaxValue();
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_DateTimeFromString(const struct FString& DateTimeString, struct FDateTime* Result);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_DateTimeFromIsoString(const struct FString& IsoString, struct FDateTime* Result);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_CrossProduct2D(const struct FVector2D& A, const struct FVector2D& B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector STATIC_Cross_VectorVector(const struct FVector& A, const struct FVector& B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector STATIC_CreateVectorFromYawPitch(float Yaw, float Pitch, float Length);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_Cos(float A);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FTransform STATIC_ConvertTransformToRelative(const struct FTransform& Transform, const struct FTransform& ParentTransform);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector2D STATIC_Conv_VectorToVector2D(const struct FVector& InVector);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FTransform STATIC_Conv_VectorToTransform(const struct FVector& InLocation);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FRotator STATIC_Conv_VectorToRotator(const struct FVector& InVec);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FLinearColor STATIC_Conv_VectorToLinearColor(const struct FVector& InVec);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector STATIC_Conv_Vector2DToVector(const struct FVector2D& InVector2D, float Z);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector STATIC_Conv_RotatorToVector(const struct FRotator& InRot);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector STATIC_Conv_LinearColorToVector(const struct FLinearColor& InLinearColor);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FColor STATIC_Conv_LinearColorToColor(const struct FLinearColor& InLinearColor);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector STATIC_Conv_IntVectorToVector(const struct FIntVector& InIntVector);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FIntVector STATIC_Conv_IntToIntVector(int inInt);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_Conv_IntToFloat(int inInt);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		unsigned char STATIC_Conv_IntToByte(int inInt);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_Conv_IntToBool(int inInt);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector STATIC_Conv_FloatToVector(float InFloat);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FLinearColor STATIC_Conv_FloatToLinearColor(float InFloat);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FLinearColor STATIC_Conv_ColorToLinearColor(const struct FColor& InColor);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		int STATIC_Conv_ByteToInt(unsigned char InByte);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_Conv_ByteToFloat(unsigned char InByte);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		int STATIC_Conv_BoolToInt(bool InBool);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_Conv_BoolToFloat(bool InBool);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		unsigned char STATIC_Conv_BoolToByte(bool InBool);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FTransform STATIC_ComposeTransforms(const struct FTransform& A, const struct FTransform& B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FRotator STATIC_ComposeRotators(const struct FRotator& A, const struct FRotator& B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_ClassIsChildOf(class UClass* TestClass, class UClass* ParentClass);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector STATIC_ClampVectorSize(const struct FVector& A, float Min, float Max);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_ClampAxis(float Angle);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_ClampAngle(float AngleDegrees, float MinAngleDegrees, float MaxAngleDegrees);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		int STATIC_Clamp(int Value, int Min, int Max);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FLinearColor STATIC_CInterpTo(const struct FLinearColor& Current, const struct FLinearColor& Target, float DeltaTime, float InterpSpeed);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		void STATIC_BreakVector2D(const struct FVector2D& InVec, float* X, float* Y);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		void STATIC_BreakVector(const struct FVector& InVec, float* X, float* Y, float* Z);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		void STATIC_BreakTransform(const struct FTransform& InTransform, struct FVector* Location, struct FRotator* Rotation, struct FVector* Scale);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		void STATIC_BreakTimespan2(const struct FTimespan& InTimespan, int* Days, int* Hours, int* Minutes, int* Seconds, int* FractionNano);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		void STATIC_BreakTimespan(const struct FTimespan& InTimespan, int* Days, int* Hours, int* Minutes, int* Seconds, int* Milliseconds);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		void STATIC_BreakRotIntoAxes(const struct FRotator& InRot, struct FVector* X, struct FVector* Y, struct FVector* Z);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		void STATIC_BreakRotator(const struct FRotator& InRot, float* Roll, float* Pitch, float* Yaw);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		void STATIC_BreakRandomStream(const struct FRandomStream& InRandomStream, int* InitialSeed);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		void STATIC_BreakDateTime(const struct FDateTime& InDateTime, int* Year, int* Month, int* Day, int* Hour, int* Minute, int* Second, int* Millisecond);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		void STATIC_BreakColor(const struct FLinearColor& InColor, float* R, float* G, float* B, float* A);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_BooleanXOR(bool A, bool B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_BooleanOR(bool A, bool B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_BooleanNOR(bool A, bool B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_BooleanNAND(bool A, bool B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		bool STATIC_BooleanAND(bool A, bool B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		unsigned char STATIC_BMin(unsigned char A, unsigned char B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		unsigned char STATIC_BMax(unsigned char A, unsigned char B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_Atan2(float A, float B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_Atan(float A);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_Asin(float A);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		int STATIC_And_IntInt(int A, int B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector STATIC_Add_VectorVector(const struct FVector& A, const struct FVector& B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector STATIC_Add_VectorInt(const struct FVector& A, int B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector STATIC_Add_VectorFloat(const struct FVector& A, float B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector2D STATIC_Add_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FVector2D STATIC_Add_Vector2DFloat(const struct FVector2D& A, float B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FTimespan STATIC_Add_TimespanTimespan(const struct FTimespan& A, const struct FTimespan& B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		int STATIC_Add_IntInt(int A, int B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_Add_FloatFloat(float A, float B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		struct FDateTime STATIC_Add_DateTimeTimespan(const struct FDateTime& A, const struct FTimespan& B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		unsigned char STATIC_Add_ByteByte(unsigned char A, unsigned char B);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_Acos(float A);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		int STATIC_Abs_Int(int A);
	UFUNCTION(BlueprintCallable, Category = "KismetMathLibrary")
		float STATIC_Abs(float A);

};