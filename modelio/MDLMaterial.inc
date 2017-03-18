{ Parsed from ModelIO.framework MDLMaterial.h }

{$ifdef TYPES}
type
  MDLTextureFilterPtr = ^MDLTextureFilter;
  MDLTextureSamplerPtr = ^MDLTextureSampler;
  MDLMaterialPropertyPtr = ^MDLMaterialProperty;
  MDLMaterialPropertyConnectionPtr = ^MDLMaterialPropertyConnection;
  MDLMaterialPropertyNodePtr = ^MDLMaterialPropertyNode;
  MDLMaterialPropertyGraphPtr = ^MDLMaterialPropertyGraph;
  MDLScatteringFunctionPtr = ^MDLScatteringFunction;
  MDLPhysicallyPlausibleScatteringFunctionPtr = ^MDLPhysicallyPlausibleScatteringFunction;
  MDLMaterialPtr = ^MDLMaterial;
{$endif}

{$ifdef TYPES}
type
  MDLMaterialSemantic = NSUInteger;
  MDLMaterialSemanticPtr = ^MDLMaterialSemantic;

const
  MDLMaterialSemanticBaseColor = 0;
  MDLMaterialSemanticSubsurface = 1;
  MDLMaterialSemanticMetallic = 2;
  MDLMaterialSemanticSpecular = 3;
  MDLMaterialSemanticSpecularExponent = 4;
  MDLMaterialSemanticSpecularTint = 5;
  MDLMaterialSemanticRoughness = 6;
  MDLMaterialSemanticAnisotropic = 7;
  MDLMaterialSemanticAnisotropicRotation = 8;
  MDLMaterialSemanticSheen = 9;
  MDLMaterialSemanticSheenTint = 10;
  MDLMaterialSemanticClearcoat = 11;
  MDLMaterialSemanticClearcoatGloss = 12;
  MDLMaterialSemanticEmission = 13;
  MDLMaterialSemanticBump = 14;
  MDLMaterialSemanticOpacity = 15;
  MDLMaterialSemanticInterfaceIndexOfRefraction = 16;
  MDLMaterialSemanticMaterialIndexOfRefraction = 17;
  MDLMaterialSemanticObjectSpaceNormal = 18;
  MDLMaterialSemanticTangentSpaceNormal = 19;
  MDLMaterialSemanticDisplacement = 20;
  MDLMaterialSemanticDisplacementScale = 21;
  MDLMaterialSemanticAmbientOcclusion = 22;
  MDLMaterialSemanticAmbientOcclusionScale = 23;
  MDLMaterialSemanticNone = $8000;
  MDLMaterialSemanticUserDefined = $8001;

type
  MDLMaterialPropertyType = NSUInteger;
  MDLMaterialPropertyTypePtr = ^MDLMaterialPropertyType;

const
  MDLMaterialPropertyTypeNone = 0;
  MDLMaterialPropertyTypeString = 1;
  MDLMaterialPropertyTypeURL = 2;
  MDLMaterialPropertyTypeTexture = 3;
  MDLMaterialPropertyTypeColor = 4;
  MDLMaterialPropertyTypeFloat = 5;
  MDLMaterialPropertyTypeFloat2 = 6;
  MDLMaterialPropertyTypeFloat3 = 7;
  MDLMaterialPropertyTypeFloat4 = 8;
  MDLMaterialPropertyTypeMatrix44 = 9;

type
  MDLMaterialTextureWrapMode = NSUInteger;
  MDLMaterialTextureWrapModePtr = ^MDLMaterialTextureWrapMode;

const
  MDLMaterialTextureWrapModeClamp = 0;
  MDLMaterialTextureWrapModeRepeat = 1;
  MDLMaterialTextureWrapModeMirror = 2;

type
  MDLMaterialTextureFilterMode = NSUInteger;
  MDLMaterialTextureFilterModePtr = ^MDLMaterialTextureFilterMode;

