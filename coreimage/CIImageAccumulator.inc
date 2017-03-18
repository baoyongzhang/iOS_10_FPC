{ Parsed from CoreImage.framework CIImageAccumulator.h }

{ Types from CIImageAccumulator }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  CIImageAccumulatorPtr = ^CIImageAccumulator;
{$endif}

{$ifdef CLASSES}

type
  CIImageAccumulator = objcclass external (NSObject)
  private
    _state: pointer;
  public
    {$if  not (defined(SWIFT_CLASS_EXTRA)) or ((defined(SWIFT_SDK_OVERLAY_COREIMAGE_EPOCH)) and (SWIFT_SDK_OVERLAY_COREIMAGE_EPOCH >= 2))}
    class function imageAccumulatorWithExtent_format (extent: CGRect; format: CIFormat): nullable instancetype; message 'imageAccumulatorWithExtent:format:';
    class function imageAccumulatorWithExtent_format_colorSpace (extent: CGRect; format: CIFormat; colorSpace: CGColorSpaceRef): nullable instancetype; message 'imageAccumulatorWithExtent:format:colorSpace:'; { available in 10_7, 9_0 }
    function initWithExtent_format (extent: CGRect; format: CIFormat): nullable instancetype; message 'initWithExtent:format:';
    function initWithExtent_format_colorSpace (extent: CGRect; format: CIFormat; colorSpace: CGColorSpaceRef): nullable instancetype; message 'initWithExtent:format:colorSpace:'; { available in 10_7, 9_0 }
    {$else}
    class function imageAccumulatorWithExtent_format (extent: CGRect; format: CIFormat): instancetype; message 'imageAccumulatorWithExtent:format:';
    class function imageAccumulatorWithExtent_format_colorSpace (extent: CGRect; format: CIFormat; colorSpace: CGColorSpaceRef): instancetype; message 'imageAccumulatorWithExtent:format:colorSpace:'; { available in 10_7, 9_0 }
    function initWithExtent_format (extent: CGRect; format: CIFormat): instancetype; message 'initWithExtent:format:';
    function initWithExtent_format_colorSpace (extent: CGRect; format: CIFormat; colorSpace: CGColorSpaceRef): instancetype; message 'initWithExtent:format:colorSpace:'; { available in 10_7, 9_0 }
    {$endif}
    function extent: CGRect; message 'extent';
    function format: CIFormat; message 'format';
    function image: CIImage; message 'image';
    procedure setImage (image_: CIImage); message 'setImage:';
    procedure setImage_dirtyRect (image_: CIImage; dirtyRect: CGRect); message 'setImage:dirtyRect:';
    procedure clear; message 'clear';
  end;
{$endif}

