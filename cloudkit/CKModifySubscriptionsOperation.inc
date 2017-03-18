{ Parsed from CloudKit.framework CKModifySubscriptionsOperation.h }

{$ifdef TYPES}
type
  CKModifySubscriptionsOperationPtr = ^CKModifySubscriptionsOperation;
{$endif}

{$ifdef CLASSES}

type
  CKModifySubscriptionsOperation = objcclass external (CKDatabaseOperation)
  public
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithSubscriptionsToSave_subscriptionIDsToDelete (subscriptionsToSave: nullable CKSubscription *ProtocolPtr; subscriptionIDsToDelete: nullable NSString *ProtocolPtr): instancetype; message 'initWithSubscriptionsToSave:subscriptionIDsToDelete:';
    procedure setSubscriptionsToSave(newValue: CKSubscription *ProtocolPtr); message 'setSubscriptionsToSave:';
    function subscriptionsToSave: CKSubscription *ProtocolPtr; message 'subscriptionsToSave';
    procedure setSubscriptionIDsToDelete(newValue: NSString *ProtocolPtr); message 'setSubscriptionIDsToDelete:';
    function subscriptionIDsToDelete: NSString *ProtocolPtr; message 'subscriptionIDsToDelete';
    procedure setModifySubscriptionsCompletionBlock(newValue: OpaqueCBlock); message 'setModifySubscriptionsCompletionBlock:';
    function modifySubscriptionsCompletionBlock: OpaqueCBlock; message 'modifySubscriptionsCompletionBlock';
  end;
{$endif}

