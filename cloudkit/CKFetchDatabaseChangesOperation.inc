{ Parsed from CloudKit.framework CKFetchDatabaseChangesOperation.h }

{$ifdef TYPES}
type
  CKFetchDatabaseChangesOperationPtr = ^CKFetchDatabaseChangesOperation;
{$endif}

{$ifdef CLASSES}

type
  CKFetchDatabaseChangesOperation = objcclass external (CKDatabaseOperation)
  public
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithPreviousServerChangeToken (previousServerChangeToken: nullable CKServerChangeTokenPtr): instancetype; message 'initWithPreviousServerChangeToken:';
    procedure setPreviousServerChangeToken(newValue: CKServerChangeToken); message 'setPreviousServerChangeToken:';
    function previousServerChangeToken: CKServerChangeToken; message 'previousServerChangeToken';
    procedure setResultsLimit(newValue: NSUInteger); message 'setResultsLimit:';
    function resultsLimit: NSUInteger; message 'resultsLimit';
    procedure setFetchAllChanges(newValue: boolean); message 'setFetchAllChanges:';
    function fetchAllChanges: boolean; message 'fetchAllChanges';
    procedure setRecordZoneWithIDChangedBlock(newValue: OpaqueCBlock); message 'setRecordZoneWithIDChangedBlock:';
    function recordZoneWithIDChangedBlock: OpaqueCBlock; message 'recordZoneWithIDChangedBlock';
    procedure setRecordZoneWithIDWasDeletedBlock(newValue: OpaqueCBlock); message 'setRecordZoneWithIDWasDeletedBlock:';
    function recordZoneWithIDWasDeletedBlock: OpaqueCBlock; message 'recordZoneWithIDWasDeletedBlock';
    procedure setChangeTokenUpdatedBlock(newValue: OpaqueCBlock); message 'setChangeTokenUpdatedBlock:';
    function changeTokenUpdatedBlock: OpaqueCBlock; message 'changeTokenUpdatedBlock';
    procedure setFetchDatabaseChangesCompletionBlock(newValue: OpaqueCBlock); message 'setFetchDatabaseChangesCompletionBlock:';
    function fetchDatabaseChangesCompletionBlock: OpaqueCBlock; message 'fetchDatabaseChangesCompletionBlock';
  end;
{$endif}

