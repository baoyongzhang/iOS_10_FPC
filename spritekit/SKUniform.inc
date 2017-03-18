{ Parsed from SpriteKit.framework SKUniform.h }

{ Types from SKUniform }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  SKUniformPtr = ^SKUniform;
{$endif}

{$ifdef TYPES}
type
  SKUniformType = NSInteger;
  SKUniformTypePtr = ^SKUniformType;

const
  SKUniformTypeNone = 0;
  SKUniformTypeFloat = 1;
  SKUniformTypeFloatVector2 = 2;
  SKUniformTypeFloatVector3 = 3;
  SKUniformTypeFloatVector4 = 4;
  SKUniformTypeFloatMatrix2 = 5;
  SKUniformTypeFloatMatrix3 = 6;
  SKUniformTypeFloatMatrix4 = 7;
  SKUniformTypeTexture = 8;
{$endif}

{$ifdef CLASSES}

type
  SKUniform = objcclass external (NSObject, NSCopyingProtocol, NSCodingProtocol)
  public
    class function uniformWithName (name: NSString): instancetype; message 'uniformWithName:';
    class function uniformWithName_texture (name: NSString; texture: nullable SKTexturePtr): instancetype; message 'uniformWithName:texture:';
    class function uniformWithName_float (name: NSString; value: single): instancetype; message 'uniformWithName:float:';
    class function uniformWithName_vectorFloat2 (name: NSString; value: vector_float2): instancetype; message 'uniformWithName:vectorFloat2:'; { available in 10_12, 10_0 }
    class function uniformWithName_vectorFloat3 (name: NSString; value: vector_float3): instancetype; message 'uniformWithName:vectorFloat3:'; { available in 10_12, 10_0 }
    class function uniformWithName_vectorFloat4 (name: NSString; value: vector_float4): instancetype; message 'uniformWithName:vectorFloat4:'; { available in 10_12, 10_0 }
    class function uniformWithName_matrixFloat2x2 (name: NSString; value: matrix_float2x2): instancetype; message 'uniformWithName:matrixFloat2x2:'; { available in 10_12, 10_0 }
    class function uniformWithName_matrixFloat3x3 (name: NSString; value: matrix_float3x3): instancetype; message 'uniformWithName:matrixFloat3x3:'; { available in 10_12, 10_0 }
    class function uniformWithName_matrixFloat4x4 (name: NSString; value: matrix_float4x4): instancetype; message 'uniformWithName:matrixFloat4x4:'; { available in 10_12, 10_0 }
    function name: NSString; message 'name';
    function uniformType: SKUniformType; message 'uniformType';
    procedure setTextureValue(newValue: SKTexture); message 'setTextureValue:';
    function textureValue: SKTexture; message 'textureValue';
    procedure setFloatValue(newValue: single); message 'setFloatValue:';
    function floatValue: single; message 'floatValue';
    procedure setVectorFloat2Value(newValue: vector_float2); message 'setVectorFloat2Value:';
    function vectorFloat2Value: vector_float2; message 'vectorFloat2Value';
    procedure setVectorFloat3Value(newValue: vector_float3); message 'setVectorFloat3Value:';
    function vectorFloat3Value: vector_float3; message 'vectorFloat3Value';
    procedure setVectorFloat4Value(newValue: vector_float4); message 'setVectorFloat4Value:';
    function vectorFloat4Value: vector_float4; message 'vectorFloat4Value';
    procedure setMatrixFloat2x2Value(newValue: matrix_float2x2); message 'setMatrixFloat2x2Value:';
    function matrixFloat2x2Value: matrix_float2x2; message 'matrixFloat2x2Value';
    procedure setMatrixFloat3x3Value(newValue: matrix_float3x3); message 'setMatrixFloat3x3Value:';
    function matrixFloat3x3Value: matrix_float3x3; message 'matrixFloat3x3Value';
    procedure setMatrixFloat4x4Value(newValue: matrix_float4x4); message 'setMatrixFloat4x4Value:';
    function matrixFloat4x4Value: matrix_float4x4; message 'matrixFloat4x4Value';
    function initWithName (name_: NSString): instancetype; message 'initWithName:';
    function initWithName_texture (name_: NSString; texture: nullable SKTexturePtr): instancetype; message 'initWithName:texture:';
    function initWithName_float (name_: NSString; value: single): instancetype; message 'initWithName:float:';
    function initWithName_vectorFloat2 (name_: NSString; value: vector_float2): instancetype; message 'initWithName:vectorFloat2:'; { available in 10_12, 10_0 }
    function initWithName_vectorFloat3 (name_: NSString; value: vector_float3): instancetype; message 'initWithName:vectorFloat3:'; { available in 10_12, 10_0 }
    function initWithName_vectorFloat4 (name_: NSString; value: vector_float4): instancetype; message 'initWithName:vectorFloat4:'; { available in 10_12, 10_0 }
    function initWithName_matrixFloat2x2 (name_: NSString; value: matrix_float2x2): instancetype; message 'initWithName:matrixFloat2x2:'; { available in 10_12, 10_0 }
    function initWithName_matrixFloat3x3 (name_: NSString; value: matrix_float3x3): instancetype; message 'initWithName:matrixFloat3x3:'; { available in 10_12, 10_0 }
    function initWithName_matrixFloat4x4 (name_: NSString; value: matrix_float4x4): instancetype; message 'initWithName:matrixFloat4x4:'; { available in 10_12, 10_0 }
    {$if defined(__NULL_MACRO__)}
    procedure setFloatVector2Value(newValue: GLKVector2); message 'setFloatVector2Value:';
    function floatVector2Value: GLKVector2; message 'floatVector2Value';
    procedure setFloatVector3Value(newValue: GLKVector3); message 'setFloatVector3Value:';
    function floatVector3Value: GLKVector3; message 'floatVector3Value';
    procedure setFloatVector4Value(newValue: GLKVector4); message 'setFloatVector4Value:';
    function floatVector4Value: GLKVector4; message 'floatVector4Value';
    procedure setFloatMatrix2Value(newValue: GLKMatrix2); message 'setFloatMatrix2Value:';
    function floatMatrix2Value: GLKMatrix2; message 'floatMatrix2Value';
    procedure setFloatMatrix3Value(newValue: GLKMatrix3); message 'setFloatMatrix3Value:';
    function floatMatrix3Value: GLKMatrix3; message 'floatMatrix3Value';
    procedure setFloatMatrix4Value(newValue: GLKMatrix4); message 'setFloatMatrix4Value:';
    function floatMatrix4Value: GLKMatrix4; message 'floatMatrix4Value';
    class function uniformWithName_floatVector2 (name_: NSString; value: GLKVector2): instancetype; message 'uniformWithName:floatVector2:'; deprecated 'in 10_8, 10_12, 7_0, 10_0';
    class function uniformWithName_floatVector3 (name_: NSString; value: GLKVector3): instancetype; message 'uniformWithName:floatVector3:'; deprecated 'in 10_8, 10_12, 7_0, 10_0';
    class function uniformWithName_floatVector4 (name_: NSString; value: GLKVector4): instancetype; message 'uniformWithName:floatVector4:'; deprecated 'in 10_8, 10_12, 7_0, 10_0';
    class function uniformWithName_floatMatrix2 (name_: NSString; value: GLKMatrix2): instancetype; message 'uniformWithName:floatMatrix2:'; deprecated 'in 10_8, 10_12, 7_0, 10_0';
    class function uniformWithName_floatMatrix3 (name_: NSString; value: GLKMatrix3): instancetype; message 'uniformWithName:floatMatrix3:'; deprecated 'in 10_8, 10_12, 7_0, 10_0';
    class function uniformWithName_floatMatrix4 (name_: NSString; value: GLKMatrix4): instancetype; message 'uniformWithName:floatMatrix4:'; deprecated 'in 10_8, 10_12, 7_0, 10_0';
    function initWithName_floatVector2 (name_: NSString; value: GLKVector2): instancetype; message 'initWithName:floatVector2:'; deprecated 'in 10_8, 10_12, 7_0, 10_0';
    function initWithName_floatVector3 (name_: NSString; value: GLKVector3): instancetype; message 'initWithName:floatVector3:'; deprecated 'in 10_8, 10_12, 7_0, 10_0';
    function initWithName_floatVector4 (name_: NSString; value: GLKVector4): instancetype; message 'initWithName:floatVector4:'; deprecated 'in 10_8, 10_12, 7_0, 10_0';
    function initWithName_floatMatrix2 (name_: NSString; value: GLKMatrix2): instancetype; message 'initWithName:floatMatrix2:'; deprecated 'in 10_8, 10_12, 7_0, 10_0';
    function initWithName_floatMatrix3 (name_: NSString; value: GLKMatrix3): instancetype; message 'initWithName:floatMatrix3:'; deprecated 'in 10_8, 10_12, 7_0, 10_0';
    function initWithName_floatMatrix4 (name_: NSString; value: GLKMatrix4): instancetype; message 'initWithName:floatMatrix4:'; deprecated 'in 10_8, 10_12, 7_0, 10_0';
    {$endif}

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
  end;
{$endif}

