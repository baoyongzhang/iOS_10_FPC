{ Parsed from Speech.framework SFSpeechRecognitionTask.h }

{$ifdef TYPES}
type
  SFSpeechRecognitionTaskPtr = ^SFSpeechRecognitionTask;
  SFSpeechRecognitionTaskDelegateProtocolPtr = ^SFSpeechRecognitionTaskDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  SFSpeechRecognitionTaskState = NSInteger;
  SFSpeechRecognitionTaskStatePtr = ^SFSpeechRecognitionTaskState;

const
  SFSpeechRecognitionTaskStateStarting = 0;
  SFSpeechRecognitionTaskStateRunning = 1;
  SFSpeechRecognitionTaskStateFinishing = 2;
  SFSpeechRecognitionTaskStateCanceling = 3;
  SFSpeechRecognitionTaskStateCompleted = 4;
{$endif}

{$ifdef CLASSES}

type
  SFSpeechRecognitionTask = objcclass external (NSObject)
  public
    function state: SFSpeechRecognitionTaskState; message 'state';
    function isFinishing: boolean; message 'isFinishing';
    procedure finish; message 'finish';
    function isCancelled: boolean; message 'isCancelled';
    procedure cancel; message 'cancel';
    function error: NSError; message 'error';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  SFSpeechRecognitionTaskDelegateProtocol = objcprotocol external name 'SFSpeechRecognitionTaskDelegate' (NSObjectProtocol)
  optional
    procedure speechRecognitionDidDetectSpeech (task: SFSpeechRecognitionTask); message 'speechRecognitionDidDetectSpeech:';
    procedure speechRecognitionTask_didHypothesizeTranscription (task: SFSpeechRecognitionTask; transcription: SFTranscription); message 'speechRecognitionTask:didHypothesizeTranscription:';
    procedure speechRecognitionTask_didFinishRecognition (task: SFSpeechRecognitionTask; recognitionResult: SFSpeechRecognitionResult); message 'speechRecognitionTask:didFinishRecognition:';
    procedure speechRecognitionTaskFinishedReadingAudio (task: SFSpeechRecognitionTask); message 'speechRecognitionTaskFinishedReadingAudio:';
    procedure speechRecognitionTaskWasCancelled (task: SFSpeechRecognitionTask); message 'speechRecognitionTaskWasCancelled:';
    procedure speechRecognitionTask_didFinishSuccessfully (task: SFSpeechRecognitionTask; successfully: boolean); message 'speechRecognitionTask:didFinishSuccessfully:';
  end;
{$endif}

