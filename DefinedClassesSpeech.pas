{$mode delphi}
{$modeswitch objectivec1}
{$modeswitch cvar}

unit DefinedClassesSpeech;
interface

type
  SFSpeechAudioBufferRecognitionRequest = objcclass external;
  SFSpeechRecognitionRequest = objcclass external;
  SFSpeechRecognitionResult = objcclass external;
  SFSpeechRecognitionTask = objcclass external;
  SFSpeechRecognizer = objcclass external;
  SFSpeechURLRecognitionRequest = objcclass external;
  SFTranscription = objcclass external;
  SFTranscriptionSegment = objcclass external;
  SFSpeechRecognitionTaskDelegateProtocol = objcprotocol external name 'SFSpeechRecognitionTaskDelegate';
  SFSpeechRecognizerDelegateProtocol = objcprotocol external name 'SFSpeechRecognizerDelegate';

type
  SFSpeechRecordingRecognitionRequest = objcclass external;

implementation
end.
