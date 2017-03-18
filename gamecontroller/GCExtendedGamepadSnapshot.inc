{ Parsed from GameController.framework GCExtendedGamepadSnapshot.h }

{$ifdef TYPES}
type
  GCExtendedGamepadSnapshotPtr = ^GCExtendedGamepadSnapshot;
{$endif}

{$ifdef CLASSES}

type
  GCExtendedGamepadSnapshot = objcclass external (GCExtendedGamepad)
  public
    procedure setSnapshotData(newValue: NSData); message 'setSnapshotData:';
    function snapshotData: NSData; message 'snapshotData';
    function initWithSnapshotData (data: NSData): instancetype; message 'initWithSnapshotData:';
    function initWithController_snapshotData (controller__: GCController; data: NSData): instancetype; message 'initWithController:snapshotData:';
  end;
{$endif}

{$ifdef TYPES}
type
  GCExtendedGamepadSnapShotDataV100 = record
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
    leftThumbstickX: single;
    leftThumbstickY: single;
    rightThumbstickX: single;
    rightThumbstickY: single;
    leftTrigger: single;
    rightTrigger: single;
  end;
type
  GCExtendedGamepadSnapShotDataV100Ptr = ^GCExtendedGamepadSnapShotDataV100;
{$endif}

{$ifdef FUNCTIONS}
function GCExtendedGamepadSnapShotDataV100FromNSData(snapshotData: GCExtendedGamepadSnapShotDataV100* __nullable; data: NSData* __nullable): boolean; cdecl; external;
function NSDataFromGCExtendedGamepadSnapShotDataV100(snapshotData: GCExtendedGamepadSnapShotDataV100* __nullable): NSData *__nullable; cdecl; external;
{$endif}

