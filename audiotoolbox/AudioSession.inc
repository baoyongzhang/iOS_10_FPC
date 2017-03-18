{ Parsed from AudioToolbox.framework AudioSession.h }

{$if  not (defined(__AudioSession_h__))}

{$ifdef TYPES}
const
  kAudioSessionNoError = 0;
  kAudioSessionNotInitialized = '!ini';
  kAudioSessionAlreadyInitialized = 'init';
  kAudioSessionInitializationError = 'ini?';
  kAudioSessionUnsupportedPropertyError = 'pty?';
  kAudioSessionBadPropertySizeError = '!siz';
  kAudioSessionNotActiveError = '!act';
  kAudioServicesNoHardwareError = 'nohw';
  kAudioSessionNoCategorySet = '?cat';
  kAudioSessionIncompatibleCategory = '!cat';
  kAudioSessionUnspecifiedError = 'what';

type
  AudioSessionPropertyID = UInt32;
  AudioSessionPropertyIDPtr = ^AudioSessionPropertyID;

const
  kAudioSessionBeginInterruption = 1;
  kAudioSessionEndInterruption = 0;
const
  kAudioSessionCategory_AmbientSound = 'ambi';
  kAudioSessionCategory_SoloAmbientSound = 'solo';
  kAudioSessionCategory_MediaPlayback = 'medi';
  kAudioSessionCategory_RecordAudio = 'reca';
  kAudioSessionCategory_PlayAndRecord = 'plar';
  kAudioSessionCategory_AudioProcessing = 'proc';
const
  kAudioSessionOverrideAudioRoute_None = 0;
  kAudioSessionOverrideAudioRoute_Speaker = 'spkr';
const
  kAudioSessionRouteChangeReason_Unknown = 0;
  kAudioSessionRouteChangeReason_NewDeviceAvailable = 1;
  kAudioSessionRouteChangeReason_OldDeviceUnavailable = 2;
  kAudioSessionRouteChangeReason_CategoryChange = 3;
  kAudioSessionRouteChangeReason_Override = 4;
  kAudioSessionRouteChangeReason_WakeFromSleep = 6;
  kAudioSessionRouteChangeReason_NoSuitableRouteForCategory = 7;
  kAudioSessionRouteChangeReason_RouteConfigurationChange = 8;

