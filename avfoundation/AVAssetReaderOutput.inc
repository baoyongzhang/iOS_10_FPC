{ Parsed from AVFoundation.framework AVAssetReaderOutput.h }

{$ifdef TYPES}
type
  AVAssetReaderOutputPtr = ^AVAssetReaderOutput;
  AVAssetReaderTrackOutputPtr = ^AVAssetReaderTrackOutput;
  AVAssetReaderAudioMixOutputPtr = ^AVAssetReaderAudioMixOutput;
  AVAssetReaderVideoCompositionOutputPtr = ^AVAssetReaderVideoCompositionOutput;
  AVAssetReaderOutputMetadataAdaptorPtr = ^AVAssetReaderOutputMetadataAdaptor;
  AVAssetReaderSampleReferenceOutputPtr = ^AVAssetReaderSampleReferenceOutput;
{$endif}

{$ifdef CLASSES}

type
  AVAssetReaderOutput = objcclass external (NSObject)
  private
    _internal: AVAssetReaderOutputInternal;
  public
    function mediaType: NSString; message 'mediaType';
    procedure setAlwaysCopiesSampleData(newValue: boolean); message 'setAlwaysCopiesSampleData:';
    function alwaysCopiesSampleData: boolean; message 'alwaysCopiesSampleData';
    function copyNextSampleBuffer CF_RETURNS_RETAINED: nullable CMSampleBufferRef; message 'copyNextSampleBuffer CF_RETURNS_RETAINED';
  end;


type
  AVAssetReaderOutputRandomAccess = objccategory external (AVAssetReaderOutput)
    procedure setSupportsRandomAccess(newValue: boolean); message 'setSupportsRandomAccess:';
    function supportsRandomAccess: boolean; message 'supportsRandomAccess';
    procedure resetForReadingTimeRanges (timeRanges: NSValue *ProtocolPtr); message 'resetForReadingTimeRanges:'; { available in 10_10, 8_0 }
    procedure markConfigurationAsFinal; message 'markConfigurationAsFinal'; { available in 10_10, 8_0 }
  end;


type
  AVAssetReaderTrackOutput = objcclass external (AVAssetReaderOutput)
  private
    _trackOutputInternal: AVAssetReaderTrackOutputInternal;
  public
    class function assetReaderTrackOutputWithTrack_outputSettings (track: AVAssetTrack; outputSettings: nullable NSDictionaryPtr): instancetype; message 'assetReaderTrackOutputWithTrack:outputSettings:';
    function initWithTrack_outputSettings (track: AVAssetTrack; outputSettings: nullable NSDictionaryPtr): instancetype; message 'initWithTrack:outputSettings:'; { NS_DESIGNATED_INITIALIZER }
    function track: AVAssetTrack; message 'track';
    function outputSettings: NSDictionary; message 'outputSettings';
    procedure setAudioTimePitchAlgorithm(newValue: NSString); message 'setAudioTimePitchAlgorithm:';
    function audioTimePitchAlgorithm: NSString; message 'audioTimePitchAlgorithm';
  end;

type
  AVAssetReaderAudioMixOutput = objcclass external (AVAssetReaderOutput)
  private
    _audioMixOutputInternal: AVAssetReaderAudioMixOutputInternal;
  public
    class function assetReaderAudioMixOutputWithAudioTracks_audioSettings (audioTracks: AVAssetTrack *ProtocolPtr; audioSettings: nullable NSDictionaryPtr): instancetype; message 'assetReaderAudioMixOutputWithAudioTracks:audioSettings:';
    function initWithAudioTracks_audioSettings (audioTracks: AVAssetTrack *ProtocolPtr; audioSettings: nullable NSDictionaryPtr): instancetype; message 'initWithAudioTracks:audioSettings:'; { NS_DESIGNATED_INITIALIZER }
    function audioTracks: AVAssetTrack *ProtocolPtr; message 'audioTracks';
    function audioSettings: NSDictionary; message 'audioSettings';
    procedure setAudioMix(newValue: AVAudioMix); message 'setAudioMix:';
    function audioMix: AVAudioMix; message 'audioMix';
    procedure setAudioTimePitchAlgorithm(newValue: NSString); message 'setAudioTimePitchAlgorithm:';
    function audioTimePitchAlgorithm: NSString; message 'audioTimePitchAlgorithm';
  end;

type
  AVAssetReaderVideoCompositionOutput = objcclass external (AVAssetReaderOutput)
  private
    _videoCompositionOutputInternal: AVAssetReaderVideoCompositionOutputInternal;
  public
    class function assetReaderVideoCompositionOutputWithVideoTracks_videoSettings (videoTracks: AVAssetTrack *ProtocolPtr; videoSettings: nullable NSDictionaryPtr): instancetype; message 'assetReaderVideoCompositionOutputWithVideoTracks:videoSettings:';
    function initWithVideoTracks_videoSettings (videoTracks: AVAssetTrack *ProtocolPtr; videoSettings: nullable NSDictionaryPtr): instancetype; message 'initWithVideoTracks:videoSettings:'; { NS_DESIGNATED_INITIALIZER }
    function videoTracks: AVAssetTrack *ProtocolPtr; message 'videoTracks';
    function videoSettings: NSDictionary; message 'videoSettings';
    procedure setVideoComposition(newValue: AVVideoComposition); message 'setVideoComposition:';
    function videoComposition: AVVideoComposition; message 'videoComposition';
    function customVideoCompositor: AVVideoCompositingProtocol; message 'customVideoCompositor';
  end;

type
  AVAssetReaderOutputMetadataAdaptor = objcclass external (NSObject)
  private
    _internal: AVAssetReaderOutputMetadataAdaptorInternal;
  public
    class function assetReaderOutputMetadataAdaptorWithAssetReaderTrackOutput (trackOutput: AVAssetReaderTrackOutput): instancetype; message 'assetReaderOutputMetadataAdaptorWithAssetReaderTrackOutput:';
    function initWithAssetReaderTrackOutput (trackOutput: AVAssetReaderTrackOutput): instancetype; message 'initWithAssetReaderTrackOutput:'; { NS_DESIGNATED_INITIALIZER }
    function assetReaderTrackOutput: AVAssetReaderTrackOutput; message 'assetReaderTrackOutput';
    function nextTimedMetadataGroup: nullable AVTimedMetadataGroupPtr; message 'nextTimedMetadataGroup';
  end;

type
  AVAssetReaderSampleReferenceOutput = objcclass external (AVAssetReaderOutput)
  private
    _sampleReferenceOutputInternal: AVAssetReaderSampleReferenceOutputInternal;
  public
    class function assetReaderSampleReferenceOutputWithTrack (track: AVAssetTrack): instancetype; message 'assetReaderSampleReferenceOutputWithTrack:';
    function initWithTrack (track: AVAssetTrack): instancetype; message 'initWithTrack:'; { NS_DESIGNATED_INITIALIZER }
    function track: AVAssetTrack; message 'track';
  end;
{$endif}

