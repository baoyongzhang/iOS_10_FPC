{ Parsed from HomeKit.framework HMCameraSettingsControl.h }

{$ifdef TYPES}
type
  HMCameraSettingsControlPtr = ^HMCameraSettingsControl;
{$endif}

{$ifdef CLASSES}

type
  HMCameraSettingsControl = objcclass external (HMCameraControl)
  public
    function init: instancetype; message 'init';
    function nightVision: HMCharacteristic; message 'nightVision';
    function currentHorizontalTilt: HMCharacteristic; message 'currentHorizontalTilt';
    function targetHorizontalTilt: HMCharacteristic; message 'targetHorizontalTilt';
    function currentVerticalTilt: HMCharacteristic; message 'currentVerticalTilt';
    function targetVerticalTilt: HMCharacteristic; message 'targetVerticalTilt';
    function opticalZoom: HMCharacteristic; message 'opticalZoom';
    function digitalZoom: HMCharacteristic; message 'digitalZoom';
    function imageRotation: HMCharacteristic; message 'imageRotation';
    function imageMirroring: HMCharacteristic; message 'imageMirroring';
  end;
{$endif}

