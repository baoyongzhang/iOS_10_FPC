{ Parsed from HomeKit.framework HMCameraStreamControl.h }

{$ifdef TYPES}
type
  HMCameraStreamControlPtr = ^HMCameraStreamControl;
  HMCameraStreamControlDelegateProtocolPtr = ^HMCameraStreamControlDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  HMCameraStreamControl = objcclass external (HMCameraControl)
  public
    procedure setDelegate(newValue: HMCameraStreamControlDelegateProtocol); message 'setDelegate:';
    function delegate: HMCameraStreamControlDelegateProtocol; message 'delegate';
    function streamState: HMCameraStreamState; message 'streamState';
    function cameraStream: HMCameraStream; message 'cameraStream';
    procedure startStream; message 'startStream';
    procedure stopStream; message 'stopStream';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  HMCameraStreamControlDelegateProtocol = objcprotocol external name 'HMCameraStreamControlDelegate' (NSObjectProtocol)
  optional
    procedure cameraStreamControlDidStartStream (cameraStreamControl: HMCameraStreamControl); message 'cameraStreamControlDidStartStream:';
    procedure cameraStreamControl_didStopStreamWithError (cameraStreamControl: HMCameraStreamControl; error: NSError *__nullable); message 'cameraStreamControl:didStopStreamWithError:';
  end;
{$endif}

