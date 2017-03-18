{ Parsed from CloudKit.framework CKFetchSubscriptionsOperation.h }

{$ifdef TYPES}
type
  CKFetchSubscriptionsOperationPtr = ^CKFetchSubscriptionsOperation;
{$endif}

{$ifdef CLASSES}

type
  CKFetchSubscriptionsOperation = objcclass external (CKDatabaseOperation)
  public
    class function fetchAllSubscriptionsOperation: instancetype; message 'fetchAllSubscriptionsOperation';
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithSubscriptionIDs (subscriptionIDs: NSString *ProtocolPtr): instancetype; message 'initWithSubscriptionIDs:';
    procedure setSubscriptionIDs(newValue: NSString *ProtocolPtr); message 'setSubscriptionIDs:';
    function subscriptionIDs: NSString *ProtocolPtr; message 'subscriptionIDs';
    procedure setFetchSubscriptionCompletionBlock(newValue: OpaqueCBlock); message 'setFetchSubscriptionCompletionBlock:';
    function fetchSubscriptionCompletionBlock: OpaqueCBlock; message 'fetchSubscriptionCompletionBlock';
  end;
{$endif}

