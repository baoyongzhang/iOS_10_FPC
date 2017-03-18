{ Parsed from AVFAudio.framework AVAudioMixerNode.h }

{$ifdef TYPES}
type
  AVAudioMixerNodePtr = ^AVAudioMixerNode;
{$endif}

{$ifdef CLASSES}

type
  AVAudioMixerNode = objcclass external (AVAudioNode, AVAudioMixingProtocol)
  public
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    procedure setOutputVolume(newValue: single); message 'setOutputVolume:';
    function outputVolume: single; message 'outputVolume';
    function nextAvailableInputBus: AVAudioNodeBus; message 'nextAvailableInputBus';

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

