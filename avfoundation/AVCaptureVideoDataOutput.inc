{ Parsed from AVFoundation.framework AVCaptureVideoDataOutput.h }

{$ifdef TYPES}
type
  AVCaptureVideoDataOutputPtr = ^AVCaptureVideoDataOutput;
  AVCaptureVideoDataOutputSampleBufferDelegateProtocolPtr = ^AVCaptureVideoDataOutputSampleBufferDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  AVCaptureVideoDataOutput = objcclass external (AVCaptureOutput)
  private
    _internal: AVCaptureVideoDataOutputInternal;
  public
    procedure setSampleBufferDelegate_queue (sampleBufferDelegate: AVCaptureVideoDataOutputSampleBufferDelegateProtocol; sampleBufferCallbackQueue: dispatch_queue_t); message 'setSampleBufferDelegate:queue:';
    function sampleBufferDelegate: AVCaptureVideoDataOutputSampleBufferDelegateProtocol; message 'sampleBufferDelegate';
    function sampleBufferCallbackQueue: dispatch_queue_t; message 'sampleBufferCallbackQueue';
    procedure setVideoSettings(newValue: NSDictionary); message 'setVideoSettings:';
    function videoSettings: NSDictionary; message 'videoSettings';
    function recommendedVideoSettingsForAssetWriterWithOutputFileType (outputFileType: NSString): NSDictionary; message 'recommendedVideoSettingsForAssetWriterWithOutputFileType:'; { available in 7_0 }
    function availableVideoCVPixelFormatTypes: NSArray; message 'availableVideoCVPixelFormatTypes';
    function availableVideoCodecTypes: NSArray; message 'availableVideoCodecTypes';
    procedure setMinFrameDuration(newValue: CMTime); message 'setMinFrameDuration:';
    function minFrameDuration: CMTime; message 'minFrameDuration';
    procedure setAlwaysDiscardsLateVideoFrames(newValue: boolean); message 'setAlwaysDiscardsLateVideoFrames:';
    function alwaysDiscardsLateVideoFrames: boolean; message 'alwaysDiscardsLateVideoFrames';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  AVCaptureVideoDataOutputSampleBufferDelegateProtocol = objcprotocol external name 'AVCaptureVideoDataOutputSampleBufferDelegate' (NSObjectProtocol)
  optional
    procedure captureOutput_didOutputSampleBuffer_fromConnection (captureOutput: AVCaptureOutput; sampleBuffer: CMSampleBufferRef; connection: AVCaptureConnection); message 'captureOutput:didOutputSampleBuffer:fromConnection:';
    procedure captureOutput_didDropSampleBuffer_fromConnection (captureOutput: AVCaptureOutput; sampleBuffer: CMSampleBufferRef; connection: AVCaptureConnection); message 'captureOutput:didDropSampleBuffer:fromConnection:'; { available in 10_7, 6_0 }
  end;
{$endif}

