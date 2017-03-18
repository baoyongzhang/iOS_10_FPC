{ Parsed from AVFAudio.framework AVAudioConverter.h }

{$ifdef TYPES}
type
  AVAudioConverterPtr = ^AVAudioConverter;
{$endif}

{$ifdef TYPES}
type
  AVAudioConverterPrimeMethod = NSInteger;
  AVAudioConverterPrimeMethodPtr = ^AVAudioConverterPrimeMethod;

const
  AVAudioConverterPrimeMethod_Pre = 0;
  AVAudioConverterPrimeMethod_Normal = 1;
  AVAudioConverterPrimeMethod_None = 2;

type
  AVAudioConverterPrimeInfo = record
    leadingFrames: AVAudioFrameCount;
    trailingFrames: AVAudioFrameCount;
  end;
type
  AVAudioConverterPrimeInfoPtr = ^AVAudioConverterPrimeInfo;

type
  AVAudioConverterInputStatus = NSInteger;
  AVAudioConverterInputStatusPtr = ^AVAudioConverterInputStatus;

const
  AVAudioConverterInputStatus_HaveData = 0;
  AVAudioConverterInputStatus_NoDataNow = 1;
  AVAudioConverterInputStatus_EndOfStream = 2;

type
  AVAudioConverterOutputStatus = NSInteger;
  AVAudioConverterOutputStatusPtr = ^AVAudioConverterOutputStatus;

const
  AVAudioConverterOutputStatus_HaveData = 0;
  AVAudioConverterOutputStatus_InputRanDry = 1;
  AVAudioConverterOutputStatus_EndOfStream = 2;
  AVAudioConverterOutputStatus_Error = 3;

type
  AVAudioConverterInputBlock = OpaqueCBlock;
{$endif}

{$ifdef CLASSES}

type
  AVAudioConverter = objcclass external (NSObject)
  private
    _impl: pointer;
  public
    function initFromFormat_toFormat (fromFormat: AVAudioFormat; toFormat: AVAudioFormat): instancetype; message 'initFromFormat:toFormat:';
    procedure reset; message 'reset';
    function inputFormat: AVAudioFormat; message 'inputFormat';
    function outputFormat: AVAudioFormat; message 'outputFormat';
    procedure setChannelMap(newValue: NSNumber *ProtocolPtr); message 'setChannelMap:';
    function channelMap: NSNumber *ProtocolPtr; message 'channelMap';
    procedure setMagicCookie(newValue: NSData); message 'setMagicCookie:';
    function magicCookie: NSData; message 'magicCookie';
    procedure setDownmix(newValue: boolean); message 'setDownmix:';
    function downmix: boolean; message 'downmix';
    procedure setDither(newValue: boolean); message 'setDither:';
    function dither: boolean; message 'dither';
    procedure setSampleRateConverterQuality(newValue: NSInteger); message 'setSampleRateConverterQuality:';
    function sampleRateConverterQuality: NSInteger; message 'sampleRateConverterQuality';
    procedure setSampleRateConverterAlgorithm(newValue: NSString); message 'setSampleRateConverterAlgorithm:';
    function sampleRateConverterAlgorithm: NSString; message 'sampleRateConverterAlgorithm';
    procedure setPrimeMethod(newValue: AVAudioConverterPrimeMethod); message 'setPrimeMethod:';
    function primeMethod: AVAudioConverterPrimeMethod; message 'primeMethod';
    procedure setPrimeInfo(newValue: AVAudioConverterPrimeInfo); message 'setPrimeInfo:';
    function primeInfo: AVAudioConverterPrimeInfo; message 'primeInfo';
    function convertToBuffer_fromBuffer_error (outputBuffer: AVAudioPCMBuffer; inputBuffer: AVAudioPCMBuffer; outError: NSErrorPtr): boolean; message 'convertToBuffer:fromBuffer:error:';
    function convertToBuffer_error_withInputFromBlock (outputBuffer: AVAudioBuffer; outError: NSErrorPtr; inputBlock: AVAudioConverterInputBlock): AVAudioConverterOutputStatus; message 'convertToBuffer:error:withInputFromBlock:';
  end;


type
  Encoding = objccategory external (AVAudioConverter)
    procedure setBitRate(newValue: NSInteger); message 'setBitRate:';
    function bitRate: NSInteger; message 'bitRate';
    procedure setBitRateStrategy(newValue: NSString); message 'setBitRateStrategy:';
    function bitRateStrategy: NSString; message 'bitRateStrategy';
    function maximumOutputPacketSize: NSInteger; message 'maximumOutputPacketSize';
    function availableEncodeBitRates: NSNumber *ProtocolPtr; message 'availableEncodeBitRates';
    function applicableEncodeBitRates: NSNumber *ProtocolPtr; message 'applicableEncodeBitRates';
    function availableEncodeSampleRates: NSNumber *ProtocolPtr; message 'availableEncodeSampleRates';
    function applicableEncodeSampleRates: NSNumber *ProtocolPtr; message 'applicableEncodeSampleRates';
    function availableEncodeChannelLayoutTags: NSNumber *ProtocolPtr; message 'availableEncodeChannelLayoutTags';
  end;
{$endif}

