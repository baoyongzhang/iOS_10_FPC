{ Parsed from MetalPerformanceShaders.framework MPSTypes.h }

{$ifndef MPS_Types_h}

{$if (defined(DOXYGEN))}

{$else}
{$ifdef TYPES}
type
  MPSKernelOptions = NSUInteger;
  MPSKernelOptionsPtr = ^MPSKernelOptions;
{$endif}

{$endif}

{$if (defined(DOXYGEN))}

{$else}
{$ifdef TYPES}
type
  MPSImageEdgeMode = NSUInteger;
  MPSImageEdgeModePtr = ^MPSImageEdgeMode;
{$endif}

{$endif}
{$ifdef TYPES}
type
  MPSAlphaType = NSUInteger;
  MPSAlphaTypePtr = ^MPSAlphaType;

const
  MPSAlphaTypeNonPremultiplied = 0 { available starting in __MAC_10_12, __IPHONE_10_0, __TVOS_10_0 };
  MPSAlphaTypeAlphaIsOne = 1 { available starting in __MAC_10_12, __IPHONE_10_0, __TVOS_10_0 };
  MPSAlphaTypePremultiplied = 2 { available starting in __MAC_10_12, __IPHONE_10_0, __TVOS_10_0 };

type
  MPSImageFeatureChannelFormat = NSUInteger;
  MPSImageFeatureChannelFormatPtr = ^MPSImageFeatureChannelFormat;

const
  MPSImageFeatureChannelFormatInvalid = 0 { available starting in __MAC_10_12, __IPHONE_10_0, __TVOS_10_0 };
  MPSImageFeatureChannelFormatUnorm8 = 1 { available starting in __MAC_10_12, __IPHONE_10_0, __TVOS_10_0 };
  MPSImageFeatureChannelFormatUnorm16 = 2 { available starting in __MAC_10_12, __IPHONE_10_0, __TVOS_10_0 };
  MPSImageFeatureChannelFormatFloat16 = 3 { available starting in __MAC_10_12, __IPHONE_10_0, __TVOS_10_0 };
  MPSImageFeatureChannelFormatFloat32 = 4 { available starting in __MAC_10_12, __IPHONE_10_0, __TVOS_10_0 };

type
  MPSDataType = cuint32;
  MPSDataTypePtr = ^MPSDataType;

const
  MPSDataTypeFloatBit = $10000000 { available starting in  __MAC_10_12, __IPHONE_10_0, __TVOS_10_0 };
  MPSDataTypeFloat32 = MPSDataTypeFloatBit + 32 { available starting in  __MAC_10_12, __IPHONE_10_0, __TVOS_10_0 };

type
  MPSOffset = record
    x: NSInteger;
    y: NSInteger;
    z: NSInteger;
  end;
type
  MPSOffsetPtr = ^MPSOffset;
type
  MPSOrigin = record
    x: double;
    y: double;
    z: double;
  end;
type
  MPSOriginPtr = ^MPSOrigin;
type
  MPSSize = record
    width: double;
    height: double;
    depth: double;
  end;
type
  MPSSizePtr = ^MPSSize;
type
  MPSRegion = record
    origin: MPSOrigin;
    size: MPSSize;
  end;
type
  MPSRegionPtr = ^MPSRegion;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  MPSRectNoClip: MTLRegion; cvar; external;
{$endif}

{$ifdef TYPES}
type
  MPSScaleTransform = record
    scaleX, scaleY: double;
    translateX, translateY: double;
  end;
type
  MPSScaleTransformPtr = ^MPSScaleTransform;

type
  MPSCopyAllocator = OpaqueCBlock;
{$endif}

{$endif}
