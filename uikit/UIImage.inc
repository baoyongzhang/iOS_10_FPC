{ Parsed from UIKit.framework UIImage.h }

{ Types from UIImage }
{$ifdef TYPES}






{$endif}


{$ifdef TYPES}
type
  UIImagePtr = ^UIImage;
{$endif}

{$ifdef TYPES}
type
  UIImageOrientation = NSInteger;
  UIImageOrientationPtr = ^UIImageOrientation;

const
  UIImageOrientationUp = 0;
  UIImageOrientationDown = 1;
  UIImageOrientationLeft = 2;
  UIImageOrientationRight = 3;
  UIImageOrientationUpMirrored = 4;
  UIImageOrientationDownMirrored = 5;
  UIImageOrientationLeftMirrored = 6;
  UIImageOrientationRightMirrored = 7;

type
  UIImageResizingMode = NSInteger;
  UIImageResizingModePtr = ^UIImageResizingMode;

const
  UIImageResizingModeTile = 0;
  UIImageResizingModeStretch = 1;

type
  UIImageRenderingMode = NSInteger;
  UIImageRenderingModePtr = ^UIImageRenderingMode;

const
  UIImageRenderingModeAutomatic = 0;
  UIImageRenderingModeAlwaysOriginal = 1;
  UIImageRenderingModeAlwaysTemplate = 2;
{$endif}

{$ifdef CLASSES}

