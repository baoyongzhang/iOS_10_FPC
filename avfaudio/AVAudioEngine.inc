{ Parsed from AVFAudio.framework AVAudioEngine.h }

{ Types from AVAudioEngine }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  AVAudioEnginePtr = ^AVAudioEngine;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef TYPES}
const
  AVAUDIOENGINE_HAVE_MUSICPLAYER = 1;
{$endif}

{$endif}
{$ifdef CLASSES}

type
  AVAudioEngine = objcclass external (NSObject)
  private
    _impl: pointer;
  public
    function init: instancetype; message 'init';
    procedure attachNode (node: AVAudioNode); message 'attachNode:';
    procedure detachNode (node: AVAudioNode); message 'detachNode:';
    procedure connect_to_fromBus_toBus_format (node1: AVAudioNode; node2: AVAudioNode; bus1: AVAudioNodeBus; bus2: AVAudioNodeBus; format: AVAudioFormat * __nullable); message 'connect:to:fromBus:toBus:format:';
    procedure connect_to_format (node1: AVAudioNode; node2: AVAudioNode; format: AVAudioFormat * __nullable); message 'connect:to:format:';
    procedure connect_toConnectionPoints_fromBus_format (sourceNode: AVAudioNode; destNodes: AVAudioConnectionPoint *ProtocolPtr; sourceBus: AVAudioNodeBus; format: AVAudioFormat * __nullable); message 'connect:toConnectionPoints:fromBus:format:'; { available in 10_11, 9_0 }
    procedure disconnectNodeInput_bus (node: AVAudioNode; bus: AVAudioNodeBus); message 'disconnectNodeInput:bus:';
    procedure disconnectNodeInput (node: AVAudioNode); message 'disconnectNodeInput:';
    procedure disconnectNodeOutput_bus (node: AVAudioNode; bus: AVAudioNodeBus); message 'disconnectNodeOutput:bus:';
    procedure disconnectNodeOutput (node: AVAudioNode); message 'disconnectNodeOutput:';
    procedure prepare; message 'prepare';
    function startAndReturnError (outError: NSErrorPtr): boolean; message 'startAndReturnError:';
    procedure pause; message 'pause';
    procedure reset; message 'reset';
    procedure stop; message 'stop';
    function inputConnectionPointForNode_inputBus (node: AVAudioNode; bus: AVAudioNodeBus): AVAudioConnectionPoint * __nullable; message 'inputConnectionPointForNode:inputBus:'; { available in 10_11, 9_0 }
    function outputConnectionPointsForNode_outputBus (node: AVAudioNode; bus: AVAudioNodeBus): AVAudioConnectionPoint *ProtocolPtr; message 'outputConnectionPointsForNode:outputBus:'; { available in 10_11, 9_0 }
    {$if defined(AVAUDIOENGINE_HAVE_MUSICPLAYER)}
    procedure setMusicSequence(newValue: MusicSequence); message 'setMusicSequence:';
    function musicSequence: MusicSequence; message 'musicSequence';
    {$endif}
    function outputNode: AVAudioOutputNode; message 'outputNode';
    function __WATCHOS_PROHIBITED_: AVAudioInputNode *inputNode __TVOS_PROHIBITED; message 'WATCHOS_PROHIBITED';
    function mainMixerNode: AVAudioMixerNode; message 'mainMixerNode';
    function isRunning: boolean; message 'isRunning';
  end;
{$endif}

