{ Parsed from AVFAudio.framework AVAudioPlayerNode.h }

{$ifdef TYPES}
type
  AVAudioPlayerNodePtr = ^AVAudioPlayerNode;
{$endif}

{$ifdef TYPES}
type
  AVAudioPlayerNodeBufferOptions = NSUInteger;
  AVAudioPlayerNodeBufferOptionsPtr = ^AVAudioPlayerNodeBufferOptions;

const
  AVAudioPlayerNodeBufferLoops = 1 shl 0;
  AVAudioPlayerNodeBufferInterrupts = 1 shl 1;
  AVAudioPlayerNodeBufferInterruptsAtLoop = 1 shl 2;
{$endif}

{$ifdef CLASSES}

type
  AVAudioPlayerNode = objcclass external (AVAudioNode, AVAudioMixingProtocol)
  public
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    procedure scheduleBuffer_completionHandler (buffer: AVAudioPCMBuffer; completionHandler: AVAudioNodeCompletionHandler __nullable); message 'scheduleBuffer:completionHandler:';
    procedure scheduleBuffer_atTime_options_completionHandler (buffer: AVAudioPCMBuffer; when: AVAudioTime * __nullable; options: AVAudioPlayerNodeBufferOptions; completionHandler: AVAudioNodeCompletionHandler __nullable); message 'scheduleBuffer:atTime:options:completionHandler:';
    procedure scheduleFile_atTime_completionHandler (file_: AVAudioFile; when: AVAudioTime * __nullable; completionHandler: AVAudioNodeCompletionHandler __nullable); message 'scheduleFile:atTime:completionHandler:';
    procedure scheduleSegment_startingFrame_frameCount_atTime_completionHandler (file_: AVAudioFile; startFrame: AVAudioFramePosition; numberFrames: AVAudioFrameCount; when: AVAudioTime * __nullable; completionHandler: AVAudioNodeCompletionHandler __nullable); message 'scheduleSegment:startingFrame:frameCount:atTime:completionHandler:';
    procedure stop; message 'stop';
    procedure prepareWithFrameCount (frameCount: AVAudioFrameCount); message 'prepareWithFrameCount:';
    procedure play; message 'play';
    procedure playAtTime (when: AVAudioTime * __nullable); message 'playAtTime:';
    procedure pause; message 'pause';
    function nodeTimeForPlayerTime (playerTime: AVAudioTime): AVAudioTime * __nullable; message 'nodeTimeForPlayerTime:';
    function playerTimeForNodeTime (nodeTime: AVAudioTime): AVAudioTime * __nullable; message 'playerTimeForNodeTime:';
    function isPlaying: boolean; message 'isPlaying';

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

