{ Parsed from MediaPlayer.framework MPMediaLibrary.h }

{$ifdef TYPES}
type
  MPMediaLibraryPtr = ^MPMediaLibrary;
{$endif}

{$ifdef TYPES}
type
  MPMediaLibraryAuthorizationStatus = NSInteger;
  MPMediaLibraryAuthorizationStatusPtr = ^MPMediaLibraryAuthorizationStatus;

const
  MPMediaLibraryAuthorizationStatusNotDetermined = 0;
  MPMediaLibraryAuthorizationStatusDenied = 1;
  MPMediaLibraryAuthorizationStatusRestricted = 2;
  MPMediaLibraryAuthorizationStatusAuthorized = 3;
{$endif}

{$ifdef CLASSES}

type
  MPMediaLibrary = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    class function defaultMediaLibrary: MPMediaLibrary; message 'defaultMediaLibrary';
    function lastModifiedDate: NSDate; message 'lastModifiedDate';
    procedure beginGeneratingLibraryChangeNotifications; message 'beginGeneratingLibraryChangeNotifications';
    procedure endGeneratingLibraryChangeNotifications; message 'endGeneratingLibraryChangeNotifications';
    class function authorizationStatus: MPMediaLibraryAuthorizationStatus; message 'authorizationStatus'; { available in 9_3 }
    class procedure requestAuthorization (handler: OpaqueCBlock); message 'requestAuthorization:'; { available in 9_3 }
    procedure addItemWithProductID_completionHandler (productID: NSString; completionHandler: OpaqueCBlock); message 'addItemWithProductID:completionHandler:'; { available in 9_3 }
    procedure getPlaylistWithUUID_creationMetadata_completionHandler (uuid: NSUUID; creationMetadata: nullable MPMediaPlaylistCreationMetadataPtr; completionHandler: OpaqueCBlock); message 'getPlaylistWithUUID:creationMetadata:completionHandler:'; { available in 9_3 }

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  MPMediaLibraryDidChangeNotification: __TVOS_PROHIBITED NSStringPtr; cvar; external;
{$endif}

