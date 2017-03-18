{ Parsed from CloudKit.framework CKModifyRecordsOperation.h }

{$ifdef TYPES}
type
  CKModifyRecordsOperationPtr = ^CKModifyRecordsOperation;
{$endif}

{$ifdef TYPES}
type
  CKRecordSavePolicy = NSInteger;
  CKRecordSavePolicyPtr = ^CKRecordSavePolicy;

const
  CKRecordSaveIfServerRecordUnchanged = 0;
  CKRecordSaveChangedKeys = 1;
  CKRecordSaveAllKeys = 2;
{$endif}

{$ifdef CLASSES}

type
  CKModifyRecordsOperation = objcclass external (CKDatabaseOperation)
  public
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithRecordsToSave_recordIDsToDelete (records: nullable CKRecord *ProtocolPtr; recordIDs: nullable CKRecordID *ProtocolPtr): instancetype; message 'initWithRecordsToSave:recordIDsToDelete:';
    procedure setRecordsToSave(newValue: CKRecord *ProtocolPtr); message 'setRecordsToSave:';
    function recordsToSave: CKRecord *ProtocolPtr; message 'recordsToSave';
    procedure setRecordIDsToDelete(newValue: CKRecordID *ProtocolPtr); message 'setRecordIDsToDelete:';
    function recordIDsToDelete: CKRecordID *ProtocolPtr; message 'recordIDsToDelete';
    procedure setSavePolicy(newValue: CKRecordSavePolicy); message 'setSavePolicy:';
    function savePolicy: CKRecordSavePolicy; message 'savePolicy';
    procedure setClientChangeTokenData(newValue: NSData); message 'setClientChangeTokenData:';
    function clientChangeTokenData: NSData; message 'clientChangeTokenData';
    procedure setNS_SWIFT_NAME(isAtomic)(newValue: BOOL atomic); message 'setNS_SWIFT_NAME(isAtomic):';
    function NS_SWIFT_NAME(isAtomic): BOOL atomic; message 'NS_SWIFT_NAME(isAtomic)';
    procedure setPerRecordProgressBlock(newValue: OpaqueCBlock); message 'setPerRecordProgressBlock:';
    function perRecordProgressBlock: OpaqueCBlock; message 'perRecordProgressBlock';
    procedure setPerRecordCompletionBlock(newValue: OpaqueCBlock); message 'setPerRecordCompletionBlock:';
    function perRecordCompletionBlock: OpaqueCBlock; message 'perRecordCompletionBlock';
    procedure setModifyRecordsCompletionBlock(newValue: OpaqueCBlock); message 'setModifyRecordsCompletionBlock:';
    function modifyRecordsCompletionBlock: OpaqueCBlock; message 'modifyRecordsCompletionBlock';
  end;
{$endif}