const
  kAudioSession_AudioRouteChangeKey_Reason = 'OutputDeviceDidChange_Reason';
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kAudioSession_RouteChangeKey_Reason: CFStringRef deprecated 'in __MAC_NA,__MAC_NA,__IPHONE_5_0,__IPHONE_7_0'; cvar; external;
  kAudioSession_AudioRouteChangeKey_PreviousRouteDescription: CFStringRef deprecated 'in __MAC_NA,__MAC_NA,__IPHONE_5_0,__IPHONE_7_0'; cvar; external;
  kAudioSession_AudioRouteChangeKey_CurrentRouteDescription: CFStringRef deprecated 'in __MAC_NA,__MAC_NA,__IPHONE_5_0,__IPHONE_7_0'; cvar; external;
  kAudioSession_AudioRouteKey_Inputs: CFStringRef deprecated 'in __MAC_NA,__MAC_NA,__IPHONE_5_0,__IPHONE_7_0'; cvar; external;
  kAudioSession_AudioRouteKey_Outputs: CFStringRef deprecated 'in __MAC_NA,__MAC_NA,__IPHONE_5_0,__IPHONE_7_0'; cvar; external;
  kAudioSession_AudioRouteKey_Type: CFStringRef deprecated 'in __MAC_NA,__MAC_NA,__IPHONE_5_0,__IPHONE_7_0'; cvar; external;
  kAudioSessionInputRoute_LineIn: CFStringRef deprecated 'in __MAC_NA,__MAC_NA,__IPHONE_5_0,__IPHONE_7_0'; cvar; external;
  kAudioSessionInputRoute_BuiltInMic: CFStringRef deprecated 'in __MAC_NA,__MAC_NA,__IPHONE_5_0,__IPHONE_7_0'; cvar; external;
  kAudioSessionInputRoute_HeadsetMic: CFStringRef deprecated 'in __MAC_NA,__MAC_NA,__IPHONE_5_0,__IPHONE_7_0'; cvar; external;
  kAudioSessionInputRoute_BluetoothHFP: CFStringRef deprecated 'in __MAC_NA,__MAC_NA,__IPHONE_5_0,__IPHONE_7_0'; cvar; external;
  kAudioSessionInputRoute_USBAudio: CFStringRef deprecated 'in __MAC_NA,__MAC_NA,__IPHONE_5_0,__IPHONE_7_0'; cvar; external;
  kAudioSessionOutputRoute_LineOut: CFStringRef deprecated 'in __MAC_NA,__MAC_NA,__IPHONE_5_0,__IPHONE_7_0'; cvar; external;
  kAudioSessionOutputRoute_Headphones: CFStringRef deprecated 'in __MAC_NA,__MAC_NA,__IPHONE_5_0,__IPHONE_7_0'; cvar; external;
  kAudioSessionOutputRoute_BluetoothHFP: CFStringRef deprecated 'in __MAC_NA,__MAC_NA,__IPHONE_5_0,__IPHONE_7_0'; cvar; external;
  kAudioSessionOutputRoute_BluetoothA2DP: CFStringRef deprecated 'in __MAC_NA,__MAC_NA,__IPHONE_5_0,__IPHONE_7_0'; cvar; external;
  kAudioSessionOutputRoute_BuiltInReceiver: CFStringRef deprecated 'in __MAC_NA,__MAC_NA,__IPHONE_5_0,__IPHONE_7_0'; cvar; external;
  kAudioSessionOutputRoute_BuiltInSpeaker: CFStringRef deprecated 'in __MAC_NA,__MAC_NA,__IPHONE_5_0,__IPHONE_7_0'; cvar; external;
  kAudioSessionOutputRoute_USBAudio: CFStringRef deprecated 'in __MAC_NA,__MAC_NA,__IPHONE_5_0,__IPHONE_7_0'; cvar; external;
  kAudioSessionOutputRoute_HDMI: CFStringRef deprecated 'in __MAC_NA,__MAC_NA,__IPHONE_5_0,__IPHONE_7_0'; cvar; external;
  kAudioSessionOutputRoute_AirPlay: CFStringRef deprecated 'in __MAC_NA,__MAC_NA,__IPHONE_5_0,__IPHONE_7_0'; cvar; external;
  kAudioSession_InputSourceKey_ID: CFStringRef deprecated 'in __MAC_NA,__MAC_NA,__IPHONE_5_0,__IPHONE_7_0'; cvar; external;
  kAudioSession_InputSourceKey_Description: CFStringRef deprecated 'in __MAC_NA,__MAC_NA,__IPHONE_5_0,__IPHONE_7_0'; cvar; external;
  kAudioSession_OutputDestinationKey_ID: CFStringRef deprecated 'in __MAC_NA,__MAC_NA,__IPHONE_5_0,__IPHONE_7_0'; cvar; external;
  kAudioSession_OutputDestinationKey_Description: CFStringRef deprecated 'in __MAC_NA,__MAC_NA,__IPHONE_5_0,__IPHONE_7_0'; cvar; external;
{$endif}

{$ifdef TYPES}
const
  kAudioSessionInterruptionType_ShouldResume = 'irsm';
  kAudioSessionInterruptionType_ShouldNotResume = '!rsm';

type
  AudioSessionInterruptionType = UInt32;
  AudioSessionInterruptionTypePtr = ^AudioSessionInterruptionType;

const
  kAudioSessionMode_Default = 'dflt';
  kAudioSessionMode_VoiceChat = 'vcct';
  kAudioSessionMode_VideoRecording = 'vrcd';
  kAudioSessionMode_Measurement = 'msmt';
  kAudioSessionMode_GameChat = 'gmct';
