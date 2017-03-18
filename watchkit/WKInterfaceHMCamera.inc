{ Parsed from WatchKit.framework WKInterfaceHMCamera.h }

{$ifdef TYPES}
type
  WKInterfaceHMCameraPtr = ^WKInterfaceHMCamera;
{$endif}

{$ifdef CLASSES}

type
  WKInterfaceHMCamera = objcclass external (WKInterfaceObject)
  public
    procedure setCameraSource (cameraSource: nullable HMCameraSourcePtr); message 'setCameraSource:';
  end;
{$endif}

