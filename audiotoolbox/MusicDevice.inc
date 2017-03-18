{ Parsed from AudioToolbox.framework MusicDevice.h }

{$ifndef AudioUnit_MusicDevice_h}

{$ifdef TYPES}
type
  MusicDeviceInstrumentID = UInt32;
  MusicDeviceInstrumentIDPtr = ^MusicDeviceInstrumentID;

type
  MusicDeviceStdNoteParams = record
    argCount: UInt32;
    mPitch: Float32;
    mVelocity: Float32;
  end;
type
  MusicDeviceStdNoteParamsPtr = ^MusicDeviceStdNoteParams;
type
  NoteParamsControlValue = record
    mID: AudioUnitParameterID;
    mValue: AudioUnitParameterValue;
  end;
type
  NoteParamsControlValuePtr = ^NoteParamsControlValue;
type
  MusicDeviceNoteParams = record
    argCount: UInt32;
    mPitch: Float32;
    mVelocity: Float32;
    mControls:array[0..0] of NoteParamsControlValue;
  end;
type
  MusicDeviceNoteParamsPtr = ^MusicDeviceNoteParams;

const
  kMusicNoteEvent_UseGroupInstrument = $FFFFFFFF;
  kMusicNoteEvent_Unused = $FFFFFFFF;

type
  MusicDeviceGroupID = UInt32;
  MusicDeviceGroupIDPtr = ^MusicDeviceGroupID;
  NoteInstanceID = UInt32;
  NoteInstanceIDPtr = ^NoteInstanceID;
  MusicDeviceComponent = AudioComponentInstance;
  MusicDeviceComponentPtr = ^MusicDeviceComponent;
{$endif}

{$ifdef FUNCTIONS}
function MusicDeviceMIDIEvent(inUnit: MusicDeviceComponent; inStatus: UInt32; inData1: UInt32; inData2: UInt32; inOffsetSampleFrame: UInt32): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_5_0 }
function MusicDeviceSysEx(inUnit: MusicDeviceComponent; inData: UInt8Ptr; inLength: UInt32): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_5_0 }
function MusicDeviceStartNote(inUnit: MusicDeviceComponent; inInstrument: MusicDeviceInstrumentID; inGroupID: MusicDeviceGroupID; var outNoteInstanceID: NoteInstanceID; inOffsetSampleFrame: UInt32; inParams: MusicDeviceNoteParamsPtr): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_5_0 }
function MusicDeviceStopNote(inUnit: MusicDeviceComponent; inGroupID: MusicDeviceGroupID; inNoteInstanceID: NoteInstanceID; inOffsetSampleFrame: UInt32): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_5_0 }
{$endif}

{$ifdef TYPES}
const
  kMusicDeviceRange = $0100;
  kMusicDeviceMIDIEventSelect = $0101;
  kMusicDeviceSysExSelect = $0102;
  kMusicDevicePrepareInstrumentSelect = $0103;
  kMusicDeviceReleaseInstrumentSelect = $0104;
  kMusicDeviceStartNoteSelect = $0105;
  kMusicDeviceStopNoteSelect = $0106;

type
  MusicDeviceMIDIEventProc = function (self_: pointer; inStatus: UInt32; inData1: UInt32; inData2: UInt32; inOffsetSampleFrame: UInt32): OSStatus; cdecl;
  MusicDeviceSysExProc = function (self_: pointer; inData: UInt8Ptr; inLength: UInt32): OSStatus; cdecl;
  MusicDeviceStartNoteProc = function (self_: pointer; inInstrument: MusicDeviceInstrumentID; inGroupID: MusicDeviceGroupID; var outNoteInstanceID: NoteInstanceID; inOffsetSampleFrame: UInt32; inParams: MusicDeviceNoteParamsPtr): OSStatus; cdecl;
  MusicDeviceStopNoteProc = function (self_: pointer; inGroupID: MusicDeviceGroupID; inNoteInstanceID: NoteInstanceID; inOffsetSampleFrame: UInt32): OSStatus; cdecl;
{$endif}

{$ifdef FUNCTIONS}
function MusicDevicePrepareInstrument(inUnit: MusicDeviceComponent; inInstrument: MusicDeviceInstrumentID): OSStatus; cdecl; external; deprecated 'in __MAC_10_0,__MAC_10_5, __IPHONE_NA, __IPHONE_NA';
function MusicDeviceReleaseInstrument(inUnit: MusicDeviceComponent; inInstrument: MusicDeviceInstrumentID): OSStatus; cdecl; external; deprecated 'in __MAC_10_0,__MAC_10_5, __IPHONE_NA, __IPHONE_NA';
{$endif}

{$endif}
