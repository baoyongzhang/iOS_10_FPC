{ Parsed from AudioToolbox.framework MusicPlayer.h }

{$ifndef AudioToolbox_MusicPlayer_h}

{$if defined(__NULL_MACRO__)}

{$else}
{$ifdef TYPES}
type
  MIDIEndpointRef = UInt32;
  MIDIEndpointRefPtr = ^MIDIEndpointRef;
{$endif}

{$endif}

{$ifdef TYPES}
type
  MusicEventType = UInt32;
  MusicEventTypePtr = ^MusicEventType;
  MusicSequenceLoadFlags = UInt32;
  MusicSequenceLoadFlagsPtr = ^MusicSequenceLoadFlags;

const
  kMusicSequenceLoadSMF_PreserveTracks = 0;
  kMusicSequenceLoadSMF_ChannelsToTracks = 1 shl 0;

type
  MusicSequenceType = UInt32;
  MusicSequenceTypePtr = ^MusicSequenceType;

const
  kMusicSequenceType_Beats = 'beat';
  kMusicSequenceType_Seconds = 'secs';
  kMusicSequenceType_Samples = 'samp';

type
  MusicSequenceFileTypeID = UInt32;
  MusicSequenceFileTypeIDPtr = ^MusicSequenceFileTypeID;

const
  kMusicSequenceFile_AnyType = 0;
  kMusicSequenceFile_MIDIType = 'midi';
  kMusicSequenceFile_iMelodyType = 'imel';

type
  MusicSequenceFileFlags = UInt32;
  MusicSequenceFileFlagsPtr = ^MusicSequenceFileFlags;

const
  kMusicSequenceFileFlags_Default = 0;
  kMusicSequenceFileFlags_EraseFile = 1;

type
  MusicTimeStamp = Float64;
  MusicTimeStampPtr = ^MusicTimeStamp;

const
  kMusicTimeStamp_EndOfTrack = DBL_MAX;

type
  MIDINoteMessage = record
    channel: UInt8;
    note: UInt8;
    velocity: UInt8;
    releaseVelocity: UInt8;
    duration: Float32;
  end;
type
  MIDINoteMessagePtr = ^MIDINoteMessage;
type
  MIDIChannelMessage = record
    status: UInt8;
    data1: UInt8;
    data2: UInt8;
    reserved: UInt8;
  end;
type
  MIDIChannelMessagePtr = ^MIDIChannelMessage;
type
  MIDIRawData = record
    length: UInt32;
    data:array[0..0] of UInt8;
  end;
type
  MIDIRawDataPtr = ^MIDIRawData;
type
  MIDIMetaEvent = record
    metaEventType: UInt8;
    unused1: UInt8;
    unused2: UInt8;
    unused3: UInt8;
    dataLength: UInt32;
    data:array[0..0] of UInt8;
  end;
type
  MIDIMetaEventPtr = ^MIDIMetaEvent;
type
  MusicEventUserData = record
    length: UInt32;
    data:array[0..0] of UInt8;
  end;
type
  MusicEventUserDataPtr = ^MusicEventUserData;
type
  ExtendedNoteOnEvent = record
    instrumentID: MusicDeviceInstrumentID;
    groupID: MusicDeviceGroupID;
    duration: Float32;
    extendedParams: MusicDeviceNoteParams;
  end;
type
  ExtendedNoteOnEventPtr = ^ExtendedNoteOnEvent;
type
  ParameterEvent = record
    parameterID: AudioUnitParameterID;
    scope: AudioUnitScope;
    element: AudioUnitElement;
    value: AudioUnitParameterValue;
  end;
type
  ParameterEventPtr = ^ParameterEvent;
type
  ExtendedTempoEvent = record
    bpm: Float64;
  end;
type
  ExtendedTempoEventPtr = ^ExtendedTempoEvent;
type
  AUPresetEvent = record
    scope: AudioUnitScope;
    element: AudioUnitElement;
    preset: CFPropertyListRef;
  end;
