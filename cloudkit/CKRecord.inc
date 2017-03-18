{ Parsed from CloudKit.framework CKRecord.h }

{$ifdef TYPES}
type
  CKRecordPtr = ^CKRecord;
  CKRecordValueProtocolPtr = ^CKRecordValueProtocol;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  CKRecordTypeUserRecord: NSString { available in 10_10, 8_0 }; cvar; external;
  CKRecordParentKey: NSString { available in 10_12, 10_0 }; cvar; external;
  CKRecordShareKey: NSString { available in 10_12, 10_0 }; cvar; external;
{$endif}

{$ifdef PROTOCOLS}

type
  CKRecordValueProtocol = objcprotocol external name 'CKRecordValue' (NSObjectProtocol)
  end;
{$endif}

{$ifdef CLASSES}

type
  CKRecord = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function init: instancetype; message 'init';
    function initWithRecordType (recordType: NSString): instancetype; message 'initWithRecordType:';
    function initWithRecordType_recordID (recordType: NSString; recordID: CKRecordID): instancetype; message 'initWithRecordType:recordID:';
    function initWithRecordType_zoneID (recordType: NSString; zoneID: CKRecordZoneID): instancetype; message 'initWithRecordType:zoneID:';
    function recordType: NSString; message 'recordType';
    function recordID: CKRecordID; message 'recordID';
    function recordChangeTag: NSString; message 'recordChangeTag';
    function creatorUserRecordID: CKRecordID; message 'creatorUserRecordID';
    function creationDate: NSDate; message 'creationDate';
    function lastModifiedUserRecordID: CKRecordID; message 'lastModifiedUserRecordID';
    function modificationDate: NSDate; message 'modificationDate';
    function objectForKey (key: NSString): nullable __kindof CKRecordValueProtocol; message 'objectForKey:';
    procedure setObject_forKey (object_: nullable __kindof CKRecordValueProtocol; key: NSString); message 'setObject:forKey:';
    function allKeys: NSString *ProtocolPtr; message 'allKeys';
    function allTokens: NSString *ProtocolPtr; message 'allTokens';
    function objectForKeyedSubscript (key: NSString): nullable __kindof CKRecordValueProtocol; message 'objectForKeyedSubscript:';
    procedure setObject_forKeyedSubscript (object_: nullable __kindof CKRecordValueProtocol; key: NSString); message 'setObject:forKeyedSubscript:';
    function changedKeys: NSString *ProtocolPtr; message 'changedKeys';
    procedure encodeSystemFieldsWithCoder (coder: NSCoder); message 'encodeSystemFieldsWithCoder:';
    function share: CKReference; message 'share';
    procedure setParent(newValue: CKReference); message 'setParent:';
    function parent: CKReference; message 'parent';
    procedure setParentReferenceFromRecord (parentRecord: nullable CKRecordPtr); message 'setParentReferenceFromRecord:'; { available in 10_12, 10_0 }
    procedure setParentReferenceFromRecordID (parentRecordID: nullable CKRecordIDPtr); message 'setParentReferenceFromRecordID:'; { available in 10_12, 10_0 }

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;


type
  NSString_CKRecordValue = objccategory external name 'CKRecordValue' (NSString)
  end;

type
  NSNumber_CKRecordValue = objccategory external name 'CKRecordValue' (NSNumber)
  end;

type
  NSArray_CKRecordValue = objccategory external name 'CKRecordValue' (NSArray)
  end;

type
  NSDate_CKRecordValue = objccategory external name 'CKRecordValue' (NSDate)
  end;

type
  NSData_CKRecordValue = objccategory external name 'CKRecordValue' (NSData)
  end;

type
  CKReference_CKRecordValue = objccategory external name 'CKRecordValue' (CKReference)
  end;

type
  CKAsset_CKRecordValue = objccategory external name 'CKRecordValue' (CKAsset)
  end;

type
  CKRecordValue = objccategory external (CLLocation)
  end;
{$endif}

