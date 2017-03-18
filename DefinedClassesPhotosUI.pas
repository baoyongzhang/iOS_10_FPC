{$mode delphi}
{$modeswitch objectivec1}
{$modeswitch cvar}

unit DefinedClassesPhotosUI;
interface

type
  PHLivePhotoView = objcclass external;
  PHContentEditingControllerProtocol = objcprotocol external name 'PHContentEditingController';
  PHLivePhotoViewDelegateProtocol = objcprotocol external name 'PHLivePhotoViewDelegate';

type
  PHAdjustmentData = objcclass external;
  PHContentEditingInput = objcclass external;
  PHContentEditingOutput = objcclass external;

implementation
end.
