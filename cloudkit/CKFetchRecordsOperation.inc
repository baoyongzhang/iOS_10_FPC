{ Parsed from CloudKit.framework CKFetchRecordsOperation.h }

{$ifdef TYPES}
type
  CKFetchRecordsOperationPtr = ^CKFetchRecordsOperation;
{$endif}

{$ifdef CLASSES}

type
  CKFetchRecordsOperation = objcclass external (CKDatabaseOperation)
  public
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithRecordIDs (recordIDs: CKRecordID *ProtocolPtr): instancetype; message 'initWithRecordIDs:';
    class function fetchCurrentUserRecordOperation: instancetype; message 'fetchCurrentUserRecordOperation';
    procedure setRecordIDs(newValue: CKRecordID *ProtocolPtr); message 'setRecordIDs:';
    function recordIDs: CKRecordID *ProtocolPtr; message 'recordIDs';
    procedure setDesiredKeys(newValue: NSString *ProtocolPtr); message 'setDesiredKeys:';
    function desiredKeys: NSString *ProtocolPtr; message 'desiredKeys';
    procedure setPerRecordProgressBlock(newValue: OpaqueCBlock); message 'setPerRecordProgressBlock:';
    function perRecordProgressBlock: OpaqueCBlock; message 'perRecordProgressBlock';
    procedure setPerRecordCompletionBlock(newValue: OpaqueCBlock); message 'setPerRecordCompletionBlock:';
    function perRecordCompletionBlock: OpaqueCBlock; message 'perRecordCompletionBlock';
    procedure setFetchRecordsCompletionBlock(newValue: OpaqueCBlock); message 'setFetchRecordsCompletionBlock:';
    function fetchRecordsCompletionBlock: OpaqueCBlock; message 'fetchRecordsCompletionBlock';
  end;
{$endif}

