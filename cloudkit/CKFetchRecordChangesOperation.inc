{ Parsed from CloudKit.framework CKFetchRecordChangesOperation.h }

{$ifdef TYPES}
type
  CKFetchRecordChangesOperationPtr = ^CKFetchRecordChangesOperation;
{$endif}

{$ifdef CLASSES}

type
  CKFetchRecordChangesOperation = objcclass external (CKDatabaseOperation)
  public
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithRecordZoneID_previousServerChangeToken (recordZoneID: CKRecordZoneID; previousServerChangeToken: nullable CKServerChangeTokenPtr): instancetype; message 'initWithRecordZoneID:previousServerChangeToken:';
    procedure setRecordZoneID(newValue: CKRecordZoneID); message 'setRecordZoneID:';
    function recordZoneID: CKRecordZoneID; message 'recordZoneID';
    procedure setPreviousServerChangeToken(newValue: CKServerChangeToken); message 'setPreviousServerChangeToken:';
    function previousServerChangeToken: CKServerChangeToken; message 'previousServerChangeToken';
    procedure setResultsLimit(newValue: NSUInteger); message 'setResultsLimit:';
    function resultsLimit: NSUInteger; message 'resultsLimit';
    procedure setDesiredKeys(newValue: NSString *ProtocolPtr); message 'setDesiredKeys:';
    function desiredKeys: NSString *ProtocolPtr; message 'desiredKeys';
    procedure setRecordChangedBlock(newValue: OpaqueCBlock); message 'setRecordChangedBlock:';
    function recordChangedBlock: OpaqueCBlock; message 'recordChangedBlock';
    procedure setRecordWithIDWasDeletedBlock(newValue: OpaqueCBlock); message 'setRecordWithIDWasDeletedBlock:';
    function recordWithIDWasDeletedBlock: OpaqueCBlock; message 'recordWithIDWasDeletedBlock';
    function moreComing: boolean; message 'moreComing';
    procedure setFetchRecordChangesCompletionBlock(newValue: OpaqueCBlock); message 'setFetchRecordChangesCompletionBlock:';
    function fetchRecordChangesCompletionBlock: OpaqueCBlock; message 'fetchRecordChangesCompletionBlock';
  end;
{$endif}

