{ Parsed from Speech.framework SFSpeechRecognitionRequest.h }

{$ifdef TYPES}
type
  SFSpeechRecognitionRequestPtr = ^SFSpeechRecognitionRequest;
  SFSpeechURLRecognitionRequestPtr = ^SFSpeechURLRecognitionRequest;
  SFSpeechAudioBufferRecognitionRequestPtr = ^SFSpeechAudioBufferRecognitionRequest;
{$endif}

{$ifdef CLASSES}

type
  SFSpeechRecognitionRequest = objcclass external (NSObject)
  public
    procedure setTaskHint(newValue: SFSpeechRecognitionTaskHint); message 'setTaskHint:';
    function taskHint: SFSpeechRecognitionTaskHint; message 'taskHint';
    procedure setShouldReportPartialResults(newValue: boolean); message 'setShouldReportPartialResults:';
    function shouldReportPartialResults: boolean; message 'shouldReportPartialResults';
    procedure setContextualStrings(newValue: NSString *ProtocolPtr); message 'setContextualStrings:';
    function contextualStrings: NSString *ProtocolPtr; message 'contextualStrings';
    procedure setInteractionIdentifier(newValue: NSString); message 'setInteractionIdentifier:';
    function interactionIdentifier: NSString; message 'interactionIdentifier';
  end;

type
  SFSpeechURLRecognitionRequest = objcclass external (SFSpeechRecognitionRequest)
  public
    function init: instancetype; message 'init';
    function initWithURL (URL: NSURL): instancetype; message 'initWithURL:'; { NS_DESIGNATED_INITIALIZER }
    function URL: NSURL; message 'URL';
  end;

type
  SFSpeechAudioBufferRecognitionRequest = objcclass external (SFSpeechRecognitionRequest)
  public
    function nativeAudioFormat: AVAudioFormat; message 'nativeAudioFormat';
    procedure appendAudioPCMBuffer (audioPCMBuffer: AVAudioPCMBuffer); message 'appendAudioPCMBuffer:';
    procedure appendAudioSampleBuffer (sampleBuffer: CMSampleBufferRef); message 'appendAudioSampleBuffer:';
    procedure endAudio; message 'endAudio';
  end;
{$endif}