const
  MDLMaterialTextureFilterModeNearest = 0;
  MDLMaterialTextureFilterModeLinear = 1;

type
  MDLMaterialMipMapFilterMode = NSUInteger;
  MDLMaterialMipMapFilterModePtr = ^MDLMaterialMipMapFilterMode;

const
  MDLMaterialMipMapFilterModeNearest = 0;
  MDLMaterialMipMapFilterModeLinear = 1;
{$endif}

{$ifdef CLASSES}

type
  MDLTextureFilter = objcclass external (NSObject)
  public
    procedure setSWrapMode(newValue: MDLMaterialTextureWrapMode); message 'setSWrapMode:';
    function sWrapMode: MDLMaterialTextureWrapMode; message 'sWrapMode';
    procedure setTWrapMode(newValue: MDLMaterialTextureWrapMode); message 'setTWrapMode:';
    function tWrapMode: MDLMaterialTextureWrapMode; message 'tWrapMode';
    procedure setRWrapMode(newValue: MDLMaterialTextureWrapMode); message 'setRWrapMode:';
    function rWrapMode: MDLMaterialTextureWrapMode; message 'rWrapMode';
    procedure setMinFilter(newValue: MDLMaterialTextureFilterMode); message 'setMinFilter:';
    function minFilter: MDLMaterialTextureFilterMode; message 'minFilter';
    procedure setMagFilter(newValue: MDLMaterialTextureFilterMode); message 'setMagFilter:';
    function magFilter: MDLMaterialTextureFilterMode; message 'magFilter';
    procedure setMipFilter(newValue: MDLMaterialMipMapFilterMode); message 'setMipFilter:';
    function mipFilter: MDLMaterialMipMapFilterMode; message 'mipFilter';
  end;

type
  MDLTextureSampler = objcclass external (NSObject)
  public
    procedure setTexture(newValue: MDLTexture); message 'setTexture:';
    function texture: MDLTexture; message 'texture';
    procedure setHardwareFilter(newValue: MDLTextureFilter); message 'setHardwareFilter:';
    function hardwareFilter: MDLTextureFilter; message 'hardwareFilter';
    procedure setTransform(newValue: MDLTransform); message 'setTransform:';
    function transform: MDLTransform; message 'transform';
  end;

