{ Parsed from CoreImage.framework CIImageProcessor.h }

{ Types from CIImageProcessorKernel }
{$ifdef TYPES}


{$endif}


{ Types from CIImageProcessorInputProtocol }
{$ifdef TYPES}

{$endif}


{ Types from CIImageProcessorOutputProtocol }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  CIImageProcessorKernelPtr = ^CIImageProcessorKernel;
  CIImageProcessorInputProtocolPtr = ^CIImageProcessorInputProtocol;
  CIImageProcessorOutputProtocolPtr = ^CIImageProcessorOutputProtocol;
{$endif}

{$ifdef CLASSES}

type
  CIImageProcessorKernel = objcclass external (NSObject)
  public
    class function processWithInputs_arguments_output_error (inputs: nullable id<CIImageProcessorInputProtocol>Ptr; arguments: nullable NSDictionaryPtr; output: CIImageProcessorOutputProtocol; error: NSErrorPtr): boolean; message 'processWithInputs:arguments:output:error:';
    class function roiForInput_arguments_outputRect (input: cint; arguments: nullable NSDictionaryPtr; outputRect: CGRect): CGRect; message 'roiForInput:arguments:outputRect:';
    class function formatForInputAtIndex (input: cint): CIFormat; message 'formatForInputAtIndex:';
    {$if defined(__has_feature)}
    function outputFormat: CIFormat; message 'outputFormat';
    {$else}
    class function outputFormat: CIFormat; message 'outputFormat';
    {$endif}
    {$if defined(__has_feature)}
    function synchronizeInputs: cbool; message 'synchronizeInputs';
    {$else}
    class function synchronizeInputs: cbool; message 'synchronizeInputs';
    {$endif}
    class function applyWithExtent_inputs_arguments_error (extent: CGRect; inputs: nullable CIImage*ProtocolPtr; args: nullable NSDictionaryPtr; error: NSErrorPtr): nullable CIImagePtr; message 'applyWithExtent:inputs:arguments:error:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  CIImageProcessorInputProtocol = objcprotocol external name 'CIImageProcessorInput'
    function region: CGRect; message 'region';
    function bytesPerRow: size_t; message 'bytesPerRow';
    function format: CIFormat; message 'format';
    function baseAddress: pointer; message 'baseAddress';
    {$if  not defined(TARGET_OS_IPHONE)}
    function surface: IOSurfaceRef; message 'surface';
    {$endif}
    function pixelBuffer: CVPixelBufferRef; message 'pixelBuffer';
    function metalTexture: MTLTextureProtocol; message 'metalTexture';
  end;

type
  CIImageProcessorOutputProtocol = objcprotocol external name 'CIImageProcessorOutput'
    function region: CGRect; message 'region';
    function bytesPerRow: size_t; message 'bytesPerRow';
    function format: CIFormat; message 'format';
    function baseAddress: pointer; message 'baseAddress';
    {$if  not defined(TARGET_OS_IPHONE)}
    function surface: IOSurfaceRef; message 'surface';
    {$endif}
    function pixelBuffer: CVPixelBufferRef; message 'pixelBuffer';
    function metalTexture: MTLTextureProtocol; message 'metalTexture';
    function metalCommandBuffer: MTLCommandBufferProtocol; message 'metalCommandBuffer';
  end;
{$endif}

