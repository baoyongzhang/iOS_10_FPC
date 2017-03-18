{ Parsed from CloudKit.framework CKDiscoverUserIdentitiesOperation.h }

{$ifdef TYPES}
type
  CKDiscoverUserIdentitiesOperationPtr = ^CKDiscoverUserIdentitiesOperation;
{$endif}

{$ifdef CLASSES}

type
  CKDiscoverUserIdentitiesOperation = objcclass external (CKOperation)
  public
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithUserIdentityLookupInfos (userIdentityLookupInfos: CKUserIdentityLookupInfo *ProtocolPtr): instancetype; message 'initWithUserIdentityLookupInfos:';
    procedure setUserIdentityLookupInfos(newValue: CKUserIdentityLookupInfo *ProtocolPtr); message 'setUserIdentityLookupInfos:';
    function userIdentityLookupInfos: CKUserIdentityLookupInfo *ProtocolPtr; message 'userIdentityLookupInfos';
    procedure setUserIdentityDiscoveredBlock(newValue: OpaqueCBlock); message 'setUserIdentityDiscoveredBlock:';
    function userIdentityDiscoveredBlock: OpaqueCBlock; message 'userIdentityDiscoveredBlock';
    procedure setDiscoverUserIdentitiesCompletionBlock(newValue: OpaqueCBlock); message 'setDiscoverUserIdentitiesCompletionBlock:';
    function discoverUserIdentitiesCompletionBlock: OpaqueCBlock; message 'discoverUserIdentitiesCompletionBlock';
  end;
{$endif}

