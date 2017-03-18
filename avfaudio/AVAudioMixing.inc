{ Parsed from AVFAudio.framework AVAudioMixing.h }

{$ifdef TYPES}
type
  AVAudioMixingDestinationPtr = ^AVAudioMixingDestination;
  AVAudioMixingProtocolPtr = ^AVAudioMixingProtocol;
  AVAudioStereoMixingProtocolPtr = ^AVAudioStereoMixingProtocol;
  AVAudio3DMixingProtocolPtr = ^AVAudio3DMixingProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  AVAudioMixingProtocol = objcprotocol external name 'AVAudioMixing' (AVAudioStereoMixingProtocol, AVAudio3DMixingProtocol)
    function destinationForMixer_bus (mixer: AVAudioNode; bus: AVAudioNodeBus): nullable AVAudioMixingDestinationPtr; message 'destinationForMixer:bus:'; { available in 10_11, 9_0 }
    procedure setVolume(newValue: single); message 'setVolume:';
    function volume: single; message 'volume';
  end;

type
  AVAudioStereoMixingProtocol = objcprotocol external name 'AVAudioStereoMixing' (NSObjectProtocol)
    procedure setPan(newValue: single); message 'setPan:';
    function pan: single; message 'pan';
  end;
{$endif}

{$ifdef TYPES}
type
  AVAudio3DMixingRenderingAlgorithm = NSInteger;
  AVAudio3DMixingRenderingAlgorithmPtr = ^AVAudio3DMixingRenderingAlgorithm;

const
  AVAudio3DMixingRenderingAlgorithmEqualPowerPanning = 0;
  AVAudio3DMixingRenderingAlgorithmSphericalHead = 1;
  AVAudio3DMixingRenderingAlgorithmHRTF = 2;
  AVAudio3DMixingRenderingAlgorithmSoundField = 3;
  AVAudio3DMixingRenderingAlgorithmStereoPassThrough = 5;
{$endif}

{$ifdef PROTOCOLS}

type
  AVAudio3DMixingProtocol = objcprotocol external name 'AVAudio3DMixing' (NSObjectProtocol)
    procedure set__WATCHOS_PROHIBITED(newValue: AVAudio3DMixingRenderingAlgorithm renderingAlgorithm); message 'set__WATCHOS_PROHIBITED:';
    function __WATCHOS_PROHIBITED_: AVAudio3DMixingRenderingAlgorithm renderingAlgorithm; message 'WATCHOS_PROHIBITED';
    procedure set__WATCHOS_PROHIBITED_(newValue: float rate); message 'set__WATCHOS_PROHIBITED:';
    function __WATCHOS_PROHIBITED_: float rate; message 'WATCHOS_PROHIBITED';
    procedure set__WATCHOS_PROHIBITED__(newValue: float reverbBlend); message 'set__WATCHOS_PROHIBITED:';
    function __WATCHOS_PROHIBITED__: float reverbBlend; message 'WATCHOS_PROHIBITED';
    procedure set__WATCHOS_PROHIBITED___(newValue: float obstruction); message 'set__WATCHOS_PROHIBITED:';
    function __WATCHOS_PROHIBITED___: float obstruction; message 'WATCHOS_PROHIBITED';
    procedure set__WATCHOS_PROHIBITED____(newValue: float occlusion); message 'set__WATCHOS_PROHIBITED:';
    function __WATCHOS_PROHIBITED____: float occlusion; message 'WATCHOS_PROHIBITED';
    procedure set__WATCHOS_PROHIBITED_____(newValue: AVAudio3DPoint position); message 'set__WATCHOS_PROHIBITED:';
    function __WATCHOS_PROHIBITED_____: AVAudio3DPoint position; message 'WATCHOS_PROHIBITED';
  end;
{$endif}

{$ifdef CLASSES}

type
  AVAudioMixingDestination = objcclass external (NSObject, AVAudioMixingProtocol)
  private
    _impl: pointer;
  public
    function connectionPoint: AVAudioConnectionPoint; message 'connectionPoint';

    { Adopted protocols }
    procedure set__WATCHOS_PROHIBITED(newValue: AVAudio3DMixingRenderingAlgorithm renderingAlgorithm); message 'set__WATCHOS_PROHIBITED:';
    function __WATCHOS_PROHIBITED_: AVAudio3DMixingRenderingAlgorithm renderingAlgorithm; message 'WATCHOS_PROHIBITED';
    function destinationForMixer_bus (mixer: AVAudioNode; bus: AVAudioNodeBus): nullable AVAudioMixingDestinationPtr; message 'destinationForMixer:bus:'; { available in 10_11, 9_0 }
    procedure setPan(newValue: single); message 'setPan:';
    function pan: single; message 'pan';
    procedure setVolume(newValue: single); message 'setVolume:';
    function volume: single; message 'volume';
  end;
{$endif}

