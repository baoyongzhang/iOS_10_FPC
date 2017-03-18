{ Parsed from CoreImage.framework CIKernel.h }

{$ifdef TYPES}
type
  CIKernelPtr = ^CIKernel;
  CIColorKernelPtr = ^CIColorKernel;
  CIWarpKernelPtr = ^CIWarpKernel;
{$endif}

{$ifdef TYPES}
type
  CIKernelROICallback = OpaqueCBlock;
{$endif}

{$ifdef CLASSES}

type
  CIKernel = objcclass external (NSObject)
  private
    _priv: pointer;
  public
    class function kernelsWithString (string_: NSString): nullable CIKernel *ProtocolPtr; message 'kernelsWithString:'; { available in 10_4, 8_0 }
    class function kernelWithString (string_: NSString): nullable instancetype; message 'kernelWithString:'; { available in 10_10, 8_0 }
    function name: NSString; message 'name';
    procedure setROISelector (method: SEL); message 'setROISelector:'; { available in 10_4, 9_0 }
    function applyWithExtent_roiCallback_arguments (extent: CGRect; callback: CIKernelROICallback; args: nullable idProtocolPtr): nullable CIImagePtr; message 'applyWithExtent:roiCallback:arguments:'; { available in 10_11, 8_0 }
  end;

type
  CIColorKernel = objcclass external (CIKernel)
  private
  public
    class function kernelWithString (string_: NSString): nullable instancetype; message 'kernelWithString:';
    function applyWithExtent_arguments (extent: CGRect; args: nullable idProtocolPtr): nullable CIImagePtr; message 'applyWithExtent:arguments:';
  end;

type
  CIWarpKernel = objcclass external (CIKernel)
  private
  public
    class function kernelWithString (string_: NSString): nullable instancetype; message 'kernelWithString:';
    function applyWithExtent_roiCallback_inputImage_arguments (extent: CGRect; callback: CIKernelROICallback; image: CIImage; args: nullable idProtocolPtr): nullable CIImagePtr; message 'applyWithExtent:roiCallback:inputImage:arguments:';
  end;
{$endif}

