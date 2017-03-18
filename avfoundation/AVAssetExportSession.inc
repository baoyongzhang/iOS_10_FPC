{ Parsed from AVFoundation.framework AVAssetExportSession.h }

{ Types from AVAssetExportSessionDurationAndLength }
{$ifdef TYPES}


{$endif}


{$ifdef TYPES}
type
  AVAssetExportSessionPtr = ^AVAssetExportSession;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVAssetExportPresetLowQuality: NSString { available in 10_11, 4_0 }; cvar; external;
  AVAssetExportPresetMediumQuality: NSString { available in 10_11, 4_0 }; cvar; external;
  AVAssetExportPresetHighestQuality: NSString { available in 10_11, 4_0 }; cvar; external;
  AVAssetExportPreset640x480: NSString { available in 10_7, 4_0 }; cvar; external;
  AVAssetExportPreset960x540: NSString { available in 10_7, 4_0 }; cvar; external;
  AVAssetExportPreset1280x720: NSString { available in 10_7, 4_0 }; cvar; external;
  AVAssetExportPreset1920x1080: NSString { available in 10_7, 5_0 }; cvar; external;
  AVAssetExportPreset3840x2160: NSString { available in 10_10, 9_0 }; cvar; external;
  AVAssetExportPresetAppleM4A: NSString { available in 10_7, 4_0 }; cvar; external;
  AVAssetExportPresetPassthrough: NSString { available in 10_7, 4_0 }; cvar; external;
{$endif}

{$if (defined(TARGET_OS_MAC) and not (defined(TARGET_OS_EMBEDDED) or defined(TARGET_OS_IPHONE)))}
{$ifdef EXTERNAL_SYMBOLS}
var
  AVAssetExportPresetAppleM4VCellular: NSString { available in 10_7, NA }; cvar; external;
  AVAssetExportPresetAppleM4ViPod: NSString { available in 10_7, NA }; cvar; external;
  AVAssetExportPresetAppleM4V480pSD: NSString { available in 10_7, NA }; cvar; external;
  AVAssetExportPresetAppleM4VAppleTV: NSString { available in 10_7, NA }; cvar; external;
  AVAssetExportPresetAppleM4VWiFi: NSString { available in 10_7, NA }; cvar; external;
  AVAssetExportPresetAppleM4V720pHD: NSString { available in 10_7, NA }; cvar; external;
  AVAssetExportPresetAppleM4V1080pHD: NSString { available in 10_8, NA }; cvar; external;
  AVAssetExportPresetAppleProRes422LPCM: NSString { available in 10_7, NA }; cvar; external;
{$endif}

{$endif}
{$ifdef TYPES}
type
  AVAssetExportSessionStatus = NSInteger;
  AVAssetExportSessionStatusPtr = ^AVAssetExportSessionStatus;

const
  AVAssetExportSessionStatusUnknown = 0;
  AVAssetExportSessionStatusWaiting = 1;
  AVAssetExportSessionStatusExporting = 2;
  AVAssetExportSessionStatusCompleted = 3;
  AVAssetExportSessionStatusFailed = 4;
  AVAssetExportSessionStatusCancelled = 5;
{$endif}

{$ifdef CLASSES}

type
  AVAssetExportSession = objcclass external (NSObject)
  private
    _exportSession: AVAssetExportSessionInternal;
  public
    class function exportSessionWithAsset_presetName (asset: AVAsset; presetName: NSString): nullable instancetype; message 'exportSessionWithAsset:presetName:'; { available in 10_7, 4_1 }
    function initWithAsset_presetName (asset: AVAsset; presetName: NSString): nullable instancetype; message 'initWithAsset:presetName:'; { NS_DESIGNATED_INITIALIZER }
    function presetName: NSString; message 'presetName';
    function asset: AVAsset; message 'asset';
    procedure setOutputFileType(newValue: NSString); message 'setOutputFileType:';
    function outputFileType: NSString; message 'outputFileType';
    procedure setOutputURL(newValue: NSURL); message 'setOutputURL:';
    function outputURL: NSURL; message 'outputURL';
    procedure setShouldOptimizeForNetworkUse(newValue: boolean); message 'setShouldOptimizeForNetworkUse:';
    function shouldOptimizeForNetworkUse: boolean; message 'shouldOptimizeForNetworkUse';
    function status: AVAssetExportSessionStatus; message 'status';
    function error: NSError; message 'error';
    procedure exportAsynchronouslyWithCompletionHandler (handler: OpaqueCBlock); message 'exportAsynchronouslyWithCompletionHandler:';
    function progress: single; message 'progress';
    procedure cancelExport; message 'cancelExport';
  end;


