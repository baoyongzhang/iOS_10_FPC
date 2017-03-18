{ Parsed from SceneKit.framework SCNAudioSource.h }

{$ifdef TYPES}
type
  SCNAudioSourcePtr = ^SCNAudioSource;
  SCNAudioPlayerPtr = ^SCNAudioPlayer;
{$endif}

{$ifdef CLASSES}

type
  SCNAudioSource = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function initWithFileNamed (name: NSString): nullable instancetype; message 'initWithFileNamed:';
    function initWithURL (url: NSURL): nullable instancetype; message 'initWithURL:'; { NS_DESIGNATED_INITIALIZER }
    class function audioSourceNamed (fileName: NSString): nullable instancetype; message 'audioSourceNamed:';
    procedure setPositional(newValue: boolean); message 'setPositional:';
    function isPositional: boolean; message 'isPositional';
    procedure setVolume(newValue: single); message 'setVolume:';
    function volume: single; message 'volume';
    procedure setRate(newValue: single); message 'setRate:';
    function rate: single; message 'rate';
    procedure setReverbBlend(newValue: single); message 'setReverbBlend:';
    function reverbBlend: single; message 'reverbBlend';
    procedure setLoops(newValue: boolean); message 'setLoops:';
    function loops: boolean; message 'loops';
    procedure setShouldStream(newValue: boolean); message 'setShouldStream:';
    function shouldStream: boolean; message 'shouldStream';
    procedure load; message 'load';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;

type
  SCNAudioPlayer = objcclass external (NSObject)
  public
    function init: instancetype; message 'init';
    function initWithSource (source: SCNAudioSource): instancetype; message 'initWithSource:'; { NS_DESIGNATED_INITIALIZER }
    function initWithAVAudioNode (audioNode: AVAudioNode): instancetype; message 'initWithAVAudioNode:'; { NS_DESIGNATED_INITIALIZER }
    class function audioPlayerWithSource (source: SCNAudioSource): instancetype; message 'audioPlayerWithSource:';
    class function audioPlayerWithAVAudioNode (audioNode: AVAudioNode): instancetype; message 'audioPlayerWithAVAudioNode:';
    procedure setWillStartPlayback(newValue: OpaqueCBlock); message 'setWillStartPlayback:';
    function willStartPlayback: OpaqueCBlock; message 'willStartPlayback';
    procedure setDidFinishPlayback(newValue: OpaqueCBlock); message 'setDidFinishPlayback:';
    function didFinishPlayback: OpaqueCBlock; message 'didFinishPlayback';
    function audioNode: AVAudioNode; message 'audioNode';
    function audioSource: SCNAudioSource; message 'audioSource';
  end;


type
  SCNAudioSupport = objccategory external (SCNNode)
    procedure addAudioPlayer (player: SCNAudioPlayer); message 'addAudioPlayer:'; { available in macosx(10.11 }
    procedure removeAllAudioPlayers                            , ios(9.0)); message 'removeAllAudioPlayers                            , ios(9.0))'; { available in macosx(10.11 }
    procedure removeAudioPlayer (player: SCNAudioPlayer); message 'removeAudioPlayer:'; { available in macosx(10.11 }
    function audioPlayers: SCNAudioPlayer *ProtocolPtr; message 'audioPlayers';
    function ios(9.0)): SCNAudioPlayer *ProtocolPtr; message 'ios(9.0))';
  end;
{$endif}

