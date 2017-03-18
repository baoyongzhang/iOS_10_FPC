{$mode delphi}
{$modeswitch objectivec1}
{$modeswitch cvar}

unit DefinedClassesCoreImage;
interface

type
  CIColor = objcclass external;
  CIColorKernel = objcclass external;
  CIContext = objcclass external;
  CIDetector = objcclass external;
  CIFaceFeature = objcclass external;
  CIFeature = objcclass external;
  CIFilter = objcclass external;
  CIFilterShape = objcclass external;
  CIImage = objcclass external;
  CIImageAccumulator = objcclass external;
  CIImageProcessorKernel = objcclass external;
  CIKernel = objcclass external;
  CIQRCodeFeature = objcclass external;
  CIRectangleFeature = objcclass external;
  CISampler = objcclass external;
  CIVector = objcclass external;
  CIWarpKernel = objcclass external;
  CIFilterConstructorProtocol = objcprotocol external name 'CIFilterConstructor';
  CIImageProcessorInputProtocol = objcprotocol external name 'CIImageProcessorInput';
  CIImageProcessorOutputProtocol = objcprotocol external name 'CIImageProcessorOutput';

type
  NSData = objcclass external;
  NSDictionary = objcclass external;
  NSString = objcclass external;
  NSURL = objcclass external;
  MTLCommandBufferProtocol = objcprotocol external name 'MTLCommandBuffer';
  MTLDeviceProtocol = objcprotocol external name 'MTLDevice';
  MTLTextureProtocol = objcprotocol external name 'MTLTexture';

implementation
end.
