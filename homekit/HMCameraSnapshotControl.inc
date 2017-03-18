{ Parsed from HomeKit.framework HMCameraSnapshotControl.h }

{$ifdef TYPES}
type
  HMCameraSnapshotControlPtr = ^HMCameraSnapshotControl;
  HMCameraSnapshotControlDelegateProtocolPtr = ^HMCameraSnapshotControlDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  HMCameraSnapshotControl = objcclass external (HMCameraControl)
  public
    procedure setDelegate(newValue: HMCameraSnapshotControlDelegateProtocol); message 'setDelegate:';
    function delegate: HMCameraSnapshotControlDelegateProtocol; message 'delegate';
    function mostRecentSnapshot: HMCameraSnapshot; message 'mostRecentSnapshot';
    procedure takeSnapshot; message 'takeSnapshot';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  HMCameraSnapshotControlDelegateProtocol = objcprotocol external name 'HMCameraSnapshotControlDelegate' (NSObjectProtocol)
  optional
    procedure cameraSnapshotControl_didTakeSnapshot_error (cameraSnapshotControl: HMCameraSnapshotControl; snapshot: HMCameraSnapshot *__nullable; error: NSError *__nullable); message 'cameraSnapshotControl:didTakeSnapshot:error:';
    procedure cameraSnapshotControlDidUpdateMostRecentSnapshot (cameraSnapshotControl: HMCameraSnapshotControl); message 'cameraSnapshotControlDidUpdateMostRecentSnapshot:';
  end;
{$endif}

