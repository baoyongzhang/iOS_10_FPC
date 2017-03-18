{ Parsed from ModelIO.framework MDLTypes.h }

{$ifdef TYPES}
type
  MDLNamedProtocolPtr = ^MDLNamedProtocol;
  MDLComponentProtocolPtr = ^MDLComponentProtocol;
  MDLObjectContainerComponentProtocolPtr = ^MDLObjectContainerComponentProtocol;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kUTTypeAlembic: NSString *__nonnull { available in 10_11, 9_0 }; cvar; external;
  kUTType3dObject: NSString *__nonnull { available in 10_11, 9_0 }; cvar; external;
  kUTTypePolygon: NSString *__nonnull { available in 10_11, 9_0 }; cvar; external;
  kUTTypeStereolithography: NSString *__nonnull { available in 10_11, 9_0 }; cvar; external;
  kUTTypeUniversalSceneDescription: NSString *__nonnull { available in 10_12, 10_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  MDLIndexBitDepth = NSUInteger;
  MDLIndexBitDepthPtr = ^MDLIndexBitDepth;

const
  MDLIndexBitDepthInvalid = 0;
  MDLIndexBitDepthUInt8 = 8;
  MDLIndexBitDepthUint8 = 8;
  MDLIndexBitDepthUInt16 = 16;
  MDLIndexBitDepthUint16 = 16;
  MDLIndexBitDepthUInt32 = 32;
  MDLIndexBitDepthUint32 = 32;

type
  MDLGeometryType = NSInteger;
  MDLGeometryTypePtr = ^MDLGeometryType;

const
  MDLGeometryTypePoints = 0;
  MDLGeometryTypeLines = 1;
  MDLGeometryTypeTriangles = 2;
  MDLGeometryTypeTriangleStrips = 3;
  MDLGeometryTypeQuads = 4;
  MDLGeometryTypeVariableTopology = 5;

type
  MDLProbePlacement = NSInteger;
  MDLProbePlacementPtr = ^MDLProbePlacement;

const
  MDLProbePlacementUniformGrid = 0;
  MDLProbePlacementIrradianceDistribution = 1;
{$endif}

{$ifdef PROTOCOLS}

type
  MDLNamedProtocol = objcprotocol external name 'MDLNamed'
  required
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
  end;

type
  MDLComponentProtocol = objcprotocol external name 'MDLComponent' (NSObjectProtocol)
  end;

type
  MDLObjectContainerComponentProtocol = objcprotocol external name 'MDLObjectContainerComponent' (MDLComponentProtocol, NSFastEnumerationProtocol)
    procedure addObject (object_: MDLObject); message 'addObject:';
    procedure removeObject (object_: MDLObject); message 'removeObject:';
    function objects: MDLObject *ProtocolPtr; message 'objects';
  end;
{$endif}

{$ifdef TYPES}
type
  MDL_EXPORT_CPPCLASS = record
    maxBounds: vector_float3;
    minBounds: vector_float3;
  end;
type
  MDLAxisAlignedBoundingBox = MDL_EXPORT_CPPCLASS;
type
  MDLAxisAlignedBoundingBoxPtr = ^MDL_EXPORT_CPPCLASS;
type
  MDL_EXPORT_CPPCLASSPtr = ^MDL_EXPORT_CPPCLASS;
{$endif}

