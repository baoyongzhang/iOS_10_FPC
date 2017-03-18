{ Parsed from AVFAudio.framework AVAudioFile.h }

{$ifdef TYPES}
type
  AVAudioFilePtr = ^AVAudioFile;
{$endif}

{$ifdef CLASSES}

type
  AVAudioFile = objcclass external (NSObject)
  private
    _impl: pointer;
  public
    function initForReading_error (fileURL: NSURL; outError: NSErrorPtr): nullable instancetype; message 'initForReading:error:';
    function initForReading_commonFormat_interleaved_error (fileURL: NSURL; format: AVAudioCommonFormat; interleaved: boolean; outError: NSErrorPtr): nullable instancetype; message 'initForReading:commonFormat:interleaved:error:';
    function initForWriting_settings_error (fileURL: NSURL; settings: NSDictionary; outError: NSErrorPtr): nullable instancetype; message 'initForWriting:settings:error:';
    function initForWriting_settings_commonFormat_interleaved_error (fileURL: NSURL; settings: NSDictionary; format: AVAudioCommonFormat; interleaved: boolean; outError: NSErrorPtr): nullable instancetype; message 'initForWriting:settings:commonFormat:interleaved:error:';
    function readIntoBuffer_error (buffer: AVAudioPCMBuffer; outError: NSErrorPtr): boolean; message 'readIntoBuffer:error:';
    function readIntoBuffer_frameCount_error (buffer: AVAudioPCMBuffer; frames: AVAudioFrameCount; outError: NSErrorPtr): boolean; message 'readIntoBuffer:frameCount:error:';
    function writeFromBuffer_error (buffer: AVAudioPCMBuffer; outError: NSErrorPtr): boolean; message 'writeFromBuffer:error:';
    function url: NSURL; message 'url';
    function fileFormat: AVAudioFormat; message 'fileFormat';
    function processingFormat: AVAudioFormat; message 'processingFormat';
    function length: AVAudioFramePosition; message 'length';
    procedure setFramePosition(newValue: AVAudioFramePosition); message 'setFramePosition:';
    function framePosition: AVAudioFramePosition; message 'framePosition';
  end;
{$endif}

