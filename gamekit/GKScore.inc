{ Parsed from GameKit.framework GKScore.h }

{$ifdef TYPES}
type
  GKScorePtr = ^GKScore;
{$endif}

{$ifdef CLASSES}

type
  GKScore = objcclass external (NSObject, NSCodingProtocol, NSSecureCodingProtocol)
  public
    function initWithLeaderboardIdentifier (identifier: NSString): instancetype; message 'initWithLeaderboardIdentifier:';
    function initWithLeaderboardIdentifier_player (identifier: NSString; player: GKPlayer): instancetype; message 'initWithLeaderboardIdentifier:player:'; { available in 10_10, 8_0 }
    procedure setValue(newValue: cint64); message 'setValue:';
    function value: cint64; message 'value';
    function formattedValue: NSString; message 'formattedValue';
    procedure setLeaderboardIdentifier(newValue: NSString); message 'setLeaderboardIdentifier:';
    function leaderboardIdentifier: NSString; message 'leaderboardIdentifier';
    procedure setContext(newValue: cuint64); message 'setContext:';
    function context: cuint64; message 'context';
    function date: NSDate; message 'date';
    function player: GKPlayer; message 'player';
    function rank: NSInteger; message 'rank';
    procedure setShouldSetDefaultLeaderboard(newValue: boolean); message 'setShouldSetDefaultLeaderboard:';
    function shouldSetDefaultLeaderboard: boolean; message 'shouldSetDefaultLeaderboard';
    class procedure reportScores_withCompletionHandler (scores: GKScore *ProtocolPtr; completionHandler: void(^__nullable)(NSError * __nullable error)); message 'reportScores:withCompletionHandler:'; { available in 10_8, 6_0 }

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;


type
  GKScore_Deprecated = objccategory external name 'Deprecated' (GKScore)
    function initWithLeaderboardIdentifier_forPlayer (identifier: NSString; playerID: NSString): instancetype; message 'initWithLeaderboardIdentifier:forPlayer:'; deprecated 'in 7_0, 8_0, "use initWithLeaderboardIdentifier:player:"';
    procedure reportScoreWithCompletionHandler (completionHandler: void(^__nullable)(NSError * __nullable error)); message 'reportScoreWithCompletionHandler:'; deprecated 'in 10_8, 10_10, 4_1, 7_0, "Use +reportScores:withCompletionhandler: instead"';
    function initWithCategory (category: nullable NSStringPtr): instancetype; message 'initWithCategory:'; deprecated 'in 10_8, 10_10, 4_1, 7_0, "Use initWithLeaderboardIdentifier: instead"';
    function playerID: NSString; message 'playerID';
    procedure setCategory(newValue: NSString); message 'setCategory:';
    function category: NSString; message 'category';
  end;
{$endif}

