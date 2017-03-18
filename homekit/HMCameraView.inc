{ Parsed from HomeKit.framework HMCameraView.h }

{$ifdef TYPES}
type
  HMCameraViewPtr = ^HMCameraView;
{$endif}

{$ifdef CLASSES}

type
  HMCameraView = objcclass external (UIView)
  public
    procedure setCameraSource(newValue: HMCameraSource); message 'setCameraSource:';
    function cameraSource: HMCameraSource; message 'cameraSource';
  end;
{$endif}

