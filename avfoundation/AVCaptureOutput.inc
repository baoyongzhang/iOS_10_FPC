{ Parsed from AVFoundation.framework AVCaptureOutput.h }

{$ifdef TYPES}
type
  AVCaptureOutputPtr = ^AVCaptureOutput;
{$endif}

{$ifdef CLASSES}

type
  AVCaptureOutput = objcclass external (NSObject)
  private
    _outputInternal: AVCaptureOutputInternal;
  public
    function connections: NSArray; message 'connections';
    function connectionWithMediaType (mediaType: NSString): AVCaptureConnection; message 'connectionWithMediaType:'; { available in 10_7, 5_0 }
    function transformedMetadataObjectForMetadataObject_connection (metadataObject: AVMetadataObject; connection: AVCaptureConnection): AVMetadataObject; message 'transformedMetadataObjectForMetadataObject:connection:'; { available in 6_0 }
    function metadataOutputRectOfInterestForRect (rectInOutputCoordinates: CGRect): CGRect; message 'metadataOutputRectOfInterestForRect:'; { available in 7_0 }
    function rectForMetadataOutputRectOfInterest (rectInMetadataOutputCoordinates: CGRect): CGRect; message 'rectForMetadataOutputRectOfInterest:'; { available in 7_0 }
  end;
{$endif}

