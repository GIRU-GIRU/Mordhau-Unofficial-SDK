#include "KismetMathLibrary.h"

int UKismetMathLibrary::STATIC_Xor_IntInt(int A, int B) {
}
	float UKismetMathLibrary::STATIC_VSizeXY(const struct FVector& A) {
}
	float UKismetMathLibrary::STATIC_VSizeSquared(const struct FVector& A) {
}
	float UKismetMathLibrary::STATIC_VSize2DSquared(const struct FVector2D& A) {
}
	float UKismetMathLibrary::STATIC_VSize2D(const struct FVector2D& A) {
}
	float UKismetMathLibrary::STATIC_VSize(const struct FVector& A) {
}
	struct FVector UKismetMathLibrary::STATIC_VLerp(const struct FVector& A, const struct FVector& B, float Alpha) {
}
	struct FVector UKismetMathLibrary::STATIC_VInterpTo_Constant(const struct FVector& Current, const struct FVector& Target, float DeltaTime, float InterpSpeed) {
}
	struct FVector UKismetMathLibrary::STATIC_VInterpTo(const struct FVector& Current, const struct FVector& Target, float DeltaTime, float InterpSpeed) {
}
	struct FVector UKismetMathLibrary::STATIC_VectorSpringInterp(const struct FVector& Current, const struct FVector& Target, float Stiffness, float CriticalDampingFactor, float DeltaTime, float Mass, struct FVectorSpringState* SpringState) {
}
	struct FVector2D UKismetMathLibrary::STATIC_Vector2DInterpTo_Constant(const struct FVector2D& Current, const struct FVector2D& Target, float DeltaTime, float InterpSpeed) {
}
	struct FVector2D UKismetMathLibrary::STATIC_Vector2DInterpTo(const struct FVector2D& Current, const struct FVector2D& Target, float DeltaTime, float InterpSpeed) {
}
	struct FVector UKismetMathLibrary::STATIC_VEase(const struct FVector& A, const struct FVector& B, float Alpha, TEnumAsByte<EEasingFunc> EasingFunc, float BlendExp, int Steps) {
}
	struct FDateTime UKismetMathLibrary::STATIC_UtcNow() {
}
	struct FRotator UKismetMathLibrary::STATIC_TransformRotation(const struct FTransform& T, const struct FRotator& Rotation) {
}
	struct FVector UKismetMathLibrary::STATIC_TransformLocation(const struct FTransform& T, const struct FVector& Location) {
}
	struct FVector UKismetMathLibrary::STATIC_TransformDirection(const struct FTransform& T, const struct FVector& Direction) {
}
	float UKismetMathLibrary::STATIC_Transform_Determinant(const struct FTransform& Transform) {
}
	struct FDateTime UKismetMathLibrary::STATIC_Today() {
}
	struct FTransform UKismetMathLibrary::STATIC_TLerp(const struct FTransform& A, const struct FTransform& B, float Alpha, TEnumAsByte<ELerpInterpolationMode> InterpMode) {
}
	struct FTransform UKismetMathLibrary::STATIC_TInterpTo(const struct FTransform& Current, const struct FTransform& Target, float DeltaTime, float InterpSpeed) {
}
	struct FTimespan UKismetMathLibrary::STATIC_TimespanZeroValue() {
}
	float UKismetMathLibrary::STATIC_TimespanRatio(const struct FTimespan& A, const struct FTimespan& B) {
}
	struct FTimespan UKismetMathLibrary::STATIC_TimespanMinValue() {
}
	struct FTimespan UKismetMathLibrary::STATIC_TimespanMaxValue() {
}
	bool UKismetMathLibrary::STATIC_TimespanFromString(const struct FString& TimespanString, struct FTimespan* Result) {
}
	struct FTransform UKismetMathLibrary::STATIC_TEase(const struct FTransform& A, const struct FTransform& B, float Alpha, TEnumAsByte<EEasingFunc> EasingFunc, float BlendExp, int Steps) {
}
	float UKismetMathLibrary::STATIC_Tan(float A) {
}
	struct FVector UKismetMathLibrary::STATIC_Subtract_VectorVector(const struct FVector& A, const struct FVector& B) {
}
	struct FVector UKismetMathLibrary::STATIC_Subtract_VectorInt(const struct FVector& A, int B) {
}
	struct FVector UKismetMathLibrary::STATIC_Subtract_VectorFloat(const struct FVector& A, float B) {
}
	struct FVector2D UKismetMathLibrary::STATIC_Subtract_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B) {
}
	struct FVector2D UKismetMathLibrary::STATIC_Subtract_Vector2DFloat(const struct FVector2D& A, float B) {
}
	struct FTimespan UKismetMathLibrary::STATIC_Subtract_TimespanTimespan(const struct FTimespan& A, const struct FTimespan& B) {
}
	int UKismetMathLibrary::STATIC_Subtract_IntInt(int A, int B) {
}
	float UKismetMathLibrary::STATIC_Subtract_FloatFloat(float A, float B) {
}
	struct FDateTime UKismetMathLibrary::STATIC_Subtract_DateTimeTimespan(const struct FDateTime& A, const struct FTimespan& B) {
}
	struct FTimespan UKismetMathLibrary::STATIC_Subtract_DateTimeDateTime(const struct FDateTime& A, const struct FDateTime& B) {
}
	unsigned char UKismetMathLibrary::STATIC_Subtract_ByteByte(unsigned char A, unsigned char B) {
}
	float UKismetMathLibrary::STATIC_Square(float A) {
}
	float UKismetMathLibrary::STATIC_Sqrt(float A) {
}
	float UKismetMathLibrary::STATIC_Sin(float A) {
}
	int UKismetMathLibrary::STATIC_SignOfInteger(int A) {
}
	float UKismetMathLibrary::STATIC_SignOfFloat(float A) {
}
	void UKismetMathLibrary::STATIC_SetRandomStreamSeed(int NewSeed, struct FRandomStream* Stream) {
}
	struct FVector UKismetMathLibrary::STATIC_SelectVector(const struct FVector& A, const struct FVector& B, bool bPickA) {
}
	struct FTransform UKismetMathLibrary::STATIC_SelectTransform(const struct FTransform& A, const struct FTransform& B, bool bPickA) {
}
	struct FString UKismetMathLibrary::STATIC_SelectString(const struct FString& A, const struct FString& B, bool bPickA) {
}
	struct FRotator UKismetMathLibrary::STATIC_SelectRotator(const struct FRotator& A, const struct FRotator& B, bool bPickA) {
}
	class UObject* UKismetMathLibrary::STATIC_SelectObject(class UObject* A, class UObject* B, bool bSelectA) {
}
	int UKismetMathLibrary::STATIC_SelectInt(int A, int B, bool bPickA) {
}
	float UKismetMathLibrary::STATIC_SelectFloat(float A, float B, bool bPickA) {
}
	struct FLinearColor UKismetMathLibrary::STATIC_SelectColor(const struct FLinearColor& A, const struct FLinearColor& B, bool bPickA) {
}
	class UClass* UKismetMathLibrary::STATIC_SelectClass(class UClass* A, class UClass* B, bool bSelectA) {
}
	void UKismetMathLibrary::STATIC_SeedRandomStream(struct FRandomStream* Stream) {
}
	int UKismetMathLibrary::STATIC_Round(float A) {
}
	struct FRotator UKismetMathLibrary::STATIC_RotatorFromAxisAndAngle(const struct FVector& Axis, float Angle) {
}
	struct FVector UKismetMathLibrary::STATIC_RotateAngleAxis(const struct FVector& InVect, float AngleDeg, const struct FVector& Axis) {
}
	struct FRotator UKismetMathLibrary::STATIC_RLerp(const struct FRotator& A, const struct FRotator& B, float Alpha, bool bShortestPath) {
}
	struct FRotator UKismetMathLibrary::STATIC_RInterpTo_Constant(const struct FRotator& Current, const struct FRotator& Target, float DeltaTime, float InterpSpeed) {
}
	struct FRotator UKismetMathLibrary::STATIC_RInterpTo(const struct FRotator& Current, const struct FRotator& Target, float DeltaTime, float InterpSpeed) {
}
	void UKismetMathLibrary::STATIC_RGBToHSV_Vector(const struct FLinearColor& RGB, struct FLinearColor* HSV) {
}
	void UKismetMathLibrary::STATIC_RGBToHSV(const struct FLinearColor& InColor, float* H, float* S, float* V, float* A) {
}
	void UKismetMathLibrary::STATIC_ResetVectorSpringState(struct FVectorSpringState* SpringState) {
}
	void UKismetMathLibrary::STATIC_ResetRandomStream(const struct FRandomStream& Stream) {
}
	void UKismetMathLibrary::STATIC_ResetFloatSpringState(struct FFloatSpringState* SpringState) {
}
	struct FRotator UKismetMathLibrary::STATIC_REase(const struct FRotator& A, const struct FRotator& B, float Alpha, bool bShortestPath, TEnumAsByte<EEasingFunc> EasingFunc, float BlendExp, int Steps) {
}
	struct FVector UKismetMathLibrary::STATIC_RandomUnitVectorInEllipticalConeInRadiansFromStream(const struct FVector& ConeDir, float MaxYawInRadians, float MaxPitchInRadians, const struct FRandomStream& Stream) {
}
	struct FVector UKismetMathLibrary::STATIC_RandomUnitVectorInEllipticalConeInRadians(const struct FVector& ConeDir, float MaxYawInRadians, float MaxPitchInRadians) {
}
	struct FVector UKismetMathLibrary::STATIC_RandomUnitVectorInEllipticalConeInDegreesFromStream(const struct FVector& ConeDir, float MaxYawInDegrees, float MaxPitchInDegrees, const struct FRandomStream& Stream) {
}
	struct FVector UKismetMathLibrary::STATIC_RandomUnitVectorInEllipticalConeInDegrees(const struct FVector& ConeDir, float MaxYawInDegrees, float MaxPitchInDegrees) {
}
	struct FVector UKismetMathLibrary::STATIC_RandomUnitVectorInConeInRadiansFromStream(const struct FVector& ConeDir, float ConeHalfAngleInRadians, const struct FRandomStream& Stream) {
}
	struct FVector UKismetMathLibrary::STATIC_RandomUnitVectorInConeInRadians(const struct FVector& ConeDir, float ConeHalfAngleInRadians) {
}
	struct FVector UKismetMathLibrary::STATIC_RandomUnitVectorInConeInDegreesFromStream(const struct FVector& ConeDir, float ConeHalfAngleInDegrees, const struct FRandomStream& Stream) {
}
	struct FVector UKismetMathLibrary::STATIC_RandomUnitVectorInConeInDegrees(const struct FVector& ConeDir, float ConeHalfAngleInDegrees) {
}
	struct FVector UKismetMathLibrary::STATIC_RandomUnitVectorFromStream(const struct FRandomStream& Stream) {
}
	struct FVector UKismetMathLibrary::STATIC_RandomUnitVector() {
}
	struct FRotator UKismetMathLibrary::STATIC_RandomRotatorFromStream(bool bRoll, const struct FRandomStream& Stream) {
}
	struct FRotator UKismetMathLibrary::STATIC_RandomRotator(bool bRoll) {
}
	struct FVector UKismetMathLibrary::STATIC_RandomPointInBoundingBox(const struct FVector& Origin, const struct FVector& BoxExtent) {
}
	int UKismetMathLibrary::STATIC_RandomIntegerInRangeFromStream(int Min, int Max, const struct FRandomStream& Stream) {
}
	int UKismetMathLibrary::STATIC_RandomIntegerInRange(int Min, int Max) {
}
	int UKismetMathLibrary::STATIC_RandomIntegerFromStream(int Max, const struct FRandomStream& Stream) {
}
	int UKismetMathLibrary::STATIC_RandomInteger(int Max) {
}
	float UKismetMathLibrary::STATIC_RandomFloatInRangeFromStream(float Min, float Max, const struct FRandomStream& Stream) {
}
	float UKismetMathLibrary::STATIC_RandomFloatInRange(float Min, float Max) {
}
	float UKismetMathLibrary::STATIC_RandomFloatFromStream(const struct FRandomStream& Stream) {
}
	float UKismetMathLibrary::STATIC_RandomFloat() {
}
	bool UKismetMathLibrary::STATIC_RandomBoolWithWeightFromStream(float Weight, const struct FRandomStream& RandomStream) {
}
	bool UKismetMathLibrary::STATIC_RandomBoolWithWeight(float Weight) {
}
	bool UKismetMathLibrary::STATIC_RandomBoolFromStream(const struct FRandomStream& Stream) {
}
	bool UKismetMathLibrary::STATIC_RandomBool() {
}
	float UKismetMathLibrary::STATIC_RadiansToDegrees(float A) {
}
	struct FVector UKismetMathLibrary::STATIC_ProjectVectorOnToVector(const struct FVector& V, const struct FVector& Target) {
}
	struct FVector UKismetMathLibrary::STATIC_ProjectVectorOnToPlane(const struct FVector& V, const struct FVector& PlaneNormal) {
}
	struct FVector UKismetMathLibrary::STATIC_ProjectPointOnToPlane(const struct FVector& Point, const struct FVector& PlaneBase, const struct FVector& PlaneNormal) {
}
	bool UKismetMathLibrary::STATIC_PointsAreCoplanar(TArray<struct FVector> Points, float Tolerance) {
}
	int UKismetMathLibrary::STATIC_Percent_IntInt(int A, int B) {
}
	float UKismetMathLibrary::STATIC_Percent_FloatFloat(float A, float B) {
}
	unsigned char UKismetMathLibrary::STATIC_Percent_ByteByte(unsigned char A, unsigned char B) {
}
	int UKismetMathLibrary::STATIC_Or_IntInt(int A, int B) {
}
	struct FDateTime UKismetMathLibrary::STATIC_Now() {
}
	bool UKismetMathLibrary::STATIC_NotEqual_VectorVector(const struct FVector& A, const struct FVector& B, float ErrorTolerance) {
}
	bool UKismetMathLibrary::STATIC_NotEqual_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B, float ErrorTolerance) {
}
	bool UKismetMathLibrary::STATIC_NotEqual_TimespanTimespan(const struct FTimespan& A, const struct FTimespan& B) {
}
	bool UKismetMathLibrary::STATIC_NotEqual_RotatorRotator(const struct FRotator& A, const struct FRotator& B, float ErrorTolerance) {
}
	bool UKismetMathLibrary::STATIC_NotEqual_ObjectObject(class UObject* A, class UObject* B) {
}
	bool UKismetMathLibrary::STATIC_NotEqual_NameName(const struct FName& A, const struct FName& B) {
}
	bool UKismetMathLibrary::STATIC_NotEqual_IntInt(int A, int B) {
}
	bool UKismetMathLibrary::STATIC_NotEqual_FloatFloat(float A, float B) {
}
	bool UKismetMathLibrary::STATIC_NotEqual_DateTimeDateTime(const struct FDateTime& A, const struct FDateTime& B) {
}
	bool UKismetMathLibrary::STATIC_NotEqual_ClassClass(class UClass* A, class UClass* B) {
}
	bool UKismetMathLibrary::STATIC_NotEqual_ByteByte(unsigned char A, unsigned char B) {
}
	bool UKismetMathLibrary::STATIC_NotEqual_BoolBool(bool A, bool B) {
}
	bool UKismetMathLibrary::STATIC_Not_PreBool(bool A) {
}
	int UKismetMathLibrary::STATIC_Not_Int(int A) {
}
	float UKismetMathLibrary::STATIC_NormalizeToRange(float Value, float RangeMin, float RangeMax) {
}
	struct FRotator UKismetMathLibrary::STATIC_NormalizedDeltaRotator(const struct FRotator& A, const struct FRotator& B) {
}
	float UKismetMathLibrary::STATIC_NormalizeAxis(float Angle) {
}
	struct FVector2D UKismetMathLibrary::STATIC_Normal2D(const struct FVector2D& A) {
}
	struct FVector UKismetMathLibrary::STATIC_Normal(const struct FVector& A) {
}
	struct FVector UKismetMathLibrary::STATIC_NegateVector(const struct FVector& A) {
}
	struct FRotator UKismetMathLibrary::STATIC_NegateRotator(const struct FRotator& A) {
}
	bool UKismetMathLibrary::STATIC_NearlyEqual_TransformTransform(const struct FTransform& A, const struct FTransform& B, float LocationTolerance, float RotationTolerance, float Scale3DTolerance) {
}
	bool UKismetMathLibrary::STATIC_NearlyEqual_FloatFloat(float A, float B, float ErrorTolerance) {
}
	float UKismetMathLibrary::STATIC_MultiplyMultiply_FloatFloat(float Base, float Exp) {
}
	float UKismetMathLibrary::STATIC_MultiplyByPi(float Value) {
}
	struct FVector UKismetMathLibrary::STATIC_Multiply_VectorVector(const struct FVector& A, const struct FVector& B) {
}
	struct FVector UKismetMathLibrary::STATIC_Multiply_VectorInt(const struct FVector& A, int B) {
}
	struct FVector UKismetMathLibrary::STATIC_Multiply_VectorFloat(const struct FVector& A, float B) {
}
	struct FVector2D UKismetMathLibrary::STATIC_Multiply_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B) {
}
	struct FVector2D UKismetMathLibrary::STATIC_Multiply_Vector2DFloat(const struct FVector2D& A, float B) {
}
	struct FTimespan UKismetMathLibrary::STATIC_Multiply_TimespanFloat(const struct FTimespan& A, float Scalar) {
}
	struct FRotator UKismetMathLibrary::STATIC_Multiply_RotatorInt(const struct FRotator& A, int B) {
}
	struct FRotator UKismetMathLibrary::STATIC_Multiply_RotatorFloat(const struct FRotator& A, float B) {
}
	struct FLinearColor UKismetMathLibrary::STATIC_Multiply_LinearColorLinearColor(const struct FLinearColor& A, const struct FLinearColor& B) {
}
	struct FLinearColor UKismetMathLibrary::STATIC_Multiply_LinearColorFloat(const struct FLinearColor& A, float B) {
}
	int UKismetMathLibrary::STATIC_Multiply_IntInt(int A, int B) {
}
	float UKismetMathLibrary::STATIC_Multiply_IntFloat(int A, float B) {
}
	float UKismetMathLibrary::STATIC_Multiply_FloatFloat(float A, float B) {
}
	unsigned char UKismetMathLibrary::STATIC_Multiply_ByteByte(unsigned char A, unsigned char B) {
}
	struct FVector UKismetMathLibrary::STATIC_MirrorVectorByNormal(const struct FVector& InVect, const struct FVector& InNormal) {
}
	void UKismetMathLibrary::STATIC_MinOfIntArray(TArray<int> IntArray, int* IndexOfMinValue, int* MinValue) {
}
	void UKismetMathLibrary::STATIC_MinOfFloatArray(TArray<float> FloatArray, int* IndexOfMinValue, float* MinValue) {
}
	void UKismetMathLibrary::STATIC_MinOfByteArray(TArray<unsigned char> ByteArray, int* IndexOfMinValue, unsigned char* MinValue) {
}
	void UKismetMathLibrary::STATIC_MinimumAreaRectangle(class UObject* WorldContextObject, TArray<struct FVector> InVerts, const struct FVector& SampleSurfaceNormal, bool bDebugDraw, struct FVector* OutRectCenter, struct FRotator* OutRectRotation, float* OutSideLengthX, float* OutSideLengthY) {
}
	int UKismetMathLibrary::STATIC_Min(int A, int B) {
}
	void UKismetMathLibrary::STATIC_MaxOfIntArray(TArray<int> IntArray, int* IndexOfMaxValue, int* MaxValue) {
}
	void UKismetMathLibrary::STATIC_MaxOfFloatArray(TArray<float> FloatArray, int* IndexOfMaxValue, float* MaxValue) {
}
	void UKismetMathLibrary::STATIC_MaxOfByteArray(TArray<unsigned char> ByteArray, int* IndexOfMaxValue, unsigned char* MaxValue) {
}
	int UKismetMathLibrary::STATIC_Max(int A, int B) {
}
	float UKismetMathLibrary::STATIC_MapRangeUnclamped(float Value, float InRangeA, float InRangeB, float OutRangeA, float OutRangeB) {
}
	float UKismetMathLibrary::STATIC_MapRangeClamped(float Value, float InRangeA, float InRangeB, float OutRangeA, float OutRangeB) {
}
	struct FVector2D UKismetMathLibrary::STATIC_MakeVector2D(float X, float Y) {
}
	struct FVector UKismetMathLibrary::STATIC_MakeVector(float X, float Y, float Z) {
}
	struct FTransform UKismetMathLibrary::STATIC_MakeTransform(const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale) {
}
	struct FTimespan UKismetMathLibrary::STATIC_MakeTimespan2(int Days, int Hours, int Minutes, int Seconds, int FractionNano) {
}
	struct FTimespan UKismetMathLibrary::STATIC_MakeTimespan(int Days, int Hours, int Minutes, int Seconds, int Milliseconds) {
}
	struct FRotator UKismetMathLibrary::STATIC_MakeRotFromZY(const struct FVector& Z, const struct FVector& Y) {
}
	struct FRotator UKismetMathLibrary::STATIC_MakeRotFromZX(const struct FVector& Z, const struct FVector& X) {
}
	struct FRotator UKismetMathLibrary::STATIC_MakeRotFromZ(const struct FVector& Z) {
}
	struct FRotator UKismetMathLibrary::STATIC_MakeRotFromYZ(const struct FVector& Y, const struct FVector& Z) {
}
	struct FRotator UKismetMathLibrary::STATIC_MakeRotFromYX(const struct FVector& Y, const struct FVector& X) {
}
	struct FRotator UKismetMathLibrary::STATIC_MakeRotFromY(const struct FVector& Y) {
}
	struct FRotator UKismetMathLibrary::STATIC_MakeRotFromXZ(const struct FVector& X, const struct FVector& Z) {
}
	struct FRotator UKismetMathLibrary::STATIC_MakeRotFromXY(const struct FVector& X, const struct FVector& Y) {
}
	struct FRotator UKismetMathLibrary::STATIC_MakeRotFromX(const struct FVector& X) {
}
	struct FRotator UKismetMathLibrary::STATIC_MakeRotator(float Roll, float Pitch, float Yaw) {
}
	struct FRotator UKismetMathLibrary::STATIC_MakeRotationFromAxes(const struct FVector& Forward, const struct FVector& Right, const struct FVector& Up) {
}
	struct FRandomStream UKismetMathLibrary::STATIC_MakeRandomStream(int InitialSeed) {
}
	float UKismetMathLibrary::STATIC_MakePulsatingValue(float InCurrentTime, float InPulsesPerSecond, float InPhase) {
}
	struct FPlane UKismetMathLibrary::STATIC_MakePlaneFromPointAndNormal(const struct FVector& Point, const struct FVector& Normal) {
}
	struct FDateTime UKismetMathLibrary::STATIC_MakeDateTime(int Year, int Month, int Day, int Hour, int Minute, int Second, int Millisecond) {
}
	struct FLinearColor UKismetMathLibrary::STATIC_MakeColor(float R, float G, float B, float A) {
}
	struct FBox2D UKismetMathLibrary::STATIC_MakeBox2D(const struct FVector2D& Min, const struct FVector2D& Max) {
}
	struct FBox UKismetMathLibrary::STATIC_MakeBox(const struct FVector& Min, const struct FVector& Max) {
}
	float UKismetMathLibrary::STATIC_Loge(float A) {
}
	float UKismetMathLibrary::STATIC_Log(float A, float Base) {
}
	bool UKismetMathLibrary::STATIC_LinePlaneIntersection_OriginNormal(const struct FVector& LineStart, const struct FVector& LineEnd, const struct FVector& PlaneOrigin, const struct FVector& PlaneNormal, float* T, struct FVector* Intersection) {
}
	bool UKismetMathLibrary::STATIC_LinePlaneIntersection(const struct FVector& LineStart, const struct FVector& LineEnd, const struct FPlane& APlane, float* T, struct FVector* Intersection) {
}
	struct FLinearColor UKismetMathLibrary::STATIC_LinearColorLerpUsingHSV(const struct FLinearColor& A, const struct FLinearColor& B, float Alpha) {
}
	struct FLinearColor UKismetMathLibrary::STATIC_LinearColorLerp(const struct FLinearColor& A, const struct FLinearColor& B, float Alpha) {
}
	struct FVector UKismetMathLibrary::STATIC_LessLess_VectorRotator(const struct FVector& A, const struct FRotator& B) {
}
	bool UKismetMathLibrary::STATIC_LessEqual_TimespanTimespan(const struct FTimespan& A, const struct FTimespan& B) {
}
	bool UKismetMathLibrary::STATIC_LessEqual_IntInt(int A, int B) {
}
	bool UKismetMathLibrary::STATIC_LessEqual_FloatFloat(float A, float B) {
}
	bool UKismetMathLibrary::STATIC_LessEqual_DateTimeDateTime(const struct FDateTime& A, const struct FDateTime& B) {
}
	bool UKismetMathLibrary::STATIC_LessEqual_ByteByte(unsigned char A, unsigned char B) {
}
	bool UKismetMathLibrary::STATIC_Less_TimespanTimespan(const struct FTimespan& A, const struct FTimespan& B) {
}
	bool UKismetMathLibrary::STATIC_Less_IntInt(int A, int B) {
}
	bool UKismetMathLibrary::STATIC_Less_FloatFloat(float A, float B) {
}
	bool UKismetMathLibrary::STATIC_Less_DateTimeDateTime(const struct FDateTime& A, const struct FDateTime& B) {
}
	bool UKismetMathLibrary::STATIC_Less_ByteByte(unsigned char A, unsigned char B) {
}
	float UKismetMathLibrary::STATIC_Lerp(float A, float B, float Alpha) {
}
	bool UKismetMathLibrary::STATIC_IsPointInBoxWithTransform(const struct FVector& Point, const struct FTransform& BoxWorldTransform, const struct FVector& BoxExtent) {
}
	bool UKismetMathLibrary::STATIC_IsPointInBox(const struct FVector& Point, const struct FVector& BoxOrigin, const struct FVector& BoxExtent) {
}
	bool UKismetMathLibrary::STATIC_IsMorning(const struct FDateTime& A) {
}
	bool UKismetMathLibrary::STATIC_IsLeapYear(int Year) {
}
	bool UKismetMathLibrary::STATIC_IsAfternoon(const struct FDateTime& A) {
}
	struct FTransform UKismetMathLibrary::STATIC_InvertTransform(const struct FTransform& T) {
}
	struct FRotator UKismetMathLibrary::STATIC_InverseTransformRotation(const struct FTransform& T, const struct FRotator& Rotation) {
}
	struct FVector UKismetMathLibrary::STATIC_InverseTransformLocation(const struct FTransform& T, const struct FVector& Location) {
}
	struct FVector UKismetMathLibrary::STATIC_InverseTransformDirection(const struct FTransform& T, const struct FVector& Direction) {
}
	bool UKismetMathLibrary::STATIC_InRange_IntInt(int Value, int Min, int Max, bool InclusiveMin, bool InclusiveMax) {
}
	bool UKismetMathLibrary::STATIC_InRange_FloatFloat(float Value, float Min, float Max, bool InclusiveMin, bool InclusiveMax) {
}
	float UKismetMathLibrary::STATIC_Hypotenuse(float Width, float Height) {
}
	void UKismetMathLibrary::STATIC_HSVToRGB_Vector(const struct FLinearColor& HSV, struct FLinearColor* RGB) {
}
	struct FLinearColor UKismetMathLibrary::STATIC_HSVToRGB(float H, float S, float V, float A) {
}
	float UKismetMathLibrary::STATIC_GridSnap_Float(float Location, float GridSize) {
}
	struct FVector UKismetMathLibrary::STATIC_GreaterGreater_VectorRotator(const struct FVector& A, const struct FRotator& B) {
}
	bool UKismetMathLibrary::STATIC_GreaterEqual_TimespanTimespan(const struct FTimespan& A, const struct FTimespan& B) {
}
	bool UKismetMathLibrary::STATIC_GreaterEqual_IntInt(int A, int B) {
}
	bool UKismetMathLibrary::STATIC_GreaterEqual_FloatFloat(float A, float B) {
}
	bool UKismetMathLibrary::STATIC_GreaterEqual_DateTimeDateTime(const struct FDateTime& A, const struct FDateTime& B) {
}
	bool UKismetMathLibrary::STATIC_GreaterEqual_ByteByte(unsigned char A, unsigned char B) {
}
	bool UKismetMathLibrary::STATIC_Greater_TimespanTimespan(const struct FTimespan& A, const struct FTimespan& B) {
}
	bool UKismetMathLibrary::STATIC_Greater_IntInt(int A, int B) {
}
	bool UKismetMathLibrary::STATIC_Greater_FloatFloat(float A, float B) {
}
	bool UKismetMathLibrary::STATIC_Greater_DateTimeDateTime(const struct FDateTime& A, const struct FDateTime& B) {
}
	bool UKismetMathLibrary::STATIC_Greater_ByteByte(unsigned char A, unsigned char B) {
}
	int UKismetMathLibrary::STATIC_GetYear(const struct FDateTime& A) {
}
	void UKismetMathLibrary::STATIC_GetYawPitchFromVector(const struct FVector& InVec, float* Yaw, float* Pitch) {
}
	struct FVector UKismetMathLibrary::STATIC_GetVectorArrayAverage(TArray<struct FVector> Vectors) {
}
	struct FVector UKismetMathLibrary::STATIC_GetUpVector(const struct FRotator& InRot) {
}
	float UKismetMathLibrary::STATIC_GetTotalSeconds(const struct FTimespan& A) {
}
	float UKismetMathLibrary::STATIC_GetTotalMinutes(const struct FTimespan& A) {
}
	float UKismetMathLibrary::STATIC_GetTotalMilliseconds(const struct FTimespan& A) {
}
	float UKismetMathLibrary::STATIC_GetTotalHours(const struct FTimespan& A) {
}
	float UKismetMathLibrary::STATIC_GetTotalDays(const struct FTimespan& A) {
}
	struct FTimespan UKismetMathLibrary::STATIC_GetTimeOfDay(const struct FDateTime& A) {
}
	float UKismetMathLibrary::STATIC_GetTAU() {
}
	void UKismetMathLibrary::STATIC_GetSlopeDegreeAngles(const struct FVector& MyRightYAxis, const struct FVector& FloorNormal, const struct FVector& UpVector, float* OutSlopePitchDegreeAngle, float* OutSlopeRollDegreeAngle) {
}
	int UKismetMathLibrary::STATIC_GetSeconds(const struct FTimespan& A) {
}
	int UKismetMathLibrary::STATIC_GetSecond(const struct FDateTime& A) {
}
	struct FVector UKismetMathLibrary::STATIC_GetRightVector(const struct FRotator& InRot) {
}
	struct FVector UKismetMathLibrary::STATIC_GetReflectionVector(const struct FVector& Direction, const struct FVector& SurfaceNormal) {
}
	float UKismetMathLibrary::STATIC_GetPointDistanceToSegment(const struct FVector& Point, const struct FVector& SegmentStart, const struct FVector& SegmentEnd) {
}
	float UKismetMathLibrary::STATIC_GetPointDistanceToLine(const struct FVector& Point, const struct FVector& LineOrigin, const struct FVector& LineDirection) {
}
	float UKismetMathLibrary::STATIC_GetPI() {
}
	int UKismetMathLibrary::STATIC_GetMonth(const struct FDateTime& A) {
}
	int UKismetMathLibrary::STATIC_GetMinutes(const struct FTimespan& A) {
}
	int UKismetMathLibrary::STATIC_GetMinute(const struct FDateTime& A) {
}
	float UKismetMathLibrary::STATIC_GetMinElement(const struct FVector& A) {
}
	int UKismetMathLibrary::STATIC_GetMilliseconds(const struct FTimespan& A) {
}
	int UKismetMathLibrary::STATIC_GetMillisecond(const struct FDateTime& A) {
}
	float UKismetMathLibrary::STATIC_GetMaxElement(const struct FVector& A) {
}
	int UKismetMathLibrary::STATIC_GetHours(const struct FTimespan& A) {
}
	int UKismetMathLibrary::STATIC_GetHour12(const struct FDateTime& A) {
}
	int UKismetMathLibrary::STATIC_GetHour(const struct FDateTime& A) {
}
	struct FVector UKismetMathLibrary::STATIC_GetForwardVector(const struct FRotator& InRot) {
}
	struct FTimespan UKismetMathLibrary::STATIC_GetDuration(const struct FTimespan& A) {
}
	struct FVector UKismetMathLibrary::STATIC_GetDirectionUnitVector(const struct FVector& From, const struct FVector& To) {
}
	int UKismetMathLibrary::STATIC_GetDays(const struct FTimespan& A) {
}
	int UKismetMathLibrary::STATIC_GetDayOfYear(const struct FDateTime& A) {
}
	int UKismetMathLibrary::STATIC_GetDay(const struct FDateTime& A) {
}
	struct FDateTime UKismetMathLibrary::STATIC_GetDate(const struct FDateTime& A) {
}
	void UKismetMathLibrary::STATIC_GetAzimuthAndElevation(const struct FVector& InDirection, const struct FTransform& ReferenceFrame, float* Azimuth, float* Elevation) {
}
	void UKismetMathLibrary::STATIC_GetAxes(const struct FRotator& A, struct FVector* X, struct FVector* Y, struct FVector* Z) {
}
	struct FIntVector UKismetMathLibrary::STATIC_FTruncVector(const struct FVector& InVector) {
}
	int UKismetMathLibrary::STATIC_FTrunc(float A) {
}
	struct FTimespan UKismetMathLibrary::STATIC_FromSeconds(float Seconds) {
}
	struct FTimespan UKismetMathLibrary::STATIC_FromMinutes(float Minutes) {
}
	struct FTimespan UKismetMathLibrary::STATIC_FromMilliseconds(float Milliseconds) {
}
	struct FTimespan UKismetMathLibrary::STATIC_FromHours(float Hours) {
}
	struct FTimespan UKismetMathLibrary::STATIC_FromDays(float Days) {
}
	float UKismetMathLibrary::STATIC_Fraction(float A) {
}
	int UKismetMathLibrary::STATIC_FMod(float Dividend, float Divisor, float* Remainder) {
}
	float UKismetMathLibrary::STATIC_FMin(float A, float B) {
}
	float UKismetMathLibrary::STATIC_FMax(float A, float B) {
}
	float UKismetMathLibrary::STATIC_FloatSpringInterp(float Current, float Target, float Stiffness, float CriticalDampingFactor, float DeltaTime, float Mass, struct FFloatSpringState* SpringState) {
}
	float UKismetMathLibrary::STATIC_FixedTurn(float InCurrent, float InDesired, float InDeltaRate) {
}
	float UKismetMathLibrary::STATIC_FInterpTo_Constant(float Current, float Target, float DeltaTime, float InterpSpeed) {
}
	float UKismetMathLibrary::STATIC_FInterpTo(float Current, float Target, float DeltaTime, float InterpSpeed) {
}
	float UKismetMathLibrary::STATIC_FInterpEaseInOut(float A, float B, float Alpha, float Exponent) {
}
	void UKismetMathLibrary::STATIC_FindNearestPointsOnLineSegments(const struct FVector& Segment1Start, const struct FVector& Segment1End, const struct FVector& Segment2Start, const struct FVector& Segment2End, struct FVector* Segment1Point, struct FVector* Segment2Point) {
}
	struct FRotator UKismetMathLibrary::STATIC_FindLookAtRotation(const struct FVector& Start, const struct FVector& Target) {
}
	struct FVector UKismetMathLibrary::STATIC_FindClosestPointOnSegment(const struct FVector& Point, const struct FVector& SegmentStart, const struct FVector& SegmentEnd) {
}
	struct FVector UKismetMathLibrary::STATIC_FindClosestPointOnLine(const struct FVector& Point, const struct FVector& LineOrigin, const struct FVector& LineDirection) {
}
	int UKismetMathLibrary::STATIC_FFloor(float A) {
}
	float UKismetMathLibrary::STATIC_FClamp(float Value, float Min, float Max) {
}
	int UKismetMathLibrary::STATIC_FCeil(float A) {
}
	float UKismetMathLibrary::STATIC_Exp(float A) {
}
	bool UKismetMathLibrary::STATIC_EqualEqual_VectorVector(const struct FVector& A, const struct FVector& B, float ErrorTolerance) {
}
	bool UKismetMathLibrary::STATIC_EqualEqual_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B, float ErrorTolerance) {
}
	bool UKismetMathLibrary::STATIC_EqualEqual_TransformTransform(const struct FTransform& A, const struct FTransform& B) {
}
	bool UKismetMathLibrary::STATIC_EqualEqual_TimespanTimespan(const struct FTimespan& A, const struct FTimespan& B) {
}
	bool UKismetMathLibrary::STATIC_EqualEqual_RotatorRotator(const struct FRotator& A, const struct FRotator& B, float ErrorTolerance) {
}
	bool UKismetMathLibrary::STATIC_EqualEqual_ObjectObject(class UObject* A, class UObject* B) {
}
	bool UKismetMathLibrary::STATIC_EqualEqual_NameName(const struct FName& A, const struct FName& B) {
}
	bool UKismetMathLibrary::STATIC_EqualEqual_IntInt(int A, int B) {
}
	bool UKismetMathLibrary::STATIC_EqualEqual_FloatFloat(float A, float B) {
}
	bool UKismetMathLibrary::STATIC_EqualEqual_DateTimeDateTime(const struct FDateTime& A, const struct FDateTime& B) {
}
	bool UKismetMathLibrary::STATIC_EqualEqual_ClassClass(class UClass* A, class UClass* B) {
}
	bool UKismetMathLibrary::STATIC_EqualEqual_ByteByte(unsigned char A, unsigned char B) {
}
	bool UKismetMathLibrary::STATIC_EqualEqual_BoolBool(bool A, bool B) {
}
	float UKismetMathLibrary::STATIC_Ease(float A, float B, float Alpha, TEnumAsByte<EEasingFunc> EasingFunc, float BlendExp, int Steps) {
}
	float UKismetMathLibrary::STATIC_DotProduct2D(const struct FVector2D& A, const struct FVector2D& B) {
}
	float UKismetMathLibrary::STATIC_Dot_VectorVector(const struct FVector& A, const struct FVector& B) {
}
	struct FVector UKismetMathLibrary::STATIC_Divide_VectorVector(const struct FVector& A, const struct FVector& B) {
}
	struct FVector UKismetMathLibrary::STATIC_Divide_VectorInt(const struct FVector& A, int B) {
}
	struct FVector UKismetMathLibrary::STATIC_Divide_VectorFloat(const struct FVector& A, float B) {
}
	struct FVector2D UKismetMathLibrary::STATIC_Divide_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B) {
}
	struct FVector2D UKismetMathLibrary::STATIC_Divide_Vector2DFloat(const struct FVector2D& A, float B) {
}
	struct FTimespan UKismetMathLibrary::STATIC_Divide_TimespanFloat(const struct FTimespan& A, float Scalar) {
}
	int UKismetMathLibrary::STATIC_Divide_IntInt(int A, int B) {
}
	float UKismetMathLibrary::STATIC_Divide_FloatFloat(float A, float B) {
}
	unsigned char UKismetMathLibrary::STATIC_Divide_ByteByte(unsigned char A, unsigned char B) {
}
	float UKismetMathLibrary::STATIC_DegTan(float A) {
}
	float UKismetMathLibrary::STATIC_DegSin(float A) {
}
	float UKismetMathLibrary::STATIC_DegreesToRadians(float A) {
}
	float UKismetMathLibrary::STATIC_DegCos(float A) {
}
	float UKismetMathLibrary::STATIC_DegAtan2(float A, float B) {
}
	float UKismetMathLibrary::STATIC_DegAtan(float A) {
}
	float UKismetMathLibrary::STATIC_DegAsin(float A) {
}
	float UKismetMathLibrary::STATIC_DegAcos(float A) {
}
	int UKismetMathLibrary::STATIC_DaysInYear(int Year) {
}
	int UKismetMathLibrary::STATIC_DaysInMonth(int Year, int Month) {
}
	struct FDateTime UKismetMathLibrary::STATIC_DateTimeMinValue() {
}
	struct FDateTime UKismetMathLibrary::STATIC_DateTimeMaxValue() {
}
	bool UKismetMathLibrary::STATIC_DateTimeFromString(const struct FString& DateTimeString, struct FDateTime* Result) {
}
	bool UKismetMathLibrary::STATIC_DateTimeFromIsoString(const struct FString& IsoString, struct FDateTime* Result) {
}
	float UKismetMathLibrary::STATIC_CrossProduct2D(const struct FVector2D& A, const struct FVector2D& B) {
}
	struct FVector UKismetMathLibrary::STATIC_Cross_VectorVector(const struct FVector& A, const struct FVector& B) {
}
	struct FVector UKismetMathLibrary::STATIC_CreateVectorFromYawPitch(float Yaw, float Pitch, float Length) {
}
	float UKismetMathLibrary::STATIC_Cos(float A) {
}
	struct FTransform UKismetMathLibrary::STATIC_ConvertTransformToRelative(const struct FTransform& Transform, const struct FTransform& ParentTransform) {
}
	struct FVector2D UKismetMathLibrary::STATIC_Conv_VectorToVector2D(const struct FVector& InVector) {
}
	struct FTransform UKismetMathLibrary::STATIC_Conv_VectorToTransform(const struct FVector& InLocation) {
}
	struct FRotator UKismetMathLibrary::STATIC_Conv_VectorToRotator(const struct FVector& InVec) {
}
	struct FLinearColor UKismetMathLibrary::STATIC_Conv_VectorToLinearColor(const struct FVector& InVec) {
}
	struct FVector UKismetMathLibrary::STATIC_Conv_Vector2DToVector(const struct FVector2D& InVector2D, float Z) {
}
	struct FVector UKismetMathLibrary::STATIC_Conv_RotatorToVector(const struct FRotator& InRot) {
}
	struct FVector UKismetMathLibrary::STATIC_Conv_LinearColorToVector(const struct FLinearColor& InLinearColor) {
}
	struct FColor UKismetMathLibrary::STATIC_Conv_LinearColorToColor(const struct FLinearColor& InLinearColor) {
}
	struct FVector UKismetMathLibrary::STATIC_Conv_IntVectorToVector(const struct FIntVector& InIntVector) {
}
	struct FIntVector UKismetMathLibrary::STATIC_Conv_IntToIntVector(int inInt) {
}
	float UKismetMathLibrary::STATIC_Conv_IntToFloat(int inInt) {
}
	unsigned char UKismetMathLibrary::STATIC_Conv_IntToByte(int inInt) {
}
	bool UKismetMathLibrary::STATIC_Conv_IntToBool(int inInt) {
}
	struct FVector UKismetMathLibrary::STATIC_Conv_FloatToVector(float InFloat) {
}
	struct FLinearColor UKismetMathLibrary::STATIC_Conv_FloatToLinearColor(float InFloat) {
}
	struct FLinearColor UKismetMathLibrary::STATIC_Conv_ColorToLinearColor(const struct FColor& InColor) {
}
	int UKismetMathLibrary::STATIC_Conv_ByteToInt(unsigned char InByte) {
}
	float UKismetMathLibrary::STATIC_Conv_ByteToFloat(unsigned char InByte) {
}
	int UKismetMathLibrary::STATIC_Conv_BoolToInt(bool InBool) {
}
	float UKismetMathLibrary::STATIC_Conv_BoolToFloat(bool InBool) {
}
	unsigned char UKismetMathLibrary::STATIC_Conv_BoolToByte(bool InBool) {
}
	struct FTransform UKismetMathLibrary::STATIC_ComposeTransforms(const struct FTransform& A, const struct FTransform& B) {
}
	struct FRotator UKismetMathLibrary::STATIC_ComposeRotators(const struct FRotator& A, const struct FRotator& B) {
}
	bool UKismetMathLibrary::STATIC_ClassIsChildOf(class UClass* TestClass, class UClass* ParentClass) {
}
	struct FVector UKismetMathLibrary::STATIC_ClampVectorSize(const struct FVector& A, float Min, float Max) {
}
	float UKismetMathLibrary::STATIC_ClampAxis(float Angle) {
}
	float UKismetMathLibrary::STATIC_ClampAngle(float AngleDegrees, float MinAngleDegrees, float MaxAngleDegrees) {
}
	int UKismetMathLibrary::STATIC_Clamp(int Value, int Min, int Max) {
}
	struct FLinearColor UKismetMathLibrary::STATIC_CInterpTo(const struct FLinearColor& Current, const struct FLinearColor& Target, float DeltaTime, float InterpSpeed) {
}
	void UKismetMathLibrary::STATIC_BreakVector2D(const struct FVector2D& InVec, float* X, float* Y) {
}
	void UKismetMathLibrary::STATIC_BreakVector(const struct FVector& InVec, float* X, float* Y, float* Z) {
}
	void UKismetMathLibrary::STATIC_BreakTransform(const struct FTransform& InTransform, struct FVector* Location, struct FRotator* Rotation, struct FVector* Scale) {
}
	void UKismetMathLibrary::STATIC_BreakTimespan2(const struct FTimespan& InTimespan, int* Days, int* Hours, int* Minutes, int* Seconds, int* FractionNano) {
}
	void UKismetMathLibrary::STATIC_BreakTimespan(const struct FTimespan& InTimespan, int* Days, int* Hours, int* Minutes, int* Seconds, int* Milliseconds) {
}
	void UKismetMathLibrary::STATIC_BreakRotIntoAxes(const struct FRotator& InRot, struct FVector* X, struct FVector* Y, struct FVector* Z) {
}
	void UKismetMathLibrary::STATIC_BreakRotator(const struct FRotator& InRot, float* Roll, float* Pitch, float* Yaw) {
}
	void UKismetMathLibrary::STATIC_BreakRandomStream(const struct FRandomStream& InRandomStream, int* InitialSeed) {
}
	void UKismetMathLibrary::STATIC_BreakDateTime(const struct FDateTime& InDateTime, int* Year, int* Month, int* Day, int* Hour, int* Minute, int* Second, int* Millisecond) {
}
	void UKismetMathLibrary::STATIC_BreakColor(const struct FLinearColor& InColor, float* R, float* G, float* B, float* A) {
}
	bool UKismetMathLibrary::STATIC_BooleanXOR(bool A, bool B) {
}
	bool UKismetMathLibrary::STATIC_BooleanOR(bool A, bool B) {
}
	bool UKismetMathLibrary::STATIC_BooleanNOR(bool A, bool B) {
}
	bool UKismetMathLibrary::STATIC_BooleanNAND(bool A, bool B) {
}
	bool UKismetMathLibrary::STATIC_BooleanAND(bool A, bool B) {
}
	unsigned char UKismetMathLibrary::STATIC_BMin(unsigned char A, unsigned char B) {
}
	unsigned char UKismetMathLibrary::STATIC_BMax(unsigned char A, unsigned char B) {
}
	float UKismetMathLibrary::STATIC_Atan2(float A, float B) {
}
	float UKismetMathLibrary::STATIC_Atan(float A) {
}
	float UKismetMathLibrary::STATIC_Asin(float A) {
}
	int UKismetMathLibrary::STATIC_And_IntInt(int A, int B) {
}
	struct FVector UKismetMathLibrary::STATIC_Add_VectorVector(const struct FVector& A, const struct FVector& B) {
}
	struct FVector UKismetMathLibrary::STATIC_Add_VectorInt(const struct FVector& A, int B) {
}
	struct FVector UKismetMathLibrary::STATIC_Add_VectorFloat(const struct FVector& A, float B) {
}
	struct FVector2D UKismetMathLibrary::STATIC_Add_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B) {
}
	struct FVector2D UKismetMathLibrary::STATIC_Add_Vector2DFloat(const struct FVector2D& A, float B) {
}
	struct FTimespan UKismetMathLibrary::STATIC_Add_TimespanTimespan(const struct FTimespan& A, const struct FTimespan& B) {
}
	int UKismetMathLibrary::STATIC_Add_IntInt(int A, int B) {
}
	float UKismetMathLibrary::STATIC_Add_FloatFloat(float A, float B) {
}
	struct FDateTime UKismetMathLibrary::STATIC_Add_DateTimeTimespan(const struct FDateTime& A, const struct FTimespan& B) {
}
	unsigned char UKismetMathLibrary::STATIC_Add_ByteByte(unsigned char A, unsigned char B) {
}
	float UKismetMathLibrary::STATIC_Acos(float A) {
}
	int UKismetMathLibrary::STATIC_Abs_Int(int A) {
}
	float UKismetMathLibrary::STATIC_Abs(float A) {
}
