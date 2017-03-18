{ Parsed from HomeKit.framework HMCameraSnapshot.h }

{$ifdef TYPES}
type
  HMCameraSnapshotPtr = ^HMCameraSnapshot;
{$endif}

{$ifdef CLASSES}

type
  HMCameraSnapshot = objcclass external (HMCameraSource)
  public
    function captureDate: NSDate; message 'captureDate';
  end;
{$endif}

