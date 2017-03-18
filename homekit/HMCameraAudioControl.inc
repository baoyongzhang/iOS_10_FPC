{ Parsed from HomeKit.framework HMCameraAudioControl.h }

{$ifdef TYPES}
type
  HMCameraAudioControlPtr = ^HMCameraAudioControl;
{$endif}

{$ifdef CLASSES}

type
  HMCameraAudioControl = objcclass external (HMCameraControl)
  public
    function init: instancetype; message 'init';
    function mute: HMCharacteristic; message 'mute';
    function volume: HMCharacteristic; message 'volume';
  end;
{$endif}

