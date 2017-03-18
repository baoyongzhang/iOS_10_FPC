{ Parsed from CloudKit.framework CKShareMetadata.h }

{$ifdef TYPES}
type
  CKShareMetadataPtr = ^CKShareMetadata;
{$endif}

{$ifdef CLASSES}

type
  CKShareMetadata = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function containerIdentifier: NSString; message 'containerIdentifier';
    function share: CKShare; message 'share';
    function rootRecordID: CKRecordID; message 'rootRecordID';
    function participantType: CKShareParticipantType; message 'participantType';
    function participantStatus: CKShareParticipantAcceptanceStatus; message 'participantStatus';
    function participantPermission: CKShareParticipantPermission; message 'participantPermission';
    function ownerIdentity: CKUserIdentity; message 'ownerIdentity';
    function rootRecord: CKRecord; message 'rootRecord';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

