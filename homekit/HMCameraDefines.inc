{ Parsed from HomeKit.framework HMCameraDefines.h }
{$ifdef TYPES}
type
  HMCameraStreamState = NSUInteger;
  HMCameraStreamStatePtr = ^HMCameraStreamState;

const
  HMCameraStreamStateStarting = 1;
  HMCameraStreamStateStreaming = 2;
  HMCameraStreamStateStopping = 3;
  HMCameraStreamStateNotStreaming = 4;

type
  HMCameraAudioStreamSetting = NSUInteger;
  HMCameraAudioStreamSettingPtr = ^HMCameraAudioStreamSetting;

const
  HMCameraAudioStreamSettingMuted = 1;
  HMCameraAudioStreamSettingIncomingAudioAllowed = 2;
  HMCameraAudioStreamSettingBidirectionalAudioAllowed = 3;
{$endif}

