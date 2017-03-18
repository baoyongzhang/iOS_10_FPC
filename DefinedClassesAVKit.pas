{$mode delphi}
{$modeswitch objectivec1}
{$modeswitch cvar}

unit DefinedClassesAVKit;
interface

type
  AVPictureInPictureController = objcclass external;
  AVPlayerViewController = objcclass external;
  AVPictureInPictureControllerDelegateProtocol = objcprotocol external name 'AVPictureInPictureControllerDelegate';
  AVPlayerViewControllerDelegateProtocol = objcprotocol external name 'AVPlayerViewControllerDelegate';

type
  AVPlayer = objcclass external;
  AVPlayerLayer = objcclass external;
  UIImage = objcclass external;
  UITraitCollection = objcclass external;

implementation
end.
