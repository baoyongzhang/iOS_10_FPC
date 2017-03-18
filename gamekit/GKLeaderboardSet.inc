{ Parsed from GameKit.framework GKLeaderboardSet.h }

{ Types from GKLeaderboardSet_UI }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  GKLeaderboardSetPtr = ^GKLeaderboardSet;
{$endif}

{$ifdef CLASSES}

type
  GKLeaderboardSet = objcclass external (NSObject, NSCodingProtocol, NSSecureCodingProtocol)
  public
    function title: NSString; message 'title';
    function groupIdentifier: NSString; message 'groupIdentifier';
    procedure setIdentifier(newValue: NSString); message 'setIdentifier:';
    function identifier: NSString; message 'identifier';
    class procedure loadLeaderboardSetsWithCompletionHandler (completionHandler: void(^__nullable)(GKLeaderboardSet *Protocol * __nullable leaderboardSets, NSError * __nullable error)); message 'loadLeaderboardSetsWithCompletionHandler:'; { available in 10_10, 7_0 }
    procedure loadLeaderboardsWithCompletionHandler (completionHandler: void(^__nullable)(GKLeaderboard *Protocol * __nullable leaderboards, NSError * __nullable error)); message 'loadLeaderboardsWithCompletionHandler:'; { available in 10_10, 7_0 }

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;


type
  GKLeaderboardSet_UI = objccategory external name 'UI' (GKLeaderboardSet)
    {$if defined(TARGET_OS_IPHONE)}
    procedure loadImageWithCompletionHandler (completionHandler: void(^__nullable)(UIImage * __nullable image, NSError * __nullable error)); message 'loadImageWithCompletionHandler:';
    {$else}
    procedure loadImageWithCompletionHandler (completionHandler: void(^__nullable)(NSImage * __nullable image, NSError * __nullable error)); message 'loadImageWithCompletionHandler:';
    {$endif}
  end;
{$endif}

