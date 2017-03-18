{ Parsed from GameKit.framework GKLocalPlayer.h }

{ Types from GKLocalPlayer }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  GKLocalPlayerPtr = ^GKLocalPlayer;
  GKLocalPlayerListenerProtocolPtr = ^GKLocalPlayerListenerProtocol;
  GKLocalPlayerListenerProtocolPtr = ^GKLocalPlayerListenerProtocol;
{$endif}

{$ifdef CLASSES}

type
  GKLocalPlayer = objcclass external (GKPlayer)
  public
    class function localPlayer NS_SWIFT_NAME(localPlayer()): GKLocalPlayer; message 'localPlayer NS_SWIFT_NAME(localPlayer())';
    function isAuthenticated: boolean; message 'isAuthenticated';
    function isUnderage: boolean; message 'isUnderage';
    {$if defined(TARGET_OS_WATCH)}
    procedure setAuthenticateHandler(newValue: OpaqueCBlock); message 'setAuthenticateHandler:';
    function authenticateHandler: OpaqueCBlock; message 'authenticateHandler';
    {$elseif defined(TARGET_OS_IPHONE)}
    procedure setAuthenticateHandler_(newValue: OpaqueCBlock); message 'setAuthenticateHandler:';
    function authenticateHandler_: OpaqueCBlock; message 'authenticateHandler';
    {$else}
    procedure setAuthenticateHandler__(newValue: OpaqueCBlock); message 'setAuthenticateHandler:';
    function authenticateHandler__: OpaqueCBlock; message 'authenticateHandler';
    {$endif}
    procedure loadRecentPlayersWithCompletionHandler (completionHandler: void(^__nullable)(GKPlayer *Protocol * __nullable recentPlayers, NSError * __nullable error)); message 'loadRecentPlayersWithCompletionHandler:'; { available in 10_11, 10_0 }
    procedure setDefaultLeaderboardIdentifier_completionHandler (leaderboardIdentifier: NSString; completionHandler: void(^__nullable)(NSError * __nullable error)); message 'setDefaultLeaderboardIdentifier:completionHandler:'; { available in 10_10, 7_0 }
    procedure loadDefaultLeaderboardIdentifierWithCompletionHandler (completionHandler: void(^__nullable)(NSString * __nullable leaderboardIdentifier, NSError * __nullable error)); message 'loadDefaultLeaderboardIdentifierWithCompletionHandler:'; { available in 10_10, 7_0 }
    procedure generateIdentityVerificationSignatureWithCompletionHandler (completionHandler: void (^__nullable)(NSURL * __nullable publicKeyUrl, NSData * __nullable signature, NSData * __nullable salt, uint64_t timestamp, NSError * __nullable error)); message 'generateIdentityVerificationSignatureWithCompletionHandler:'; { available in 10_10, 7_0 }
  end;
{$endif}

{$if defined(TARGET_OS_WATCH)}
{$ifdef PROTOCOLS}

type
  GKLocalPlayerListenerProtocol = objcprotocol external name 'GKLocalPlayerListener' (GKChallengeListenerProtocol, GKInviteEventListenerProtocol, GKTurnBasedEventListenerProtocol)
  end;
{$endif}

{$else}
{$ifdef PROTOCOLS}

type
  GKLocalPlayerListenerProtocol = objcprotocol external name 'GKLocalPlayerListener' (GKChallengeListenerProtocol, GKInviteEventListenerProtocol, GKTurnBasedEventListenerProtocol, GKSavedGameListenerProtocol)
  end;
{$endif}

{$endif}
{$ifdef CLASSES}

type
  GKLocalPlayerEvents = objccategory external (GKLocalPlayer)
    procedure registerListener (listener: GKLocalPlayerListenerProtocol); message 'registerListener:'; { available in 10_10, 7_0 }
    procedure unregisterListener (listener: GKLocalPlayerListenerProtocol); message 'unregisterListener:'; { available in 10_10, 7_0 }
    procedure unregisterAllListeners; message 'unregisterAllListeners'; { available in 10_10, 7_0 }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  GKPlayerAuthenticationDidChangeNotificationName: NSString { available in 10_8, 4_1 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  GKLocalPlayer_Deprecated = objccategory external name 'Deprecated' (GKLocalPlayer)
    procedure setDefaultLeaderboardCategoryID_completionHandler (categoryID: nullable NSStringPtr; completionHandler: void(^__nullable)(NSError * __nullable error)); message 'setDefaultLeaderboardCategoryID:completionHandler:'; deprecated 'in 10_8, 10_10, 6_0, 7_0,"Use setDefaultLeaderboardIdentifier:completionHandler: instead"';
    procedure loadDefaultLeaderboardCategoryIDWithCompletionHandler (completionHandler: void(^__nullable)(NSString * __nullable categoryID, NSError * __nullable error)); message 'loadDefaultLeaderboardCategoryIDWithCompletionHandler:'; deprecated 'in 10_8, 10_10, 6_0, 7_0,"Use loadDefaultLeaderboardIdentifierWithCompletionHandler: instead"';
    procedure loadFriendsWithCompletionHandler (completionHandler: void(^__nullable)(NSString *Protocol * __nullable friendIDs, NSError * __nullable error)); message 'loadFriendsWithCompletionHandler:'; deprecated 'in 10_8, 10_10, 4_1, 8_0, "use loadRecentPlayersWithCompletionHandler: instead"';
    procedure authenticateWithCompletionHandler (completionHandler: void(^__nullable)(NSError * __nullable error)); message 'authenticateWithCompletionHandler:'; deprecated 'in 10_8, 10_8, 4_1, 6_0, "Set the authenticateHandler instead"';
    function friends: NSString *ProtocolPtr; message 'friends';
    procedure loadFriendPlayersWithCompletionHandler (completionHandler: void(^__nullable)(GKPlayer *Protocol * __nullable friendPlayers, NSError * __nullable error)); message 'loadFriendPlayersWithCompletionHandler:'; deprecated 'in 10_10, 10_11, 8_0, 10_0';
  end;
{$endif}

