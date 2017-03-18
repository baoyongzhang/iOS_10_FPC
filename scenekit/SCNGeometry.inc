{ Parsed from SceneKit.framework SCNGeometry.h }

{ Types from SCNGeometrySource }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  SCNGeometryPtr = ^SCNGeometry;
  SCNGeometrySourcePtr = ^SCNGeometrySource;
  SCNGeometryElementPtr = ^SCNGeometryElement;
{$endif}

{$ifdef TYPES}
type
  SCNGeometryPrimitiveType = NSInteger;
  SCNGeometryPrimitiveTypePtr = ^SCNGeometryPrimitiveType;

const
  SCNGeometryPrimitiveTypeTriangles = 0;
  SCNGeometryPrimitiveTypeTriangleStrip = 1;
  SCNGeometryPrimitiveTypeLine = 2;
  SCNGeometryPrimitiveTypePoint = 3;
  {$if (defined(SWIFT_SDK_OVERLAY2_SCENEKIT_EPOCH)) and (SWIFT_SDK_OVERLAY2_SCENEKIT_EPOCH >= 2)}
  SCNGeometryPrimitiveTypePolygon = 4 { available in macosx(10.12 };
  ios = 5 { available in macosx(10.12 };
  10 = 6 { available in macosx(10.12 };
  0 = 7 { available in macosx(10.12 };
  tvos = 8 { available in macosx(10.12 };
  10 = 9 { available in macosx(10.12 };
  0 = 10 { available in macosx(10.12 };
  4 = 11 { available in macosx(10.12 };
  {$endif}
{$endif}

{$if (defined(SWIFT_SDK_OVERLAY2_SCENEKIT_EPOCH)) and (SWIFT_SDK_OVERLAY2_SCENEKIT_EPOCH >= 3)}
{$ifdef TYPES}
type
  NS_EXTENSIBLE_STRING_ENUM = NSString *SCNGeometrySourceSemantic;
  NS_EXTENSIBLE_STRING_ENUMPtr = ^NS_EXTENSIBLE_STRING_ENUM;
{$endif}

{$else}
{$ifdef TYPES}
type
  SCNGeometrySourceSemantic = ^NSString;
{$endif}

{$endif}
{$ifdef EXTERNAL_SYMBOLS}
var
  SCNGeometrySourceSemanticVertex: SCNGeometrySourceSemantic; cvar; external;
  SCNGeometrySourceSemanticNormal: SCNGeometrySourceSemantic; cvar; external;
  SCNGeometrySourceSemanticColor: SCNGeometrySourceSemantic; cvar; external;
  SCNGeometrySourceSemanticTexcoord: SCNGeometrySourceSemantic; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  SCNGeometry = objcclass external (NSObject, SCNAnimatableProtocol, SCNBoundingVolumeProtocol, SCNShadableProtocol, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    class function geometry                           ): instancetype; message 'geometry                           )'; { available in macosx(10.9 }
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    procedure setMaterials(newValue: SCNMaterial *ProtocolPtr); message 'setMaterials:';
    function materials: SCNMaterial *ProtocolPtr; message 'materials';
    procedure setFirstMaterial(newValue: SCNMaterial); message 'setFirstMaterial:';
    function firstMaterial: SCNMaterial; message 'firstMaterial';
    procedure insertMaterial_atIndex (material: SCNMaterial; index: NSUInteger); message 'insertMaterial:atIndex:';
    procedure removeMaterialAtIndex (index: NSUInteger); message 'removeMaterialAtIndex:';
    procedure replaceMaterialAtIndex_withMaterial (index: NSUInteger; material: SCNMaterial); message 'replaceMaterialAtIndex:withMaterial:';
    function materialWithName (name_: NSString): nullable SCNMaterialPtr; message 'materialWithName:';
    class function geometryWithSources_elements (sources: SCNGeometrySource *ProtocolPtr; elements: nullable SCNGeometryElement *ProtocolPtr): instancetype; message 'geometryWithSources:elements:';
    function ): SCNGeometrySource *Protocol *geometrySources; message ')';
    function geometrySourcesForSemantic (semantic: SCNGeometrySourceSemantic): SCNGeometrySource *ProtocolPtr; message 'geometrySourcesForSemantic:';
    function )_: SCNGeometryElement *Protocol *geometryElements; message ')';
    function geometryElementCount: NSInteger; message 'geometryElementCount';
    function geometryElementAtIndex (elementIndex: NSInteger): SCNGeometryElement; message 'geometryElementAtIndex:';
    procedure set)(newValue: SCNLevelOfDetail *Protocol *levelsOfDetail); message 'set):';
    function )__: SCNLevelOfDetail *Protocol *levelsOfDetail; message ')';
    procedure set)_(newValue: NSUInteger subdivisionLevel); message 'set):';
    function )___: NSUInteger subdivisionLevel; message ')';
    procedure set)__(newValue: SCNGeometryElement *edgeCreasesElement); message 'set):';
    function )____: SCNGeometryElement *edgeCreasesElement; message ')';
    procedure set)___(newValue: SCNGeometrySource *edgeCreasesSource); message 'set):';
    function )_____: SCNGeometrySource *edgeCreasesSource; message ')';

    { Adopted protocols }
    procedure set__WATCHOS_PROHIBITED(newValue: SCNProgram *program); message 'set__WATCHOS_PROHIBITED:';
    function __WATCHOS_PROHIBITED_: SCNProgram *program; message 'WATCHOS_PROHIBITED';
    procedure addAnimation_forKey (animation: CAAnimation; key: nullable NSStringPtr); message 'addAnimation:forKey:';
    function animationForKey (key: NSString): nullable CAAnimationPtr; message 'animationForKey:';
    function animationKeys: NSString *ProtocolPtr; message 'animationKeys';
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function getBoundingBoxMin_max (min: nullable SCNVector3Ptr; max: nullable SCNVector3Ptr): boolean; message 'getBoundingBoxMin:max:';
    function getBoundingSphereCenter_radius (center: nullable SCNVector3Ptr; radius: nullable CGFloatPtr): boolean; message 'getBoundingSphereCenter:radius:';
    procedure handleBindingOfSymbol_usingBlock (symbol: NSString; block: nullable SCNBindingBlock); message 'handleBindingOfSymbol:usingBlock:'; { available in macosx(10.9 }
    procedure handleUnbindingOfSymbol_usingBlock (symbol: NSString; block: nullable SCNBindingBlock); message 'handleUnbindingOfSymbol:usingBlock:'; { available in macosx(10.9 }
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function isAnimationForKeyPaused (key: NSString): boolean; message 'isAnimationForKeyPaused:'; { available in macosx(10.9 }
    procedure pauseAnimationForKey (key: NSString); message 'pauseAnimationForKey:'; { available in macosx(10.9 }
    procedure removeAllAnimations; message 'removeAllAnimations';
    procedure removeAnimationForKey (key: NSString); message 'removeAnimationForKey:';
    procedure removeAnimationForKey_fadeOutDuration (key: NSString; duration: CGFloat); message 'removeAnimationForKey:fadeOutDuration:'; { available in macosx(10.10 }
    procedure resumeAnimationForKey (key: NSString); message 'resumeAnimationForKey:'; { available in macosx(10.9 }
    procedure setBoundingBoxMin_max (min: nullable SCNVector3Ptr; max: nullable SCNVector3Ptr); message 'setBoundingBoxMin:max:'; { available in macosx(10.9 }
    procedure setSpeed_forAnimationKey (speed: CGFloat; key: NSString); message 'setSpeed:forAnimationKey:'; { available in macosx(10.12 }
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;

type
  SCNGeometrySource = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    class function geometrySourceWithData_semantic_vectorCount_floatComponents_componentsPerVector_bytesPerComponent_dataOffset_dataStride (data: NSData; semantic: SCNGeometrySourceSemantic; vectorCount: NSInteger; floatComponents: boolean; componentsPerVector: NSInteger; bytesPerComponent: NSInteger; offset: NSInteger; stride: NSInteger): instancetype; message 'geometrySourceWithData:semantic:vectorCount:floatComponents:componentsPerVector:bytesPerComponent:dataOffset:dataStride:';
    class function geometrySourceWithVertices_count (vertices: SCNVector3Ptr; count: NSInteger): instancetype; message 'geometrySourceWithVertices:count:';
    class function geometrySourceWithNormals_count (normals: SCNVector3Ptr; count: NSInteger): instancetype; message 'geometrySourceWithNormals:count:';
    class function geometrySourceWithTextureCoordinates_count (texcoord: CGPointPtr; count: NSInteger): instancetype; message 'geometrySourceWithTextureCoordinates:count:';
    {$if defined(SCN_ENABLE_METAL)}
    class function geometrySourceWithBuffer_vertexFormat_semantic_vertexCount_dataOffset_dataStride (mtlBuffer: MTLBufferProtocol; vertexFormat: MTLVertexFormat; semantic: SCNGeometrySourceSemantic; vertexCount: NSInteger; offset: NSInteger; stride: NSInteger): instancetype; message 'geometrySourceWithBuffer:vertexFormat:semantic:vertexCount:dataOffset:dataStride:'; { available in macosx(10.11 }
    {$endif}
    function data: NSData; message 'data';
    function semantic: SCNGeometrySourceSemantic; message 'semantic';
    function vectorCount: NSInteger; message 'vectorCount';
    function floatComponents: boolean; message 'floatComponents';
    function componentsPerVector: NSInteger; message 'componentsPerVector';
    function bytesPerComponent: NSInteger; message 'bytesPerComponent';
    function dataOffset: NSInteger; message 'dataOffset';
    function dataStride: NSInteger; message 'dataStride';

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;

type
  SCNGeometryElement = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    class function geometryElementWithData_primitiveType_primitiveCount_bytesPerIndex (data: nullable NSDataPtr; primitiveType: SCNGeometryPrimitiveType; primitiveCount: NSInteger; bytesPerIndex: NSInteger): instancetype; message 'geometryElementWithData:primitiveType:primitiveCount:bytesPerIndex:';
    function data: NSData; message 'data';
    function primitiveType: SCNGeometryPrimitiveType; message 'primitiveType';
    function primitiveCount: NSInteger; message 'primitiveCount';
    function bytesPerIndex: NSInteger; message 'bytesPerIndex';

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

