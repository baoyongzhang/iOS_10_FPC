{ Parsed from CloudKit.framework CKShare.h }

{$ifdef TYPES}
type
  CKSharePtr = ^CKShare;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  CKRecordTypeShare: NSString { available in 10_12, 10_0 }; cvar; external;
  CKShareTitleKey: NSString { available in 10_12, 10_0 }; cvar; external;
  CKShareThumbnailImageDataKey: NSString { available in 10_12, 10_0 }; cvar; external;
  CKShareTypeKey: NSString { available in 10_12, 10_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  CKShare = objcclass external (CKRecord)
  public
    function init: instancetype; message 'init';
    function initWithRecordType (recordType_: NSString): instancetype; message 'initWithRecordType:';
    function initWithRecordType_recordID (recordType_: NSString; recordID_: CKRecordID): instancetype; message 'initWithRecordType:recordID:';
    function initWithRecordType_zoneID (recordType_: NSString; zoneID: CKRecordZoneID): instancetype; message 'initWithRecordType:zoneID:';
    function initWithRootRecord (rootRecord: CKRecord): instancetype; message 'initWithRootRecord:';
    function initWithRootRecord_shareID (rootRecord: CKRecord; shareID: CKRecordID): instancetype; message 'initWithRootRecord:shareID:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (aDecoder: NSCoder): instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    procedure setPublicPermission(newValue: CKShareParticipantPermission); message 'setPublicPermission:';
    function publicPermission: CKShareParticipantPermission; message 'publicPermission';
    function URL: NSURL; message 'URL';
    function participants: CKShareParticipant *ProtocolPtr; message 'participants';
    function owner: CKShareParticipant; message 'owner';
    function currentUserParticipant: CKShareParticipant; message 'currentUserParticipant';
    procedure addParticipant (participant: CKShareParticipant); message 'addParticipant:';
    procedure removeParticipant (participant: CKShareParticipant); message 'removeParticipant:';
  end;
{$endif}

