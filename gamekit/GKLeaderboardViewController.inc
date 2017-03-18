{ Parsed from GameKit.framework GKLeaderboardViewController.h }

{$ifdef TYPES}
type
  GKLeaderboardViewControllerPtr = ^GKLeaderboardViewController;
  GKLeaderboardViewControllerPtr = ^GKLeaderboardViewController;
  GKLeaderboardViewControllerDelegateProtocolPtr = ^GKLeaderboardViewControllerDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  GKLeaderboardViewController = objcclass external (GKGameCenterViewController)
  private
    _leaderboardDelegate: GKLeaderboardViewControllerDelegateProtocol;
    _category: NSString;
    _timeScope: GKLeaderboardTimeScope;
  end;

type
  GKLeaderboardViewController = objcclass external (NSObject)
  public
    procedure setTimeScope(newValue: GKLeaderboardTimeScope); message 'setTimeScope:';
    function timeScope: GKLeaderboardTimeScope; message 'timeScope';
    procedure setCategory(newValue: NSString); message 'setCategory:';
    function category: NSString; message 'category';
    procedure setLeaderboardDelegate(newValue: GKLeaderboardViewControllerDelegateProtocol); message 'setLeaderboardDelegate:';
    function leaderboardDelegate: GKLeaderboardViewControllerDelegateProtocol; message 'leaderboardDelegate';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  GKLeaderboardViewControllerDelegateProtocol = objcprotocol external name 'GKLeaderboardViewControllerDelegate' (NSObjectProtocol)
  required
    procedure leaderboardViewControllerDidFinish (viewController: GKLeaderboardViewController); message 'leaderboardViewControllerDidFinish:';
  end;
{$endif}

