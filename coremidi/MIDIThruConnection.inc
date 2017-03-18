{ Parsed from CoreMIDI.framework MIDIThruConnection.h }
{$ifdef TYPES}
type
  MIDIThruConnectionRef = MIDIObjectRef;
  MIDIThruConnectionRefPtr = ^MIDIThruConnectionRef;

type
  MIDIValueMap = record
    value:array[0..127] of UInt8;
  end;
type
  MIDIValueMapPtr = ^MIDIValueMap;

type
  MIDITransformType = UInt16;
  MIDITransformTypePtr = ^MIDITransformType;

const
  kMIDITransform_None = 0;
  kMIDITransform_FilterOut = 1;
  kMIDITransform_MapControl = 2;
  kMIDITransform_Add = 8;
  kMIDITransform_Scale = 9;
  kMIDITransform_MinValue = 10;
  kMIDITransform_MaxValue = 11;
  kMIDITransform_MapValue = 12;
const
  kMIDIThruConnection_MaxEndpoints = 8;

type
  MIDITransformControlType = UInt8;
  MIDITransformControlTypePtr = ^MIDITransformControlType;

const
  kMIDIControlType_7Bit = 0;
  kMIDIControlType_14Bit = 1;
  kMIDIControlType_7BitRPN = 2;
  kMIDIControlType_14BitRPN = 3;
  kMIDIControlType_7BitNRPN = 4;
  kMIDIControlType_14BitNRPN = 5;

type
  MIDITransform = record
    transform: MIDITransformType;
    param: SInt16;
  end;
type
  MIDITransformPtr = ^MIDITransform;
type
  MIDIControlTransform = record
    controlType: MIDITransformControlType;
    remappedControlType: MIDITransformControlType;
    controlNumber: UInt16;
    transform: MIDITransformType;
    param: SInt16;
  end;
type
  MIDIControlTransformPtr = ^MIDIControlTransform;
type
  MIDIThruConnectionEndpoint = record
    endpointRef: MIDIEndpointRef;
    uniqueID: MIDIUniqueID;
  end;
type
  MIDIThruConnectionEndpointPtr = ^MIDIThruConnectionEndpoint;
type
  MIDIThruConnectionParams = record
    version: UInt32;
    numSources: UInt32;
    sources:array[0..(kMIDIThruConnection_MaxEndpoints)-1] of MIDIThruConnectionEndpoint;
    numDestinations: UInt32;
    destinations:array[0..(kMIDIThruConnection_MaxEndpoints)-1] of MIDIThruConnectionEndpoint;
    channelMap:array[0..15] of UInt8;
    lowVelocity, highVelocity: UInt8;
    lowNote, highNote: UInt8;
    noteNumber: MIDITransform;
    velocity: MIDITransform;
    keyPressure: MIDITransform;
    channelPressure: MIDITransform;
    programChange: MIDITransform;
    pitchBend: MIDITransform;
    filterOutSysEx: UInt8;
    filterOutMTC: UInt8;
    filterOutBeatClock: UInt8;
    filterOutTuneRequest: UInt8;
    reserved2:array[0..2] of UInt8;
    filterOutAllControls: UInt8;
    numControlTransforms: UInt16;
    numMaps: UInt16;
    reserved3:array[0..3] of UInt16;
  end;
type
  MIDIThruConnectionParamsPtr = ^MIDIThruConnectionParams;
{$endif}

{$ifdef FUNCTIONS}
procedure MIDIThruConnectionParamsInitialize(var inConnectionParams: MIDIThruConnectionParams); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_2 }
function MIDIThruConnectionCreate(inPersistentOwnerID: CFStringRef __nullable; inConnectionParams: CFDataRef; var outConnection: MIDIThruConnectionRef): OSStatus; cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_2 }
function MIDIThruConnectionDispose(connection: MIDIThruConnectionRef): OSStatus; cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_2 }
function MIDIThruConnectionGetParams(connection: MIDIThruConnectionRef; var outConnectionParams: CFDataRef __nonnull* __nonnull): OSStatus; cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_2 }
function MIDIThruConnectionSetParams(connection: MIDIThruConnectionRef; inConnectionParams: CFDataRef): OSStatus; cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_2 }
function MIDIThruConnectionFind(inPersistentOwnerID: CFStringRef; var outConnectionList: CFDataRef __nonnull* __nonnull): OSStatus; cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_2 }
{$endif}

