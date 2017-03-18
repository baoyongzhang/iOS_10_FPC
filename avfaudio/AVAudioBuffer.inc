{ Parsed from AVFAudio.framework AVAudioBuffer.h }

{$ifdef TYPES}
type
  AVAudioBufferPtr = ^AVAudioBuffer;
  AVAudioPCMBufferPtr = ^AVAudioPCMBuffer;
  AVAudioCompressedBufferPtr = ^AVAudioCompressedBuffer;
{$endif}

{$ifdef CLASSES}

type
  AVAudioBuffer = objcclass external (NSObject, NSCopyingProtocol, NSMutableCopyingProtocol)
  private
    _impl: pointer;
  public
    function format: AVAudioFormat; message 'format';
    function audioBufferList: AudioBufferListPtr; message 'audioBufferList';
    function mutableAudioBufferList: AudioBufferListPtr; message 'mutableAudioBufferList';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    function mutableCopyWithZone (zone: nullable NSZonePtr): id; message 'mutableCopyWithZone:';
  end;

type
  AVAudioPCMBuffer = objcclass external (AVAudioBuffer)
  public
    function initWithPCMFormat_frameCapacity (format_: AVAudioFormat; frameCapacity: AVAudioFrameCount): instancetype; message 'initWithPCMFormat:frameCapacity:'; { NS_DESIGNATED_INITIALIZER }
    function frameCapacity: AVAudioFrameCount; message 'frameCapacity';
    procedure setFrameLength(newValue: AVAudioFrameCount); message 'setFrameLength:';
    function frameLength: AVAudioFrameCount; message 'frameLength';
    function stride: NSUInteger; message 'stride';
    function floatChannelData: float *__nonnull *__nullable; message 'floatChannelData';
    function int16ChannelData: int16_t *__nonnull *__nullable; message 'int16ChannelData';
    function int32ChannelData: int32_t *__nonnull *__nullable; message 'int32ChannelData';
  end;

type
  AVAudioCompressedBuffer = objcclass external (AVAudioBuffer)
  public
    function initWithFormat_packetCapacity_maximumPacketSize (format_: AVAudioFormat; packetCapacity: AVAudioPacketCount; maximumPacketSize: NSInteger): instancetype; message 'initWithFormat:packetCapacity:maximumPacketSize:';
    function initWithFormat_packetCapacity (format_: AVAudioFormat; packetCapacity: AVAudioPacketCount): instancetype; message 'initWithFormat:packetCapacity:';
    function packetCapacity: AVAudioPacketCount; message 'packetCapacity';
    procedure setPacketCount(newValue: AVAudioPacketCount); message 'setPacketCount:';
    function packetCount: AVAudioPacketCount; message 'packetCount';
    function maximumPacketSize: NSInteger; message 'maximumPacketSize';
    function data: pointer; message 'data';
    function packetDescriptions: AudioStreamPacketDescriptionPtr; message 'packetDescriptions';
  end;
{$endif}

