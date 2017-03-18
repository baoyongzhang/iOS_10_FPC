{ Parsed from SpriteKit.framework SKTexture.h }

{ Types from SKTexture }
{$ifdef TYPES}


{$endif}


{$ifdef TYPES}
type
  SKTexturePtr = ^SKTexture;
{$endif}

{$ifdef TYPES}
type
  SKTextureFilteringMode = NSInteger;
  SKTextureFilteringModePtr = ^SKTextureFilteringMode;

const
  SKTextureFilteringNearest = 0;
  SKTextureFilteringLinear = 1;
{$endif}

{$ifdef CLASSES}

type
  SKTexture = objcclass external (NSObject, NSCopyingProtocol, NSCodingProtocol)
  public
    class function textureWithImageNamed (name: NSString): instancetype; message 'textureWithImageNamed:';
    class function textureWithRect_inTexture (rect: CGRect; texture: SKTexture): instancetype; message 'textureWithRect:inTexture:';
    class function textureVectorNoiseWithSmoothness_size (smoothness: CGFloat; size: CGSize): instancetype; message 'textureVectorNoiseWithSmoothness:size:'; { available in 10_10, 8_0 }
    class function textureNoiseWithSmoothness_size_grayscale (smoothness: CGFloat; size: CGSize; grayscale: boolean): instancetype; message 'textureNoiseWithSmoothness:size:grayscale:'; { available in 10_10, 8_0 }
    class function textureWithCGImage (image: CGImageRef): instancetype; message 'textureWithCGImage:';
    {$if defined(TARGET_OS_IPHONE)}
    class function textureWithImage (image: UIImage): instancetype; message 'textureWithImage:';
    {$else}
    class function textureWithImage (image: NSImage): instancetype; message 'textureWithImage:';
    {$endif}
    class function textureWithData_size (pixelData: NSData; size: CGSize): instancetype; message 'textureWithData:size:';
    class function textureWithData_size_flipped (pixelData: NSData; size: CGSize; flipped: boolean): instancetype; message 'textureWithData:size:flipped:';
    class function textureWithData_size_rowLength_alignment (pixelData: NSData; size: CGSize; rowLength: cuint; alignment: cuint): instancetype; message 'textureWithData:size:rowLength:alignment:';
    {$if defined(__NULL_MACRO__)}
    function textureByApplyingCIFilter (filter: CIFilter): instancetype; message 'textureByApplyingCIFilter:';
    {$endif}
    function textureByGeneratingNormalMap: instancetype; message 'textureByGeneratingNormalMap'; { available in 10_10, 8_0 }
    function textureByGeneratingNormalMapWithSmoothness_contrast (smoothness: CGFloat; contrast: CGFloat): instancetype; message 'textureByGeneratingNormalMapWithSmoothness:contrast:'; { available in 10_10, 8_0 }
    function textureRect: CGRect; message 'textureRect';
    function size: CGSize; message 'size';
    procedure setFilteringMode(newValue: SKTextureFilteringMode); message 'setFilteringMode:';
    function filteringMode: SKTextureFilteringMode; message 'filteringMode';
    procedure setUsesMipmaps(newValue: boolean); message 'setUsesMipmaps:';
    function usesMipmaps: boolean; message 'usesMipmaps';
    function CGImage CF_RETURNS_RETAINED: CGImageRef; message 'CGImage CF_RETURNS_RETAINED'; { available in 10_11, 9_0 }
    class procedure preloadTextures_withCompletionHandler (textures: SKTexture*ProtocolPtr; completionHandler: OpaqueCBlock); message 'preloadTextures:withCompletionHandler:';
    procedure preloadWithCompletionHandler (completionHandler: OpaqueCBlock); message 'preloadWithCompletionHandler:';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
  end;
{$endif}

