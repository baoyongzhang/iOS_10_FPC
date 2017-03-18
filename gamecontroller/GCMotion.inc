{ Parsed from GameController.framework GCMotion.h }

{ Types from GCMotion }
{$ifdef TYPES}


type
  GCMotionValueChangedHandler = OpaqueCBlock;
{$endif}


{$ifdef TYPES}
type
  GCMotionPtr = ^GCMotion;
{$endif}

{$ifdef TYPES}
type
  GCAcceleration = record
    x, y, z: double;
  end;
type
  GCAccelerationPtr = ^GCAcceleration;
type
  GCRotationRate = record
    x, y, z: double;
  end;
type
  GCRotationRatePtr = ^GCRotationRate;
type
  GCEulerAngles = record
    pitch, yaw, roll: double;
  end;
type
  GCEulerAnglesPtr = ^GCEulerAngles;
type
  GCQuaternion = record
    x, y, z, w: double;
  end;
type
  GCQuaternionPtr = ^GCQuaternion;
{$endif}

{$ifdef CLASSES}

type
  GCMotion = objcclass external (NSObject)
  public
    {$if  not defined(__has_feature)}
    function controller: GCController; message 'controller';
    {$else}
    function controller_: GCController; message 'controller';
    {$endif}
    procedure setValueChangedHandler(newValue: GCMotionValueChangedHandler); message 'setValueChangedHandler:';
    function valueChangedHandler: GCMotionValueChangedHandler; message 'valueChangedHandler';
    function gravity: GCAcceleration; message 'gravity';
    function userAcceleration: GCAcceleration; message 'userAcceleration';
    function __TVOS_UNAVAILABLE_: GCQuaternion attitude; message 'TVOS_UNAVAILABLE';
    function __TVOS_UNAVAILABLE_: GCRotationRate rotationRate; message 'TVOS_UNAVAILABLE';
  end;
{$endif}