type
  AVAssetExportSessionPresets = objccategory external (AVAssetExportSession)
    class function allExportPresets: NSString *ProtocolPtr; message 'allExportPresets';
    class function exportPresetsCompatibleWithAsset (asset_: AVAsset): NSString *ProtocolPtr; message 'exportPresetsCompatibleWithAsset:';
    class procedure determineCompatibilityOfExportPreset_withAsset_outputFileType_completionHandler (presetName_: NSString; asset_: AVAsset; outputFileType_: nullable NSStringPtr; handler: OpaqueCBlock); message 'determineCompatibilityOfExportPreset:withAsset:outputFileType:completionHandler:'; { available in 10_9, 6_0 }
  end;

type
  AVAssetExportSessionFileTypes = objccategory external (AVAssetExportSession)
    function supportedFileTypes: NSString *ProtocolPtr; message 'supportedFileTypes';
    procedure determineCompatibleFileTypesWithCompletionHandler (handler: OpaqueCBlock); message 'determineCompatibleFileTypesWithCompletionHandler:'; { available in 10_9, 6_0 }
  end;

type
  AVAssetExportSessionDurationAndLength = objccategory external (AVAssetExportSession)
    procedure setTimeRange(newValue: CMTimeRange); message 'setTimeRange:';
    function timeRange: CMTimeRange; message 'timeRange';
    {$if defined(TARGET_OS_IPHONE)}
    function maxDuration: CMTime; message 'maxDuration';
    {$endif}
    function estimatedOutputFileLength: clonglong; message 'estimatedOutputFileLength';
    {$if defined(TARGET_OS_IPHONE)}
    procedure setFileLengthLimit(newValue: clonglong); message 'setFileLengthLimit:';
    function fileLengthLimit: clonglong; message 'fileLengthLimit';
    {$endif}
  end;

type
  AVAssetExportSessionMetadata = objccategory external (AVAssetExportSession)
    procedure setMetadata(newValue: AVMetadataItem *ProtocolPtr); message 'setMetadata:';
    function metadata: AVMetadataItem *ProtocolPtr; message 'metadata';
    procedure setMetadataItemFilter(newValue: AVMetadataItemFilter); message 'setMetadataItemFilter:';
    function metadataItemFilter: AVMetadataItemFilter; message 'metadataItemFilter';
  end;

type
  AVAssetExportSessionMediaProcessing = objccategory external (AVAssetExportSession)
    procedure setAudioTimePitchAlgorithm(newValue: NSString); message 'setAudioTimePitchAlgorithm:';
    function audioTimePitchAlgorithm: NSString; message 'audioTimePitchAlgorithm';
    procedure setAudioMix(newValue: AVAudioMix); message 'setAudioMix:';
    function audioMix: AVAudioMix; message 'audioMix';
    procedure setVideoComposition(newValue: AVVideoComposition); message 'setVideoComposition:';
    function videoComposition: AVVideoComposition; message 'videoComposition';
    function customVideoCompositor: AVVideoCompositingProtocol; message 'customVideoCompositor';
  end;

type
  AVAssetExportSessionMultipass = objccategory external (AVAssetExportSession)
    procedure setCanPerformMultiplePassesOverSourceMediaData(newValue: boolean); message 'setCanPerformMultiplePassesOverSourceMediaData:';
    function canPerformMultiplePassesOverSourceMediaData: boolean; message 'canPerformMultiplePassesOverSourceMediaData';
    procedure setDirectoryForTemporaryFiles(newValue: NSURL); message 'setDirectoryForTemporaryFiles:';
    function directoryForTemporaryFiles: NSURL; message 'directoryForTemporaryFiles';
  end;
{$endif}

