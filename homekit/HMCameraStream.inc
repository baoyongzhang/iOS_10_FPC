{ Parsed from HomeKit.framework HMCameraStream.h }

{$ifdef TYPES}
type
  HMCameraStreamPtr = ^HMCameraStream;
{$endif}

{$ifdef CLASSES}

type
  HMCameraStream = objcclass external (HMCameraSource)
  public
    function __TVOS_PROHIBITED_: HMCameraAudioStreamSetting audioStreamSetting; message 'TVOS_PROHIBITED';
    procedure setAudioStreamSetting (audioStreamSetting: HMCameraAudioStreamSetting); message 'setAudioStreamSetting:'; deprecated 'in "updateAudioStreamSetting:completionHandler:", ios(10.0, 10.0';
    procedure updateAudioStreamSetting_completionHandler (audioStreamSetting: HMCameraAudioStreamSetting; completion: OpaqueCBlock); message 'updateAudioStreamSetting:completionHandler:';
  end;
{$endif}

