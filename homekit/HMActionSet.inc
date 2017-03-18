{ Parsed from HomeKit.framework HMActionSet.h }

{$ifdef TYPES}
type
  HMActionSetPtr = ^HMActionSet;
{$endif}

{$ifdef CLASSES}

type
  HMActionSet = objcclass external (NSObject)
  public
    function init: instancetype; message 'init';
    function name: NSString; message 'name';
    function actions: HMAction *ProtocolPtr; message 'actions';
    function isExecuting: boolean; message 'isExecuting';
    function actionSetType: NSString; message 'actionSetType';
    function uniqueIdentifier: NSUUID; message 'uniqueIdentifier';
    function lastExecutionDate: NSDate; message 'lastExecutionDate';
    procedure updateName_completionHandler (name_: NSString; completion: OpaqueCBlock); message 'updateName:completionHandler:';
    procedure addAction_completionHandler (action: HMAction; completion: OpaqueCBlock); message 'addAction:completionHandler:';
    procedure removeAction_completionHandler (action: HMAction; completion: OpaqueCBlock); message 'removeAction:completionHandler:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  HMActionSetTypeWakeUp: NSString { available in 9_0 }; cvar; external;
  HMActionSetTypeSleep: NSString { available in 9_0 }; cvar; external;
  HMActionSetTypeHomeDeparture: NSString { available in 9_0 }; cvar; external;
  HMActionSetTypeHomeArrival: NSString { available in 9_0 }; cvar; external;
  HMActionSetTypeUserDefined: NSString { available in 9_0 }; cvar; external;
  HMActionSetTypeTriggerOwned: NSString { available in 10_0 }; cvar; external;
{$endif}

