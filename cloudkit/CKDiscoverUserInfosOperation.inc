{ Parsed from CloudKit.framework CKDiscoverUserInfosOperation.h }

{$ifdef TYPES}
type
  CKDiscoverUserInfosOperationPtr = ^CKDiscoverUserInfosOperation;
{$endif}

{$ifdef CLASSES}

type
  CKDiscoverUserInfosOperation = objcclass external (CKOperation)
  public
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithEmailAddresses_userRecordIDs (emailAddresses: nullable NSString *ProtocolPtr; userRecordIDs: nullable CKRecordID *ProtocolPtr): instancetype; message 'initWithEmailAddresses:userRecordIDs:';
    procedure setEmailAddresses(newValue: NSString *ProtocolPtr); message 'setEmailAddresses:';
    function emailAddresses: NSString *ProtocolPtr; message 'emailAddresses';
    procedure setUserRecordIDs(newValue: CKRecordID *ProtocolPtr); message 'setUserRecordIDs:';
    function userRecordIDs: CKRecordID *ProtocolPtr; message 'userRecordIDs';
    procedure setDiscoverUserInfosCompletionBlock(newValue: OpaqueCBlock); message 'setDiscoverUserInfosCompletionBlock:';
    function discoverUserInfosCompletionBlock: OpaqueCBlock; message 'discoverUserInfosCompletionBlock';
  end;
{$endif}

