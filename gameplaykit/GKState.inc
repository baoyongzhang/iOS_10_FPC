{ Parsed from GameplayKit.framework GKState.h }

{$ifdef TYPES}
type
  GKStatePtr = ^GKState;
{$endif}

{$ifdef CLASSES}

type
  GKState = objcclass external (NSObject)
  public
    function stateMachine: GKStateMachine; message 'stateMachine';
    class function state: instancetype; message 'state';
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function isValidNextState (stateClass: pobjc_class): boolean; message 'isValidNextState:';
    procedure didEnterWithPreviousState (previousState: nullable GKStatePtr); message 'didEnterWithPreviousState:';
    procedure updateWithDeltaTime (seconds: NSTimeInterval); message 'updateWithDeltaTime:';
    procedure willExitWithNextState (nextState: GKState); message 'willExitWithNextState:';
  end;
{$endif}

