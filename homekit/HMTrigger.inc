{ Parsed from HomeKit.framework HMTrigger.h }

{$ifdef TYPES}
type
  HMTriggerPtr = ^HMTrigger;
{$endif}

{$ifdef CLASSES}

type
  HMTrigger = objcclass external (NSObject)
  public
    function init: instancetype; message 'init';
    function name: NSString; message 'name';
    function isEnabled: boolean; message 'isEnabled';
    function actionSets: HMActionSet *ProtocolPtr; message 'actionSets';
    function lastFireDate: NSDate; message 'lastFireDate';
    function uniqueIdentifier: NSUUID; message 'uniqueIdentifier';
    procedure updateName_completionHandler (name_: NSString; completion: OpaqueCBlock); message 'updateName:completionHandler:';
    procedure addActionSet_completionHandler (actionSet: HMActionSet; completion: OpaqueCBlock); message 'addActionSet:completionHandler:';
    procedure removeActionSet_completionHandler (actionSet: HMActionSet; completion: OpaqueCBlock); message 'removeActionSet:completionHandler:';
    procedure enable_completionHandler (enable: boolean; completion: OpaqueCBlock); message 'enable:completionHandler:';
  end;
{$endif}

