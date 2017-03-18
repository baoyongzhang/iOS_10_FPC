{ Parsed from CloudKit.framework CKFetchRecordZoneChangesOperation.h }

{$ifdef TYPES}
type
  CKFetchRecordZoneChangesOperationPtr = ^CKFetchRecordZoneChangesOperation;
  CKFetchRecordZoneChangesOptionsPtr = ^CKFetchRecordZoneChangesOptions;
{$endif}

{$ifdef CLASSES}

type
  CKFetchRecordZoneChangesOperation = objcclass external (CKDatabaseOperation)
  public
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithRecordZoneIDs_optionsByRecordZoneID (recordZoneIDs: CKRecordZoneID *ProtocolPtr; optionsByRecordZoneID: nullable NSDictionaryPtr): instancetype; message 'initWithRecordZoneIDs:optionsByRecordZoneID:';
    procedure setRecordZoneIDs(newValue: CKRecordZoneID *ProtocolPtr); message 'setRecordZoneIDs:';
    function recordZoneIDs: CKRecordZoneID *ProtocolPtr; message 'recordZoneIDs';
    procedure setOptionsByRecordZoneID(newValue: NSDictionary); message 'setOptionsByRecordZoneID:';
    function optionsByRecordZoneID: NSDictionary; message 'optionsByRecordZoneID';
    procedure setFetchAllChanges(newValue: boolean); message 'setFetchAllChanges:';
    function fetchAllChanges: boolean; message 'fetchAllChanges';
    procedure setRecordChangedBlock(newValue: OpaqueCBlock); message 'setRecordChangedBlock:';
    function recordChangedBlock: OpaqueCBlock; message 'recordChangedBlock';
    procedure setRecordWithIDWasDeletedBlock(newValue: OpaqueCBlock); message 'setRecordWithIDWasDeletedBlock:';
    function recordWithIDWasDeletedBlock: OpaqueCBlock; message 'recordWithIDWasDeletedBlock';
    procedure setRecordZoneChangeTokensUpdatedBlock(newValue: OpaqueCBlock); message 'setRecordZoneChangeTokensUpdatedBlock:';
    function recordZoneChangeTokensUpdatedBlock: OpaqueCBlock; message 'recordZoneChangeTokensUpdatedBlock';
    procedure setRecordZoneFetchCompletionBlock(newValue: OpaqueCBlock); message 'setRecordZoneFetchCompletionBlock:';
    function recordZoneFetchCompletionBlock: OpaqueCBlock; message 'recordZoneFetchCompletionBlock';
    procedure setFetchRecordZoneChangesCompletionBlock(newValue: OpaqueCBlock); message 'setFetchRecordZoneChangesCompletionBlock:';
    function fetchRecordZoneChangesCompletionBlock: OpaqueCBlock; message 'fetchRecordZoneChangesCompletionBlock';
  end;

type
  CKFetchRecordZoneChangesOptions = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    procedure setPreviousServerChangeToken(newValue: CKServerChangeToken); message 'setPreviousServerChangeToken:';
    function previousServerChangeToken: CKServerChangeToken; message 'previousServerChangeToken';
    procedure setResultsLimit(newValue: NSUInteger); message 'setResultsLimit:';
    function resultsLimit: NSUInteger; message 'resultsLimit';
    procedure setDesiredKeys(newValue: NSString *ProtocolPtr); message 'setDesiredKeys:';
    function desiredKeys: NSString *ProtocolPtr; message 'desiredKeys';

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