type
  MDLMaterialProperty = objcclass external (NSObject, MDLNamedProtocol, NSCopyingProtocol)
  public
    function init: instancetype; message 'init';
    function initWithName_semantic (name: NSString; semantic: MDLMaterialSemantic): instancetype; message 'initWithName:semantic:'; { NS_DESIGNATED_INITIALIZER }
    function initWithName_semantic_float (name: NSString; semantic: MDLMaterialSemantic; value: single): instancetype; message 'initWithName:semantic:float:';
    function initWithName_semantic_float2 (name: NSString; semantic: MDLMaterialSemantic; value: vector_float2): instancetype; message 'initWithName:semantic:float2:';
    function initWithName_semantic_float3 (name: NSString; semantic: MDLMaterialSemantic; value: vector_float3): instancetype; message 'initWithName:semantic:float3:';
    function initWithName_semantic_float4 (name: NSString; semantic: MDLMaterialSemantic; value: vector_float4): instancetype; message 'initWithName:semantic:float4:';
    function initWithName_semantic_matrix4x4 (name: NSString; semantic: MDLMaterialSemantic; value: matrix_float4x4): instancetype; message 'initWithName:semantic:matrix4x4:';
    function initWithName_semantic_URL (name: NSString; semantic: MDLMaterialSemantic; URL: nullable NSURLPtr): instancetype; message 'initWithName:semantic:URL:';
    function initWithName_semantic_string (name: NSString; semantic: MDLMaterialSemantic; string_: nullable NSStringPtr): instancetype; message 'initWithName:semantic:string:';
    function initWithName_semantic_textureSampler (name: NSString; semantic: MDLMaterialSemantic; textureSampler: nullable MDLTextureSamplerPtr): instancetype; message 'initWithName:semantic:textureSampler:';
    function initWithName_semantic_color (name: NSString; semantic: MDLMaterialSemantic; color: CGColorRef): instancetype; message 'initWithName:semantic:color:';
    procedure setProperties (property_: MDLMaterialProperty); message 'setProperties:';
    procedure setSemantic(newValue: MDLMaterialSemantic); message 'setSemantic:';
    function semantic: MDLMaterialSemantic; message 'semantic';
    function type_: MDLMaterialPropertyType; message 'type';
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    procedure setStringValue(newValue: NSString); message 'setStringValue:';
    function stringValue: NSString; message 'stringValue';
    procedure setURLValue(newValue: NSURL); message 'setURLValue:';
    function URLValue: NSURL; message 'URLValue';
    procedure setTextureSamplerValue(newValue: MDLTextureSampler); message 'setTextureSamplerValue:';
    function textureSamplerValue: MDLTextureSampler; message 'textureSamplerValue';
    procedure setColor(newValue: CGColorRef); message 'setColor:';
    function color: CGColorRef; message 'color';
    procedure setFloatValue(newValue: single); message 'setFloatValue:';
    function floatValue: single; message 'floatValue';
    procedure setFloat2Value(newValue: vector_float2); message 'setFloat2Value:';
    function float2Value: vector_float2; message 'float2Value';
    procedure setFloat3Value(newValue: vector_float3); message 'setFloat3Value:';
    function float3Value: vector_float3; message 'float3Value';
    procedure setFloat4Value(newValue: vector_float4); message 'setFloat4Value:';
    function float4Value: vector_float4; message 'float4Value';
    procedure setMatrix4x4(newValue: matrix_float4x4); message 'setMatrix4x4:';
    function matrix4x4: matrix_float4x4; message 'matrix4x4';
    procedure setLuminance(newValue: single); message 'setLuminance:';
    function luminance: single; message 'luminance';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
  end;

type
  MDLMaterialPropertyConnection = objcclass external (NSObject, MDLNamedProtocol)
  public
    function init: instancetype; message 'init';
    function initWithOutput_input (output: MDLMaterialProperty; input: MDLMaterialProperty): instancetype; message 'initWithOutput:input:';
    function output: MDLMaterialProperty; message 'output';
    function input: MDLMaterialProperty; message 'input';

    { Adopted protocols }
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
  end;

type
  MDLMaterialPropertyNode = objcclass external (NSObject, MDLNamedProtocol)
  public
    function init: instancetype; message 'init';
    function initWithInputs_outputs_evaluationFunction (inputs: MDLMaterialProperty*ProtocolPtr; outputs: MDLMaterialProperty*ProtocolPtr; function_: OpaqueCBlock): instancetype; message 'initWithInputs:outputs:evaluationFunction:';
    procedure setEvaluationFunction(newValue: OpaqueCBlock); message 'setEvaluationFunction:';
    function evaluationFunction: OpaqueCBlock; message 'evaluationFunction';
    function inputs: MDLMaterialProperty *ProtocolPtr; message 'inputs';
    function outputs: MDLMaterialProperty *ProtocolPtr; message 'outputs';

    { Adopted protocols }
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
  end;

type
  MDLMaterialPropertyGraph = objcclass external (MDLMaterialPropertyNode)
  public
    function init: instancetype; message 'init';
    function initWithNodes_connections (nodes: MDLMaterialPropertyNode*ProtocolPtr; connections: MDLMaterialPropertyConnection*ProtocolPtr): instancetype; message 'initWithNodes:connections:';
    procedure evaluate; message 'evaluate';
    function nodes: MDLMaterialPropertyNode *ProtocolPtr; message 'nodes';
    function connections: MDLMaterialPropertyConnection *ProtocolPtr; message 'connections';
  end;

