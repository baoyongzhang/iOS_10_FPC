{ Parsed from AVFoundation.framework AVCaptureFileOutput.h }

{ Types from AVCaptureFileOutput }
{$ifdef TYPES}


{$endif}


{ Types from AVCaptureMovieFileOutput }
{$ifdef TYPES}


{$endif}


{ Types from AVCaptureFileOutputRecordingDelegateProtocol }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  AVCaptureFileOutputPtr = ^AVCaptureFileOutput;
  AVCaptureMovieFileOutputPtr = ^AVCaptureMovieFileOutput;
  AVCaptureAudioFileOutputPtr = ^AVCaptureAudioFileOutput;
  AVCaptureFileOutputRecordingDelegateProtocolPtr = ^AVCaptureFileOutputRecordingDelegateProtocol;
  AVCaptureFileOutputDelegateProtocolPtr = ^AVCaptureFileOutputDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  AVCaptureFileOutput = objcclass external (AVCaptureOutput)
  private
    _fileOutputInternal: AVCaptureFileOutputInternal;
  public
    {$if (defined(TARGET_OS_MAC) and not (defined(TARGET_OS_EMBEDDED) or defined(TARGET_OS_IPHONE)))}
    procedure setDelegate(newValue: AVCaptureFileOutputDelegateProtocol); message 'setDelegate:';
    function delegate: AVCaptureFileOutputDelegateProtocol; message 'delegate';
    {$endif}
    function outputFileURL: NSURL; message 'outputFileURL';
    procedure startRecordingToOutputFileURL_recordingDelegate (outputFileURL_: NSURL; delegate_: AVCaptureFileOutputRecordingDelegateProtocol); message 'startRecordingToOutputFileURL:recordingDelegate:';
    procedure stopRecording; message 'stopRecording';
    function isRecording: boolean; message 'isRecording';
    {$if (defined(TARGET_OS_MAC) and not (defined(TARGET_OS_EMBEDDED) or defined(TARGET_OS_IPHONE)))}
    function isRecordingPaused: boolean; message 'isRecordingPaused';
    procedure pauseRecording; message 'pauseRecording'; { available in 10_7, NA }
    procedure resumeRecording; message 'resumeRecording'; { available in 10_7, NA }
    {$endif}
    function recordedDuration: CMTime; message 'recordedDuration';
    function recordedFileSize: cint64; message 'recordedFileSize';
    procedure setMaxRecordedDuration(newValue: CMTime); message 'setMaxRecordedDuration:';
    function maxRecordedDuration: CMTime; message 'maxRecordedDuration';
    procedure setMaxRecordedFileSize(newValue: cint64); message 'setMaxRecordedFileSize:';
    function maxRecordedFileSize: cint64; message 'maxRecordedFileSize';
    procedure setMinFreeDiskSpaceLimit(newValue: cint64); message 'setMinFreeDiskSpaceLimit:';
    function minFreeDiskSpaceLimit: cint64; message 'minFreeDiskSpaceLimit';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  AVCaptureFileOutputRecordingDelegateProtocol = objcprotocol external name 'AVCaptureFileOutputRecordingDelegate' (NSObjectProtocol)
  optional
    procedure captureOutput_didStartRecordingToOutputFileAtURL_fromConnections (captureOutput: AVCaptureFileOutput; fileURL: NSURL; connections: NSArray); message 'captureOutput:didStartRecordingToOutputFileAtURL:fromConnections:';
    {$if (defined(TARGET_OS_MAC) and not (defined(TARGET_OS_EMBEDDED) or defined(TARGET_OS_IPHONE)))}
    procedure captureOutput_didPauseRecordingToOutputFileAtURL_fromConnections (captureOutput: AVCaptureFileOutput; fileURL: NSURL; connections: NSArray); message 'captureOutput:didPauseRecordingToOutputFileAtURL:fromConnections:'; { available in 10_7, NA }
    procedure captureOutput_didResumeRecordingToOutputFileAtURL_fromConnections (captureOutput: AVCaptureFileOutput; fileURL: NSURL; connections: NSArray); message 'captureOutput:didResumeRecordingToOutputFileAtURL:fromConnections:'; { available in 10_7, NA }
    procedure captureOutput_willFinishRecordingToOutputFileAtURL_fromConnections_error (captureOutput: AVCaptureFileOutput; fileURL: NSURL; connections: NSArray; error: NSError); message 'captureOutput:willFinishRecordingToOutputFileAtURL:fromConnections:error:'; { available in 10_7, NA }
    {$endif}
  required
    procedure captureOutput_didFinishRecordingToOutputFileAtURL_fromConnections_error (captureOutput: AVCaptureFileOutput; outputFileURL: NSURL; connections: NSArray; error: NSError); message 'captureOutput:didFinishRecordingToOutputFileAtURL:fromConnections:error:';
  end;
{$endif}

