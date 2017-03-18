{ Parsed from Photos.framework PHLivePhotoEditingContext.h }

{$ifdef TYPES}
type
  PHLivePhotoEditingContextPtr = ^PHLivePhotoEditingContext;
  PHLivePhotoFrameProtocolPtr = ^PHLivePhotoFrameProtocol;
{$endif}

{$ifdef TYPES}
type
  PHLivePhotoFrameProcessingBlock = OpaqueCBlock;
  NS_STRING_ENUM = NSString *PHLivePhotoEditingOption { available in 12_0, 10_0 };
  NS_STRING_ENUMPtr = ^NS_STRING_ENUM { available in 12_0, 10_0 };
{$endif}

{$ifdef CLASSES}

type
  PHLivePhotoEditingContext = objcclass external (NSObject)
  public
    function initWithLivePhotoEditingInput (livePhotoInput: PHContentEditingInput): nullable instancetype; message 'initWithLivePhotoEditingInput:'; { NS_DESIGNATED_INITIALIZER }
    function init: instancetype; message 'init';
    function fullSizeImage: CIImage; message 'fullSizeImage';
    function duration: CMTime; message 'duration';
    function photoTime: CMTime; message 'photoTime';
    procedure setFrameProcessor(newValue: PHLivePhotoFrameProcessingBlock); message 'setFrameProcessor:';
    function frameProcessor: PHLivePhotoFrameProcessingBlock; message 'frameProcessor';
    procedure setAudioVolume(newValue: single); message 'setAudioVolume:';
    function audioVolume: single; message 'audioVolume';
    function orientation: CGImagePropertyOrientation; message 'orientation';
    procedure prepareLivePhotoForPlaybackWithTargetSize_options_completionHandler (targetSize: CGSize; options: nullable NSDictionaryPtr; handler: OpaqueCBlock); message 'prepareLivePhotoForPlaybackWithTargetSize:options:completionHandler:';
    procedure saveLivePhotoToOutput_options_completionHandler (output: PHContentEditingOutput; options: nullable NSDictionaryPtr; handler: OpaqueCBlock); message 'saveLivePhotoToOutput:options:completionHandler:';
    procedure cancel; message 'cancel';
  end;
{$endif}

{$ifdef TYPES}
type
  PHLivePhotoFrameType = NSInteger;
  PHLivePhotoFrameTypePtr = ^PHLivePhotoFrameType;

const
  PHLivePhotoFrameTypePhoto = 0;
  PHLivePhotoFrameTypeVideo = 1;
{$endif}

{$ifdef PROTOCOLS}

type
  PHLivePhotoFrameProtocol = objcprotocol external name 'PHLivePhotoFrame'
    function image: CIImage; message 'image';
    function time: CMTime; message 'time';
    function type_: PHLivePhotoFrameType; message 'type';
    function renderScale: CGFloat; message 'renderScale';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  PHLivePhotoShouldRenderAtPlaybackTime: PHLivePhotoEditingOption { available in 10_12, 10_0 }; cvar; external;
{$endif}

