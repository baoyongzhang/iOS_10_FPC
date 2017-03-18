{ Parsed from HomeKit.framework HMCameraProfile.h }

{$ifdef TYPES}
type
  HMCameraProfilePtr = ^HMCameraProfile;
{$endif}

{$ifdef CLASSES}

type
  HMCameraProfile = objcclass external (HMAccessoryProfile)
  public
    function init: instancetype; message 'init';
    function streamControl: HMCameraStreamControl; message 'streamControl';
    function snapshotControl: HMCameraSnapshotControl; message 'snapshotControl';
    function settingsControl: HMCameraSettingsControl; message 'settingsControl';
    function speakerControl: HMCameraAudioControl; message 'speakerControl';
    function microphoneControl: HMCameraAudioControl; message 'microphoneControl';
  end;
{$endif}

