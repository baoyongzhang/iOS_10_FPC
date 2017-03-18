{ Parsed from AVFoundation.framework AVVideoComposition.h }

{ Types from AVVideoComposition }
{$ifdef TYPES}

{$endif}


{ Types from AVMutableVideoComposition }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  AVVideoCompositionPtr = ^AVVideoComposition;
  AVMutableVideoCompositionPtr = ^AVMutableVideoComposition;
  AVVideoCompositionInstructionPtr = ^AVVideoCompositionInstruction;
  AVMutableVideoCompositionInstructionPtr = ^AVMutableVideoCompositionInstruction;
  AVVideoCompositionLayerInstructionPtr = ^AVVideoCompositionLayerInstruction;
  AVMutableVideoCompositionLayerInstructionPtr = ^AVMutableVideoCompositionLayerInstruction;
  AVVideoCompositionCoreAnimationToolPtr = ^AVVideoCompositionCoreAnimationTool;
  AVVideoCompositionValidationHandlingProtocolPtr = ^AVVideoCompositionValidationHandlingProtocol;
{$endif}

{$ifdef CLASSES}

type
  AVVideoComposition = objcclass external (NSObject, NSCopyingProtocol, NSMutableCopyingProtocol)
  private
    _videoComposition: AVVideoCompositionInternal;
  public
    class function videoCompositionWithPropertiesOfAsset (asset: AVAsset): AVVideoComposition; message 'videoCompositionWithPropertiesOfAsset:'; { available in 10_9, 6_0 }
    function customVideoCompositorClass: AVVideoCompositingProtocol; message 'customVideoCompositorClass';
    function frameDuration: CMTime; message 'frameDuration';
    function renderSize: CGSize; message 'renderSize';
    {$if defined(TARGET_OS_IPHONE)}
    function renderScale: single; message 'renderScale';
    {$endif}
    function instructions: AVVideoCompositionInstructionProtocolProtocolPtr; message 'instructions';
    function animationTool: AVVideoCompositionCoreAnimationTool; message 'animationTool';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    function mutableCopyWithZone (zone: nullable NSZonePtr): id; message 'mutableCopyWithZone:';
  end;


type
  AVVideoCompositionColorimetery = objccategory external (AVVideoComposition)
    function colorPrimaries: NSString; message 'colorPrimaries';
    function colorYCbCrMatrix: NSString; message 'colorYCbCrMatrix';
    function colorTransferFunction: NSString; message 'colorTransferFunction';
  end;

type
  AVVideoCompositionFiltering = objccategory external (AVVideoComposition)
    class function videoCompositionWithAsset_applyingCIFiltersWithHandler (asset: AVAsset; applier: OpaqueCBlock): AVVideoComposition; message 'videoCompositionWithAsset:applyingCIFiltersWithHandler:'; { available in 10_11, 9_0 }
  end;


type
  AVMutableVideoComposition = objcclass external (AVVideoComposition)
  private
    _mutableVideoComposition: AVMutableVideoCompositionInternal;
  public
    class function videoComposition: AVMutableVideoComposition; message 'videoComposition';
    class function videoCompositionWithPropertiesOfAsset (asset: AVAsset): AVMutableVideoComposition; message 'videoCompositionWithPropertiesOfAsset:'; { available in 10_9, 6_0 }
    procedure setCustomVideoCompositorClass(newValue: AVVideoCompositingProtocol); message 'setCustomVideoCompositorClass:';
    function customVideoCompositorClass: AVVideoCompositingProtocol; message 'customVideoCompositorClass';
    procedure setFrameDuration(newValue: CMTime); message 'setFrameDuration:';
    function frameDuration: CMTime; message 'frameDuration';
    procedure setRenderSize(newValue: CGSize); message 'setRenderSize:';
    function renderSize: CGSize; message 'renderSize';
    {$if defined(TARGET_OS_IPHONE)}
    procedure setRenderScale(newValue: single); message 'setRenderScale:';
    function renderScale: single; message 'renderScale';
    {$endif}
    procedure setInstructions(newValue: AVVideoCompositionInstructionProtocolProtocolPtr); message 'setInstructions:';
    function instructions: AVVideoCompositionInstructionProtocolProtocolPtr; message 'instructions';
    procedure setAnimationTool(newValue: AVVideoCompositionCoreAnimationTool); message 'setAnimationTool:';
    function animationTool: AVVideoCompositionCoreAnimationTool; message 'animationTool';
  end;


