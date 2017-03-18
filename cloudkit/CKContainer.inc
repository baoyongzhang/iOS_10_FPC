{ Parsed from CloudKit.framework CKContainer.h }

{$ifdef TYPES}
type
  CKContainerPtr = ^CKContainer;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  CKCurrentUserDefaultName: NSString { available in 10_12, 10_0 }; cvar; external;
  CKOwnerDefaultName: NSString deprecated 'in 10_10, 10_12, 8_0, 10_0, "Use CKCurrentUserDefaultName instead"'; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  CKContainer = objcclass external (NSObject)
  public
    function init: instancetype; message 'init';
    class function defaultContainer: CKContainer; message 'defaultContainer';
    class function containerWithIdentifier (containerIdentifier: NSString): CKContainer; message 'containerWithIdentifier:';
    function containerIdentifier: NSString; message 'containerIdentifier';
    procedure addOperation (operation: CKOperation); message 'addOperation:';
  end;


type
  Database = objccategory external (CKContainer)
    function privateCloudDatabase: CKDatabase; message 'privateCloudDatabase';
    function publicCloudDatabase: CKDatabase; message 'publicCloudDatabase';
    function sharedCloudDatabase: CKDatabase; message 'sharedCloudDatabase';
    function databaseWithDatabaseScope (databaseScope: CKDatabaseScope): CKDatabase; message 'databaseWithDatabaseScope:'; { available in 10_12, 10_0 }
  end;
{$endif}

{$ifdef TYPES}
type
  CKAccountStatus = NSInteger;
  CKAccountStatusPtr = ^CKAccountStatus;

const
  CKAccountStatusCouldNotDetermine = 0;
  CKAccountStatusAvailable = 1;
  CKAccountStatusRestricted = 2;
  CKAccountStatusNoAccount = 3;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  CKAccountChangedNotification: NSString { available in 10_11, 9_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  AccountStatus = objccategory external (CKContainer)
    procedure accountStatusWithCompletionHandler (completionHandler: OpaqueCBlock); message 'accountStatusWithCompletionHandler:';
  end;
{$endif}

{$ifdef TYPES}
type
  CKApplicationPermissions = NSUInteger;
  CKApplicationPermissionsPtr = ^CKApplicationPermissions;

const
  CKApplicationPermissionUserDiscoverability = 1 shl 0;

type
  CKApplicationPermissionStatus = NSInteger;
  CKApplicationPermissionStatusPtr = ^CKApplicationPermissionStatus;

const
  CKApplicationPermissionStatusInitialState = 0;
  CKApplicationPermissionStatusCouldNotComplete = 1;
  CKApplicationPermissionStatusDenied = 2;
  CKApplicationPermissionStatusGranted = 3;

type
  CKApplicationPermissionBlock = OpaqueCBlock;
{$endif}

{$ifdef CLASSES}

type
  ApplicationPermission = objccategory external (CKContainer)
    procedure statusForApplicationPermission_completionHandler (applicationPermission: CKApplicationPermissions; completionHandler: CKApplicationPermissionBlock); message 'statusForApplicationPermission:completionHandler:';
    procedure requestApplicationPermission_completionHandler (applicationPermission: CKApplicationPermissions; completionHandler: CKApplicationPermissionBlock); message 'requestApplicationPermission:completionHandler:';
  end;

type
  UserRecords = objccategory external (CKContainer)
    procedure fetchUserRecordIDWithCompletionHandler (completionHandler: OpaqueCBlock); message 'fetchUserRecordIDWithCompletionHandler:';
    procedure discoverAllIdentitiesWithCompletionHandler (completionHandler: OpaqueCBlock); message 'discoverAllIdentitiesWithCompletionHandler:'; { available in 10_12, 10_0 }
    procedure discoverUserIdentityWithEmailAddress_completionHandler (email: NSString; completionHandler: OpaqueCBlock); message 'discoverUserIdentityWithEmailAddress:completionHandler:'; { available in 10_12, 10_0 }
    procedure discoverUserIdentityWithPhoneNumber_completionHandler (phoneNumber: NSString; completionHandler: OpaqueCBlock); message 'discoverUserIdentityWithPhoneNumber:completionHandler:'; { available in 10_12, 10_0 }
    procedure discoverUserIdentityWithUserRecordID_completionHandler (userRecordID: CKRecordID; completionHandler: OpaqueCBlock); message 'discoverUserIdentityWithUserRecordID:completionHandler:'; { available in 10_12, 10_0 }
    procedure discoverAllContactUserInfosWithCompletionHandler (completionHandler: OpaqueCBlock); message 'discoverAllContactUserInfosWithCompletionHandler:'; deprecated 'in 10_10, 10_12, 8_0, 10_0, "Use -[CKContainer discoverAllIdentitiesWithCompletionHandler:] instead"';
    procedure discoverUserInfoWithEmailAddress_completionHandler (email: NSString; completionHandler: OpaqueCBlock); message 'discoverUserInfoWithEmailAddress:completionHandler:'; deprecated 'in 10_10, 10_12, 8_0, 10_0, "Use -[CKContainer discoverUserIdentityWithEmailAddress:completionHandler:] instead"';
    procedure discoverUserInfoWithUserRecordID_completionHandler (userRecordID: CKRecordID; completionHandler: OpaqueCBlock); message 'discoverUserInfoWithUserRecordID:completionHandler:'; deprecated 'in 10_10, 10_12, 8_0, 10_0, "Use -[CKContainer discoverUserIdentityWithUserRecordID:completionHandler:] instead"';
  end;

type
  Sharing = objccategory external (CKContainer)
    procedure fetchShareParticipantWithEmailAddress_completionHandler (emailAddress: NSString; completionHandler: OpaqueCBlock); message 'fetchShareParticipantWithEmailAddress:completionHandler:'; { available in 10_12, 10_0 }
    procedure fetchShareParticipantWithPhoneNumber_completionHandler (phoneNumber: NSString; completionHandler: OpaqueCBlock); message 'fetchShareParticipantWithPhoneNumber:completionHandler:'; { available in 10_12, 10_0 }
    procedure fetchShareParticipantWithUserRecordID_completionHandler (userRecordID: CKRecordID; completionHandler: OpaqueCBlock); message 'fetchShareParticipantWithUserRecordID:completionHandler:'; { available in 10_12, 10_0 }
    procedure fetchShareMetadataWithURL_completionHandler (url: NSURL; completionHandler: OpaqueCBlock); message 'fetchShareMetadataWithURL:completionHandler:'; { available in 10_12, 10_0 }
    procedure acceptShareMetadata_completionHandler (metadata: CKShareMetadata; completionHandler: OpaqueCBlock); message 'acceptShareMetadata:completionHandler:'; { available in 10_12, 10_0 }
  end;

type
  CKLongLivedOperations = objccategory external (CKContainer)
    procedure fetchAllLongLivedOperationIDsWithCompletionHandler (completionHandler: OpaqueCBlock); message 'fetchAllLongLivedOperationIDsWithCompletionHandler:'; { available in 10_12, 9_3 }
    procedure fetchLongLivedOperationWithID_completionHandler (operationID: NSString; completionHandler: OpaqueCBlock); message 'fetchLongLivedOperationWithID:completionHandler:'; { available in 10_12, 9_3 }
  end;
{$endif}

