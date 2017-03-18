{ Parsed from CloudKit.framework CKShareParticipant.h }

{$ifdef TYPES}
type
  CKShareParticipantPtr = ^CKShareParticipant;
{$endif}

{$ifdef TYPES}
type
  CKShareParticipantAcceptanceStatus = NSInteger;
  CKShareParticipantAcceptanceStatusPtr = ^CKShareParticipantAcceptanceStatus;

const
  CKShareParticipantAcceptanceStatusUnknown = 0;
  CKShareParticipantAcceptanceStatusPending = 1;
  CKShareParticipantAcceptanceStatusAccepted = 2;
  CKShareParticipantAcceptanceStatusRemoved = 3;

type
  CKShareParticipantPermission = NSInteger;
  CKShareParticipantPermissionPtr = ^CKShareParticipantPermission;

const
  CKShareParticipantPermissionUnknown = 0;
  CKShareParticipantPermissionNone = 1;
  CKShareParticipantPermissionReadOnly = 2;
  CKShareParticipantPermissionReadWrite = 3;

type
  CKShareParticipantType = NSInteger;
  CKShareParticipantTypePtr = ^CKShareParticipantType;

const
  CKShareParticipantTypeUnknown = 0;
  CKShareParticipantTypeOwner = 1;
  CKShareParticipantTypePrivateUser = 3;
  CKShareParticipantTypePublicUser = 4;
{$endif}

{$ifdef CLASSES}

type
  CKShareParticipant = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function init: instancetype; message 'init';
    function userIdentity: CKUserIdentity; message 'userIdentity';
    procedure setType(newValue: CKShareParticipantType); message 'setType:';
    function type_: CKShareParticipantType; message 'type';
    function acceptanceStatus: CKShareParticipantAcceptanceStatus; message 'acceptanceStatus';
    procedure setPermission(newValue: CKShareParticipantPermission); message 'setPermission:';
    function permission: CKShareParticipantPermission; message 'permission';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

