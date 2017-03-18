{ Parsed from AVFoundation.framework AVCaptureStillImageOutput.h }

{ Types from AVCaptureStillImageOutput }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  AVCaptureStillImageOutputPtr = ^AVCaptureStillImageOutput;
  AVCaptureBracketedStillImageSettingsPtr = ^AVCaptureBracketedStillImageSettings;
  AVCaptureManualExposureBracketedStillImageSettingsPtr = ^AVCaptureManualExposureBracketedStillImageSettings;
  AVCaptureAutoExposureBracketedStillImageSettingsPtr = ^AVCaptureAutoExposureBracketedStillImageSettings;
{$endif}

{$ifdef CLASSES}

type
  AVCaptureStillImageOutput = objcclass external (AVCaptureOutput)
  private
    _internal: AVCaptureStillImageOutputInternal;
  public
    procedure setOutputSettings(newValue: NSDictionary); message 'setOutputSettings:';
    function outputSettings: NSDictionary; message 'outputSettings';
    function availableImageDataCVPixelFormatTypes: NSArray; message 'availableImageDataCVPixelFormatTypes';
    function availableImageDataCodecTypes: NSArray; message 'availableImageDataCodecTypes';
    {$if defined(TARGET_OS_IPHONE)}
    function isStillImageStabilizationSupported: boolean; message 'isStillImageStabilizationSupported';
    procedure setAutomaticallyEnablesStillImageStabilizationWhenAvailable(newValue: boolean); message 'setAutomaticallyEnablesStillImageStabilizationWhenAvailable:';
    function automaticallyEnablesStillImageStabilizationWhenAvailable: boolean; message 'automaticallyEnablesStillImageStabilizationWhenAvailable';
    function isStillImageStabilizationActive: boolean; message 'isStillImageStabilizationActive';
    procedure setHighResolutionStillImageOutputEnabled(newValue: boolean); message 'setHighResolutionStillImageOutputEnabled:';
    function isHighResolutionStillImageOutputEnabled: boolean; message 'isHighResolutionStillImageOutputEnabled';
    {$endif}
    function isCapturingStillImage: boolean; message 'isCapturingStillImage';
    procedure captureStillImageAsynchronouslyFromConnection_completionHandler (connection: AVCaptureConnection; handler: OpaqueCBlock); message 'captureStillImageAsynchronouslyFromConnection:completionHandler:';
    class function jpegStillImageNSDataRepresentation (jpegSampleBuffer: CMSampleBufferRef): NSData; message 'jpegStillImageNSDataRepresentation:';
  end;
{$endif}

{$if defined(TARGET_OS_IPHONE)defined(__TVOS_PROHIBITED)}
{$ifdef CLASSES}

type
  AVCaptureBracketedStillImageSettings = objcclass external (NSObject)
  end;

type
  AVCaptureManualExposureBracketedStillImageSettings = objcclass external (AVCaptureBracketedStillImageSettings)
  public
    class function manualExposureSettingsWithExposureDuration_ISO (duration: CMTime; ISO: single): instancetype; message 'manualExposureSettingsWithExposureDuration:ISO:';
    function exposureDuration: CMTime; message 'exposureDuration';
    function ISO: single; message 'ISO';
  end;

type
  AVCaptureAutoExposureBracketedStillImageSettings = objcclass external (AVCaptureBracketedStillImageSettings)
  public
    class function autoExposureSettingsWithExposureTargetBias (exposureTargetBias: single): instancetype; message 'autoExposureSettingsWithExposureTargetBias:';
    function exposureTargetBias: single; message 'exposureTargetBias';
  end;


type
  BracketedCaptureMethods = objccategory external (AVCaptureStillImageOutput)
    function maxBracketedCaptureStillImageCount: NSUInteger; message 'maxBracketedCaptureStillImageCount';
    function isLensStabilizationDuringBracketedCaptureSupported: boolean; message 'isLensStabilizationDuringBracketedCaptureSupported';
    procedure setLensStabilizationDuringBracketedCaptureEnabled(newValue: boolean); message 'setLensStabilizationDuringBracketedCaptureEnabled:';
    function isLensStabilizationDuringBracketedCaptureEnabled: boolean; message 'isLensStabilizationDuringBracketedCaptureEnabled';
    procedure prepareToCaptureStillImageBracketFromConnection_withSettingsArray_completionHandler (connection: AVCaptureConnection; settings: NSArray; handler: OpaqueCBlock); message 'prepareToCaptureStillImageBracketFromConnection:withSettingsArray:completionHandler:'; deprecated 'in 8_0, 10_0, "Use AVCapturePhotoOutput setPreparedPhotoSettingsArray:completionHandler: instead"';
    procedure captureStillImageBracketAsynchronouslyFromConnection_withSettingsArray_completionHandler (connection: AVCaptureConnection; settings: NSArray; handler: OpaqueCBlock); message 'captureStillImageBracketAsynchronouslyFromConnection:withSettingsArray:completionHandler:'; deprecated 'in 8_0, 10_0, "Use AVCapturePhotoOutput capturePhotoWithSettings:delegate: instead"';
  end;
{$endif}

{$endif}
