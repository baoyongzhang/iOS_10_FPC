{ Parsed from AVFoundation.framework AVCapturePhotoOutput.h }

{$ifdef TYPES}
type
  AVCapturePhotoOutputPtr = ^AVCapturePhotoOutput;
  AVCapturePhotoSettingsPtr = ^AVCapturePhotoSettings;
  AVCapturePhotoBracketSettingsPtr = ^AVCapturePhotoBracketSettings;
  AVCaptureResolvedPhotoSettingsPtr = ^AVCaptureResolvedPhotoSettings;
  AVCapturePhotoCaptureDelegateProtocolPtr = ^AVCapturePhotoCaptureDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  AVCapturePhotoOutput = objcclass external (AVCaptureOutput)
  private
    _internal: AVCapturePhotoOutputInternal;
  public
    procedure capturePhotoWithSettings_delegate (settings: AVCapturePhotoSettings; delegate: AVCapturePhotoCaptureDelegateProtocol); message 'capturePhotoWithSettings:delegate:';
    function preparedPhotoSettingsArray: AVCapturePhotoSettings *ProtocolPtr; message 'preparedPhotoSettingsArray';
    procedure setPreparedPhotoSettingsArray_completionHandler (preparedPhotoSettingsArray_: AVCapturePhotoSettings *ProtocolPtr; completionHandler: OpaqueCBlock); message 'setPreparedPhotoSettingsArray:completionHandler:';
    function availablePhotoPixelFormatTypes: NSNumber *ProtocolPtr; message 'availablePhotoPixelFormatTypes';
    function availablePhotoCodecTypes: NSString *ProtocolPtr; message 'availablePhotoCodecTypes';
    function availableRawPhotoPixelFormatTypes: NSNumber *ProtocolPtr; message 'availableRawPhotoPixelFormatTypes';
    function isStillImageStabilizationSupported: boolean; message 'isStillImageStabilizationSupported';
    function isStillImageStabilizationScene: boolean; message 'isStillImageStabilizationScene';
    function isDualCameraFusionSupported: boolean; message 'isDualCameraFusionSupported';
    function supportedFlashModes: NSNumber *ProtocolPtr; message 'supportedFlashModes';
    function isFlashScene: boolean; message 'isFlashScene';
    procedure setPhotoSettingsForSceneMonitoring(newValue: AVCapturePhotoSettings); message 'setPhotoSettingsForSceneMonitoring:';
    function photoSettingsForSceneMonitoring: AVCapturePhotoSettings; message 'photoSettingsForSceneMonitoring';
    procedure setHighResolutionCaptureEnabled(newValue: boolean); message 'setHighResolutionCaptureEnabled:';
    function isHighResolutionCaptureEnabled: boolean; message 'isHighResolutionCaptureEnabled';
    function maxBracketedCapturePhotoCount: NSUInteger; message 'maxBracketedCapturePhotoCount';
    function isLensStabilizationDuringBracketedCaptureSupported: boolean; message 'isLensStabilizationDuringBracketedCaptureSupported';
    function isLivePhotoCaptureSupported: boolean; message 'isLivePhotoCaptureSupported';
    procedure setLivePhotoCaptureEnabled(newValue: boolean); message 'setLivePhotoCaptureEnabled:';
    function isLivePhotoCaptureEnabled: boolean; message 'isLivePhotoCaptureEnabled';
    procedure setLivePhotoCaptureSuspended(newValue: boolean); message 'setLivePhotoCaptureSuspended:';
    function isLivePhotoCaptureSuspended: boolean; message 'isLivePhotoCaptureSuspended';
    procedure setLivePhotoAutoTrimmingEnabled(newValue: boolean); message 'setLivePhotoAutoTrimmingEnabled:';
    function isLivePhotoAutoTrimmingEnabled: boolean; message 'isLivePhotoAutoTrimmingEnabled';
    class function JPEGPhotoDataRepresentationForJPEGSampleBuffer_previewPhotoSampleBuffer (JPEGSampleBuffer: CMSampleBufferRef; previewPhotoSampleBuffer: nullable CMSampleBufferRef): nullable NSDataPtr; message 'JPEGPhotoDataRepresentationForJPEGSampleBuffer:previewPhotoSampleBuffer:';
    class function DNGPhotoDataRepresentationForRawSampleBuffer_previewPhotoSampleBuffer (rawSampleBuffer: CMSampleBufferRef; previewPhotoSampleBuffer: nullable CMSampleBufferRef): nullable NSDataPtr; message 'DNGPhotoDataRepresentationForRawSampleBuffer:previewPhotoSampleBuffer:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  AVCapturePhotoCaptureDelegateProtocol = objcprotocol external name 'AVCapturePhotoCaptureDelegate' (NSObjectProtocol)
  optional
    procedure captureOutput_willBeginCaptureForResolvedSettings (captureOutput: AVCapturePhotoOutput; resolvedSettings: AVCaptureResolvedPhotoSettings); message 'captureOutput:willBeginCaptureForResolvedSettings:';
    procedure captureOutput_willCapturePhotoForResolvedSettings (captureOutput: AVCapturePhotoOutput; resolvedSettings: AVCaptureResolvedPhotoSettings); message 'captureOutput:willCapturePhotoForResolvedSettings:';
    procedure captureOutput_didCapturePhotoForResolvedSettings (captureOutput: AVCapturePhotoOutput; resolvedSettings: AVCaptureResolvedPhotoSettings); message 'captureOutput:didCapturePhotoForResolvedSettings:';
    procedure captureOutput_didFinishProcessingPhotoSampleBuffer_previewPhotoSampleBuffer_resolvedSettings_bracketSettings_error (captureOutput: AVCapturePhotoOutput; photoSampleBuffer: nullable CMSampleBufferRef; previewPhotoSampleBuffer: nullable CMSampleBufferRef; resolvedSettings: AVCaptureResolvedPhotoSettings; bracketSettings: nullable AVCaptureBracketedStillImageSettingsPtr; error: nullable NSErrorPtr); message 'captureOutput:didFinishProcessingPhotoSampleBuffer:previewPhotoSampleBuffer:resolvedSettings:bracketSettings:error:';
    procedure captureOutput_didFinishProcessingRawPhotoSampleBuffer_previewPhotoSampleBuffer_resolvedSettings_bracketSettings_error (captureOutput: AVCapturePhotoOutput; rawSampleBuffer: nullable CMSampleBufferRef; previewPhotoSampleBuffer: nullable CMSampleBufferRef; resolvedSettings: AVCaptureResolvedPhotoSettings; bracketSettings: nullable AVCaptureBracketedStillImageSettingsPtr; error: nullable NSErrorPtr); message 'captureOutput:didFinishProcessingRawPhotoSampleBuffer:previewPhotoSampleBuffer:resolvedSettings:bracketSettings:error:';
    procedure captureOutput_didFinishRecordingLivePhotoMovieForEventualFileAtURL_resolvedSettings (captureOutput: AVCapturePhotoOutput; outputFileURL: NSURL; resolvedSettings: AVCaptureResolvedPhotoSettings); message 'captureOutput:didFinishRecordingLivePhotoMovieForEventualFileAtURL:resolvedSettings:';
    procedure captureOutput_didFinishProcessingLivePhotoToMovieFileAtURL_duration_photoDisplayTime_resolvedSettings_error (captureOutput: AVCapturePhotoOutput; outputFileURL: NSURL; duration: CMTime; photoDisplayTime: CMTime; resolvedSettings: AVCaptureResolvedPhotoSettings; error: nullable NSErrorPtr); message 'captureOutput:didFinishProcessingLivePhotoToMovieFileAtURL:duration:photoDisplayTime:resolvedSettings:error:';
    procedure captureOutput_didFinishCaptureForResolvedSettings_error (captureOutput: AVCapturePhotoOutput; resolvedSettings: AVCaptureResolvedPhotoSettings; error: nullable NSErrorPtr); message 'captureOutput:didFinishCaptureForResolvedSettings:error:';
  end;
{$endif}

