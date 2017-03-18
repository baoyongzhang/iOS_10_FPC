{ Parsed from GameController.framework GCMicroGamepad.h }

{ Types from GCMicroGamepad }
{$ifdef TYPES}


type
  GCMicroGamepadValueChangedHandler = OpaqueCBlock;
{$endif}


{$ifdef TYPES}
type
  GCMicroGamepadPtr = ^GCMicroGamepad;
{$endif}

{$ifdef CLASSES}

type
  GCMicroGamepad = objcclass external (NSObject)
  public
    {$if  not defined(__has_feature)}
    function controller: GCController; message 'controller';
    {$else}
    function controller_: GCController; message 'controller';
    {$endif}
    procedure setValueChangedHandler(newValue: GCMicroGamepadValueChangedHandler); message 'setValueChangedHandler:';
    function valueChangedHandler: GCMicroGamepadValueChangedHandler; message 'valueChangedHandler';
    function saveSnapshot: GCMicroGamepadSnapshot; message 'saveSnapshot';
    function dpad: GCControllerDirectionPad; message 'dpad';
    function buttonA: GCControllerButtonInput; message 'buttonA';
    function buttonX: GCControllerButtonInput; message 'buttonX';
    procedure setReportsAbsoluteDpadValues(newValue: boolean); message 'setReportsAbsoluteDpadValues:';
    function reportsAbsoluteDpadValues: boolean; message 'reportsAbsoluteDpadValues';
    procedure setAllowsRotation(newValue: boolean); message 'setAllowsRotation:';
    function allowsRotation: boolean; message 'allowsRotation';
  end;
{$endif}

