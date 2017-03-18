{ Parsed from ReplayKit.framework RPScreenRecorder.h }

{$ifdef TYPES}
type
  RPScreenRecorderPtr = ^RPScreenRecorder;
  RPScreenRecorderDelegateProtocolPtr = ^RPScreenRecorderDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  RPScreenRecorder = objcclass external (NSObject)
  public
    class function sharedRecorder: RPScreenRecorder; message 'sharedRecorder';
    function init: instancetype; message 'init';
    procedure startRecordingWithMicrophoneEnabled_handler (microphoneEnabled: boolean; handler: OpaqueCBlock); message 'startRecordingWithMicrophoneEnabled:handler:'; deprecated 'in 9_0, 10_0';
    procedure startRecordingWithHandler (handler: OpaqueCBlock); message 'startRecordingWithHandler:'; { available in 10_0 }
    procedure stopRecordingWithHandler (handler: OpaqueCBlock); message 'stopRecordingWithHandler:';
    procedure discardRecordingWithHandler (handler: OpaqueCBlock); message 'discardRecordingWithHandler:';
    procedure setDelegate(newValue: RPScreenRecorderDelegateProtocol); message 'setDelegate:';
    function delegate: RPScreenRecorderDelegateProtocol; message 'delegate';
    function isAvailable: boolean; message 'isAvailable';
    function isRecording: boolean; message 'isRecording';
    procedure set__TVOS_PROHIBITED(newValue: BOOL microphoneEnabled); message 'set__TVOS_PROHIBITED:';
    function isMicrophoneEnabled: BOOL microphoneEnabled; message 'isMicrophoneEnabled';
    procedure set__TVOS_PROHIBITED_(newValue: BOOL cameraEnabled); message 'set__TVOS_PROHIBITED:';
    function isCameraEnabled: BOOL cameraEnabled; message 'isCameraEnabled';
    function __TVOS_PROHIBITED_: UIView *cameraPreviewView; message 'TVOS_PROHIBITED';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  RPScreenRecorderDelegateProtocol = objcprotocol external name 'RPScreenRecorderDelegate' (NSObjectProtocol)
  optional
    procedure screenRecorder_didStopRecordingWithError_previewViewController (screenRecorder: RPScreenRecorder; error: NSError; previewViewController: nullable RPPreviewViewControllerPtr); message 'screenRecorder:didStopRecordingWithError:previewViewController:';
    procedure screenRecorderDidChangeAvailability (screenRecorder: RPScreenRecorder); message 'screenRecorderDidChangeAvailability:';
  end;
{$endif}

