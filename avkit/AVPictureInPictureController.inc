{ Parsed from AVKit.framework AVPictureInPictureController.h }

{$ifdef TYPES}
type
  AVPictureInPictureControllerPtr = ^AVPictureInPictureController;
  AVPictureInPictureControllerDelegateProtocolPtr = ^AVPictureInPictureControllerDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  AVPictureInPictureController = objcclass external (NSObject)
  public
    class function isPictureInPictureSupported: boolean; message 'isPictureInPictureSupported';
    class function pictureInPictureButtonStartImageCompatibleWithTraitCollection (traitCollection: nullable UITraitCollectionPtr): UIImage; message 'pictureInPictureButtonStartImageCompatibleWithTraitCollection:';
    class function pictureInPictureButtonStopImageCompatibleWithTraitCollection (traitCollection: nullable UITraitCollectionPtr): UIImage; message 'pictureInPictureButtonStopImageCompatibleWithTraitCollection:';
    function initWithPlayerLayer (playerLayer: AVPlayerLayer): nullable instancetype; message 'initWithPlayerLayer:'; { NS_DESIGNATED_INITIALIZER }
    function playerLayer: AVPlayerLayer; message 'playerLayer';
    procedure setDelegate(newValue: AVPictureInPictureControllerDelegateProtocol); message 'setDelegate:';
    function delegate: AVPictureInPictureControllerDelegateProtocol; message 'delegate';
    procedure startPictureInPicture; message 'startPictureInPicture';
    procedure stopPictureInPicture; message 'stopPictureInPicture';
    function isPictureInPicturePossible: boolean; message 'isPictureInPicturePossible';
    function isPictureInPictureActive: boolean; message 'isPictureInPictureActive';
    function isPictureInPictureSuspended: boolean; message 'isPictureInPictureSuspended';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  AVPictureInPictureControllerDelegateProtocol = objcprotocol external name 'AVPictureInPictureControllerDelegate' (NSObjectProtocol)
  optional
    procedure pictureInPictureControllerWillStartPictureInPicture (pictureInPictureController: AVPictureInPictureController); message 'pictureInPictureControllerWillStartPictureInPicture:';
    procedure pictureInPictureControllerDidStartPictureInPicture (pictureInPictureController: AVPictureInPictureController); message 'pictureInPictureControllerDidStartPictureInPicture:';
    procedure pictureInPictureController_failedToStartPictureInPictureWithError (pictureInPictureController: AVPictureInPictureController; error: NSError); message 'pictureInPictureController:failedToStartPictureInPictureWithError:';
    procedure pictureInPictureControllerWillStopPictureInPicture (pictureInPictureController: AVPictureInPictureController); message 'pictureInPictureControllerWillStopPictureInPicture:';
    procedure pictureInPictureControllerDidStopPictureInPicture (pictureInPictureController: AVPictureInPictureController); message 'pictureInPictureControllerDidStopPictureInPicture:';
    procedure pictureInPictureController_restoreUserInterfaceForPictureInPictureStopWithCompletionHandler (pictureInPictureController: AVPictureInPictureController; completionHandler: OpaqueCBlock); message 'pictureInPictureController:restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:';
  end;
{$endif}