type
  UIImage = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    class function imageNamed (name: NSString): nullable UIImagePtr; message 'imageNamed:';
    {$if defined(__NULL_MACRO__)}
    class function imageNamed_inBundle_compatibleWithTraitCollection (name: NSString; bundle: nullable NSBundlePtr; traitCollection: nullable UITraitCollectionPtr): nullable UIImagePtr; message 'imageNamed:inBundle:compatibleWithTraitCollection:'; { available in 8_0 }
    {$endif}
    class function imageWithContentsOfFile (path: NSString): nullable UIImagePtr; message 'imageWithContentsOfFile:';
    class function imageWithData (data: NSData): nullable UIImagePtr; message 'imageWithData:';
    class function imageWithData_scale (data: NSData; scale: CGFloat): nullable UIImagePtr; message 'imageWithData:scale:'; { available in 6_0 }
    class function imageWithCGImage (cgImage: CGImageRef): UIImage; message 'imageWithCGImage:';
    class function imageWithCGImage_scale_orientation (cgImage: CGImageRef; scale: CGFloat; orientation: UIImageOrientation): UIImage; message 'imageWithCGImage:scale:orientation:'; { available in 4_0 }
    {$if defined(__NULL_MACRO__)}
    class function imageWithCIImage (ciImage_: CIImage): UIImage; message 'imageWithCIImage:'; { available in 5_0 }
    class function imageWithCIImage_scale_orientation (ciImage_: CIImage; scale: CGFloat; orientation: UIImageOrientation): UIImage; message 'imageWithCIImage:scale:orientation:'; { available in 6_0 }
    {$endif}
    function initWithContentsOfFile (path: NSString): nullable instancetype; message 'initWithContentsOfFile:';
    function initWithData (data: NSData): nullable instancetype; message 'initWithData:';
    function initWithData_scale (data: NSData; scale: CGFloat): nullable instancetype; message 'initWithData:scale:'; { available in 6_0 }
    function initWithCGImage (cgImage: CGImageRef): instancetype; message 'initWithCGImage:';
    function initWithCGImage_scale_orientation (cgImage: CGImageRef; scale: CGFloat; orientation: UIImageOrientation): instancetype; message 'initWithCGImage:scale:orientation:'; { available in 4_0 }
    {$if defined(__NULL_MACRO__)}
    function initWithCIImage (ciImage_: CIImage): instancetype; message 'initWithCIImage:'; { available in 5_0 }
    function initWithCIImage_scale_orientation (ciImage_: CIImage; scale: CGFloat; orientation: UIImageOrientation): instancetype; message 'initWithCIImage:scale:orientation:'; { available in 6_0 }
    {$endif}
    function size: CGSize; message 'size';
    function CGImage: CGImageRef; message 'CGImage';
    function CGImage_: nullable CGImageRef; message 'CGImage'; { CF_RETURNS_NOT_RETAINED }
    {$if defined(__NULL_MACRO__)}
    function CIImage_: CIImage; message 'CIImage';
    {$endif}
    function imageOrientation: UIImageOrientation; message 'imageOrientation';
    function scale: CGFloat; message 'scale';
    class function animatedImageNamed_duration (name: NSString; duration: NSTimeInterval): nullable UIImagePtr; message 'animatedImageNamed:duration:'; { available in 5_0 }
    class function animatedResizableImageNamed_capInsets_duration (name: NSString; capInsets: UIEdgeInsets; duration: NSTimeInterval): nullable UIImagePtr; message 'animatedResizableImageNamed:capInsets:duration:'; { available in 5_0 }
    class function animatedResizableImageNamed_capInsets_resizingMode_duration (name: NSString; capInsets: UIEdgeInsets; resizingMode: UIImageResizingMode; duration: NSTimeInterval): nullable UIImagePtr; message 'animatedResizableImageNamed:capInsets:resizingMode:duration:'; { available in 6_0 }
    class function animatedImageWithImages_duration (images: UIImage *ProtocolPtr; duration: NSTimeInterval): nullable UIImagePtr; message 'animatedImageWithImages:duration:'; { available in 5_0 }
    function images: UIImage *ProtocolPtr; message 'images';
    function duration: NSTimeInterval; message 'duration';
    procedure drawAtPoint (point: CGPoint); message 'drawAtPoint:';
    procedure drawAtPoint_blendMode_alpha (point: CGPoint; blendMode: CGBlendMode; alpha: CGFloat); message 'drawAtPoint:blendMode:alpha:';
    procedure drawInRect (rect: CGRect); message 'drawInRect:';
    procedure drawInRect_blendMode_alpha (rect: CGRect; blendMode: CGBlendMode; alpha: CGFloat); message 'drawInRect:blendMode:alpha:';
    procedure drawAsPatternInRect (rect: CGRect); message 'drawAsPatternInRect:';
    function resizableImageWithCapInsets (capInsets: UIEdgeInsets): UIImage; message 'resizableImageWithCapInsets:'; { available in 5_0 }
    function resizableImageWithCapInsets_resizingMode (capInsets: UIEdgeInsets; resizingMode: UIImageResizingMode): UIImage; message 'resizableImageWithCapInsets:resizingMode:'; { available in 6_0 }
    function capInsets: UIEdgeInsets; message 'capInsets';
    function resizingMode: UIImageResizingMode; message 'resizingMode';
    function imageWithAlignmentRectInsets (alignmentInsets: UIEdgeInsets): UIImage; message 'imageWithAlignmentRectInsets:'; { available in 6_0 }
    function alignmentRectInsets: UIEdgeInsets; message 'alignmentRectInsets';
    function imageWithRenderingMode (renderingMode: UIImageRenderingMode): UIImage; message 'imageWithRenderingMode:'; { available in 7_0 }
    function renderingMode: UIImageRenderingMode; message 'renderingMode';
    {$if defined(__NULL_MACRO__)}
    function imageRendererFormat: UIGraphicsImageRendererFormat; message 'imageRendererFormat';
    {$endif}
    {$if defined(__NULL_MACRO__)}
    function traitCollection: UITraitCollection; message 'traitCollection';
    function imageAsset: UIImageAsset; message 'imageAsset';
    {$endif}
    function imageFlippedForRightToLeftLayoutDirection: UIImage; message 'imageFlippedForRightToLeftLayoutDirection'; { available in 9_0 }
    function flipsForRightToLeftLayoutDirection: boolean; message 'flipsForRightToLeftLayoutDirection';
    function imageWithHorizontallyFlippedOrientation: UIImage; message 'imageWithHorizontallyFlippedOrientation'; { available in 10_0 }

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;


type
  UIImageDeprecated = objccategory external (UIImage)
    function stretchableImageWithLeftCapWidth_topCapHeight (leftCapWidth: NSInteger; topCapHeight: NSInteger): UIImage; message 'stretchableImageWithLeftCapWidth:topCapHeight:';
    function __TVOS_PROHIBITED_: NSInteger leftCapWidth; message 'TVOS_PROHIBITED';
    function __TVOS_PROHIBITED_: NSInteger topCapHeight; message 'TVOS_PROHIBITED';
  end;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef CLASSES}

type
  UIKitAdditions = objccategory external (CIImage)
    function initWithImage (image: UIImage): nullable instancetype; message 'initWithImage:'; { available in 5_0 }
    function initWithImage_options (image: UIImage; options: nullable NSDictionaryPtr): nullable instancetype; message 'initWithImage:options:'; { available in 5_0 }
  end;
{$endif}

{$endif}
{$ifdef FUNCTIONS}
function UIImagePNGRepresentation(image: UIImage* __nonnull): NSData * __nullable; cdecl; external;
function UIImageJPEGRepresentation(image: UIImage* __nonnull; compressionQuality: CGFloat): NSData * __nullable; cdecl; external;
{$endif}

