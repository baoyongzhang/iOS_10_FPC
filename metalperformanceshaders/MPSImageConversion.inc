{ Parsed from MetalPerformanceShaders.framework MPSImageConversion.h }

{$ifdef TYPES}
type
  MPSImageConversionPtr = ^MPSImageConversion;
{$endif}

{$ifndef MPS_Conversions_h}
{$ifdef CLASSES}

type
  MPSImageConversion = objcclass external (MPSUnaryImageKernel)
  public
    function sourceAlpha: MPSAlphaType; message 'sourceAlpha';
    function destinationAlpha: MPSAlphaType; message 'destinationAlpha';
    function initWithDevice_srcAlpha_destAlpha_backgroundColor_conversionInfo (device_: nonnull MTLDeviceProtocol; srcAlpha: MPSAlphaType; destAlpha: MPSAlphaType; backgroundColor: nullable CGFloatPtr; conversionInfo: nullable CGColorConversionInfoRef): nonnull instancetype; message 'initWithDevice:srcAlpha:destAlpha:backgroundColor:conversionInfo:';
  end;
{$endif}

{$endif}
