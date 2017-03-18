{ Parsed from CloudKit.framework CKModifyRecordZonesOperation.h }

{$ifdef TYPES}
type
  CKModifyRecordZonesOperationPtr = ^CKModifyRecordZonesOperation;
{$endif}

{$ifdef CLASSES}

type
  CKModifyRecordZonesOperation = objcclass external (CKDatabaseOperation)
  public
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithRecordZonesToSave_recordZoneIDsToDelete (recordZonesToSave: nullable CKRecordZone *ProtocolPtr; recordZoneIDsToDelete: nullable CKRecordZoneID *ProtocolPtr): instancetype; message 'initWithRecordZonesToSave:recordZoneIDsToDelete:';
    procedure setRecordZonesToSave(newValue: CKRecordZone *ProtocolPtr); message 'setRecordZonesToSave:';
    function recordZonesToSave: CKRecordZone *ProtocolPtr; message 'recordZonesToSave';
    procedure setRecordZoneIDsToDelete(newValue: CKRecordZoneID *ProtocolPtr); message 'setRecordZoneIDsToDelete:';
    function recordZoneIDsToDelete: CKRecordZoneID *ProtocolPtr; message 'recordZoneIDsToDelete';
    procedure setModifyRecordZonesCompletionBlock(newValue: OpaqueCBlock); message 'setModifyRecordZonesCompletionBlock:';
    function modifyRecordZonesCompletionBlock: OpaqueCBlock; message 'modifyRecordZonesCompletionBlock';
  end;
{$endif}

