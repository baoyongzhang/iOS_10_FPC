{ Parsed from AVFAudio.framework AVAudioFormat.h }

{ Types from AVAudioFormat }
{$ifdef TYPES}


{$endif}


{$ifdef TYPES}
type
  AVAudioFormatPtr = ^AVAudioFormat;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef TYPES}
const
  AVAUDIOFORMAT_HAVE_CMFORMATDESCRIPTION = 1;
{$endif}

{$endif}
{$ifdef TYPES}
type
  AVAudioCommonFormat = NSUInteger;
  AVAudioCommonFormatPtr = ^AVAudioCommonFormat;

const
  AVAudioOtherFormat = 0;
  AVAudioPCMFormatFloat32 = 1;
  AVAudioPCMFormatFloat64 = 2;
  AVAudioPCMFormatInt16 = 3;
  AVAudioPCMFormatInt32 = 4;
{$endif}

{$ifdef CLASSES}

type
  AVAudioFormat = objcclass external (NSObject, NSSecureCodingProtocol)
  private
    _asbd: AudioStreamBasicDescription;
    _layout: AVAudioChannelLayout;
    _commonFormat: AVAudioCommonFormat;
    _reserved: pointer;
  public
    function initWithStreamDescription (asbd: AudioStreamBasicDescriptionPtr): instancetype; message 'initWithStreamDescription:';
    function initWithStreamDescription_channelLayout (asbd: AudioStreamBasicDescriptionPtr; layout: AVAudioChannelLayout * __nullable): instancetype; message 'initWithStreamDescription:channelLayout:';
    function initStandardFormatWithSampleRate_channels (sampleRate: double; channels: AVAudioChannelCount): instancetype; message 'initStandardFormatWithSampleRate:channels:';
    function initStandardFormatWithSampleRate_channelLayout (sampleRate: double; layout: AVAudioChannelLayout): instancetype; message 'initStandardFormatWithSampleRate:channelLayout:';
    function initWithCommonFormat_sampleRate_channels_interleaved (format: AVAudioCommonFormat; sampleRate: double; channels: AVAudioChannelCount; interleaved: boolean): instancetype; message 'initWithCommonFormat:sampleRate:channels:interleaved:';
    function initWithCommonFormat_sampleRate_interleaved_channelLayout (format: AVAudioCommonFormat; sampleRate: double; interleaved: boolean; layout: AVAudioChannelLayout): instancetype; message 'initWithCommonFormat:sampleRate:interleaved:channelLayout:';
    function initWithSettings (settings: NSDictionary): instancetype; message 'initWithSettings:';
    {$if defined(AVAUDIOFORMAT_HAVE_CMFORMATDESCRIPTION)}
    function initWithCMAudioFormatDescription (formatDescription: CMAudioFormatDescriptionRef): instancetype; message 'initWithCMAudioFormatDescription:'; { available in 10_11, 9_0 }
    {$endif}
    function isEqual (object_: id): boolean; message 'isEqual:';
    function isStandard: boolean; message 'isStandard';
    function commonFormat: AVAudioCommonFormat; message 'commonFormat';
    function channelCount: AVAudioChannelCount; message 'channelCount';
    function sampleRate: double; message 'sampleRate';
    function isInterleaved: boolean; message 'isInterleaved';
    function streamDescription: AudioStreamBasicDescriptionPtr; message 'streamDescription';
    function channelLayout: AVAudioChannelLayout; message 'channelLayout';
    procedure setMagicCookie(newValue: NSData); message 'setMagicCookie:';
    function magicCookie: NSData; message 'magicCookie';
    function settings: NSDictionary; message 'settings';
    {$if defined(AVAUDIOFORMAT_HAVE_CMFORMATDESCRIPTION)}
    function formatDescription: CMAudioFormatDescriptionRef; message 'formatDescription';
    {$endif}

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

