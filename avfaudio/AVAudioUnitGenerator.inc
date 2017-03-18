{ Parsed from AVFAudio.framework AVAudioUnitGenerator.h }

{ Types from AVAudioUnitGenerator }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  AVAudioUnitGeneratorPtr = ^AVAudioUnitGenerator;
{$endif}

{$ifdef CLASSES}

type
  AVAudioUnitGenerator = objcclass external (AVAudioUnit, AVAudioMixingProtocol)
  public
    {$if defined(AVAUDIOUNIT_HAVE_AUDIOUNIT)}
    function initWithAudioComponentDescription (audioComponentDescription_: AudioComponentDescription): instancetype; message 'initWithAudioComponentDescription:';
    {$endif}
    procedure setBypass(newValue: boolean); message 'setBypass:';
    function bypass: boolean; message 'bypass';

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

