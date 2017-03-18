{ Parsed from AVFoundation.framework AVAssetWriter.h }

{$ifdef TYPES}
type
  AVAssetWriterPtr = ^AVAssetWriter;
  AVAssetWriterInputGroupPtr = ^AVAssetWriterInputGroup;
{$endif}

{$ifdef TYPES}
type
  AVAssetWriterStatus = NSInteger;
  AVAssetWriterStatusPtr = ^AVAssetWriterStatus;

const
  AVAssetWriterStatusUnknown = 0;
  AVAssetWriterStatusWriting = 1;
  AVAssetWriterStatusCompleted = 2;
  AVAssetWriterStatusFailed = 3;
  AVAssetWriterStatusCancelled = 4;
{$endif}

{$ifdef CLASSES}

type
  AVAssetWriter = objcclass external (NSObject)
  private
    _internal: AVAssetWriterInternal;
  public
    class function assetWriterWithURL_fileType_error (outputURL: NSURL; outputFileType: NSString; outError: NSError * _Nullable * _Nullable): nullable instancetype; message 'assetWriterWithURL:fileType:error:';
    function initWithURL_fileType_error (outputURL: NSURL; outputFileType: NSString; outError: NSError * _Nullable * _Nullable): nullable instancetype; message 'initWithURL:fileType:error:'; { NS_DESIGNATED_INITIALIZER }
    function outputURL: NSURL; message 'outputURL';
    function outputFileType: NSString; message 'outputFileType';
    function availableMediaTypes: NSString *ProtocolPtr; message 'availableMediaTypes';
    function status: AVAssetWriterStatus; message 'status';
    function error: NSError; message 'error';
    procedure setMetadata(newValue: AVMetadataItem *ProtocolPtr); message 'setMetadata:';
    function metadata: AVMetadataItem *ProtocolPtr; message 'metadata';
    procedure setShouldOptimizeForNetworkUse(newValue: boolean); message 'setShouldOptimizeForNetworkUse:';
    function shouldOptimizeForNetworkUse: boolean; message 'shouldOptimizeForNetworkUse';
    procedure setDirectoryForTemporaryFiles(newValue: NSURL); message 'setDirectoryForTemporaryFiles:';
    function directoryForTemporaryFiles: NSURL; message 'directoryForTemporaryFiles';
    function inputs: AVAssetWriterInput *ProtocolPtr; message 'inputs';
    function canApplyOutputSettings_forMediaType (outputSettings: nullable NSDictionaryPtr; mediaType: NSString): boolean; message 'canApplyOutputSettings:forMediaType:';
    function canAddInput (input: AVAssetWriterInput): boolean; message 'canAddInput:';
    procedure addInput (input: AVAssetWriterInput); message 'addInput:';
    function startWriting: boolean; message 'startWriting';
    procedure startSessionAtSourceTime (startTime: CMTime); message 'startSessionAtSourceTime:';
    procedure endSessionAtSourceTime (endTime: CMTime); message 'endSessionAtSourceTime:';
    procedure cancelWriting; message 'cancelWriting';
    function finishWriting: boolean; message 'finishWriting'; deprecated 'in 10_7, 10_9, 4_1, 6_0';
    procedure finishWritingWithCompletionHandler (handler: OpaqueCBlock); message 'finishWritingWithCompletionHandler:'; { available in 10_9, 6_0 }
  end;


type
  AVAssetWriterFileTypeSpecificProperties = objccategory external (AVAssetWriter)
    procedure setMovieFragmentInterval(newValue: CMTime); message 'setMovieFragmentInterval:';
    function movieFragmentInterval: CMTime; message 'movieFragmentInterval';
    procedure setOverallDurationHint(newValue: CMTime); message 'setOverallDurationHint:';
    function overallDurationHint: CMTime; message 'overallDurationHint';
    procedure setMovieTimeScale(newValue: CMTimeScale); message 'setMovieTimeScale:';
    function movieTimeScale: CMTimeScale; message 'movieTimeScale';
  end;

type
  AVAssetWriterInputGroups = objccategory external (AVAssetWriter)
    function canAddInputGroup (inputGroup: AVAssetWriterInputGroup): boolean; message 'canAddInputGroup:'; { available in 10_9, 7_0 }
    procedure addInputGroup (inputGroup: AVAssetWriterInputGroup); message 'addInputGroup:'; { available in 10_9, 7_0 }
    function inputGroups: AVAssetWriterInputGroup *ProtocolPtr; message 'inputGroups';
  end;


type
  AVAssetWriterInputGroup = objcclass external (AVMediaSelectionGroup)
  private
    _internal: AVAssetWriterInputGroupInternal;
  public
    class function assetWriterInputGroupWithInputs_defaultInput (inputs: AVAssetWriterInput *ProtocolPtr; defaultInput: nullable AVAssetWriterInputPtr): instancetype; message 'assetWriterInputGroupWithInputs:defaultInput:';
    function initWithInputs_defaultInput (inputs: AVAssetWriterInput *ProtocolPtr; defaultInput: nullable AVAssetWriterInputPtr): instancetype; message 'initWithInputs:defaultInput:'; { NS_DESIGNATED_INITIALIZER }
    function inputs: AVAssetWriterInput *ProtocolPtr; message 'inputs';
    function defaultInput: AVAssetWriterInput; message 'defaultInput';
  end;
{$endif}

