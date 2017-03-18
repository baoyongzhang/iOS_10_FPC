{ Parsed from AVFoundation.framework AVCaptureAudioDataOutput.h }

{ Types from AVCaptureAudioDataOutput }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  AVCaptureAudioDataOutputPtr = ^AVCaptureAudioDataOutput;
  AVCaptureAudioDataOutputSampleBufferDelegateProtocolPtr = ^AVCaptureAudioDataOutputSampleBufferDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  AVCaptureAudioDataOutput = objcclass external (AVCaptureOutput)
  private
    _internal: AVCaptureAudioDataOutputInternal;
  public
    procedure setSampleBufferDelegate_queue (sampleBufferDelegate: AVCaptureAudioDataOutputSampleBufferDelegateProtocol; sampleBufferCallbackQueue: dispatch_queue_t); message 'setSampleBufferDelegate:queue:';
    function sampleBufferDelegate: AVCaptureAudioDataOutputSampleBufferDelegateProtocol; message 'sampleBufferDelegate';
    function sampleBufferCallbackQueue: dispatch_queue_t; message 'sampleBufferCallbackQueue';
    {$if (defined(TARGET_OS_MAC) and not (defined(TARGET_OS_EMBEDDED) or defined(TARGET_OS_IPHONE)))}
    procedure setAudioSettings(newValue: NSDictionary); message 'setAudioSettings:';
    function audioSettings: NSDictionary; message 'audioSettings';
    {$endif}
    function recommendedAudioSettingsForAssetWriterWithOutputFileType (outputFileType: NSString): NSDictionary; message 'recommendedAudioSettingsForAssetWriterWithOutputFileType:'; { available in 7_0 }
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  AVCaptureAudioDataOutputSampleBufferDelegateProtocol = objcprotocol external name 'AVCaptureAudioDataOutputSampleBufferDelegate' (NSObjectProtocol)
  optional
    procedure captureOutput_didOutputSampleBuffer_fromConnection (captureOutput: AVCaptureOutput; sampleBuffer: CMSampleBufferRef; connection: AVCaptureConnection); message 'captureOutput:didOutputSampleBuffer:fromConnection:';
  end;
{$endif}

