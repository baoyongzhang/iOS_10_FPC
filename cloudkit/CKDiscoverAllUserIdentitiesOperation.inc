{ Parsed from CloudKit.framework CKDiscoverAllUserIdentitiesOperation.h }

{$ifdef TYPES}
type
  CKDiscoverAllUserIdentitiesOperationPtr = ^CKDiscoverAllUserIdentitiesOperation;
{$endif}

{$ifdef CLASSES}

type
  CKDiscoverAllUserIdentitiesOperation = objcclass external (CKOperation)
  public
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    procedure setUserIdentityDiscoveredBlock(newValue: OpaqueCBlock); message 'setUserIdentityDiscoveredBlock:';
    function userIdentityDiscoveredBlock: OpaqueCBlock; message 'userIdentityDiscoveredBlock';
    procedure setDiscoverAllUserIdentitiesCompletionBlock(newValue: OpaqueCBlock); message 'setDiscoverAllUserIdentitiesCompletionBlock:';
    function discoverAllUserIdentitiesCompletionBlock: OpaqueCBlock; message 'discoverAllUserIdentitiesCompletionBlock';
  end;
{$endif}

