{ Parsed from GameKit.framework GKPlayer.h }

{ Types from UI }
{$ifdef TYPES}

const
  GKPhotoSizeSmall = 0;
  GKPhotoSizeNormal = 1;

type
  GKPhotoSize = NSInteger;
type
  GKPhotoSizePtr = ^GKPhotoSize;

{$endif}


{$ifdef TYPES}
type
  GKPlayerPtr = ^GKPlayer;
{$endif}

{$ifdef CLASSES}

type
  GKPlayer = objcclass external (GKBasePlayer)
  public
    class procedure loadPlayersForIdentifiers_withCompletionHandler (identifiers: nonnull NSString *ProtocolPtr; completionHandler: void(^__nullable)(GKPlayer *Protocol * __nullable players, NSError * __nullable error)); message 'loadPlayersForIdentifiers:withCompletionHandler:';
    function playerID: NSString; message 'playerID';
    function displayName: NSString; message 'displayName';
    function alias: NSString; message 'alias';
    class function anonymousGuestPlayerWithIdentifier (guestIdentifier: nonnull NSStringPtr): nonnull instancetype; message 'anonymousGuestPlayerWithIdentifier:'; { available in 10_11, 9_0 }
    function __WATCHOS_PROHIBITED_: NSString *guestIdentifier; message 'WATCHOS_PROHIBITED';
  end;


type
  UI = objccategory external (GKPlayer)
    {$if defined(TARGET_OS_IPHONE)}
    procedure loadPhotoForSize_withCompletionHandler (size: GKPhotoSize; completionHandler: void(^__nullable)(UIImage * __nullable photo, NSError * __nullable error)); message 'loadPhotoForSize:withCompletionHandler:'; { available in 10_8, 5_0 }
    {$else}
    procedure loadPhotoForSize_withCompletionHandler (size: GKPhotoSize; completionHandler: void(^__nullable)(NSImage * __nullable photo, NSError * __nullable error)); message 'loadPhotoForSize:withCompletionHandler:'; { available in 10_8, 5_0 }
    {$endif}
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  GKPlayerDidChangeNotificationName: NSString *__nonnull; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  GKPlayer_Deprecated = objccategory external name 'Deprecated' (GKPlayer)
    function isFriend: boolean; message 'isFriend';
  end;
{$endif}

