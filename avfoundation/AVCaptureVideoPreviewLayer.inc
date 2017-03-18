{ Parsed from AVFoundation.framework AVCaptureVideoPreviewLayer.h }

{ Types from AVCaptureVideoPreviewLayer }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  AVCaptureVideoPreviewLayerPtr = ^AVCaptureVideoPreviewLayer;
{$endif}

{$ifdef CLASSES}

type
  AVCaptureVideoPreviewLayer = objcclass external (CALayer)
  private
    _internal: AVCaptureVideoPreviewLayerInternal;
  public
    class function layerWithSession (session: AVCaptureSession): instancetype; message 'layerWithSession:';
    function initWithSession (session: AVCaptureSession): instancetype; message 'initWithSession:';
    class function layerWithSessionWithNoConnection (session: AVCaptureSession): instancetype; message 'layerWithSessionWithNoConnection:'; { available in 10_7, 8_0 }
    function initWithSessionWithNoConnection (session: AVCaptureSession): instancetype; message 'initWithSessionWithNoConnection:'; { available in 10_7, 8_0 }
    procedure setSession(newValue: AVCaptureSession); message 'setSession:';
    function session: AVCaptureSession; message 'session';
    procedure setSessionWithNoConnection (session_: AVCaptureSession); message 'setSessionWithNoConnection:'; { available in 10_7, 8_0 }
    function connection: AVCaptureConnection; message 'connection';
    procedure setVideoGravity(newValue: NSString); message 'setVideoGravity:';
    function videoGravity: NSString; message 'videoGravity';
    function captureDevicePointOfInterestForPoint (pointInLayer: CGPoint): CGPoint; message 'captureDevicePointOfInterestForPoint:'; { available in 6_0 }
    function pointForCaptureDevicePointOfInterest (captureDevicePointOfInterest: CGPoint): CGPoint; message 'pointForCaptureDevicePointOfInterest:'; { available in 6_0 }
    function metadataOutputRectOfInterestForRect (rectInLayerCoordinates: CGRect): CGRect; message 'metadataOutputRectOfInterestForRect:'; { available in 7_0 }
    function rectForMetadataOutputRectOfInterest (rectInMetadataOutputCoordinates: CGRect): CGRect; message 'rectForMetadataOutputRectOfInterest:'; { available in 7_0 }
    function transformedMetadataObjectForMetadataObject (metadataObject: AVMetadataObject): AVMetadataObject; message 'transformedMetadataObjectForMetadataObject:'; { available in 6_0 }
    {$if defined(TARGET_OS_IPHONE)}
    function isOrientationSupported: boolean; message 'isOrientationSupported';
    procedure setOrientation(newValue: AVCaptureVideoOrientation); message 'setOrientation:';
    function orientation: AVCaptureVideoOrientation; message 'orientation';
    function isMirroringSupported: boolean; message 'isMirroringSupported';
    procedure setAutomaticallyAdjustsMirroring(newValue: boolean); message 'setAutomaticallyAdjustsMirroring:';
    function automaticallyAdjustsMirroring: boolean; message 'automaticallyAdjustsMirroring';
    procedure setMirrored(newValue: boolean); message 'setMirrored:';
    function isMirrored: boolean; message 'isMirrored';
    {$endif}
  end;
{$endif}

