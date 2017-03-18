{ Parsed from GameController.framework GCGamepadSnapshot.h }

{$ifdef TYPES}
type
  GCGamepadSnapshotPtr = ^GCGamepadSnapshot;
{$endif}

{$ifdef CLASSES}

type
  GCGamepadSnapshot = objcclass external (GCGamepad)
  public
    procedure setSnapshotData(newValue: NSData); message 'setSnapshotData:';
    function snapshotData: NSData; message 'snapshotData';
    function initWithSnapshotData (data: NSData): instancetype; message 'initWithSnapshotData:';
    function initWithController_snapshotData (controller__: GCController; data: NSData): instancetype; message 'initWithController:snapshotData:';
  end;
{$endif}

{$ifdef TYPES}
type
  GCGamepadSnapShotDataV100 = record
    version: cuint16;
    size: cuint16;
    dpadX: single;
    dpadY: single;
    buttonA: single;
    buttonB: single;
    buttonX: single;
    buttonY: single;
    leftShoulder: single;
    rightShoulder: single;
  end;
type
  GCGamepadSnapShotDataV100Ptr = ^GCGamepadSnapShotDataV100;
{$endif}

{$ifdef FUNCTIONS}
function GCGamepadSnapShotDataV100FromNSData(snapshotData: GCGamepadSnapShotDataV100* __nullable; data: NSData* __nullable): boolean; cdecl; external;
function NSDataFromGCGamepadSnapShotDataV100(snapshotData: GCGamepadSnapShotDataV100* __nullable): NSData *__nullable; cdecl; external;
{$endif}

