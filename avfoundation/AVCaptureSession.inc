{ Parsed from AVFoundation.framework AVCaptureSession.h }

{ Types from AVCaptureSession }
{$ifdef TYPES}

{$endif}


{ Types from AVCaptureConnection }
{$ifdef TYPES}


{$endif}


{ Types from AVCaptureAudioChannel }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  AVCaptureSessionPtr = ^AVCaptureSession;
  AVCaptureConnectionPtr = ^AVCaptureConnection;
  AVCaptureAudioChannelPtr = ^AVCaptureAudioChannel;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  __TVOS_PROHIBITED: NSString *AVCaptureSessionRuntimeErrorNotification { available in 10_7, 4_0 }; cvar; external;
  __TVOS_PROHIBITED: NSString *AVCaptureSessionErrorKey { available in 10_7, 4_0 }; cvar; external;
  __TVOS_PROHIBITED: NSString *AVCaptureSessionDidStartRunningNotification { available in 10_7, 4_0 }; cvar; external;
  __TVOS_PROHIBITED: NSString *AVCaptureSessionDidStopRunningNotification { available in 10_7, 4_0 }; cvar; external;
{$endif}

{$if defined(TARGET_OS_IPHONE)}
{$ifdef EXTERNAL_SYMBOLS}
var
  __TVOS_PROHIBITED: NSString *AVCaptureSessionWasInterruptedNotification { available in 4_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  AVCaptureSessionInterruptionReason = NSInteger;
  AVCaptureSessionInterruptionReasonPtr = ^AVCaptureSessionInterruptionReason;

const
  AVCaptureSessionInterruptionReasonVideoDeviceNotAvailableInBackground = 1;
  AVCaptureSessionInterruptionReasonAudioDeviceInUseByAnotherClient = 2;
  AVCaptureSessionInterruptionReasonVideoDeviceInUseByAnotherClient = 3;
  AVCaptureSessionInterruptionReasonVideoDeviceNotAvailableWithMultipleForegroundApps = 4;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  __TVOS_PROHIBITED: NSString *AVCaptureSessionInterruptionReasonKey { available in 9_0 }; cvar; external;
  __TVOS_PROHIBITED: NSString *AVCaptureSessionInterruptionEndedNotification { available in 4_0 }; cvar; external;
{$endif}

{$endif}
{$ifdef TYPES}
type
  AVCaptureVideoOrientation = NSInteger;
  AVCaptureVideoOrientationPtr = ^AVCaptureVideoOrientation;

const
  AVCaptureVideoOrientationPortrait = 1;
  AVCaptureVideoOrientationPortraitUpsideDown = 2;
  AVCaptureVideoOrientationLandscapeRight = 3;
  AVCaptureVideoOrientationLandscapeLeft = 4;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  __TVOS_PROHIBITED: NSString *AVCaptureSessionPresetPhoto { available in 10_7, 4_0 }; cvar; external;
  __TVOS_PROHIBITED: NSString *AVCaptureSessionPresetHigh { available in 10_7, 4_0 }; cvar; external;
  __TVOS_PROHIBITED: NSString *AVCaptureSessionPresetMedium { available in 10_7, 4_0 }; cvar; external;
  __TVOS_PROHIBITED: NSString *AVCaptureSessionPresetLow { available in 10_7, 4_0 }; cvar; external;
{$endif}

{$if (defined(TARGET_OS_MAC) and not (defined(TARGET_OS_EMBEDDED) or defined(TARGET_OS_IPHONE)))}
{$ifdef EXTERNAL_SYMBOLS}
var
  __TVOS_PROHIBITED: NSString *AVCaptureSessionPreset320x240 { available in 10_7, NA }; cvar; external;
{$endif}

{$endif}
{$ifdef EXTERNAL_SYMBOLS}
var
  __TVOS_PROHIBITED: NSString *AVCaptureSessionPreset352x288 { available in 10_7, 5_0 }; cvar; external;
  __TVOS_PROHIBITED: NSString *AVCaptureSessionPreset640x480 { available in 10_7, 4_0 }; cvar; external;
{$endif}

{$if (defined(TARGET_OS_MAC) and not (defined(TARGET_OS_EMBEDDED) or defined(TARGET_OS_IPHONE)))}
{$ifdef EXTERNAL_SYMBOLS}
var
  __TVOS_PROHIBITED: NSString *AVCaptureSessionPreset960x540 { available in 10_7, NA }; cvar; external;
{$endif}

{$endif}
{$ifdef EXTERNAL_SYMBOLS}
var
  __TVOS_PROHIBITED: NSString *AVCaptureSessionPreset1280x720 { available in 10_7, 4_0 }; cvar; external;
{$endif}

{$if defined(TARGET_OS_IPHONE)}
{$ifdef EXTERNAL_SYMBOLS}
var
  __TVOS_PROHIBITED: NSString *AVCaptureSessionPreset1920x1080 { available in NA, 5_0 }; cvar; external;
  __TVOS_PROHIBITED: NSString *AVCaptureSessionPreset3840x2160 { available in NA, 9_0 }; cvar; external;
{$endif}

{$endif}
{$ifdef EXTERNAL_SYMBOLS}
var
  __TVOS_PROHIBITED: NSString *AVCaptureSessionPresetiFrame960x540 { available in 10_9, 5_0 }; cvar; external;
  __TVOS_PROHIBITED: NSString *AVCaptureSessionPresetiFrame1280x720 { available in 10_9, 5_0 }; cvar; external;
  __TVOS_PROHIBITED: NSString *AVCaptureSessionPresetInputPriority { available in NA, 7_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  AVCaptureSession = objcclass external (NSObject)
  private
    _internal: AVCaptureSessionInternal;
  public
    function canSetSessionPreset (preset: NSString): boolean; message 'canSetSessionPreset:';
    procedure setSessionPreset(newValue: NSString); message 'setSessionPreset:';
    function sessionPreset: NSString; message 'sessionPreset';
    function inputs: NSArray; message 'inputs';
    function canAddInput (input: AVCaptureInput): boolean; message 'canAddInput:';
    procedure addInput (input: AVCaptureInput); message 'addInput:';
    procedure removeInput (input: AVCaptureInput); message 'removeInput:';
    function outputs: NSArray; message 'outputs';
    function canAddOutput (output: AVCaptureOutput): boolean; message 'canAddOutput:';
    procedure addOutput (output: AVCaptureOutput); message 'addOutput:';
    procedure removeOutput (output: AVCaptureOutput); message 'removeOutput:';
    procedure addInputWithNoConnections (input: AVCaptureInput); message 'addInputWithNoConnections:'; { available in 10_7, 8_0 }
    procedure addOutputWithNoConnections (output: AVCaptureOutput); message 'addOutputWithNoConnections:'; { available in 10_7, 8_0 }
    function canAddConnection (connection: AVCaptureConnection): boolean; message 'canAddConnection:'; { available in 10_7, 8_0 }
    procedure addConnection (connection: AVCaptureConnection); message 'addConnection:'; { available in 10_7, 8_0 }
    procedure removeConnection (connection: AVCaptureConnection); message 'removeConnection:'; { available in 10_7, 8_0 }
    procedure beginConfiguration; message 'beginConfiguration';
    procedure commitConfiguration; message 'commitConfiguration';
    function isRunning: boolean; message 'isRunning';
    {$if defined(TARGET_OS_IPHONE)}
    function isInterrupted: boolean; message 'isInterrupted';
    procedure setUsesApplicationAudioSession(newValue: boolean); message 'setUsesApplicationAudioSession:';
    function usesApplicationAudioSession: boolean; message 'usesApplicationAudioSession';
    procedure setAutomaticallyConfiguresApplicationAudioSession(newValue: boolean); message 'setAutomaticallyConfiguresApplicationAudioSession:';
    function automaticallyConfiguresApplicationAudioSession: boolean; message 'automaticallyConfiguresApplicationAudioSession';
    procedure setAutomaticallyConfiguresCaptureDeviceForWideColor(newValue: boolean); message 'setAutomaticallyConfiguresCaptureDeviceForWideColor:';
    function automaticallyConfiguresCaptureDeviceForWideColor: boolean; message 'automaticallyConfiguresCaptureDeviceForWideColor';
    {$endif}
    procedure startRunning; message 'startRunning';
    procedure stopRunning; message 'stopRunning';
    function masterClock: CMClockRef; message 'masterClock';
  end;
{$endif}

{$ifdef TYPES}
type
  AVVideoFieldMode = NSInteger;
  AVVideoFieldModePtr = ^AVVideoFieldMode;

const
  AVVideoFieldModeBoth = 0;
  AVVideoFieldModeTopOnly = 1;
  AVVideoFieldModeBottomOnly = 2;
  AVVideoFieldModeDeinterlace = 3;
{$endif}

{$ifdef CLASSES}

type
  AVCaptureConnection = objcclass external (NSObject)
  private
    _internal: AVCaptureConnectionInternal;
  public
    class function connectionWithInputPorts_output (ports: NSArray; output: AVCaptureOutput): instancetype; message 'connectionWithInputPorts:output:'; { available in 10_7, 8_0 }
    class function connectionWithInputPort_videoPreviewLayer (port: AVCaptureInputPort; layer: AVCaptureVideoPreviewLayer): instancetype; message 'connectionWithInputPort:videoPreviewLayer:'; { available in 10_7, 8_0 }
    function initWithInputPorts_output (ports: NSArray; output: AVCaptureOutput): instancetype; message 'initWithInputPorts:output:'; { available in 10_7, 8_0 }
    function initWithInputPort_videoPreviewLayer (port: AVCaptureInputPort; layer: AVCaptureVideoPreviewLayer): instancetype; message 'initWithInputPort:videoPreviewLayer:'; { available in 10_7, 8_0 }
    function inputPorts: NSArray; message 'inputPorts';
    function output: AVCaptureOutput; message 'output';
    function videoPreviewLayer: AVCaptureVideoPreviewLayer; message 'videoPreviewLayer';
    procedure setEnabled(newValue: boolean); message 'setEnabled:';
    function isEnabled: boolean; message 'isEnabled';
    function isActive: boolean; message 'isActive';
    function audioChannels: NSArray; message 'audioChannels';
    function isVideoMirroringSupported: boolean; message 'isVideoMirroringSupported';
    procedure setVideoMirrored(newValue: boolean); message 'setVideoMirrored:';
    function isVideoMirrored: boolean; message 'isVideoMirrored';
    procedure setAutomaticallyAdjustsVideoMirroring(newValue: boolean); message 'setAutomaticallyAdjustsVideoMirroring:';
    function automaticallyAdjustsVideoMirroring: boolean; message 'automaticallyAdjustsVideoMirroring';
    function isVideoOrientationSupported: boolean; message 'isVideoOrientationSupported';
    procedure setVideoOrientation(newValue: AVCaptureVideoOrientation); message 'setVideoOrientation:';
    function videoOrientation: AVCaptureVideoOrientation; message 'videoOrientation';
    {$if (defined(TARGET_OS_MAC) and not (defined(TARGET_OS_EMBEDDED) or defined(TARGET_OS_IPHONE)))}
    function isVideoFieldModeSupported: boolean; message 'isVideoFieldModeSupported';
    procedure setVideoFieldMode(newValue: AVVideoFieldMode); message 'setVideoFieldMode:';
    function videoFieldMode: AVVideoFieldMode; message 'videoFieldMode';
    {$endif}
    function isVideoMinFrameDurationSupported: boolean; message 'isVideoMinFrameDurationSupported';
    procedure setVideoMinFrameDuration(newValue: CMTime); message 'setVideoMinFrameDuration:';
    function videoMinFrameDuration: CMTime; message 'videoMinFrameDuration';
    function isVideoMaxFrameDurationSupported: boolean; message 'isVideoMaxFrameDurationSupported';
    procedure setVideoMaxFrameDuration(newValue: CMTime); message 'setVideoMaxFrameDuration:';
    function videoMaxFrameDuration: CMTime; message 'videoMaxFrameDuration';
    {$if defined(TARGET_OS_IPHONE)}
    function videoMaxScaleAndCropFactor: CGFloat; message 'videoMaxScaleAndCropFactor';
    procedure setVideoScaleAndCropFactor(newValue: CGFloat); message 'setVideoScaleAndCropFactor:';
    function videoScaleAndCropFactor: CGFloat; message 'videoScaleAndCropFactor';
    procedure setPreferredVideoStabilizationMode(newValue: AVCaptureVideoStabilizationMode); message 'setPreferredVideoStabilizationMode:';
    function preferredVideoStabilizationMode: AVCaptureVideoStabilizationMode; message 'preferredVideoStabilizationMode';
    function activeVideoStabilizationMode: AVCaptureVideoStabilizationMode; message 'activeVideoStabilizationMode';
    function isVideoStabilizationSupported: boolean; message 'isVideoStabilizationSupported';
    function isVideoStabilizationEnabled: boolean; message 'isVideoStabilizationEnabled';
    procedure setEnablesVideoStabilizationWhenAvailable(newValue: boolean); message 'setEnablesVideoStabilizationWhenAvailable:';
    function enablesVideoStabilizationWhenAvailable: boolean; message 'enablesVideoStabilizationWhenAvailable';
    {$endif}
  end;

type
  AVCaptureAudioChannel = objcclass external (NSObject)
  private
    _internal: AVCaptureAudioChannelInternal;
  public
    function averagePowerLevel: single; message 'averagePowerLevel';
    function peakHoldLevel: single; message 'peakHoldLevel';
    {$if (defined(TARGET_OS_MAC) and not (defined(TARGET_OS_EMBEDDED) or defined(TARGET_OS_IPHONE)))}
    procedure setVolume(newValue: single); message 'setVolume:';
    function volume: single; message 'volume';
    procedure setEnabled(newValue: boolean); message 'setEnabled:';
    function isEnabled: boolean; message 'isEnabled';
    {$endif}
  end;
{$endif}

