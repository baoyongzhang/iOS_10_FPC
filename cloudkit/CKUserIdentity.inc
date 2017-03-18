{ Parsed from CloudKit.framework CKUserIdentity.h }

{$ifdef TYPES}
type
  CKUserIdentityPtr = ^CKUserIdentity;
{$endif}

{$ifdef CLASSES}

type
  CKUserIdentity = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function init: instancetype; message 'init';
    function lookupInfo: CKUserIdentityLookupInfo; message 'lookupInfo';
    function nameComponents: NSPersonNameComponents; message 'nameComponents';
    function userRecordID: CKRecordID; message 'userRecordID';
    function hasiCloudAccount: boolean; message 'hasiCloudAccount';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

