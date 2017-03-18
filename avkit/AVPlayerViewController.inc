{ Parsed from AVKit.framework AVPlayerViewController.h }

{$ifdef TYPES}
type
  AVPlayerViewControllerPtr = ^AVPlayerViewController;
  AVPlayerViewControllerDelegateProtocolPtr = ^AVPlayerViewControllerDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  AVPlayerViewController = objcclass external (UIViewController)
  public
    procedure setPlayer(newValue: AVPlayer); message 'setPlayer:';
    function player: AVPlayer; message 'player';
    procedure setShowsPlaybackControls(newValue: boolean); message 'setShowsPlaybackControls:';
    function showsPlaybackControls: boolean; message 'showsPlaybackControls';
    procedure setVideoGravity(newValue: NSString); message 'setVideoGravity:';
    function videoGravity: NSString; message 'videoGravity';
    function isReadyForDisplay: boolean; message 'isReadyForDisplay';
    function videoBounds: CGRect; message 'videoBounds';
    function contentOverlayView: UIView; message 'contentOverlayView';
    procedure setAllowsPictureInPicturePlayback(newValue: boolean); message 'setAllowsPictureInPicturePlayback:';
    function allowsPictureInPicturePlayback: boolean; message 'allowsPictureInPicturePlayback';
    procedure setUpdatesNowPlayingInfoCenter(newValue: boolean); message 'setUpdatesNowPlayingInfoCenter:';
    function updatesNowPlayingInfoCenter: boolean; message 'updatesNowPlayingInfoCenter';
    procedure setDelegate(newValue: AVPlayerViewControllerDelegateProtocol); message 'setDelegate:';
    function delegate: AVPlayerViewControllerDelegateProtocol; message 'delegate';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  AVPlayerViewControllerDelegateProtocol = objcprotocol external name 'AVPlayerViewControllerDelegate' (NSObjectProtocol)
  optional
    procedure playerViewControllerWillStartPictureInPicture (playerViewController: AVPlayerViewController); message 'playerViewControllerWillStartPictureInPicture:';
    procedure playerViewControllerDidStartPictureInPicture (playerViewController: AVPlayerViewController); message 'playerViewControllerDidStartPictureInPicture:';
    procedure playerViewController_failedToStartPictureInPictureWithError (playerViewController: AVPlayerViewController; error: NSError); message 'playerViewController:failedToStartPictureInPictureWithError:';
    procedure playerViewControllerWillStopPictureInPicture (playerViewController: AVPlayerViewController); message 'playerViewControllerWillStopPictureInPicture:';
    procedure playerViewControllerDidStopPictureInPicture (playerViewController: AVPlayerViewController); message 'playerViewControllerDidStopPictureInPicture:';
    function playerViewControllerShouldAutomaticallyDismissAtPictureInPictureStart (playerViewController: AVPlayerViewController): boolean; message 'playerViewControllerShouldAutomaticallyDismissAtPictureInPictureStart:';
    procedure playerViewController_restoreUserInterfaceForPictureInPictureStopWithCompletionHandler (playerViewController: AVPlayerViewController; completionHandler: OpaqueCBlock); message 'playerViewController:restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:';
  end;
{$endif}

