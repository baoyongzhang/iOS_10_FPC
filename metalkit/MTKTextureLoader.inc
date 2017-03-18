{ Parsed from MetalKit.framework MTKTextureLoader.h }

{$ifdef TYPES}
type
  MTKTextureLoaderPtr = ^MTKTextureLoader;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  MTKTextureLoaderErrorDomain: NSString *__nonnull { available in 10_11, 9_0 }; cvar; external;
  MTKTextureLoaderErrorKey: NSString *__nonnull { available in 10_11, 9_0 }; cvar; external;
  MTKTextureLoaderOptionAllocateMipmaps: NSString *__nonnull { available in 10_11, 9_0 }; cvar; external;
  MTKTextureLoaderOptionGenerateMipmaps: NSString *__nonnull { available in 10_12, 10_0 }; cvar; external;
  MTKTextureLoaderOptionSRGB: NSString *__nonnull { available in 10_11, 9_0 }; cvar; external;
  MTKTextureLoaderOptionTextureUsage: NSString *__nonnull { available in 10_11, 9_0 }; cvar; external;
  MTKTextureLoaderOptionTextureCPUCacheMode: NSString *__nonnull { available in 10_11, 9_0 }; cvar; external;
  MTKTextureLoaderOptionTextureStorageMode: NSString *__nonnull { available in 10_12, 10_0 }; cvar; external;
  MTKTextureLoaderOptionCubeLayout: NSString *__nonnull { available in 10_12, 10_0 }; cvar; external;
  MTKTextureLoaderCubeLayoutVertical: NSString *__nonnull { available in 10_12, 10_0 }; cvar; external;
  MTKTextureLoaderOptionOrigin: NSString *__nonnull { available in 10_12, 10_0 }; cvar; external;
  MTKTextureLoaderOriginTopLeft: NSString *__nonnull { available in 10_12, 10_0 }; cvar; external;
  MTKTextureLoaderOriginBottomLeft: NSString *__nonnull { available in 10_12, 10_0 }; cvar; external;
  MTKTextureLoaderOriginFlippedVertically: NSString *__nonnull { available in 10_12, 10_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  MTKTextureLoaderCallback = OpaqueCBlock;
  MTKTextureLoaderArrayCallback = OpaqueCBlock { available in 10_12, 10_0 };
{$endif}

{$ifdef CLASSES}

type
  MTKTextureLoader = objcclass external (NSObject)
  public
    function device: MTLDeviceProtocol; message 'device';
    function init: nonnull instancetype; message 'init';
    function initWithDevice (device_: nonnull MTLDeviceProtocol): nonnull instancetype; message 'initWithDevice:';
    procedure newTextureWithContentsOfURL_options_completionHandler (URL: nonnull NSURLPtr; options: nullable NSDictionaryPtr; completionHandler: nonnull MTKTextureLoaderCallback); message 'newTextureWithContentsOfURL:options:completionHandler:';
    procedure newTextureWithName_scaleFactor_bundle_options_completionHandler (name: nonnull NSStringPtr; scaleFactor: CGFloat; bundle: nullable NSBundlePtr; options: nullable NSDictionaryPtr; completionHandler: nonnull MTKTextureLoaderCallback); message 'newTextureWithName:scaleFactor:bundle:options:completionHandler:'; { available in 10_12, 10_0 }
    procedure newTexturesWithContentsOfURLs_options_completionHandler (URLs: nonnull NSURL *ProtocolPtr; options: nullable NSDictionaryPtr; completionHandler: nonnull MTKTextureLoaderArrayCallback); message 'newTexturesWithContentsOfURLs:options:completionHandler:'; { available in 10_12, 10_0 }
    procedure newTexturesWithNames_scaleFactor_bundle_options_completionHandler (names: nonnull NSString *ProtocolPtr; scaleFactor: CGFloat; bundle: nullable NSBundlePtr; options: nullable NSDictionaryPtr; completionHandler: nonnull MTKTextureLoaderArrayCallback); message 'newTexturesWithNames:scaleFactor:bundle:options:completionHandler:'; { available in 10_12, 10_0 }
    procedure newTextureWithData_options_completionHandler (data: nonnull NSDataPtr; options: nullable NSDictionaryPtr; completionHandler: nonnull MTKTextureLoaderCallback); message 'newTextureWithData:options:completionHandler:';
    procedure newTextureWithCGImage_options_completionHandler (cgImage: nonnull CGImageRef; options: nullable NSDictionaryPtr; completionHandler: nonnull MTKTextureLoaderCallback); message 'newTextureWithCGImage:options:completionHandler:';
    procedure newTextureWithMDLTexture_options_completionHandler (texture: nonnull MDLTexturePtr; options: nullable NSDictionaryPtr; completionHandler: nonnull MTKTextureLoaderCallback); message 'newTextureWithMDLTexture:options:completionHandler:'; { available in 10_12, 10_0 }
    function newTextureWithContentsOfURL_options_error (URL: nonnull NSURLPtr; options: nullable NSDictionaryPtr; error: NSError *__nullable *__nullable): nullable MTLTextureProtocol; message 'newTextureWithContentsOfURL:options:error:';
    function newTexturesWithContentsOfURLs_options_error (URLs: nonnull NSURL *ProtocolPtr; options: nullable NSDictionaryPtr; error: NSError *__nullable *__nullable): id <MTLTextureProtocol> * __nonnull; message 'newTexturesWithContentsOfURLs:options:error:'; { available in 10_12, 10_0 }
    function newTextureWithData_options_error (data: nonnull NSDataPtr; options: nullable NSDictionaryPtr; error: NSError *__nullable *__nullable): nullable MTLTextureProtocol; message 'newTextureWithData:options:error:';
    function newTextureWithCGImage_options_error (cgImage: nonnull CGImageRef; options: nullable NSDictionaryPtr; error: NSError *__nullable *__nullable): nullable MTLTextureProtocol; message 'newTextureWithCGImage:options:error:';
    function newTextureWithMDLTexture_options_error (texture: nonnull MDLTexturePtr; options: nullable NSDictionaryPtr; error: NSError *__nullable *__nullable): nullable MTLTextureProtocol; message 'newTextureWithMDLTexture:options:error:'; { available in 10_12, 10_0 }
    function newTextureWithName_scaleFactor_bundle_options_error (name: nonnull NSStringPtr; scaleFactor: CGFloat; bundle: nullable NSBundlePtr; options: nullable NSDictionaryPtr; error: NSError *__nullable *__nullable): nullable MTLTextureProtocol; message 'newTextureWithName:scaleFactor:bundle:options:error:'; { available in 10_12, 10_0 }
  end;
{$endif}

