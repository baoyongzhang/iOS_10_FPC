{ Parsed from CloudKit.framework CKFetchShareParticipantsOperation.h }

{$ifdef TYPES}
type
  CKFetchShareParticipantsOperationPtr = ^CKFetchShareParticipantsOperation;
{$endif}

{$ifdef CLASSES}

type
  CKFetchShareParticipantsOperation = objcclass external (CKOperation)
  public
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithUserIdentityLookupInfos (userIdentityLookupInfos: CKUserIdentityLookupInfo *ProtocolPtr): instancetype; message 'initWithUserIdentityLookupInfos:';
    procedure setUserIdentityLookupInfos(newValue: CKUserIdentityLookupInfo *ProtocolPtr); message 'setUserIdentityLookupInfos:';
    function userIdentityLookupInfos: CKUserIdentityLookupInfo *ProtocolPtr; message 'userIdentityLookupInfos';
    procedure setShareParticipantFetchedBlock(newValue: OpaqueCBlock); message 'setShareParticipantFetchedBlock:';
    function shareParticipantFetchedBlock: OpaqueCBlock; message 'shareParticipantFetchedBlock';
    procedure setFetchShareParticipantsCompletionBlock(newValue: OpaqueCBlock); message 'setFetchShareParticipantsCompletionBlock:';
    function fetchShareParticipantsCompletionBlock: OpaqueCBlock; message 'fetchShareParticipantsCompletionBlock';
  end;
{$endif}

