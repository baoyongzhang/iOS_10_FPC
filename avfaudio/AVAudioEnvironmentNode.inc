{ Parsed from AVFAudio.framework AVAudioEnvironmentNode.h }

{$ifdef TYPES}
type
  AVAudioEnvironmentDistanceAttenuationParametersPtr = ^AVAudioEnvironmentDistanceAttenuationParameters;
  AVAudioEnvironmentReverbParametersPtr = ^AVAudioEnvironmentReverbParameters;
  AVAudioEnvironmentNodePtr = ^AVAudioEnvironmentNode;
{$endif}

{$ifdef TYPES}
type
  AVAudioEnvironmentDistanceAttenuationModel = NSInteger;
  AVAudioEnvironmentDistanceAttenuationModelPtr = ^AVAudioEnvironmentDistanceAttenuationModel;

const
  AVAudioEnvironmentDistanceAttenuationModelExponential = 1;
  AVAudioEnvironmentDistanceAttenuationModelInverse = 2;
  AVAudioEnvironmentDistanceAttenuationModelLinear = 3;
{$endif}

{$ifdef CLASSES}

type
  AVAudioEnvironmentDistanceAttenuationParameters = objcclass external (NSObject)
  private
    _impl: pointer;
  public
    procedure setDistanceAttenuationModel(newValue: AVAudioEnvironmentDistanceAttenuationModel); message 'setDistanceAttenuationModel:';
    function distanceAttenuationModel: AVAudioEnvironmentDistanceAttenuationModel; message 'distanceAttenuationModel';
    procedure setReferenceDistance(newValue: single); message 'setReferenceDistance:';
    function referenceDistance: single; message 'referenceDistance';
    procedure setMaximumDistance(newValue: single); message 'setMaximumDistance:';
    function maximumDistance: single; message 'maximumDistance';
    procedure setRolloffFactor(newValue: single); message 'setRolloffFactor:';
    function rolloffFactor: single; message 'rolloffFactor';
  end;

type
  AVAudioEnvironmentReverbParameters = objcclass external (NSObject)
  private
    _impl: pointer;
  public
    procedure setEnable(newValue: boolean); message 'setEnable:';
    function enable: boolean; message 'enable';
    procedure setLevel(newValue: single); message 'setLevel:';
    function level: single; message 'level';
    function filterParameters: AVAudioUnitEQFilterParameters; message 'filterParameters';
    procedure loadFactoryReverbPreset (preset: AVAudioUnitReverbPreset); message 'loadFactoryReverbPreset:';
  end;

type
  AVAudioEnvironmentNode = objcclass external (AVAudioNode, AVAudioMixingProtocol)
  public
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    procedure setOutputVolume(newValue: single); message 'setOutputVolume:';
    function outputVolume: single; message 'outputVolume';
    function nextAvailableInputBus: AVAudioNodeBus; message 'nextAvailableInputBus';
    procedure setListenerPosition(newValue: AVAudio3DPoint); message 'setListenerPosition:';
    function listenerPosition: AVAudio3DPoint; message 'listenerPosition';
    procedure setListenerVectorOrientation(newValue: AVAudio3DVectorOrientation); message 'setListenerVectorOrientation:';
    function listenerVectorOrientation: AVAudio3DVectorOrientation; message 'listenerVectorOrientation';
    procedure setListenerAngularOrientation(newValue: AVAudio3DAngularOrientation); message 'setListenerAngularOrientation:';
    function listenerAngularOrientation: AVAudio3DAngularOrientation; message 'listenerAngularOrientation';
    function distanceAttenuationParameters: AVAudioEnvironmentDistanceAttenuationParameters; message 'distanceAttenuationParameters';
    function reverbParameters: AVAudioEnvironmentReverbParameters; message 'reverbParameters';
    function applicableRenderingAlgorithms: NSNumber *ProtocolPtr; message 'applicableRenderingAlgorithms';

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

