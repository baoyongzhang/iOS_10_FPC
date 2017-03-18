{ Parsed from CloudKit.framework CKFetchRecordZonesOperation.h }

{$ifdef TYPES}
type
  CKFetchRecordZonesOperationPtr = ^CKFetchRecordZonesOperation;
{$endif}

{$ifdef CLASSES}

type
  CKFetchRecordZonesOperation = objcclass external (CKDatabaseOperation)
  public
    class function fetchAllRecordZonesOperation: instancetype; message 'fetchAllRecordZonesOperation';
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithRecordZoneIDs (zoneIDs: CKRecordZoneID *ProtocolPtr): instancetype; message 'initWithRecordZoneIDs:';
    procedure setRecordZoneIDs(newValue: CKRecordZoneID *ProtocolPtr); message 'setRecordZoneIDs:';
    function recordZoneIDs: CKRecordZoneID *ProtocolPtr; message 'recordZoneIDs';
    procedure setFetchRecordZonesCompletionBlock(newValue: OpaqueCBlock); message 'setFetchRecordZonesCompletionBlock:';
    function fetchRecordZonesCompletionBlock: OpaqueCBlock; message 'fetchRecordZonesCompletionBlock';
  end;
{$endif}

