{ Parsed from CloudKit.framework CKUserIdentityLookupInfo.h }

{$ifdef TYPES}
type
  CKUserIdentityLookupInfoPtr = ^CKUserIdentityLookupInfo;
{$endif}

{$ifdef CLASSES}

type
  CKUserIdentityLookupInfo = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function init: instancetype; message 'init';
    function initWithEmailAddress (emailAddress: NSString): instancetype; message 'initWithEmailAddress:';
    function initWithPhoneNumber (phoneNumber: NSString): instancetype; message 'initWithPhoneNumber:';
    function initWithUserRecordID (userRecordID: CKRecordID): instancetype; message 'initWithUserRecordID:';
    class function lookupInfosWithEmails (emails: NSString *ProtocolPtr): CKUserIdentityLookupInfo *ProtocolPtr; message 'lookupInfosWithEmails:';
    class function lookupInfosWithPhoneNumbers (phoneNumbers: NSString *ProtocolPtr): CKUserIdentityLookupInfo *ProtocolPtr; message 'lookupInfosWithPhoneNumbers:';
    class function lookupInfosWithRecordIDs (recordIDs: CKRecordID *ProtocolPtr): CKUserIdentityLookupInfo *ProtocolPtr; message 'lookupInfosWithRecordIDs:';
    function emailAddress: NSString; message 'emailAddress';
    function phoneNumber: NSString; message 'phoneNumber';
    function userRecordID: CKRecordID; message 'userRecordID';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

