{ Parsed from GameKit.framework GKFriendRequestComposeViewController.h }

{$ifdef TYPES}
type
  GKFriendRequestComposeViewControllerPtr = ^GKFriendRequestComposeViewController;
  GKFriendRequestComposeViewControllerPtr = ^GKFriendRequestComposeViewController;
  GKFriendRequestComposeViewControllerPtr = ^GKFriendRequestComposeViewController;
  GKFriendRequestComposeViewControllerDelegateProtocolPtr = ^GKFriendRequestComposeViewControllerDelegateProtocol;
{$endif}

{$if defined(TARGET_OS_IPHONE)}
{$ifdef CLASSES}

type
  GKFriendRequestComposeViewController = objcclass external (UINavigationController)
  end;
{$endif}

{$else}
{$ifdef CLASSES}

type
  GKFriendRequestComposeViewController = objcclass external (NSViewController, GKViewControllerProtocol)
  private
    _remoteViewController: id;
    _composeViewDelegateWeak: GKFriendRequestComposeViewControllerDelegateProtocol;
    _initialState: id;
    _internalFlag: boolean;
  end;
{$endif}

{$endif}
{$ifdef CLASSES}

type
  GKFriendRequestComposeViewController = objcclass external (NSObject)
  public
    class function maxNumberOfRecipients: NSUInteger; message 'maxNumberOfRecipients';
    procedure setMessage (message_: nullable NSStringPtr); message 'setMessage:';
    procedure addRecipientPlayers (players: GKPlayer *ProtocolPtr); message 'addRecipientPlayers:'; { available in 10_10, 8_0 }
    procedure addRecipientsWithPlayerIDs (playerIDs: NSString *ProtocolPtr); message 'addRecipientsWithPlayerIDs:'; deprecated 'in 10_8, 10_10, 4_2, 8_0, "use addRecipientPlayers:"';
    procedure addRecipientsWithEmailAddresses (emailAddresses: NSString *ProtocolPtr); message 'addRecipientsWithEmailAddresses:';
    procedure setComposeViewDelegate(newValue: GKFriendRequestComposeViewControllerDelegateProtocol); message 'setComposeViewDelegate:';
    function composeViewDelegate: GKFriendRequestComposeViewControllerDelegateProtocol; message 'composeViewDelegate';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  GKFriendRequestComposeViewControllerDelegateProtocol = objcprotocol external name 'GKFriendRequestComposeViewControllerDelegate'
    procedure friendRequestComposeViewControllerDidFinish (viewController: GKFriendRequestComposeViewController); message 'friendRequestComposeViewControllerDidFinish:'; deprecated 'in 10_8, 10_12, 4_2, 10_0';
  end;
{$endif}

