{ Parsed from Metal.framework MTLArgument.h }

{$ifdef TYPES}
type
  MTLStructMemberPtr = ^MTLStructMember;
  MTLStructTypePtr = ^MTLStructType;
  MTLArrayTypePtr = ^MTLArrayType;
  MTLArgumentPtr = ^MTLArgument;
{$endif}

{$ifdef TYPES}
type
  MTLDataType = NSUInteger;
  MTLDataTypePtr = ^MTLDataType;

const
  MTLDataTypeNone = 0;
  MTLDataTypeStruct = 1;
  MTLDataTypeArray = 2;
  MTLDataTypeFloat = 3;
  MTLDataTypeFloat2 = 4;
  MTLDataTypeFloat3 = 5;
  MTLDataTypeFloat4 = 6;
  MTLDataTypeFloat2x2 = 7;
  MTLDataTypeFloat2x3 = 8;
  MTLDataTypeFloat2x4 = 9;
  MTLDataTypeFloat3x2 = 10;
  MTLDataTypeFloat3x3 = 11;
  MTLDataTypeFloat3x4 = 12;
  MTLDataTypeFloat4x2 = 13;
  MTLDataTypeFloat4x3 = 14;
  MTLDataTypeFloat4x4 = 15;
  MTLDataTypeHalf = 16;
  MTLDataTypeHalf2 = 17;
  MTLDataTypeHalf3 = 18;
  MTLDataTypeHalf4 = 19;
  MTLDataTypeHalf2x2 = 20;
  MTLDataTypeHalf2x3 = 21;
  MTLDataTypeHalf2x4 = 22;
  MTLDataTypeHalf3x2 = 23;
  MTLDataTypeHalf3x3 = 24;
  MTLDataTypeHalf3x4 = 25;
  MTLDataTypeHalf4x2 = 26;
  MTLDataTypeHalf4x3 = 27;
  MTLDataTypeHalf4x4 = 28;
  MTLDataTypeInt = 29;
  MTLDataTypeInt2 = 30;
  MTLDataTypeInt3 = 31;
  MTLDataTypeInt4 = 32;
  MTLDataTypeUInt = 33;
  MTLDataTypeUInt2 = 34;
  MTLDataTypeUInt3 = 35;
  MTLDataTypeUInt4 = 36;
  MTLDataTypeShort = 37;
  MTLDataTypeShort2 = 38;
  MTLDataTypeShort3 = 39;
  MTLDataTypeShort4 = 40;
  MTLDataTypeUShort = 41;
  MTLDataTypeUShort2 = 42;
  MTLDataTypeUShort3 = 43;
  MTLDataTypeUShort4 = 44;
  MTLDataTypeChar = 45;
  MTLDataTypeChar2 = 46;
  MTLDataTypeChar3 = 47;
  MTLDataTypeChar4 = 48;
  MTLDataTypeUChar = 49;
  MTLDataTypeUChar2 = 50;
  MTLDataTypeUChar3 = 51;
  MTLDataTypeUChar4 = 52;
  MTLDataTypeBool = 53;
  MTLDataTypeBool2 = 54;
  MTLDataTypeBool3 = 55;
  MTLDataTypeBool4 = 56;

type
  MTLArgumentType = NSUInteger;
  MTLArgumentTypePtr = ^MTLArgumentType;

const
  MTLArgumentTypeBuffer = 0;
  MTLArgumentTypeThreadgroupMemory = 1;
  MTLArgumentTypeTexture = 2;
  MTLArgumentTypeSampler = 3;

type
  MTLArgumentAccess = NSUInteger;
  MTLArgumentAccessPtr = ^MTLArgumentAccess;

const
  MTLArgumentAccessReadOnly = 0;
  MTLArgumentAccessReadWrite = 1;
  MTLArgumentAccessWriteOnly = 2;
{$endif}

{$ifdef CLASSES}

type
  MTLStructMember = objcclass external (NSObject)
  public
    function name: NSString; message 'name';
    function offset: NSUInteger; message 'offset';
    function dataType: MTLDataType; message 'dataType';
    function structType: nullable MTLStructTypePtr; message 'structType';
    function arrayType: nullable MTLArrayTypePtr; message 'arrayType';
  end;

type
  MTLStructType = objcclass external (NSObject)
  public
    function members: MTLStructMember *ProtocolPtr; message 'members';
    function memberByName (name: NSString): nullable MTLStructMemberPtr; message 'memberByName:';
  end;

type
  MTLArrayType = objcclass external (NSObject)
  public
    function arrayLength: NSUInteger; message 'arrayLength';
    function elementType: MTLDataType; message 'elementType';
    function stride: NSUInteger; message 'stride';
    function elementStructType: nullable MTLStructTypePtr; message 'elementStructType';
    function elementArrayType: nullable MTLArrayTypePtr; message 'elementArrayType';
  end;

type
  MTLArgument = objcclass external (NSObject)
  public
    function name: NSString; message 'name';
    function type_: MTLArgumentType; message 'type';
    function access: MTLArgumentAccess; message 'access';
    function index: NSUInteger; message 'index';
    function isActive: boolean; message 'isActive';
    function bufferAlignment: NSUInteger; message 'bufferAlignment';
    function bufferDataSize: NSUInteger; message 'bufferDataSize';
    function bufferDataType: MTLDataType; message 'bufferDataType';
    function bufferStructType: MTLStructType; message 'bufferStructType';
    function threadgroupMemoryAlignment: NSUInteger; message 'threadgroupMemoryAlignment';
    function threadgroupMemoryDataSize: NSUInteger; message 'threadgroupMemoryDataSize';
    function textureType: MTLTextureType; message 'textureType';
    function textureDataType: MTLDataType; message 'textureDataType';
    function isDepthTexture: boolean; message 'isDepthTexture';
    function arrayLength: NSUInteger; message 'arrayLength';
  end;
{$endif}