{$if (defined(TARGET_OS_MAC) and not (defined(TARGET_OS_EMBEDDED) or defined(TARGET_OS_IPHONE)))}
{$ifdef PROTOCOLS}

type
  AVCaptureFileOutputDelegateProtocol = objcprotocol external name 'AVCaptureFileOutputDelegate' (NSObjectProtocol)
  required
    function captureOutputShouldProvideSampleAccurateRecordingStart (captureOutput: AVCaptureOutput): boolean; message 'captureOutputShouldProvideSampleAccurateRecordingStart:'; { available in 10_8, NA }
  optional
    procedure captureOutput_didOutputSampleBuffer_fromConnection (captureOutput: AVCaptureFileOutput; sampleBuffer: CMSampleBufferRef; connection: AVCaptureConnection); message 'captureOutput:didOutputSampleBuffer:fromConnection:'; { available in 10_7, NA }
  end;
{$endif}

{$endif}
{$ifdef CLASSES}

type
  AVCaptureMovieFileOutput = objcclass external (AVCaptureFileOutput)
  private
    _internal: AVCaptureMovieFileOutputInternal;
  public
    procedure setMovieFragmentInterval(newValue: CMTime); message 'setMovieFragmentInterval:';
    function movieFragmentInterval: CMTime; message 'movieFragmentInterval';
    procedure setMetadata(newValue: NSArray); message 'setMetadata:';
    function metadata: NSArray; message 'metadata';
    {$if defined(TARGET_OS_IPHONE)}
    function availableVideoCodecTypes: NSArray; message 'availableVideoCodecTypes';
    {$endif}
    function outputSettingsForConnection (connection: AVCaptureConnection): NSDictionary; message 'outputSettingsForConnection:'; { available in 10_7, 10_0 }
    procedure setOutputSettings_forConnection (outputSettings: NSDictionary; connection: AVCaptureConnection); message 'setOutputSettings:forConnection:'; { available in 10_7, 10_0 }
    {$if defined(TARGET_OS_IPHONE)}
    function recordsVideoOrientationAndMirroringChangesAsMetadataTrackForConnection (connection: AVCaptureConnection): boolean; message 'recordsVideoOrientationAndMirroringChangesAsMetadataTrackForConnection:'; { available in 9_0 }
    procedure setRecordsVideoOrientationAndMirroringChanges_asMetadataTrackForConnection (doRecordChanges: boolean; connection: AVCaptureConnection); message 'setRecordsVideoOrientationAndMirroringChanges:asMetadataTrackForConnection:'; { available in 9_0 }
    {$endif}
  end;
{$endif}

{$if (defined(TARGET_OS_MAC) and not (defined(TARGET_OS_EMBEDDED) or defined(TARGET_OS_IPHONE)))}
{$ifdef CLASSES}

type
  AVCaptureAudioFileOutput = objcclass external (AVCaptureFileOutput)
  private
    _internal: AVCaptureAudioFileOutputInternal;
  public
    class function availableOutputFileTypes: NSArray; message 'availableOutputFileTypes';
    procedure startRecordingToOutputFileURL_outputFileType_recordingDelegate (outputFileURL_: NSURL; fileType: NSString; delegate_: AVCaptureFileOutputRecordingDelegateProtocol); message 'startRecordingToOutputFileURL:outputFileType:recordingDelegate:';
    procedure setMetadata(newValue: NSArray); message 'setMetadata:';
    function metadata: NSArray; message 'metadata';
    procedure setAudioSettings(newValue: NSDictionary); message 'setAudioSettings:';
    function audioSettings: NSDictionary; message 'audioSettings';
  end;
{$endif}

{$endif}
