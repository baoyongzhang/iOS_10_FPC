{ Parsed from AVFAudio.framework AVSpeechSynthesis.h }

{$ifdef TYPES}
type
  AVSpeechSynthesisVoicePtr = ^AVSpeechSynthesisVoice;
  AVSpeechUtterancePtr = ^AVSpeechUtterance;
  AVSpeechSynthesizerPtr = ^AVSpeechSynthesizer;
  AVSpeechSynthesizerDelegateProtocolPtr = ^AVSpeechSynthesizerDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  AVSpeechBoundary = NSInteger;
  AVSpeechBoundaryPtr = ^AVSpeechBoundary;

const
  AVSpeechBoundaryImmediate = 0;
  AVSpeechBoundaryWord = 1;

type
  AVSpeechSynthesisVoiceQuality = NSInteger;
  AVSpeechSynthesisVoiceQualityPtr = ^AVSpeechSynthesisVoiceQuality;

const
  AVSpeechSynthesisVoiceQualityDefault = 1;
  AVSpeechSynthesisVoiceQualityEnhanced = 2;
{$endif}

{$ifdef CLASSES}

type
  AVSpeechSynthesisVoice = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    class function speechVoices: AVSpeechSynthesisVoice *ProtocolPtr; message 'speechVoices';
    class function currentLanguageCode: NSString; message 'currentLanguageCode';
    class function voiceWithLanguage (languageCode: nullable NSStringPtr): nullable AVSpeechSynthesisVoicePtr; message 'voiceWithLanguage:';
    class function voiceWithIdentifier (identifier: NSString): nullable AVSpeechSynthesisVoicePtr; message 'voiceWithIdentifier:'; { available in 9_0 }
    function language: NSString; message 'language';
    function identifier: NSString; message 'identifier';
    function name: NSString; message 'name';
    function quality: AVSpeechSynthesisVoiceQuality; message 'quality';

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;

type
  AVSpeechUtterance = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    class function speechUtteranceWithString (string_: NSString): instancetype; message 'speechUtteranceWithString:';
    class function speechUtteranceWithAttributedString (string_: NSAttributedString): instancetype; message 'speechUtteranceWithAttributedString:'; { available in 10_0 }
    function initWithString (string_: NSString): instancetype; message 'initWithString:';
    function initWithAttributedString (string_: NSAttributedString): instancetype; message 'initWithAttributedString:'; { available in 10_0 }
    procedure setVoice(newValue: AVSpeechSynthesisVoice); message 'setVoice:';
    function voice: AVSpeechSynthesisVoice; message 'voice';
    function speechString: NSString; message 'speechString';
    function attributedSpeechString: NSAttributedString; message 'attributedSpeechString';
    procedure setRate(newValue: single); message 'setRate:';
    function rate: single; message 'rate';
    procedure setPitchMultiplier(newValue: single); message 'setPitchMultiplier:';
    function pitchMultiplier: single; message 'pitchMultiplier';
    procedure setVolume(newValue: single); message 'setVolume:';
    function volume: single; message 'volume';
    procedure setPreUtteranceDelay(newValue: NSTimeInterval); message 'setPreUtteranceDelay:';
    function preUtteranceDelay: NSTimeInterval; message 'preUtteranceDelay';
    procedure setPostUtteranceDelay(newValue: NSTimeInterval); message 'setPostUtteranceDelay:';
    function postUtteranceDelay: NSTimeInterval; message 'postUtteranceDelay';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;

type
  AVSpeechSynthesizer = objcclass external (NSObject)
  public
    procedure setDelegate(newValue: AVSpeechSynthesizerDelegateProtocol); message 'setDelegate:';
    function delegate: AVSpeechSynthesizerDelegateProtocol; message 'delegate';
    function isSpeaking: boolean; message 'isSpeaking';
    function isPaused: boolean; message 'isPaused';
    procedure speakUtterance (utterance: AVSpeechUtterance); message 'speakUtterance:';
    function stopSpeakingAtBoundary (boundary: AVSpeechBoundary): boolean; message 'stopSpeakingAtBoundary:';
    function pauseSpeakingAtBoundary (boundary: AVSpeechBoundary): boolean; message 'pauseSpeakingAtBoundary:';
    function continueSpeaking: boolean; message 'continueSpeaking';
    procedure setOutputChannels(newValue: AVAudioSessionChannelDescription *ProtocolPtr); message 'setOutputChannels:';
    function outputChannels: AVAudioSessionChannelDescription *ProtocolPtr; message 'outputChannels';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  AVSpeechSynthesizerDelegateProtocol = objcprotocol external name 'AVSpeechSynthesizerDelegate' (NSObjectProtocol)
  optional
    procedure speechSynthesizer_didStartSpeechUtterance (synthesizer: AVSpeechSynthesizer; utterance: AVSpeechUtterance); message 'speechSynthesizer:didStartSpeechUtterance:';
    procedure speechSynthesizer_didFinishSpeechUtterance (synthesizer: AVSpeechSynthesizer; utterance: AVSpeechUtterance); message 'speechSynthesizer:didFinishSpeechUtterance:';
    procedure speechSynthesizer_didPauseSpeechUtterance (synthesizer: AVSpeechSynthesizer; utterance: AVSpeechUtterance); message 'speechSynthesizer:didPauseSpeechUtterance:';
    procedure speechSynthesizer_didContinueSpeechUtterance (synthesizer: AVSpeechSynthesizer; utterance: AVSpeechUtterance); message 'speechSynthesizer:didContinueSpeechUtterance:';
    procedure speechSynthesizer_didCancelSpeechUtterance (synthesizer: AVSpeechSynthesizer; utterance: AVSpeechUtterance); message 'speechSynthesizer:didCancelSpeechUtterance:';
    procedure speechSynthesizer_willSpeakRangeOfSpeechString_utterance (synthesizer: AVSpeechSynthesizer; characterRange: NSRange; utterance: AVSpeechUtterance); message 'speechSynthesizer:willSpeakRangeOfSpeechString:utterance:';
  end;
{$endif}

