{ Parsed from MediaPlayer.framework MPMoviePlayerViewController.h }

{$ifdef TYPES}
type
  MPMoviePlayerViewControllerPtr = ^MPMoviePlayerViewController;
{$endif}

{$ifdef CLASSES}

type
  MPMoviePlayerViewController = objcclass external (UIViewController)
  public
    function initWithContentURL (contentURL: NSURL): instancetype; message 'initWithContentURL:'; { NS_DESIGNATED_INITIALIZER }
    function moviePlayer: MPMoviePlayerController; message 'moviePlayer';
  end;


type
  UIViewController_MPMoviePlayerViewController = objccategory external name 'MPMoviePlayerViewController' (UIViewController)
    procedure presentMoviePlayerViewControllerAnimated (moviePlayerViewController: MPMoviePlayerViewController); message 'presentMoviePlayerViewControllerAnimated:'; deprecated 'in "Use AVPlayerViewController in AVKit.", 3.2, 9.0, 10.12.2, 10.12.2, 3.2, 9.0';
    procedure dismissMoviePlayerViewControllerAnimated; message 'dismissMoviePlayerViewControllerAnimated'; deprecated 'in "Use AVPlayerViewController in AVKit.", 3.2, 9.0, 10.12.2, 10.12.2, 3.2, 9.0';
  end;
{$endif}

