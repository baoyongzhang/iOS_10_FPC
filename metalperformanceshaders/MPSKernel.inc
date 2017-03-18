{ Parsed from MetalPerformanceShaders.framework MPSKernel.h }

{$ifdef TYPES}
type
  MPSKernelPtr = ^MPSKernel;
{$endif}

{$ifndef MPS_MPSKernel_h}

{$ifdef CLASSES}

type
  MPSKernel = objcclass external (NSObject, NSCopyingProtocol)
  public
    procedure setOptions(newValue: MPSKernelOptions); message 'setOptions:';
    function options: MPSKernelOptions; message 'options';
    function device: MTLDeviceProtocol; message 'device';
    procedure setLabel(newValue: NSString); message 'setLabel:';
    function label_: NSString; message 'label';
    function initWithDevice (device_: nonnull MTLDeviceProtocol): nonnull instancetype; message 'initWithDevice:'; { NS_DESIGNATED_INITIALIZER }
    function copyWithZone_device (zone: nullable NSZonePtr; device_: nullable MTLDeviceProtocol): nonnull instancetype; message 'copyWithZone:device:';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

{$endif}