type
  MDLScatteringFunction = objcclass external (NSObject, MDLNamedProtocol)
  public
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    function baseColor: MDLMaterialProperty; message 'baseColor';
    function emission: MDLMaterialProperty; message 'emission';
    function specular: MDLMaterialProperty; message 'specular';
    function materialIndexOfRefraction: MDLMaterialProperty; message 'materialIndexOfRefraction';
    function interfaceIndexOfRefraction: MDLMaterialProperty; message 'interfaceIndexOfRefraction';
    function normal: MDLMaterialProperty; message 'normal';
    function ambientOcclusion: MDLMaterialProperty; message 'ambientOcclusion';
    function ambientOcclusionScale: MDLMaterialProperty; message 'ambientOcclusionScale';
  end;

type
  MDLPhysicallyPlausibleScatteringFunction = objcclass external (MDLScatteringFunction)
  public
    function version: NSInteger; message 'version';
    function subsurface: MDLMaterialProperty; message 'subsurface';
    function metallic: MDLMaterialProperty; message 'metallic';
    function specularAmount: MDLMaterialProperty; message 'specularAmount';
    function specularTint: MDLMaterialProperty; message 'specularTint';
    function roughness: MDLMaterialProperty; message 'roughness';
    function anisotropic: MDLMaterialProperty; message 'anisotropic';
    function anisotropicRotation: MDLMaterialProperty; message 'anisotropicRotation';
    function sheen: MDLMaterialProperty; message 'sheen';
    function sheenTint: MDLMaterialProperty; message 'sheenTint';
    function clearcoat: MDLMaterialProperty; message 'clearcoat';
    function clearcoatGloss: MDLMaterialProperty; message 'clearcoatGloss';
  end;
{$endif}

{$ifdef TYPES}
type
  MDLMaterialFace = NSUInteger;
  MDLMaterialFacePtr = ^MDLMaterialFace;

const
  MDLMaterialFaceFront = 0;
  MDLMaterialFaceBack = 1;
  MDLMaterialFaceDoubleSided = 2;
{$endif}

{$ifdef CLASSES}

type
  MDLMaterial = objcclass external (NSObject, MDLNamedProtocol, NSFastEnumerationProtocol)
  public
    function initWithName_scatteringFunction (name: NSString; scatteringFunction: MDLScatteringFunction): instancetype; message 'initWithName:scatteringFunction:';
    procedure setProperty (property_: MDLMaterialProperty); message 'setProperty:';
    procedure removeProperty (property_: MDLMaterialProperty); message 'removeProperty:';
    function propertyNamed (name: NSString): nullable MDLMaterialPropertyPtr; message 'propertyNamed:';
    function propertyWithSemantic (semantic: MDLMaterialSemantic): nullable MDLMaterialPropertyPtr; message 'propertyWithSemantic:';
    function propertiesWithSemantic (semantic: MDLMaterialSemantic): MDLMaterialProperty *ProtocolPtr; message 'propertiesWithSemantic:';
    procedure removeAllProperties; message 'removeAllProperties';
    function scatteringFunction: MDLScatteringFunction; message 'scatteringFunction';
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    procedure setBaseMaterial(newValue: MDLMaterial); message 'setBaseMaterial:';
    function baseMaterial: MDLMaterial; message 'baseMaterial';
    function objectAtIndexedSubscript (idx: NSUInteger): nullable MDLMaterialPropertyPtr; message 'objectAtIndexedSubscript:';
    function objectForKeyedSubscript (name_: NSString): nullable MDLMaterialPropertyPtr; message 'objectForKeyedSubscript:';
    function count: NSUInteger; message 'count';
    procedure setMaterialFace(newValue: MDLMaterialFace); message 'setMaterialFace:';
    function materialFace: MDLMaterialFace; message 'materialFace';

    { Adopted protocols }
    function countByEnumeratingWithState_objects_count (state: NSFastEnumerationStatePtr; buffer: id  _Nullable; len: NSUInteger): NSUInteger; message 'countByEnumeratingWithState:objects:count:';
  end;
{$endif}