type
  AVMutableVideoCompositionColorimetery = objccategory external (AVMutableVideoComposition)
    procedure setColorPrimaries(newValue: NSString); message 'setColorPrimaries:';
    function colorPrimaries: NSString; message 'colorPrimaries';
    procedure setColorYCbCrMatrix(newValue: NSString); message 'setColorYCbCrMatrix:';
    function colorYCbCrMatrix: NSString; message 'colorYCbCrMatrix';
    procedure setColorTransferFunction(newValue: NSString); message 'setColorTransferFunction:';
    function colorTransferFunction: NSString; message 'colorTransferFunction';
  end;

type
  AVMutableVideoCompositionFiltering = objccategory external (AVMutableVideoComposition)
    class function videoCompositionWithAsset_applyingCIFiltersWithHandler (asset: AVAsset; applier: OpaqueCBlock): AVMutableVideoComposition; message 'videoCompositionWithAsset:applyingCIFiltersWithHandler:'; { available in 10_11, 9_0 }
  end;


type
  AVVideoCompositionInstruction = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol, NSMutableCopyingProtocol, AVVideoCompositionInstructionProtocol)
  private
    _instruction: AVVideoCompositionInstructionInternal;
  public
    function timeRange: CMTimeRange; message 'timeRange';
    function backgroundColor: CGColorRef; message 'backgroundColor';
    function layerInstructions: AVVideoCompositionLayerInstruction *ProtocolPtr; message 'layerInstructions';
    function enablePostProcessing: boolean; message 'enablePostProcessing';
    function requiredSourceTrackIDs: NSValue *ProtocolPtr; message 'requiredSourceTrackIDs';
    function passthroughTrackID: CMPersistentTrackID; message 'passthroughTrackID';

    { Adopted protocols }
    function containsTweening: boolean; message 'containsTweening';
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function mutableCopyWithZone (zone: nullable NSZonePtr): id; message 'mutableCopyWithZone:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;

type
  AVMutableVideoCompositionInstruction = objcclass external (AVVideoCompositionInstruction)
  private
    _mutableInstruction: AVMutableVideoCompositionInstructionInternal;
  public
    class function videoCompositionInstruction: instancetype; message 'videoCompositionInstruction';
    procedure setTimeRange(newValue: CMTimeRange); message 'setTimeRange:';
    function timeRange: CMTimeRange; message 'timeRange';
    procedure setBackgroundColor(newValue: CGColorRef); message 'setBackgroundColor:';
    function backgroundColor: CGColorRef; message 'backgroundColor';
    procedure setLayerInstructions(newValue: AVVideoCompositionLayerInstruction *ProtocolPtr); message 'setLayerInstructions:';
    function layerInstructions: AVVideoCompositionLayerInstruction *ProtocolPtr; message 'layerInstructions';
    procedure setEnablePostProcessing(newValue: boolean); message 'setEnablePostProcessing:';
    function enablePostProcessing: boolean; message 'enablePostProcessing';
  end;

type
  AVVideoCompositionLayerInstruction = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol, NSMutableCopyingProtocol)
  private
    _layerInstruction: AVVideoCompositionLayerInstructionInternal;
  public
    function trackID: CMPersistentTrackID; message 'trackID';
    function getTransformRampForTime_startTransform_endTransform_timeRange (time: CMTime; startTransform: nullable CGAffineTransformPtr; endTransform: nullable CGAffineTransformPtr; timeRange: nullable CMTimeRangePtr): boolean; message 'getTransformRampForTime:startTransform:endTransform:timeRange:';
    function getOpacityRampForTime_startOpacity_endOpacity_timeRange (time: CMTime; startOpacity: nullable floatPtr; endOpacity: nullable floatPtr; timeRange: nullable CMTimeRangePtr): boolean; message 'getOpacityRampForTime:startOpacity:endOpacity:timeRange:';
    function getCropRectangleRampForTime_startCropRectangle_endCropRectangle_timeRange (time: CMTime; startCropRectangle: nullable CGRectPtr; endCropRectangle: nullable CGRectPtr; timeRange: nullable CMTimeRangePtr): boolean; message 'getCropRectangleRampForTime:startCropRectangle:endCropRectangle:timeRange:'; { available in 10_9, 7_0 }

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function mutableCopyWithZone (zone: nullable NSZonePtr): id; message 'mutableCopyWithZone:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;