const
  kAudioSessionProperty_PreferredHardwareSampleRate = 'hwsr';
  kAudioSessionProperty_PreferredHardwareIOBufferDuration = 'iobd';
  kAudioSessionProperty_AudioCategory = 'acat';
  kAudioSessionProperty_AudioRouteChange = 'roch';
  kAudioSessionProperty_CurrentHardwareSampleRate = 'chsr';
  kAudioSessionProperty_CurrentHardwareInputNumberChannels = 'chic';
  kAudioSessionProperty_CurrentHardwareOutputNumberChannels = 'choc';
  kAudioSessionProperty_CurrentHardwareOutputVolume = 'chov';
  kAudioSessionProperty_CurrentHardwareInputLatency = 'cilt';
  kAudioSessionProperty_CurrentHardwareOutputLatency = 'colt';
  kAudioSessionProperty_CurrentHardwareIOBufferDuration = 'chbd';
  kAudioSessionProperty_OtherAudioIsPlaying = 'othr';
  kAudioSessionProperty_OverrideAudioRoute = 'ovrd';
  kAudioSessionProperty_AudioInputAvailable = 'aiav';
  kAudioSessionProperty_ServerDied = 'died';
  kAudioSessionProperty_OtherMixableAudioShouldDuck = 'duck';
  kAudioSessionProperty_OverrideCategoryMixWithOthers = 'cmix';
  kAudioSessionProperty_OverrideCategoryDefaultToSpeaker = 'cspk';
  kAudioSessionProperty_OverrideCategoryEnableBluetoothInput = 'cblu';
  kAudioSessionProperty_InterruptionType = 'type';
  kAudioSessionProperty_Mode = 'mode';
  kAudioSessionProperty_InputSources = 'srcs';
  kAudioSessionProperty_OutputDestinations = 'dsts';
  kAudioSessionProperty_InputSource = 'isrc';
  kAudioSessionProperty_OutputDestination = 'odst';
  kAudioSessionProperty_InputGainAvailable = 'igav';
  kAudioSessionProperty_InputGainScalar = 'igsc';
  kAudioSessionProperty_AudioRouteDescription = 'crar';

type
  AudioSessionInterruptionListener = procedure (inClientData: pointer; inInterruptionState: UInt32); cdecl;
  AudioSessionPropertyListener = procedure (inClientData: pointer; inID: AudioSessionPropertyID; inDataSize: UInt32; inData: pointer); cdecl;
{$endif}

{$ifdef FUNCTIONS}
function AudioSessionInitialize(inRunLoop: CFRunLoopRef; inRunLoopMode: CFStringRef; inInterruptionListener: AudioSessionInterruptionListener; inClientData: pointer): OSStatus; cdecl; external; deprecated 'in __MAC_NA,__MAC_NA,__IPHONE_2_0,__IPHONE_7_0';
function AudioSessionSetActive(active: Boolean): OSStatus; cdecl; external; deprecated 'in __MAC_NA,__MAC_NA,__IPHONE_2_0,__IPHONE_7_0';
{$endif}

{$ifdef TYPES}
const
  kAudioSessionSetActiveFlag_NotifyOthersOnDeactivation = 1 shl 0;
{$endif}

{$ifdef FUNCTIONS}
function AudioSessionSetActiveWithFlags(active: Boolean; inFlags: UInt32): OSStatus; cdecl; external; deprecated 'in __MAC_NA,__MAC_NA,__IPHONE_4_0,__IPHONE_7_0';
function AudioSessionGetProperty(inID: AudioSessionPropertyID; ioDataSize: UInt32Ptr; outData: pointer): OSStatus; cdecl; external; deprecated 'in __MAC_NA,__MAC_NA,__IPHONE_2_0,__IPHONE_7_0';
function AudioSessionSetProperty(inID: AudioSessionPropertyID; inDataSize: UInt32; inData: pointer): OSStatus; cdecl; external; deprecated 'in __MAC_NA,__MAC_NA,__IPHONE_2_0,__IPHONE_7_0';
function AudioSessionGetPropertySize(inID: AudioSessionPropertyID; outDataSize: UInt32Ptr): OSStatus; cdecl; external; deprecated 'in __MAC_NA,__MAC_NA,__IPHONE_2_0,__IPHONE_7_0';
function AudioSessionAddPropertyListener(inID: AudioSessionPropertyID; inProc: AudioSessionPropertyListener; inClientData: pointer): OSStatus; cdecl; external; deprecated 'in __MAC_NA,__MAC_NA,__IPHONE_2_0,__IPHONE_7_0';
function AudioSessionRemovePropertyListener(inID: AudioSessionPropertyID): OSStatus; cdecl; external; deprecated 'in __MAC_NA,__MAC_NA,__IPHONE_2_0,__IPHONE_2_0';
function AudioSessionRemovePropertyListenerWithUserData(inID: AudioSessionPropertyID; inProc: AudioSessionPropertyListener; inClientData: pointer): OSStatus; cdecl; external; deprecated 'in __MAC_NA,__MAC_NA,__IPHONE_2_1,__IPHONE_7_0';
{$endif}

{$ifdef TYPES}
const
  kAudioSessionCategory_UserInterfaceSoundEffects = 'uifx';
  kAudioSessionCategory_LiveAudio = 'live';
const
  kAudioSessionProperty_AudioRoute = 'rout';

const
  kAudioSession_AudioRouteChangeKey_OldRoute = 'OutputDeviceDidChange_OldRoute';
{$endif}

{$endif}