{$ifdef CLASSES}

type
  AVCapturePhotoSettings = objcclass external (NSObject, NSCopyingProtocol)
  private
    _internal: AVCapturePhotoSettingsInternal;
  public
    class function photoSettings: instancetype; message 'photoSettings';
    class function photoSettingsWithFormat (format: nullable NSDictionaryPtr): instancetype; message 'photoSettingsWithFormat:';
    class function photoSettingsWithRawPixelFormatType (rawPixelFormatType: OSType): instancetype; message 'photoSettingsWithRawPixelFormatType:';
    class function photoSettingsWithRawPixelFormatType_processedFormat (rawPixelFormatType: OSType; processedFormat: nullable NSDictionaryPtr): instancetype; message 'photoSettingsWithRawPixelFormatType:processedFormat:';
    class function photoSettingsFromPhotoSettings (photoSettings_: AVCapturePhotoSettings): instancetype; message 'photoSettingsFromPhotoSettings:';
    function uniqueID: cint64; message 'uniqueID';
    function format: NSDictionary; message 'format';
    function rawPhotoPixelFormatType: OSType; message 'rawPhotoPixelFormatType';
    procedure setFlashMode(newValue: AVCaptureFlashMode); message 'setFlashMode:';
    function flashMode: AVCaptureFlashMode; message 'flashMode';
    procedure setAutoStillImageStabilizationEnabled(newValue: boolean); message 'setAutoStillImageStabilizationEnabled:';
    function isAutoStillImageStabilizationEnabled: boolean; message 'isAutoStillImageStabilizationEnabled';
    procedure setAutoDualCameraFusionEnabled(newValue: boolean); message 'setAutoDualCameraFusionEnabled:';
    function isAutoDualCameraFusionEnabled: boolean; message 'isAutoDualCameraFusionEnabled';
    procedure setHighResolutionPhotoEnabled(newValue: boolean); message 'setHighResolutionPhotoEnabled:';
    function isHighResolutionPhotoEnabled: boolean; message 'isHighResolutionPhotoEnabled';
    procedure setLivePhotoMovieFileURL(newValue: NSURL); message 'setLivePhotoMovieFileURL:';
    function livePhotoMovieFileURL: NSURL; message 'livePhotoMovieFileURL';
    procedure setLivePhotoMovieMetadata(newValue: AVMetadataItem *ProtocolPtr); message 'setLivePhotoMovieMetadata:';
    function livePhotoMovieMetadata: AVMetadataItem *ProtocolPtr; message 'livePhotoMovieMetadata';
    function availablePreviewPhotoPixelFormatTypes: NSNumber *ProtocolPtr; message 'availablePreviewPhotoPixelFormatTypes';
    procedure setPreviewPhotoFormat(newValue: NSDictionary); message 'setPreviewPhotoFormat:';
    function previewPhotoFormat: NSDictionary; message 'previewPhotoFormat';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
  end;

