{ Parsed from GameKit.framework GKVoiceChatService.h }

{$ifdef TYPES}
type
  GKVoiceChatServicePtr = ^GKVoiceChatService;
{$endif}

{$ifdef CLASSES}

type
  GKVoiceChatService = objcclass external (NSObject)
  private
    _voiceChatService: id;
  public
    class function defaultVoiceChatService: GKVoiceChatService; message 'defaultVoiceChatService';
    class function isVoIPAllowed: boolean; message 'isVoIPAllowed';
    procedure setClient(newValue: GKVoiceChatClientProtocol); message 'setClient:';
    function client: GKVoiceChatClientProtocol; message 'client';
    function startVoiceChatWithParticipantID_error (participantID: NSString; error: NSErrorPtr): boolean; message 'startVoiceChatWithParticipantID:error:';
    procedure stopVoiceChatWithParticipantID (participantID: NSString); message 'stopVoiceChatWithParticipantID:';
    function acceptCallID_error (callID: NSInteger; error: NSErrorPtr): boolean; message 'acceptCallID:error:';
    procedure denyCallID (callID: NSInteger); message 'denyCallID:';
    procedure receivedRealTimeData_fromParticipantID (audio: NSData; participantID: NSString); message 'receivedRealTimeData:fromParticipantID:';
    procedure receivedData_fromParticipantID (arbitraryData: NSData; participantID: NSString); message 'receivedData:fromParticipantID:';
    procedure setMicrophoneMuted(newValue: boolean); message 'setMicrophoneMuted:';
    function isMicrophoneMuted: boolean; message 'isMicrophoneMuted';
    procedure setRemoteParticipantVolume(newValue: single); message 'setRemoteParticipantVolume:';
    function remoteParticipantVolume: single; message 'remoteParticipantVolume';
    procedure setOutputMeteringEnabled(newValue: boolean); message 'setOutputMeteringEnabled:';
    function isOutputMeteringEnabled: boolean; message 'isOutputMeteringEnabled';
    procedure setInputMeteringEnabled(newValue: boolean); message 'setInputMeteringEnabled:';
    function isInputMeteringEnabled: boolean; message 'isInputMeteringEnabled';
    function outputMeterLevel: single; message 'outputMeterLevel';
    function inputMeterLevel: single; message 'inputMeterLevel';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  GKVoiceChatServiceErrorDomain: NSString; cvar; external;
{$endif}

