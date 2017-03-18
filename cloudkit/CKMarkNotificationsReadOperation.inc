{ Parsed from CloudKit.framework CKMarkNotificationsReadOperation.h }

{$ifdef TYPES}
type
  CKMarkNotificationsReadOperationPtr = ^CKMarkNotificationsReadOperation;
{$endif}

{$ifdef CLASSES}

type
  CKMarkNotificationsReadOperation = objcclass external (CKOperation)
  public
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithNotificationIDsToMarkRead (notificationIDs: CKNotificationID *ProtocolPtr): instancetype; message 'initWithNotificationIDsToMarkRead:';
    procedure setNotificationIDs(newValue: CKNotificationID *ProtocolPtr); message 'setNotificationIDs:';
    function notificationIDs: CKNotificationID *ProtocolPtr; message 'notificationIDs';
    procedure setMarkNotificationsReadCompletionBlock(newValue: OpaqueCBlock); message 'setMarkNotificationsReadCompletionBlock:';
    function markNotificationsReadCompletionBlock: OpaqueCBlock; message 'markNotificationsReadCompletionBlock';
  end;
{$endif}

