{ Parsed from GameKit.framework GKLeaderboard.h }

{ Types from GKLeaderboard_UI }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  GKLeaderboardPtr = ^GKLeaderboard;
{$endif}

{$ifdef TYPES}
type
  GKLeaderboardTimeScope = NSInteger;
  GKLeaderboardTimeScopePtr = ^GKLeaderboardTimeScope;

const
  GKLeaderboardTimeScopeToday = 0;
  GKLeaderboardTimeScopeWeek = 1;
  GKLeaderboardTimeScopeAllTime = 2;

type
  GKLeaderboardPlayerScope = NSInteger;
  GKLeaderboardPlayerScopePtr = ^GKLeaderboardPlayerScope;

const
  GKLeaderboardPlayerScopeGlobal = 0;
  GKLeaderboardPlayerScopeFriendsOnly = 1;
{$endif}

{$ifdef CLASSES}

type
  GKLeaderboard = objcclass external (NSObject)
  public
    procedure setTimeScope(newValue: GKLeaderboardTimeScope); message 'setTimeScope:';
    function timeScope: GKLeaderboardTimeScope; message 'timeScope';
    procedure setPlayerScope(newValue: GKLeaderboardPlayerScope); message 'setPlayerScope:';
    function playerScope: GKLeaderboardPlayerScope; message 'playerScope';
    procedure setIdentifier(newValue: NSString); message 'setIdentifier:';
    function identifier: NSString; message 'identifier';
    function title: NSString; message 'title';
    procedure setRange(newValue: NSRange); message 'setRange:';
    function range: NSRange; message 'range';
    function scores: GKScore *ProtocolPtr; message 'scores';
    function maxRange: NSUInteger; message 'maxRange';
    function localPlayerScore: GKScore; message 'localPlayerScore';
    function isLoading: boolean; message 'isLoading';
    function groupIdentifier: NSString; message 'groupIdentifier';
    function init: instancetype; message 'init';
    function initWithPlayers (players: GKPlayer *ProtocolPtr): instancetype; message 'initWithPlayers:'; { available in 10_10, 8_0 }
    procedure loadScoresWithCompletionHandler (completionHandler: void(^__nullable)(GKScore *Protocol * __nullable scores, NSError * __nullable error)); message 'loadScoresWithCompletionHandler:';
    class procedure loadLeaderboardsWithCompletionHandler (completionHandler: void(^__nullable)(GKLeaderboard *Protocol * __nullable leaderboards, NSError * __nullable error)); message 'loadLeaderboardsWithCompletionHandler:'; { available in 10_8, 6_0 }
  end;


type
  GKLeaderboard_Deprecated = objccategory external name 'Deprecated' (GKLeaderboard)
    procedure setCategory(newValue: NSString); message 'setCategory:';
    function category: NSString; message 'category';
    function initWithPlayerIDs (playerIDs: nullable NSString *ProtocolPtr): nullable instancetype; message 'initWithPlayerIDs:'; deprecated 'in 10_8, 10_10, 4_1, 8_0, "Use initWithPlayers: instead"';
    class procedure loadCategoriesWithCompletionHandler (completionHandler: void(^__nullable)(NSString *Protocol * __nullable categories, NSString *Protocol * __nullable titles, NSError * __nullable error)); message 'loadCategoriesWithCompletionHandler:'; deprecated 'in 10_8, 10_9, 4_1, 6_0, "Use loadLeaderboardsWithCompletionHandler: instead"';
    class procedure setDefaultLeaderboard_withCompletionHandler (leaderboardIdentifier: nullable NSStringPtr; completionHandler: void(^__nullable)(NSError * __nullable error)); message 'setDefaultLeaderboard:withCompletionHandler:'; deprecated 'in 10_8, 10_10, 5_0, 7_0,"Use setDefaultLeaderboardIdentifier:completionHandler: on GKLocalPlayer instead"';
  end;

type
  GKLeaderboard_UI = objccategory external name 'UI' (GKLeaderboard)
    {$if defined(TARGET_OS_IPHONE)}
    procedure loadImageWithCompletionHandler (completionHandler: void(^__nullable)(UIImage * __nullable image, NSError * __nullable error)); message 'loadImageWithCompletionHandler:'; { available in 10_8, 7_0 }
    {$else}
    procedure loadImageWithCompletionHandler (completionHandler: void(^__nullable)(NSImage * __nullable image, NSError * __nullable error)); message 'loadImageWithCompletionHandler:'; { available in 10_8, 7_0 }
    {$endif}
  end;
{$endif}

