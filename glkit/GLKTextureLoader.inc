{ Parsed from GLKit.framework GLKTextureLoader.h }

{ Types from GLKTextureLoader }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  GLKTextureInfoPtr = ^GLKTextureInfo;
  GLKTextureLoaderPtr = ^GLKTextureLoader;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  GLKTextureLoaderApplyPremultiplication: NSString { available in 10_8, 5_0 }; cvar; external;
  GLKTextureLoaderGenerateMipmaps: NSString { available in 10_8, 5_0 }; cvar; external;
  GLKTextureLoaderOriginBottomLeft: NSString { available in 10_8, 5_0 }; cvar; external;
  GLKTextureLoaderGrayscaleAsAlpha: NSString { available in 5_0 }; cvar; external;
{$endif}

{$if defined(TARGET_OS_IPHONE) or (defined(MAC_OS_X_VERSION_10_9))}
{$ifdef EXTERNAL_SYMBOLS}
var
  GLKTextureLoaderSRGB: NSString { available in 10_9, 7_0 }; cvar; external;
{$endif}

{$else}
{$ifdef EXTERNAL_SYMBOLS}
var
  GLKTextureLoaderSRGB: NSString; cvar; external;
{$endif}

{$endif}
{$ifdef EXTERNAL_SYMBOLS}
var
  GLKTextureLoaderErrorDomain: NSString { available in 10_8, 5_0 }; cvar; external;
  GLKTextureLoaderErrorKey: NSString { available in 10_8, 5_0 }; cvar; external;
  GLKTextureLoaderGLErrorKey: NSString { available in 10_8, 5_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  GLKTextureLoaderError = GLuint;
  GLKTextureLoaderErrorPtr = ^GLKTextureLoaderError;

const
  GLKTextureLoaderErrorFileOrURLNotFound = 0;
  GLKTextureLoaderErrorInvalidNSData = 1;
  GLKTextureLoaderErrorInvalidCGImage = 2;
  GLKTextureLoaderErrorUnknownPathType = 3;
  GLKTextureLoaderErrorUnknownFileType = 4;
  GLKTextureLoaderErrorPVRAtlasUnsupported = 5;
  GLKTextureLoaderErrorCubeMapInvalidNumFiles = 6;
  GLKTextureLoaderErrorCompressedTextureUpload = 7;
  GLKTextureLoaderErrorUncompressedTextureUpload = 8;
  GLKTextureLoaderErrorUnsupportedCubeMapDimensions = 9;
  GLKTextureLoaderErrorUnsupportedBitDepth = 10;
  GLKTextureLoaderErrorUnsupportedPVRFormat = 11;
  GLKTextureLoaderErrorDataPreprocessingFailure = 12;
  GLKTextureLoaderErrorMipmapUnsupported = 13;
  GLKTextureLoaderErrorUnsupportedOrientation = 14;
  GLKTextureLoaderErrorReorientationFailure = 15;
  GLKTextureLoaderErrorAlphaPremultiplicationFailure = 16;
  GLKTextureLoaderErrorInvalidEAGLContext = 17;
  GLKTextureLoaderErrorIncompatibleFormatSRGB = 18;
  GLKTextureLoaderErrorUnsupportedTextureTarget = 19;

type
  GLKTextureInfoAlphaState = GLint;
  GLKTextureInfoAlphaStatePtr = ^GLKTextureInfoAlphaState;

const
  GLKTextureInfoAlphaStateNone = 0;
  GLKTextureInfoAlphaStateNonPremultiplied = 1;
  GLKTextureInfoAlphaStatePremultiplied = 2;

type
  GLKTextureInfoOrigin = GLint;
  GLKTextureInfoOriginPtr = ^GLKTextureInfoOrigin;

const
  GLKTextureInfoOriginUnknown = 0;
  GLKTextureInfoOriginTopLeft = 1;
  GLKTextureInfoOriginBottomLeft = 2;
{$endif}

{$ifdef CLASSES}

type
  GLKTextureInfo = objcclass external (NSObject, NSCopyingProtocol)
  private
    name: GLuint;
    target: GLenum;
    width: GLuint;
    height: GLuint;
    depth: GLuint;
    alphaState: GLKTextureInfoAlphaState;
    textureOrigin: GLKTextureInfoOrigin;
    containsMipmaps: boolean;
    mimapLevelCount: GLuint;
    arrayLength: GLuint;
  public
    function name_: GLuint; message 'name';
    function target_: GLenum; message 'target';
    function width_: GLuint; message 'width';
    function height_: GLuint; message 'height';
    function depth_: GLuint; message 'depth';
    function alphaState_: GLKTextureInfoAlphaState; message 'alphaState';
    function textureOrigin_: GLKTextureInfoOrigin; message 'textureOrigin';
    function containsMipmaps_: boolean; message 'containsMipmaps';
    function mimapLevelCount_: GLuint; message 'mimapLevelCount';
    function arrayLength_: GLuint; message 'arrayLength';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

{$ifdef TYPES}
type
  GLKTextureLoaderCallback = OpaqueCBlock;
{$endif}

{$ifdef CLASSES}

type
  GLKTextureLoader = objcclass external (NSObject)
  private
  public
    class function textureWithContentsOfFile_options_error (path: NSString; options: nullable NSDictionaryPtr; outError: NSError * __nullable * __nullable): nullable GLKTextureInfoPtr; message 'textureWithContentsOfFile:options:error:';
    class function textureWithContentsOfURL_options_error (url: NSURL; options: nullable NSDictionaryPtr; outError: NSError * __nullable * __nullable): nullable GLKTextureInfoPtr; message 'textureWithContentsOfURL:options:error:';
    class function textureWithName_scaleFactor_bundle_options_error (name: NSString; scaleFactor: CGFloat; bundle: nullable NSBundlePtr; options: nullable NSDictionaryPtr; outError: NSError * __nullable * __nullable): nullable GLKTextureInfoPtr; message 'textureWithName:scaleFactor:bundle:options:error:';
    class function textureWithContentsOfData_options_error (data: NSData; options: nullable NSDictionaryPtr; outError: NSError * __nullable * __nullable): nullable GLKTextureInfoPtr; message 'textureWithContentsOfData:options:error:';
    class function textureWithCGImage_options_error (cgImage: CGImageRef; options: nullable NSDictionaryPtr; outError: NSError * __nullable * __nullable): nullable GLKTextureInfoPtr; message 'textureWithCGImage:options:error:';
    class function cubeMapWithContentsOfFiles_options_error (paths: idProtocolPtr; options: nullable NSDictionaryPtr; outError: NSError * __nullable * __nullable): nullable GLKTextureInfoPtr; message 'cubeMapWithContentsOfFiles:options:error:';
    class function cubeMapWithContentsOfFile_options_error (path: NSString; options: nullable NSDictionaryPtr; outError: NSError * __nullable * __nullable): nullable GLKTextureInfoPtr; message 'cubeMapWithContentsOfFile:options:error:';
    class function cubeMapWithContentsOfURL_options_error (url: NSURL; options: nullable NSDictionaryPtr; outError: NSError * __nullable * __nullable): nullable GLKTextureInfoPtr; message 'cubeMapWithContentsOfURL:options:error:';
    {$if defined(TARGET_OS_IPHONE)}
    function initWithSharegroup (sharegroup: EAGLSharegroup): instancetype; message 'initWithSharegroup:';
    {$else}
    function initWithShareContext (context: NSOpenGLContextPtr): instancetype; message 'initWithShareContext:';
    {$endif}
    procedure textureWithContentsOfFile_options_queue_completionHandler (path: NSString; options: nullable NSDictionaryPtr; queue: nullable dispatch_queue_t; block: GLKTextureLoaderCallback); message 'textureWithContentsOfFile:options:queue:completionHandler:';
    procedure textureWithContentsOfURL_options_queue_completionHandler (url: NSURL; options: nullable NSDictionaryPtr; queue: nullable dispatch_queue_t; block: GLKTextureLoaderCallback); message 'textureWithContentsOfURL:options:queue:completionHandler:';
    procedure textureWithName_scaleFactor_bundle_options_queue_completionHandler (name: NSString; scaleFactor: CGFloat; bundle: nullable NSBundlePtr; options: nullable NSDictionaryPtr; queue: nullable dispatch_queue_t; block: GLKTextureLoaderCallback); message 'textureWithName:scaleFactor:bundle:options:queue:completionHandler:';
    procedure textureWithContentsOfData_options_queue_completionHandler (data: NSData; options: nullable NSDictionaryPtr; queue: nullable dispatch_queue_t; block: GLKTextureLoaderCallback); message 'textureWithContentsOfData:options:queue:completionHandler:';
    procedure textureWithCGImage_options_queue_completionHandler (cgImage: CGImageRef; options: nullable NSDictionaryPtr; queue: nullable dispatch_queue_t; block: GLKTextureLoaderCallback); message 'textureWithCGImage:options:queue:completionHandler:';
    procedure cubeMapWithContentsOfFiles_options_queue_completionHandler (paths: idProtocolPtr; options: nullable NSDictionaryPtr; queue: nullable dispatch_queue_t; block: GLKTextureLoaderCallback); message 'cubeMapWithContentsOfFiles:options:queue:completionHandler:';
    procedure cubeMapWithContentsOfFile_options_queue_completionHandler (path: NSString; options: nullable NSDictionaryPtr; queue: nullable dispatch_queue_t; block: GLKTextureLoaderCallback); message 'cubeMapWithContentsOfFile:options:queue:completionHandler:';
    procedure cubeMapWithContentsOfURL_options_queue_completionHandler (url: NSURL; options: nullable NSDictionaryPtr; queue: nullable dispatch_queue_t; block: GLKTextureLoaderCallback); message 'cubeMapWithContentsOfURL:options:queue:completionHandler:';
  end;
{$endif}