type
  AUPresetEventPtr = ^AUPresetEvent;
{$endif}

{$if defined(TARGET_OS_IPHONE)}
{$ifdef TYPES}
type
  CABarBeatTime = record
    bar: SInt32;
    beat: UInt16;
    subbeat: UInt16;
    subbeatDivisor: UInt16;
    reserved: UInt16;
  end;
type
  CABarBeatTimePtr = ^CABarBeatTime;
{$endif}

{$else}
{$endif}
{$ifdef TYPES}
type
  MusicPlayer = OpaqueType;
  MusicSequence = OpaqueType;
  MusicTrack = OpaqueType;
  MusicEventIterator = OpaqueType;
  MusicSequenceUserCallback = procedure (inClientData: void* __nullable; inSequence: MusicSequence; inTrack: MusicTrack; inEventTime: MusicTimeStamp; inEventData: MusicEventUserDataPtr; inStartSliceBeat: MusicTimeStamp; inEndSliceBeat: MusicTimeStamp); cdecl;

type
  MusicTrackLoopInfo = record
    loopDuration: MusicTimeStamp;
    numberOfLoops: SInt32;
  end;
type
  MusicTrackLoopInfoPtr = ^MusicTrackLoopInfo;
{$endif}

{$ifdef FUNCTIONS}
function NewMusicPlayer(outPlayer: MusicPlayer __nullable* __nonnull): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_5_0 }
function DisposeMusicPlayer(inPlayer: MusicPlayer): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_5_0 }
function MusicPlayerSetSequence(inPlayer: MusicPlayer; inSequence: MusicSequence __nullable): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_5_0 }
function MusicPlayerGetSequence(inPlayer: MusicPlayer; outSequence: MusicSequence __nullable* __nonnull): OSStatus; cdecl; external; { available starting in __MAC_10_3,__IPHONE_5_0 }
function MusicPlayerSetTime(inPlayer: MusicPlayer; inTime: MusicTimeStamp): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_5_0 }
function MusicPlayerGetTime(inPlayer: MusicPlayer; outTime: MusicTimeStampPtr): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_5_0 }
function MusicPlayerGetHostTimeForBeats(inPlayer: MusicPlayer; inBeats: MusicTimeStamp; outHostTime: UInt64Ptr): OSStatus; cdecl; external; { available starting in __MAC_10_2,__IPHONE_5_0 }
function MusicPlayerGetBeatsForHostTime(inPlayer: MusicPlayer; inHostTime: UInt64; outBeats: MusicTimeStampPtr): OSStatus; cdecl; external; { available starting in __MAC_10_2,__IPHONE_5_0 }
function MusicPlayerPreroll(inPlayer: MusicPlayer): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_5_0 }
function MusicPlayerStart(inPlayer: MusicPlayer): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_5_0 }
function MusicPlayerStop(inPlayer: MusicPlayer): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_5_0 }
function MusicPlayerIsPlaying(inPlayer: MusicPlayer; outIsPlaying: pboolean): OSStatus; cdecl; external; { available starting in __MAC_10_2,__IPHONE_5_0 }
function MusicPlayerSetPlayRateScalar(inPlayer: MusicPlayer; inScaleRate: Float64): OSStatus; cdecl; external; { available starting in __MAC_10_3,__IPHONE_5_0 }
function MusicPlayerGetPlayRateScalar(inPlayer: MusicPlayer; outScaleRate: Float64Ptr): OSStatus; cdecl; external; { available starting in __MAC_10_3,__IPHONE_5_0 }
function NewMusicSequence(outSequence: MusicSequence __nullable* __nonnull): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_5_0 }
function DisposeMusicSequence(inSequence: MusicSequence): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_5_0 }
function MusicSequenceNewTrack(inSequence: MusicSequence; outTrack: MusicTrack __nullable* __nonnull): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_5_0 }
function MusicSequenceDisposeTrack(inSequence: MusicSequence; inTrack: MusicTrack): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_5_0 }
function MusicSequenceGetTrackCount(inSequence: MusicSequence; outNumberOfTracks: UInt32Ptr): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_5_0 }
function MusicSequenceGetIndTrack(inSequence: MusicSequence; inTrackIndex: UInt32; outTrack: MusicTrack __nullable* __nonnull): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_5_0 }
function MusicSequenceGetTrackIndex(inSequence: MusicSequence; inTrack: MusicTrack; outTrackIndex: UInt32Ptr): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_5_0 }
function MusicSequenceGetTempoTrack(inSequence: MusicSequence; outTrack: MusicTrack __nullable* __nonnull): OSStatus; cdecl; external; { available starting in __MAC_10_1,__IPHONE_5_0 }
function MusicSequenceSetAUGraph(inSequence: MusicSequence; inGraph: AUGraph __nullable): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_5_0 }
function MusicSequenceGetAUGraph(inSequence: MusicSequence; outGraph: AUGraph __nullable* __nonnull): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_5_0 }
function MusicSequenceSetSequenceType(inSequence: MusicSequence; inType: MusicSequenceType): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_5_0 }
function MusicSequenceGetSequenceType(inSequence: MusicSequence; outType: MusicSequenceTypePtr): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_5_0 }
function MusicSequenceFileLoad(inSequence: MusicSequence; inFileRef: CFURLRef; inFileTypeHint: MusicSequenceFileTypeID; inFlags: MusicSequenceLoadFlags): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_5_0 }
function MusicSequenceFileLoadData(inSequence: MusicSequence; inData: CFDataRef; inFileTypeHint: MusicSequenceFileTypeID; inFlags: MusicSequenceLoadFlags): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_5_0 }
function MusicSequenceFileCreate(inSequence: MusicSequence; inFileRef: CFURLRef; inFileType: MusicSequenceFileTypeID; inFlags: MusicSequenceFileFlags; inResolution: SInt16): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_5_0 }
function MusicSequenceFileCreateData(inSequence: MusicSequence; inFileType: MusicSequenceFileTypeID; inFlags: MusicSequenceFileFlags; inResolution: SInt16; outData: CFDataRef __nullable* __nonnull): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_5_0 }
function MusicSequenceReverse(inSequence: MusicSequence): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_5_0 }
function MusicSequenceGetSecondsForBeats(inSequence: MusicSequence; inBeats: MusicTimeStamp; outSeconds: Float64Ptr): OSStatus; cdecl; external; { available starting in __MAC_10_2,__IPHONE_5_0 }
function MusicSequenceGetBeatsForSeconds(inSequence: MusicSequence; inSeconds: Float64; outBeats: MusicTimeStampPtr): OSStatus; cdecl; external; { available starting in __MAC_10_2,__IPHONE_5_0 }
function MusicSequenceSetUserCallback(inSequence: MusicSequence; inCallback: MusicSequenceUserCallback __nullable; inClientData: void* __nullable): OSStatus; cdecl; external; { available starting in __MAC_10_3,__IPHONE_5_0 }
function MusicSequenceBeatsToBarBeatTime(inSequence: MusicSequence; inBeats: MusicTimeStamp; inSubbeatDivisor: UInt32; outBarBeatTime: CABarBeatTimePtr): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_5_0 }
function MusicSequenceBarBeatTimeToBeats(inSequence: MusicSequence; inBarBeatTime: CABarBeatTimePtr; outBeats: MusicTimeStampPtr): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_5_0 }
function MusicSequenceGetInfoDictionary(inSequence: MusicSequence): CFDictionaryRef; cdecl; external; { available starting in __MAC_10_5,__IPHONE_5_0 }
function MusicTrackGetSequence(inTrack: MusicTrack; outSequence: MusicSequence __nullable* __nonnull): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_5_0 }
function MusicTrackSetDestNode(inTrack: MusicTrack; inNode: AUNode): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_5_0 }
function MusicTrackGetDestNode(inTrack: MusicTrack; outNode: AUNodePtr): OSStatus; cdecl; external; { available starting in __MAC_10_1,__IPHONE_5_0 }
function MusicTrackSetProperty(inTrack: MusicTrack; inPropertyID: UInt32; inData: pointer; inLength: UInt32): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_5_0 }
function MusicTrackGetProperty(inTrack: MusicTrack; inPropertyID: UInt32; outData: pointer; ioLength: UInt32Ptr): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_5_0 }
function MusicTrackMoveEvents(inTrack: MusicTrack; inStartTime: MusicTimeStamp; inEndTime: MusicTimeStamp; inMoveTime: MusicTimeStamp): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_5_0 }
function MusicTrackClear(inTrack: MusicTrack; inStartTime: MusicTimeStamp; inEndTime: MusicTimeStamp): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_5_0 }
function MusicTrackCut(inTrack: MusicTrack; inStartTime: MusicTimeStamp; inEndTime: MusicTimeStamp): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_5_0 }
function MusicTrackCopyInsert(inSourceTrack: MusicTrack; inSourceStartTime: MusicTimeStamp; inSourceEndTime: MusicTimeStamp; inDestTrack: MusicTrack; inDestInsertTime: MusicTimeStamp): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_5_0 }
function MusicTrackMerge(inSourceTrack: MusicTrack; inSourceStartTime: MusicTimeStamp; inSourceEndTime: MusicTimeStamp; inDestTrack: MusicTrack; inDestInsertTime: MusicTimeStamp): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_5_0 }
function MusicTrackNewMIDINoteEvent(inTrack: MusicTrack; inTimeStamp: MusicTimeStamp; inMessage: MIDINoteMessagePtr): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_5_0 }
function MusicTrackNewMIDIChannelEvent(inTrack: MusicTrack; inTimeStamp: MusicTimeStamp; inMessage: MIDIChannelMessagePtr): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_5_0 }
function MusicTrackNewMIDIRawDataEvent(inTrack: MusicTrack; inTimeStamp: MusicTimeStamp; inRawData: MIDIRawDataPtr): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_5_0 }
function MusicTrackNewExtendedNoteEvent(inTrack: MusicTrack; inTimeStamp: MusicTimeStamp; inInfo: ExtendedNoteOnEventPtr): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_5_0 }
function MusicTrackNewParameterEvent(inTrack: MusicTrack; inTimeStamp: MusicTimeStamp; inInfo: ParameterEventPtr): OSStatus; cdecl; external; { available starting in __MAC_10_2,__IPHONE_5_0 }
function MusicTrackNewExtendedTempoEvent(inTrack: MusicTrack; inTimeStamp: MusicTimeStamp; inBPM: Float64): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_5_0 }
function MusicTrackNewMetaEvent(inTrack: MusicTrack; inTimeStamp: MusicTimeStamp; inMetaEvent: MIDIMetaEventPtr): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_5_0 }
function MusicTrackNewUserEvent(inTrack: MusicTrack; inTimeStamp: MusicTimeStamp; inUserData: MusicEventUserDataPtr): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_5_0 }
function MusicTrackNewAUPresetEvent(inTrack: MusicTrack; inTimeStamp: MusicTimeStamp; inPresetEvent: AUPresetEventPtr): OSStatus; cdecl; external; { available starting in __MAC_10_3,__IPHONE_5_0 }
function NewMusicEventIterator(inTrack: MusicTrack; outIterator: MusicEventIterator __nullable* __nonnull): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_5_0 }
function DisposeMusicEventIterator(inIterator: MusicEventIterator): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_5_0 }
function MusicEventIteratorSeek(inIterator: MusicEventIterator; inTimeStamp: MusicTimeStamp): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_5_0 }
function MusicEventIteratorNextEvent(inIterator: MusicEventIterator): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_5_0 }
function MusicEventIteratorPreviousEvent(inIterator: MusicEventIterator): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_5_0 }
function MusicEventIteratorGetEventInfo(inIterator: MusicEventIterator; outTimeStamp: MusicTimeStampPtr; outEventType: MusicEventTypePtr; outEventData: void* __nullable* __nonnull; outEventDataSize: UInt32Ptr): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_5_0 }
function MusicEventIteratorSetEventInfo(inIterator: MusicEventIterator; inEventType: MusicEventType; inEventData: pointer): OSStatus; cdecl; external; { available starting in __MAC_10_2,__IPHONE_5_0 }
function MusicEventIteratorSetEventTime(inIterator: MusicEventIterator; inTimeStamp: MusicTimeStamp): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_5_0 }
function MusicEventIteratorDeleteEvent(inIterator: MusicEventIterator): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_5_0 }
function MusicEventIteratorHasPreviousEvent(inIterator: MusicEventIterator; outHasPrevEvent: pboolean): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_5_0 }
function MusicEventIteratorHasNextEvent(inIterator: MusicEventIterator; outHasNextEvent: pboolean): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_5_0 }
function MusicEventIteratorHasCurrentEvent(inIterator: MusicEventIterator; outHasCurEvent: pboolean): OSStatus; cdecl; external; { available starting in __MAC_10_2,__IPHONE_5_0 }
{$endif}

