{ Parsed from GameKit.framework GKChallenge.h }

{ Types from GKScore_GKChallenge }
{$ifdef TYPES}

{$endif}


{ Types from GKAchievement_GKChallenge }
{$ifdef TYPES}

{$endif}


{ Types from GKScore_GKChallengeDeprecated }
{$ifdef TYPES}

{$endif}


{ Types from GKChallengeDeprecated }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  GKChallengePtr = ^GKChallenge;
  GKScoreChallengePtr = ^GKScoreChallenge;
  GKAchievementChallengePtr = ^GKAchievementChallenge;
{$endif}

{$if defined(TARGET_OS_IPHONE)}
{$ifdef TYPES}
type
  GKChallengeComposeCompletionBlock = OpaqueCBlock;
{$endif}

{$else}
{$ifdef TYPES}
type
  GKChallengeComposeCompletionBlock = OpaqueCBlock;
{$endif}

{$endif}
{$ifdef TYPES}
type
  GKChallengeState = NSInteger;
  GKChallengeStatePtr = ^GKChallengeState;

const
  GKChallengeStateInvalid = 0;
  GKChallengeStatePending = 1;
  GKChallengeStateCompleted = 2;
  GKChallengeStateDeclined = 3;
{$endif}

{$ifdef CLASSES}

type
  GKChallenge = objcclass external (NSObject, NSCodingProtocol, NSSecureCodingProtocol)
  public
    class procedure loadReceivedChallengesWithCompletionHandler (completionHandler: void(^ __nullable)(GKChallenge *Protocol * __nullable challenges, NSError * __nullable error)); message 'loadReceivedChallengesWithCompletionHandler:';
    procedure decline; message 'decline';
    function issuingPlayerID: NSString; message 'issuingPlayerID';
    function receivingPlayerID: NSString; message 'receivingPlayerID';
    function issuingPlayer: GKPlayer; message 'issuingPlayer';
    function receivingPlayer: GKPlayer; message 'receivingPlayer';
    function state: GKChallengeState; message 'state';
    function issueDate: NSDate; message 'issueDate';
    function completionDate: NSDate; message 'completionDate';
    function message_: NSString; message 'message';

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;

type
  GKScoreChallenge = objcclass external (GKChallenge)
  public
    function score: GKScore; message 'score';
  end;

type
  GKAchievementChallenge = objcclass external (GKChallenge)
  public
    function achievement: GKAchievement; message 'achievement';
  end;
{$endif}

{$if  not defined(TARGET_OS_WATCH)}
{$ifdef CLASSES}

type
  GKScore_GKChallenge = objccategory external name 'GKChallenge' (GKScore)
    {$if defined(TARGET_OS_IPHONE)}
    function challengeComposeControllerWithMessage_players_completionHandler (message_: nullable NSStringPtr; players: nullable GKPlayer *ProtocolPtr; completionHandler: nullable GKChallengeComposeCompletionBlock): UIViewController; message 'challengeComposeControllerWithMessage:players:completionHandler:'; { available in 8_0 }
    {$else}
    function challengeComposeControllerWithMessage_players_completionHandler (message_: nullable NSStringPtr; players: nullable GKPlayer *ProtocolPtr; completionHandler: nullable GKChallengeComposeCompletionBlock): NSViewController; message 'challengeComposeControllerWithMessage:players:completionHandler:'; { available in 10_10 }
    {$endif}
    procedure issueChallengeToPlayers_message (playerIDs: nullable NSString *ProtocolPtr; message_: nullable NSStringPtr); message 'issueChallengeToPlayers:message:'; deprecated 'in 10_8, 10_10, 6_0, 7_0, "pass GKPlayers to challengeComposeControllerWithMessage:players:completionHandler: and present the view controller instead"';
    class procedure reportScores_withEligibleChallenges_withCompletionHandler (scores: GKScore *ProtocolPtr; challenges: GKChallenge *ProtocolPtr; completionHandler: void(^ __nullable)(NSError * __nullable error)); message 'reportScores:withEligibleChallenges:withCompletionHandler:'; { available in 10_10, 7_0 }
  end;

