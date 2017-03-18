{ Parsed from GameKit.framework GKAchievement.h }

{$ifdef TYPES}
type
  GKAchievementPtr = ^GKAchievement;
{$endif}

{$ifdef CLASSES}

type
  GKAchievement = objcclass external (NSObject, NSCodingProtocol, NSSecureCodingProtocol)
  public
    class procedure loadAchievementsWithCompletionHandler (completionHandler: void (^ __nullable)(GKAchievement *Protocol * __nullable achievements, NSError * __nullable error)); message 'loadAchievementsWithCompletionHandler:';
    class procedure resetAchievementsWithCompletionHandler (completionHandler: void(^ __nullable)(NSError * __nullable error)); message 'resetAchievementsWithCompletionHandler:';
    function initWithIdentifier (identifier: nullable NSStringPtr): instancetype; message 'initWithIdentifier:';
    function initWithIdentifier_player (identifier: nullable NSStringPtr; player: GKPlayer): instancetype; message 'initWithIdentifier:player:'; { available in 10_10, 8_0 }
    class procedure reportAchievements_withCompletionHandler (achievements: GKAchievement *ProtocolPtr; completionHandler: void(^ __nullable)(NSError * __nullable error)); message 'reportAchievements:withCompletionHandler:'; { available in 10_8, 6_0 }
    procedure setIdentifier(newValue: NSString); message 'setIdentifier:';
    function identifier: NSString; message 'identifier';
    procedure setPercentComplete(newValue: double); message 'setPercentComplete:';
    function percentComplete: double; message 'percentComplete';
    function isCompleted: boolean; message 'isCompleted';
    function lastReportedDate: NSDate; message 'lastReportedDate';
    procedure setShowsCompletionBanner(newValue: boolean); message 'setShowsCompletionBanner:';
    function showsCompletionBanner: boolean; message 'showsCompletionBanner';
    function player: GKPlayer; message 'player';

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;


type
  GKAchievement_Deprecated = objccategory external name 'Deprecated' (GKAchievement)
    procedure reportAchievementWithCompletionHandler (completionHandler: void(^ __nullable)(NSError * __nullable error)); message 'reportAchievementWithCompletionHandler:'; deprecated 'in 10_8, 10_10, 4_1, 7_0, "Use +reportAchievements:withCompletionHandler:"';
    function initWithIdentifier_forPlayer (identifier_: nullable NSStringPtr; playerID: NSString): instancetype; message 'initWithIdentifier:forPlayer:'; deprecated 'in 7_0, 8_0, "use initWithIdentifier:player:"';
    function isHidden: boolean; message 'isHidden';
    function playerID: NSString; message 'playerID';
  end;
{$endif}