{$if  not defined(TARGET_RT_64_BIT)}
{$ifdef FUNCTIONS}
function MusicSequenceLoadSMFData(inSequence: MusicSequence; inData: CFDataRef): OSStatus; cdecl; external; deprecated 'in __MAC_10_2,__MAC_10_5, __IPHONE_NA, __IPHONE_NA';
{$endif}

{$endif}
{$ifdef FUNCTIONS}
function MusicSequenceLoadSMFWithFlags(inSequence: MusicSequence; inFileRef: FSRefPtr; inFlags: MusicSequenceLoadFlags): OSStatus; cdecl; external; deprecated 'in __MAC_10_3,__MAC_10_5, __IPHONE_NA, __IPHONE_NA';
function MusicSequenceLoadSMFDataWithFlags(inSequence: MusicSequence; inData: CFDataRef; inFlags: MusicSequenceLoadFlags): OSStatus; cdecl; external; deprecated 'in __MAC_10_3,__MAC_10_5, __IPHONE_NA, __IPHONE_NA';
function MusicSequenceSaveMIDIFile(inSequence: MusicSequence; inParentDirectory: FSRefPtr; inFileName: CFStringRef; inResolution: UInt16; inFlags: UInt32): OSStatus; cdecl; external; deprecated 'in __MAC_10_4,__MAC_10_5, __IPHONE_NA, __IPHONE_NA';
function MusicSequenceSaveSMFData(inSequence: MusicSequence; outData: CFDataRef __nullable* __nonnull; inResolution: UInt16): OSStatus; cdecl; external; deprecated 'in __MAC_10_2,__MAC_10_5, __IPHONE_NA, __IPHONE_NA';
function NewMusicTrackFrom(inSourceTrack: MusicTrack; inSourceStartTime: MusicTimeStamp; inSourceEndTime: MusicTimeStamp; outNewTrack: MusicTrack __nullable* __nonnull): OSStatus; cdecl; external; deprecated 'in __MAC_10_0,__MAC_10_6, __IPHONE_NA, __IPHONE_NA';
{$endif}

{$if  not defined(TARGET_OS_IPHONE)}
{$ifdef TYPES}
const
  kMusicEventType_ExtendedControl = 2;

type
  ExtendedControlEvent = record
    groupID: MusicDeviceGroupID;
    controlID: AudioUnitParameterID;
    value: AudioUnitParameterValue;
  end;
type
  ExtendedControlEventPtr = ^ExtendedControlEvent;
{$endif}

{$ifdef FUNCTIONS}
function MusicTrackNewExtendedControlEvent(inTrack: MusicTrack; inTimeStamp: MusicTimeStamp; inInfo: ExtendedControlEventPtr): OSStatus; cdecl; external; deprecated 'in __MAC_10_0,__MAC_10_7, __IPHONE_NA, __IPHONE_NA';
{$endif}

{$endif}

{$endif}
