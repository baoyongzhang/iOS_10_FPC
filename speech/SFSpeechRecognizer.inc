{ Parsed from Speech.framework SFSpeechRecognizer.h }

{$ifdef TYPES}
type
  SFSpeechRecognizerPtr = ^SFSpeechRecognizer;
  SFSpeechRecognizerDelegateProtocolPtr = ^SFSpeechRecognizerDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  SFSpeechRecognizerAuthorizationStatus = NSInteger;
  SFSpeechRecognizerAuthorizationStatusPtr = ^SFSpeechRecognizerAuthorizationStatus;

const
  SFSpeechRecognizerAuthorizationStatusNotDetermined = 0;
  SFSpeechRecognizerAuthorizationStatusDenied = 1;
  SFSpeechRecognizerAuthorizationStatusRestricted = 2;
  SFSpeechRecognizerAuthorizationStatusAuthorized = 3;
{$endif}

{$ifdef CLASSES}

type
  SFSpeechRecognizer = objcclass external (NSObject)
  public
    class function supportedLocales: NSLocale *ProtocolPtr; message 'supportedLocales';
    class function authorizationStatus: SFSpeechRecognizerAuthorizationStatus; message 'authorizationStatus';
    class procedure requestAuthorization (handler: OpaqueCBlock); message 'requestAuthorization:';
    function init: nullable instancetype; message 'init';
    function initWithLocale (locale: NSLocale): nullable instancetype; message 'initWithLocale:'; { NS_DESIGNATED_INITIALIZER }
    function isAvailable: boolean; message 'isAvailable';
    function locale: NSLocale; message 'locale';
    procedure setDelegate(newValue: SFSpeechRecognizerDelegateProtocol); message 'setDelegate:';
    function delegate: SFSpeechRecognizerDelegateProtocol; message 'delegate';
    procedure setDefaultTaskHint(newValue: SFSpeechRecognitionTaskHint); message 'setDefaultTaskHint:';
    function defaultTaskHint: SFSpeechRecognitionTaskHint; message 'defaultTaskHint';
    function recognitionTaskWithRequest_resultHandler (request: SFSpeechRecognitionRequest; resultHandler: OpaqueCBlock): SFSpeechRecognitionTask; message 'recognitionTaskWithRequest:resultHandler:';
    function recognitionTaskWithRequest_delegate (request: SFSpeechRecognitionRequest; delegate_: SFSpeechRecognitionTaskDelegateProtocol): SFSpeechRecognitionTask; message 'recognitionTaskWithRequest:delegate:';
    procedure setQueue(newValue: NSOperationQueue); message 'setQueue:';
    function queue: NSOperationQueue; message 'queue';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  SFSpeechRecognizerDelegateProtocol = objcprotocol external name 'SFSpeechRecognizerDelegate' (NSObjectProtocol)
  optional
    procedure speechRecognizer_availabilityDidChange (speechRecognizer: SFSpeechRecognizer; available: boolean); message 'speechRecognizer:availabilityDidChange:';
  end;
{$endif}