type
  GKAchievement_GKChallenge = objccategory external name 'GKChallenge' (GKAchievement)
    {$if defined(TARGET_OS_IPHONE)}
    function challengeComposeControllerWithMessage_players_completionHandler (message_: nullable NSStringPtr; players: GKPlayer *ProtocolPtr; completionHandler: __nullable GKChallengeComposeCompletionBlock): UIViewController; message 'challengeComposeControllerWithMessage:players:completionHandler:'; { available in 8_0 }
    {$else}
    function challengeComposeControllerWithMessage_players_completionHandler (message_: nullable NSStringPtr; players: GKPlayer *ProtocolPtr; completionHandler: __nullable GKChallengeComposeCompletionBlock): NSViewController; message 'challengeComposeControllerWithMessage:players:completionHandler:'; { available in 10_10 }
    {$endif}
    procedure issueChallengeToPlayers_message (playerIDs: nullable NSString *ProtocolPtr; message_: nullable NSStringPtr); message 'issueChallengeToPlayers:message:'; deprecated 'in 10_8, 10_10, 6_0, 7_0, "pass GKPlayers to challengeComposeControllerWithMessage:players:completionHandler: and present the view controller instead"';
    procedure selectChallengeablePlayers_withCompletionHandler (players: GKPlayer *ProtocolPtr; completionHandler: void(^ __nullable)(GKPlayer *Protocol * __nullable challengeablePlayers, NSError * __nullable error)); message 'selectChallengeablePlayers:withCompletionHandler:'; { available in 10_10, 8_0 }
    class procedure reportAchievements_withEligibleChallenges_withCompletionHandler (achievements: GKAchievement *ProtocolPtr; challenges: GKChallenge *ProtocolPtr; completionHandler: void(^ __nullable)(NSError * __nullable error)); message 'reportAchievements:withEligibleChallenges:withCompletionHandler:'; { available in 10_10, 7_0 }
  end;

type
  GKScore_GKChallengeDeprecated = objccategory external name 'GKChallengeDeprecated' (GKScore)
    {$if defined(TARGET_OS_IPHONE)}
    function challengeComposeControllerWithPlayers_message_completionHandler (playerIDs: nullable NSString *ProtocolPtr; message_: nullable NSStringPtr; completionHandler: __nullable GKChallengeComposeCompletionBlock): nullable UIViewControllerPtr; message 'challengeComposeControllerWithPlayers:message:completionHandler:'; deprecated 'in 7_0, 8_0, "pass GKPlayers to challengeComposeControllerWithMessage:players:"';
    {$endif}
    procedure issueChallengeToPlayers_message (playerIDs: nullable NSString *ProtocolPtr; message_: nullable NSStringPtr); message 'issueChallengeToPlayers:message:'; deprecated 'in 10_8, 10_10, 6_0, 7_0, "pass GKPlayers to challengeComposeControllerWithMessage:players:completionHandler: and present the view controller instead"';
  end;

type
  GKChallengeDeprecated = objccategory external (GKAchievement)
    procedure selectChallengeablePlayerIDs_withCompletionHandler (playerIDs: nullable NSString *ProtocolPtr; completionHandler: void(^__nullable)(NSString *Protocol * __nullable challengeablePlayerIDs, NSError * __nullable error)); message 'selectChallengeablePlayerIDs:withCompletionHandler:'; deprecated 'in 10_8, 10_10, 6_0, 8_0, "pass GKPlayers to selectChallengeablePlayers:"';
    procedure issueChallengeToPlayers_message (playerIDs: nullable NSString *ProtocolPtr; message_: nullable NSStringPtr); message 'issueChallengeToPlayers:message:'; deprecated 'in 10_8, 10_10, 6_0, 7_0, "pass GKPlayers to challengeComposeControllerWithMessage:players:completionHandler: and present the view controller instead"';
    {$if defined(TARGET_OS_IPHONE)}
    function challengeComposeControllerWithPlayers_message_completionHandler (playerIDs: nullable NSString *ProtocolPtr; message_: nullable NSStringPtr; completionHandler: nullable GKChallengeComposeCompletionBlock): nullable UIViewControllerPtr; message 'challengeComposeControllerWithPlayers:message:completionHandler:'; deprecated 'in 7_0, 8_0, "pass GKPlayers to challengeComposeControllerWithMessage:players:"';
    {$endif}
  end;
{$endif}

{$endif}