type
  AVCapturePhotoBracketSettings = objcclass external (AVCapturePhotoSettings)
  private
    _bracketSettingsInternal: AVCapturePhotoBracketSettingsInternal;
  public
    class function photoBracketSettingsWithRawPixelFormatType_processedFormat_bracketedSettings (rawPixelFormatType: OSType; processedFormat: nullable NSDictionaryPtr; bracketedSettings: AVCaptureBracketedStillImageSettings *ProtocolPtr): instancetype; message 'photoBracketSettingsWithRawPixelFormatType:processedFormat:bracketedSettings:';
    function bracketedSettings: AVCaptureBracketedStillImageSettings *ProtocolPtr; message 'bracketedSettings';
    procedure setLensStabilizationEnabled(newValue: boolean); message 'setLensStabilizationEnabled:';
    function isLensStabilizationEnabled: boolean; message 'isLensStabilizationEnabled';
  end;

type
  AVCaptureResolvedPhotoSettings = objcclass external (NSObject)
  private
    _internal: AVCaptureResolvedPhotoSettingsInternal;
  public
    function init: instancetype; message 'init';
    function uniqueID: cint64; message 'uniqueID';
    function photoDimensions: CMVideoDimensions; message 'photoDimensions';
    function rawPhotoDimensions: CMVideoDimensions; message 'rawPhotoDimensions';
    function previewDimensions: CMVideoDimensions; message 'previewDimensions';
    function livePhotoMovieDimensions: CMVideoDimensions; message 'livePhotoMovieDimensions';
    function isFlashEnabled: boolean; message 'isFlashEnabled';
    function isStillImageStabilizationEnabled: boolean; message 'isStillImageStabilizationEnabled';
    function isDualCameraFusionEnabled: boolean; message 'isDualCameraFusionEnabled';
  end;
{$endif}

