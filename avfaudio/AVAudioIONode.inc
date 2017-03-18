{ Parsed from AVFAudio.framework AVAudioIONode.h }

{ Types from AVAudioIONode }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  AVAudioIONodePtr = ^AVAudioIONode;
  AVAudioInputNodePtr = ^AVAudioInputNode;
  AVAudioOutputNodePtr = ^AVAudioOutputNode;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef TYPES}
const
  AVAUDIOIONODE_HAVE_AUDIOUNIT = 1;
{$endif}

{$endif}
{$ifdef CLASSES}

type
  AVAudioIONode = objcclass external (AVAudioNode)
  public
    function presentationLatency: NSTimeInterval; message 'presentationLatency';
    {$if defined(AVAUDIOIONODE_HAVE_AUDIOUNIT)}
    function audioUnit: AudioUnit; message 'audioUnit';
    {$endif}
  end;

type
  AVAudioInputNode = objcclass external (AVAudioIONode, AVAudioMixingProtocol)
  public
    function init: instancetype; message 'init';

    { Adopted protocols }
    procedure set__WATCHOS_PROHIBITED(newValue: AVAudio3DMixingRenderingAlgorithm renderingAlgorithm); message 'set__WATCHOS_PROHIBITED:';
    function __WATCHOS_PROHIBITED_: AVAudio3DMixingRenderingAlgorithm renderingAlgorithm; message 'WATCHOS_PROHIBITED';
    function destinationForMixer_bus (mixer: AVAudioNode; bus: AVAudioNodeBus): nullable AVAudioMixingDestinationPtr; message 'destinationForMixer:bus:'; { available in 10_11, 9_0 }
    procedure setPan(newValue: single); message 'setPan:';
    function pan: single; message 'pan';
    procedure setVolume(newValue: single); message 'setVolume:';
    function volume: single; message 'volume';
  end;

type
  AVAudioOutputNode = objcclass external (AVAudioIONode)
  public
    function init: instancetype; message 'init';
  end;
{$endif}

