{$mode delphi}
{$modeswitch objectivec1}
{$modeswitch cvar}

unit DefinedClassesReplayKit;
interface

type
  RPBroadcastActivityViewController = objcclass external;
  RPBroadcastConfiguration = objcclass external;
  RPBroadcastController = objcclass external;
  RPBroadcastHandler = objcclass external;
  RPBroadcastMP4ClipHandler = objcclass external;
  RPBroadcastSampleHandler = objcclass external;
  RPPreviewViewController = objcclass external;
  RPScreenRecorder = objcclass external;
  RPBroadcastActivityViewControllerDelegateProtocol = objcprotocol external name 'RPBroadcastActivityViewControllerDelegate';
  RPBroadcastControllerDelegateProtocol = objcprotocol external name 'RPBroadcastControllerDelegate';
  RPPreviewViewControllerDelegateProtocol = objcprotocol external name 'RPPreviewViewControllerDelegate';
  RPScreenRecorderDelegateProtocol = objcprotocol external name 'RPScreenRecorderDelegate';

implementation
end.
