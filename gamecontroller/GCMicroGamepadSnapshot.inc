{ Parsed from GameController.framework GCMicroGamepadSnapshot.h }

{$ifdef TYPES}
type
  GCMicroGamepadSnapshotPtr = ^GCMicroGamepadSnapshot;
{$endif}

{$ifdef CLASSES}

type
  GCMicroGamepadSnapshot = objcclass external (GCMicroGamepad)
  public
    procedure setSnapshotData(newValue: NSData); message 'setSnapshotData:';
    function snapshotData: NSData; message 'snapshotData';
    function initWithSnapshotData (data: NSData): instancetype; message 'initWithSnapshotData:';
    function initWithController_snapshotData (controller__: GCController; data: NSData): instancetype; message 'initWithController:snapshotData:';
  end;
{$endif}

{$ifdef TYPES}
type
  GCMicroGamepadSnapShotDataV100 = record
    version: cuint16;
    size: cuint16;
    dpadX: single;
    dpadY: single;
    buttonA: single;
    buttonX: single;
  end;
type
  GCMicroGamepadSnapShotDataV100Ptr = ^GCMicroGamepadSnapShotDataV100;
{$endif}

{$ifdef FUNCTIONS}
function GCMicroGamepadSnapShotDataV100FromNSData(snapshotData: GCMicroGamepadSnapShotDataV100* __nullable; data: NSData* __nullable): boolean; cdecl; external;
function NSDataFromGCMicroGamepadSnapShotDataV100(snapshotData: GCMicroGamepadSnapShotDataV100* __nullable): NSData *__nullable; cdecl; external;
{$endif}

