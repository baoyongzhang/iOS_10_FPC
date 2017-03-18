{ Parsed from AVFoundation.framework AVCaptureDevice.h }

{ Types from AVCaptureDevice }
{$ifdef TYPES}



{$endif}


{ Types from AVCaptureDeviceFormat }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  AVCaptureDevicePtr = ^AVCaptureDevice;
  AVCaptureDeviceDiscoverySessionPtr = ^AVCaptureDeviceDiscoverySession;
  AVFrameRateRangePtr = ^AVFrameRateRange;
  AVCaptureDeviceFormatPtr = ^AVCaptureDeviceFormat;
  AVCaptureDeviceInputSourcePtr = ^AVCaptureDeviceInputSource;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  __TVOS_PROHIBITED: NSString *AVCaptureDeviceWasConnectedNotification { available in 10_7, 4_0 }; cvar; external;
  __TVOS_PROHIBITED: NSString *AVCaptureDeviceWasDisconnectedNotification { available in 10_7, 4_0 }; cvar; external;
  __TVOS_PROHIBITED: NSString *AVCaptureDeviceSubjectAreaDidChangeNotification { available in 5_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  AVCaptureDevice = objcclass external (NSObject)
  private
    _internal: AVCaptureDeviceInternal;
  public
    class function devices: NSArray; message 'devices'; deprecated 'in 4_0, 10_0, "Use AVCaptureDeviceDiscoverySession instead."';
    class function devicesWithMediaType (mediaType: NSString): NSArray; message 'devicesWithMediaType:'; deprecated 'in 4_0, 10_0, "Use AVCaptureDeviceDiscoverySession instead."';
    class function defaultDeviceWithMediaType (mediaType: NSString): AVCaptureDevice; message 'defaultDeviceWithMediaType:';
    class function deviceWithUniqueID (deviceUniqueID: NSString): AVCaptureDevice; message 'deviceWithUniqueID:';
    function uniqueID: NSString; message 'uniqueID';
    function modelID: NSString; message 'modelID';
    function localizedName: NSString; message 'localizedName';
    {$if (defined(TARGET_OS_MAC) and not (defined(TARGET_OS_EMBEDDED) or defined(TARGET_OS_IPHONE)))}
    function manufacturer: NSString; message 'manufacturer';
    function transportType: cint32; message 'transportType';
    {$endif}
    function hasMediaType (mediaType: NSString): boolean; message 'hasMediaType:';
    function lockForConfiguration (outError: NSErrorPtr): boolean; message 'lockForConfiguration:';
    procedure unlockForConfiguration; message 'unlockForConfiguration';
    function supportsAVCaptureSessionPreset (preset: NSString): boolean; message 'supportsAVCaptureSessionPreset:';
    function isConnected: boolean; message 'isConnected';
    {$if (defined(TARGET_OS_MAC) and not (defined(TARGET_OS_EMBEDDED) or defined(TARGET_OS_IPHONE)))}
    function isInUseByAnotherApplication: boolean; message 'isInUseByAnotherApplication';
    function isSuspended: boolean; message 'isSuspended';
    function linkedDevices: NSArray; message 'linkedDevices';
    {$endif}
    function formats: NSArray; message 'formats';
    procedure setActiveFormat(newValue: AVCaptureDeviceFormat); message 'setActiveFormat:';
    function activeFormat: AVCaptureDeviceFormat; message 'activeFormat';
    procedure setActiveVideoMinFrameDuration(newValue: CMTime); message 'setActiveVideoMinFrameDuration:';
    function activeVideoMinFrameDuration: CMTime; message 'activeVideoMinFrameDuration';
    procedure setActiveVideoMaxFrameDuration(newValue: CMTime); message 'setActiveVideoMaxFrameDuration:';
    function activeVideoMaxFrameDuration: CMTime; message 'activeVideoMaxFrameDuration';
    {$if (defined(TARGET_OS_MAC) and not (defined(TARGET_OS_EMBEDDED) or defined(TARGET_OS_IPHONE)))}
    function inputSources: NSArray; message 'inputSources';
    procedure setActiveInputSource(newValue: AVCaptureDeviceInputSource); message 'setActiveInputSource:';
    function activeInputSource: AVCaptureDeviceInputSource; message 'activeInputSource';
    {$endif}
  end;
{$endif}

{$ifdef TYPES}
type
  AVCaptureDevicePosition = NSInteger;
  AVCaptureDevicePositionPtr = ^AVCaptureDevicePosition;

const
  AVCaptureDevicePositionUnspecified = 0;
  AVCaptureDevicePositionBack = 1;
  AVCaptureDevicePositionFront = 2;
{$endif}

{$ifdef CLASSES}

type
  AVCaptureDevice_AVCaptureDevicePosition = objccategory external name 'AVCaptureDevicePosition' (AVCaptureDevice)
    function position: AVCaptureDevicePosition; message 'position';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  __TVOS_PROHIBITED: AVCaptureDeviceType AVCaptureDeviceTypeBuiltInMicrophone { available in 10_0 }; cvar; external;
  __TVOS_PROHIBITED: AVCaptureDeviceType AVCaptureDeviceTypeBuiltInWideAngleCamera { available in 10_0 }; cvar; external;
  __TVOS_PROHIBITED: AVCaptureDeviceType AVCaptureDeviceTypeBuiltInTelephotoCamera { available in 10_0 }; cvar; external;
  __TVOS_PROHIBITED: AVCaptureDeviceType AVCaptureDeviceTypeBuiltInDualCamera { available in 10_2 }; cvar; external;
  __TVOS_PROHIBITED: AVCaptureDeviceType AVCaptureDeviceTypeBuiltInDuoCamera deprecated 'in 10_0, 10_2, "Use AVCaptureDeviceTypeBuiltInDualCamera instead"'; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  AVCaptureDeviceType = objccategory external (AVCaptureDevice)
    function __TVOS_PROHIBITED_: AVCaptureDeviceType deviceType; message 'TVOS_PROHIBITED';
    class function defaultDeviceWithDeviceType_mediaType_position (deviceType: AVCaptureDeviceType; mediaType: NSString; position: AVCaptureDevicePosition): AVCaptureDevice; message 'defaultDeviceWithDeviceType:mediaType:position:'; { available in 10_0 }
  end;
{$endif}

{$ifdef TYPES}
type
  AVCaptureFlashMode = NSInteger;
  AVCaptureFlashModePtr = ^AVCaptureFlashMode;

const
  AVCaptureFlashModeOff = 0;
  AVCaptureFlashModeOn = 1;
  AVCaptureFlashModeAuto = 2;
{$endif}

{$ifdef CLASSES}

type
  AVCaptureDeviceFlash = objccategory external (AVCaptureDevice)
    function hasFlash: boolean; message 'hasFlash';
    function isFlashAvailable: boolean; message 'isFlashAvailable';
    function isFlashActive: boolean; message 'isFlashActive';
    function isFlashModeSupported (flashMode: AVCaptureFlashMode): boolean; message 'isFlashModeSupported:'; deprecated 'in 10_7, NA, 4_0, 10_0, "Use AVCapturePhotoOutput's -supportedFlashModes instead."';
    procedure setFlashMode(newValue: AVCaptureFlashMode); message 'setFlashMode:';
    function flashMode: AVCaptureFlashMode; message 'flashMode';
  end;
{$endif}

{$ifdef TYPES}
type
  AVCaptureTorchMode = NSInteger;
  AVCaptureTorchModePtr = ^AVCaptureTorchMode;

const
  AVCaptureTorchModeOff = 0;
  AVCaptureTorchModeOn = 1;
  AVCaptureTorchModeAuto = 2;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVCaptureMaxAvailableTorchLevel: single; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  AVCaptureDeviceTorch = objccategory external (AVCaptureDevice)
    function hasTorch: boolean; message 'hasTorch';
    function isTorchAvailable: boolean; message 'isTorchAvailable';
    function isTorchActive: boolean; message 'isTorchActive';
    function torchLevel: single; message 'torchLevel';
    function isTorchModeSupported (torchMode: AVCaptureTorchMode): boolean; message 'isTorchModeSupported:';
    procedure setTorchMode(newValue: AVCaptureTorchMode); message 'setTorchMode:';
    function torchMode: AVCaptureTorchMode; message 'torchMode';
    function setTorchModeOnWithLevel_error (torchLevel_: single; outError: NSErrorPtr): boolean; message 'setTorchModeOnWithLevel:error:'; { available in 6_0 }
  end;
{$endif}

{$ifdef TYPES}
type
  AVCaptureFocusMode = NSInteger;
  AVCaptureFocusModePtr = ^AVCaptureFocusMode;

const
  AVCaptureFocusModeLocked = 0;
  AVCaptureFocusModeAutoFocus = 1;
  AVCaptureFocusModeContinuousAutoFocus = 2;

type
  AVCaptureAutoFocusRangeRestriction = NSInteger;
  AVCaptureAutoFocusRangeRestrictionPtr = ^AVCaptureAutoFocusRangeRestriction;

const
  AVCaptureAutoFocusRangeRestrictionNone = 0;
  AVCaptureAutoFocusRangeRestrictionNear = 1;
  AVCaptureAutoFocusRangeRestrictionFar = 2;
{$endif}

{$ifdef CLASSES}

type
  AVCaptureDeviceFocus = objccategory external (AVCaptureDevice)
    function isFocusModeSupported (focusMode: AVCaptureFocusMode): boolean; message 'isFocusModeSupported:';
    function isLockingFocusWithCustomLensPositionSupported: boolean; message 'isLockingFocusWithCustomLensPositionSupported';
    procedure setFocusMode(newValue: AVCaptureFocusMode); message 'setFocusMode:';
    function focusMode: AVCaptureFocusMode; message 'focusMode';
    function isFocusPointOfInterestSupported: boolean; message 'isFocusPointOfInterestSupported';
    procedure setFocusPointOfInterest(newValue: CGPoint); message 'setFocusPointOfInterest:';
    function focusPointOfInterest: CGPoint; message 'focusPointOfInterest';
    function isAdjustingFocus: boolean; message 'isAdjustingFocus';
    function isAutoFocusRangeRestrictionSupported: boolean; message 'isAutoFocusRangeRestrictionSupported';
    procedure setAutoFocusRangeRestriction(newValue: AVCaptureAutoFocusRangeRestriction); message 'setAutoFocusRangeRestriction:';
    function autoFocusRangeRestriction: AVCaptureAutoFocusRangeRestriction; message 'autoFocusRangeRestriction';
    function isSmoothAutoFocusSupported: boolean; message 'isSmoothAutoFocusSupported';
    procedure setSmoothAutoFocusEnabled(newValue: boolean); message 'setSmoothAutoFocusEnabled:';
    function isSmoothAutoFocusEnabled: boolean; message 'isSmoothAutoFocusEnabled';
    function lensPosition: single; message 'lensPosition';
    procedure setFocusModeLockedWithLensPosition_completionHandler (lensPosition_: single; handler: OpaqueCBlock); message 'setFocusModeLockedWithLensPosition:completionHandler:'; { available in 8_0 }
  end;
{$endif}

{$ifdef TYPES}
type
  AVCaptureExposureMode = NSInteger;
  AVCaptureExposureModePtr = ^AVCaptureExposureMode;

const
  AVCaptureExposureModeLocked = 0;
  AVCaptureExposureModeAutoExpose = 1;
  AVCaptureExposureModeContinuousAutoExposure = 2;
  AVCaptureExposureModeCustom = 3 { available in 8_0 };
{$endif}

{$ifdef CLASSES}

type
  AVCaptureDeviceExposure = objccategory external (AVCaptureDevice)
    function isExposureModeSupported (exposureMode: AVCaptureExposureMode): boolean; message 'isExposureModeSupported:';
    procedure setExposureMode(newValue: AVCaptureExposureMode); message 'setExposureMode:';
    function exposureMode: AVCaptureExposureMode; message 'exposureMode';
    function isExposurePointOfInterestSupported: boolean; message 'isExposurePointOfInterestSupported';
    procedure setExposurePointOfInterest(newValue: CGPoint); message 'setExposurePointOfInterest:';
    function exposurePointOfInterest: CGPoint; message 'exposurePointOfInterest';
    function isAdjustingExposure: boolean; message 'isAdjustingExposure';
    function lensAperture: single; message 'lensAperture';
    function exposureDuration: CMTime; message 'exposureDuration';
    function ISO: single; message 'ISO';
    procedure setExposureModeCustomWithDuration_ISO_completionHandler (duration: CMTime; ISO_: single; handler: OpaqueCBlock); message 'setExposureModeCustomWithDuration:ISO:completionHandler:'; { available in 8_0 }
    function exposureTargetOffset: single; message 'exposureTargetOffset';
    function exposureTargetBias: single; message 'exposureTargetBias';
    function minExposureTargetBias: single; message 'minExposureTargetBias';
    function maxExposureTargetBias: single; message 'maxExposureTargetBias';
    procedure setExposureTargetBias_completionHandler (bias: single; handler: OpaqueCBlock); message 'setExposureTargetBias:completionHandler:'; { available in 8_0 }
  end;
{$endif}

{$ifdef TYPES}
type
  AVCaptureWhiteBalanceMode = NSInteger;
  AVCaptureWhiteBalanceModePtr = ^AVCaptureWhiteBalanceMode;

const
  AVCaptureWhiteBalanceModeLocked = 0;
  AVCaptureWhiteBalanceModeAutoWhiteBalance = 1;
  AVCaptureWhiteBalanceModeContinuousAutoWhiteBalance = 2;

type
  AVCaptureWhiteBalanceGains__TVOS_PROHIBITED = record
    redGain: single;
    greenGain: single;
    blueGain: single;
  end;
type
  AVCaptureWhiteBalanceGains__TVOS_PROHIBITEDPtr = ^AVCaptureWhiteBalanceGains__TVOS_PROHIBITED;
type
  AVCaptureWhiteBalanceChromaticityValues__TVOS_PROHIBITED = record
    x: single;
    y: single;
  end;
type
  AVCaptureWhiteBalanceChromaticityValues__TVOS_PROHIBITEDPtr = ^AVCaptureWhiteBalanceChromaticityValues__TVOS_PROHIBITED;
type
  AVCaptureWhiteBalanceTemperatureAndTintValues__TVOS_PROHIBITED = record
    temperature: single;
    tint: single;
  end;
type
  AVCaptureWhiteBalanceTemperatureAndTintValues__TVOS_PROHIBITEDPtr = ^AVCaptureWhiteBalanceTemperatureAndTintValues__TVOS_PROHIBITED;
{$endif}

{$ifdef CLASSES}

type
  AVCaptureDeviceWhiteBalance = objccategory external (AVCaptureDevice)
    function isWhiteBalanceModeSupported (whiteBalanceMode: AVCaptureWhiteBalanceMode): boolean; message 'isWhiteBalanceModeSupported:';
    function isLockingWhiteBalanceWithCustomDeviceGainsSupported: boolean; message 'isLockingWhiteBalanceWithCustomDeviceGainsSupported';
    procedure setWhiteBalanceMode(newValue: AVCaptureWhiteBalanceMode); message 'setWhiteBalanceMode:';
    function whiteBalanceMode: AVCaptureWhiteBalanceMode; message 'whiteBalanceMode';
    function isAdjustingWhiteBalance: boolean; message 'isAdjustingWhiteBalance';
    function deviceWhiteBalanceGains: AVCaptureWhiteBalanceGains; message 'deviceWhiteBalanceGains';
    function grayWorldDeviceWhiteBalanceGains: AVCaptureWhiteBalanceGains; message 'grayWorldDeviceWhiteBalanceGains';
    function maxWhiteBalanceGain: single; message 'maxWhiteBalanceGain';
    procedure setWhiteBalanceModeLockedWithDeviceWhiteBalanceGains_completionHandler (whiteBalanceGains: AVCaptureWhiteBalanceGains; handler: OpaqueCBlock); message 'setWhiteBalanceModeLockedWithDeviceWhiteBalanceGains:completionHandler:'; { available in 8_0 }
    function chromaticityValuesForDeviceWhiteBalanceGains (whiteBalanceGains: AVCaptureWhiteBalanceGains): AVCaptureWhiteBalanceChromaticityValues; message 'chromaticityValuesForDeviceWhiteBalanceGains:'; { available in 8_0 }
    function deviceWhiteBalanceGainsForChromaticityValues (chromaticityValues: AVCaptureWhiteBalanceChromaticityValues): AVCaptureWhiteBalanceGains; message 'deviceWhiteBalanceGainsForChromaticityValues:'; { available in 8_0 }
    function temperatureAndTintValuesForDeviceWhiteBalanceGains (whiteBalanceGains: AVCaptureWhiteBalanceGains): AVCaptureWhiteBalanceTemperatureAndTintValues; message 'temperatureAndTintValuesForDeviceWhiteBalanceGains:'; { available in 8_0 }
    function deviceWhiteBalanceGainsForTemperatureAndTintValues (tempAndTintValues: AVCaptureWhiteBalanceTemperatureAndTintValues): AVCaptureWhiteBalanceGains; message 'deviceWhiteBalanceGainsForTemperatureAndTintValues:'; { available in 8_0 }
  end;

type
  AVCaptureDeviceSubjectAreaChangeMonitoring = objccategory external (AVCaptureDevice)
    procedure setSubjectAreaChangeMonitoringEnabled(newValue: boolean); message 'setSubjectAreaChangeMonitoringEnabled:';
    function isSubjectAreaChangeMonitoringEnabled: boolean; message 'isSubjectAreaChangeMonitoringEnabled';
  end;

type
  AVCaptureDeviceLowLightBoost = objccategory external (AVCaptureDevice)
    function isLowLightBoostSupported: boolean; message 'isLowLightBoostSupported';
    function isLowLightBoostEnabled: boolean; message 'isLowLightBoostEnabled';
    procedure setAutomaticallyEnablesLowLightBoostWhenAvailable(newValue: boolean); message 'setAutomaticallyEnablesLowLightBoostWhenAvailable:';
    function automaticallyEnablesLowLightBoostWhenAvailable: boolean; message 'automaticallyEnablesLowLightBoostWhenAvailable';
  end;

type
  AVCaptureDeviceVideoZoom = objccategory external (AVCaptureDevice)
    procedure setVideoZoomFactor(newValue: CGFloat); message 'setVideoZoomFactor:';
    function videoZoomFactor: CGFloat; message 'videoZoomFactor';
    procedure rampToVideoZoomFactor_withRate (factor: CGFloat; rate: single); message 'rampToVideoZoomFactor:withRate:'; { available in 7_0 }
    function isRampingVideoZoom: boolean; message 'isRampingVideoZoom';
    procedure cancelVideoZoomRamp; message 'cancelVideoZoomRamp'; { available in 7_0 }
  end;
{$endif}

{$ifdef TYPES}
type
  AVAuthorizationStatus = NSInteger;
  AVAuthorizationStatusPtr = ^AVAuthorizationStatus;

const
  AVAuthorizationStatusNotDetermined = 0;
  AVAuthorizationStatusRestricted = 1;
  AVAuthorizationStatusDenied = 2;
  AVAuthorizationStatusAuthorized = 3;
{$endif}

{$ifdef CLASSES}

type
  AVCaptureDeviceAuthorization = objccategory external (AVCaptureDevice)
    class function authorizationStatusForMediaType (mediaType: NSString): AVAuthorizationStatus; message 'authorizationStatusForMediaType:'; { available in 7_0 }
    class procedure requestAccessForMediaType_completionHandler (mediaType: NSString; handler: OpaqueCBlock); message 'requestAccessForMediaType:completionHandler:'; { available in 7_0 }
  end;
{$endif}

{$if (defined(TARGET_OS_MAC) and not (defined(TARGET_OS_EMBEDDED) or defined(TARGET_OS_IPHONE)))}
{$ifdef TYPES}
type
  AVCaptureDeviceTransportControlsSpeed = single;
  AVCaptureDeviceTransportControlsSpeedPtr = ^AVCaptureDeviceTransportControlsSpeed;
  AVCaptureDeviceTransportControlsPlaybackMode = NSInteger;
  AVCaptureDeviceTransportControlsPlaybackModePtr = ^AVCaptureDeviceTransportControlsPlaybackMode;

const
  AVCaptureDeviceTransportControlsNotPlayingMode = 0;
  AVCaptureDeviceTransportControlsPlayingMode = 1;
{$endif}

{$ifdef CLASSES}

type
  AVCaptureDeviceTransportControls = objccategory external (AVCaptureDevice)
    function transportControlsSupported: boolean; message 'transportControlsSupported';
    function transportControlsPlaybackMode: AVCaptureDeviceTransportControlsPlaybackMode; message 'transportControlsPlaybackMode';
    function transportControlsSpeed: AVCaptureDeviceTransportControlsSpeed; message 'transportControlsSpeed';
    procedure setTransportControlsPlaybackMode_speed (mode: AVCaptureDeviceTransportControlsPlaybackMode; speed: AVCaptureDeviceTransportControlsSpeed); message 'setTransportControlsPlaybackMode:speed:'; { available in 10_7, NA }
  end;
{$endif}

{$endif}
{$ifdef CLASSES}

type
  AVCaptureDeviceHighDynamicRangeSupport = objccategory external (AVCaptureDevice)
    procedure setAutomaticallyAdjustsVideoHDREnabled(newValue: boolean); message 'setAutomaticallyAdjustsVideoHDREnabled:';
    function automaticallyAdjustsVideoHDREnabled: boolean; message 'automaticallyAdjustsVideoHDREnabled';
    procedure setVideoHDREnabled(newValue: boolean); message 'setVideoHDREnabled:';
    function isVideoHDREnabled: boolean; message 'isVideoHDREnabled';
  end;
{$endif}

{$ifdef TYPES}
type
  AVCaptureColorSpace = NSInteger;
  AVCaptureColorSpacePtr = ^AVCaptureColorSpace;

const
  AVCaptureColorSpace_sRGB = 0;
  NS_SWIFT_NAME = 1;
  sRGB = 2;
  0 = 3;
  AVCaptureColorSpace_P3_D65 = 4;
  NS_SWIFT_NAME = 5;
  P3_D65 = 6;
  1 = 7;
{$endif}

{$ifdef CLASSES}

type
  AVCaptureDeviceColorSpaceSupport = objccategory external (AVCaptureDevice)
    procedure setActiveColorSpace(newValue: AVCaptureColorSpace); message 'setActiveColorSpace:';
    function activeColorSpace: AVCaptureColorSpace; message 'activeColorSpace';
  end;


type
  AVCaptureDeviceDiscoverySession = objcclass external (NSObject)
  public
    class function discoverySessionWithDeviceTypes_mediaType_position (deviceTypes: AVCaptureDeviceTypeProtocolPtr; mediaType: NSString; position: AVCaptureDevicePosition): instancetype; message 'discoverySessionWithDeviceTypes:mediaType:position:';
    function init: instancetype; message 'init';
    function devices: AVCaptureDevice *ProtocolPtr; message 'devices';
  end;

type
  AVFrameRateRange = objcclass external (NSObject)
  private
    _internal: AVFrameRateRangeInternal;
  public
    function minFrameRate: Float64; message 'minFrameRate';
    function maxFrameRate: Float64; message 'maxFrameRate';
    function maxFrameDuration: CMTime; message 'maxFrameDuration';
    function minFrameDuration: CMTime; message 'minFrameDuration';
  end;
{$endif}

{$ifdef TYPES}
type
  AVCaptureVideoStabilizationMode = NSInteger;
  AVCaptureVideoStabilizationModePtr = ^AVCaptureVideoStabilizationMode;

const
  AVCaptureVideoStabilizationModeOff = 0;
  AVCaptureVideoStabilizationModeStandard = 1;
  AVCaptureVideoStabilizationModeCinematic = 2;
  AVCaptureVideoStabilizationModeAuto = -1;

type
  AVCaptureAutoFocusSystem = NSInteger;
  AVCaptureAutoFocusSystemPtr = ^AVCaptureAutoFocusSystem;

const
  AVCaptureAutoFocusSystemNone = 0;
  AVCaptureAutoFocusSystemContrastDetection = 1;
  AVCaptureAutoFocusSystemPhaseDetection = 2;
{$endif}

{$ifdef CLASSES}

type
  AVCaptureDeviceFormat = objcclass external (NSObject)
  private
    _internal: AVCaptureDeviceFormatInternal;
  public
    function mediaType: NSString; message 'mediaType';
    function formatDescription: CMFormatDescriptionRef; message 'formatDescription';
    function videoSupportedFrameRateRanges: NSArray; message 'videoSupportedFrameRateRanges';
    {$if defined(TARGET_OS_IPHONE)}
    function videoFieldOfView: single; message 'videoFieldOfView';
    function isVideoBinned: boolean; message 'isVideoBinned';
    function isVideoStabilizationModeSupported (videoStabilizationMode: AVCaptureVideoStabilizationMode): boolean; message 'isVideoStabilizationModeSupported:'; { available in 8_0 }
    function isVideoStabilizationSupported: boolean; message 'isVideoStabilizationSupported';
    function videoMaxZoomFactor: CGFloat; message 'videoMaxZoomFactor';
    function videoZoomFactorUpscaleThreshold: CGFloat; message 'videoZoomFactorUpscaleThreshold';
    function minExposureDuration: CMTime; message 'minExposureDuration';
    function maxExposureDuration: CMTime; message 'maxExposureDuration';
    function minISO: single; message 'minISO';
    function maxISO: single; message 'maxISO';
    function isVideoHDRSupported: boolean; message 'isVideoHDRSupported';
    function highResolutionStillImageDimensions: CMVideoDimensions; message 'highResolutionStillImageDimensions';
    function autoFocusSystem: AVCaptureAutoFocusSystem; message 'autoFocusSystem';
    function supportedColorSpaces: NSNumber *ProtocolPtr; message 'supportedColorSpaces';
    {$endif}
  end;
{$endif}

{$if (defined(TARGET_OS_MAC) and not (defined(TARGET_OS_EMBEDDED) or defined(TARGET_OS_IPHONE)))}
{$ifdef CLASSES}

type
  AVCaptureDeviceInputSource = objcclass external (NSObject)
  private
    _internal: AVCaptureDeviceInputSourceInternal;
  public
    function inputSourceID: NSString; message 'inputSourceID';
    function localizedName: NSString; message 'localizedName';
  end;
{$endif}

{$endif}
