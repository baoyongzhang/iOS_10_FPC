{ Parsed from GameplayKit.framework GKStateMachine.h }

{$ifdef TYPES}
type
  GKStateMachinePtr = ^GKStateMachine;
{$endif}

{$ifdef CLASSES}

type
  GKStateMachine = objcclass external (NSObject)
  public
    function currentState: GKState; message 'currentState';
    class function stateMachineWithStates (states: GKState *ProtocolPtr): instancetype; message 'stateMachineWithStates:';
    function initWithStates (states: GKState *ProtocolPtr): instancetype; message 'initWithStates:'; { NS_DESIGNATED_INITIALIZER }
    procedure updateWithDeltaTime (sec: NSTimeInterval); message 'updateWithDeltaTime:';
    function stateForClass_StateType_stateClass (stateClass: pobjc_class; GKState_: id; StateType: id): nullable GKStatePtr; message 'stateForClass:StateType:stateClass:';
    function canEnterState (stateClass: pobjc_class): boolean; message 'canEnterState:';
    function enterState (stateClass: pobjc_class): boolean; message 'enterState:';
  end;
{$endif}