type
  AVMutableVideoCompositionLayerInstruction = objcclass external (AVVideoCompositionLayerInstruction)
  private
    _mutableLayerInstruction: AVMutableVideoCompositionLayerInstructionInternal;
  public
    class function videoCompositionLayerInstructionWithAssetTrack (track: AVAssetTrack): instancetype; message 'videoCompositionLayerInstructionWithAssetTrack:';
    class function videoCompositionLayerInstruction: instancetype; message 'videoCompositionLayerInstruction';
    procedure setTrackID(newValue: CMPersistentTrackID); message 'setTrackID:';
    function trackID: CMPersistentTrackID; message 'trackID';
    procedure setTransformRampFromStartTransform_toEndTransform_timeRange (startTransform: CGAffineTransform; endTransform: CGAffineTransform; timeRange: CMTimeRange); message 'setTransformRampFromStartTransform:toEndTransform:timeRange:';
    procedure setTransform_atTime (transform: CGAffineTransform; time: CMTime); message 'setTransform:atTime:';
    procedure setOpacityRampFromStartOpacity_toEndOpacity_timeRange (startOpacity: single; endOpacity: single; timeRange: CMTimeRange); message 'setOpacityRampFromStartOpacity:toEndOpacity:timeRange:';
    procedure setOpacity_atTime (opacity: single; time: CMTime); message 'setOpacity:atTime:';
    procedure setCropRectangleRampFromStartCropRectangle_toEndCropRectangle_timeRange (startCropRectangle: CGRect; endCropRectangle: CGRect; timeRange: CMTimeRange); message 'setCropRectangleRampFromStartCropRectangle:toEndCropRectangle:timeRange:'; { available in 10_9, 7_0 }
    procedure setCropRectangle_atTime (cropRectangle: CGRect; time: CMTime); message 'setCropRectangle:atTime:'; { available in 10_9, 7_0 }
  end;

type
  AVVideoCompositionCoreAnimationTool = objcclass external (NSObject)
  private
    _videoCompositionTool: AVVideoCompositionCoreAnimationToolInternal;
  public
    class function videoCompositionCoreAnimationToolWithAdditionalLayer_asTrackID (layer: CALayer; trackID: CMPersistentTrackID): instancetype; message 'videoCompositionCoreAnimationToolWithAdditionalLayer:asTrackID:';
    class function videoCompositionCoreAnimationToolWithPostProcessingAsVideoLayer_inLayer (videoLayer: CALayer; animationLayer: CALayer): instancetype; message 'videoCompositionCoreAnimationToolWithPostProcessingAsVideoLayer:inLayer:';
    class function videoCompositionCoreAnimationToolWithPostProcessingAsVideoLayers_inLayer (videoLayers: CALayer *ProtocolPtr; animationLayer: CALayer): instancetype; message 'videoCompositionCoreAnimationToolWithPostProcessingAsVideoLayers:inLayer:'; { available in 10_9, 7_0 }
  end;


type
  AVAssetVideoCompositionUtility = objccategory external (AVAsset)
    function unusedTrackID: CMPersistentTrackID; message 'unusedTrackID';
  end;

type
  AVVideoCompositionValidation = objccategory external (AVVideoComposition)
    function isValidForAsset_timeRange_validationDelegate (asset: nullable AVAssetPtr; timeRange: CMTimeRange; validationDelegate: nullable AVVideoCompositionValidationHandlingProtocol): boolean; message 'isValidForAsset:timeRange:validationDelegate:'; { available in 10_8, 5_0 }
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  AVVideoCompositionValidationHandlingProtocol = objcprotocol external name 'AVVideoCompositionValidationHandling' (NSObjectProtocol)
  optional
    function videoComposition_shouldContinueValidatingAfterFindingInvalidValueForKey (videoComposition: AVVideoComposition; key: NSString): boolean; message 'videoComposition:shouldContinueValidatingAfterFindingInvalidValueForKey:'; { available in 10_8, 5_0 }
    function videoComposition_shouldContinueValidatingAfterFindingEmptyTimeRange (videoComposition: AVVideoComposition; timeRange: CMTimeRange): boolean; message 'videoComposition:shouldContinueValidatingAfterFindingEmptyTimeRange:'; { available in 10_8, 5_0 }
    function videoComposition_shouldContinueValidatingAfterFindingInvalidTimeRangeInInstruction (videoComposition: AVVideoComposition; videoCompositionInstruction: AVVideoCompositionInstructionProtocol): boolean; message 'videoComposition:shouldContinueValidatingAfterFindingInvalidTimeRangeInInstruction:'; { available in 10_8, 5_0 }
    function videoComposition_shouldContinueValidatingAfterFindingInvalidTrackIDInInstruction_layerInstruction_asset (videoComposition: AVVideoComposition; videoCompositionInstruction: AVVideoCompositionInstructionProtocol; layerInstruction: AVVideoCompositionLayerInstruction; asset: AVAsset): boolean; message 'videoComposition:shouldContinueValidatingAfterFindingInvalidTrackIDInInstruction:layerInstruction:asset:'; { available in 10_8, 5_0 }
  end;
{$endif}

