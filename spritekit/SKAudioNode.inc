{ Parsed from SpriteKit.framework SKAudioNode.h }

{$ifdef TYPES}
type
  SKAudioNodePtr = ^SKAudioNode;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef CLASSES}

type
  SKAudioNode = objcclass external (SKNode, NSCodingProtocol)
  public
    function initWithAVAudioNode (node_: nullable AVAudioNodePtr): instancetype; message 'initWithAVAudioNode:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function initWithFileNamed (name_: NSString): instancetype; message 'initWithFileNamed:';
    function initWithURL (url: NSURL): instancetype; message 'initWithURL:';
    procedure setAvAudioNode(newValue: AVAudioNode); message 'setAvAudioNode:';
    function avAudioNode: AVAudioNode; message 'avAudioNode';
    procedure setAutoplayLooped(newValue: boolean); message 'setAutoplayLooped:';
    function autoplayLooped: boolean; message 'autoplayLooped';
    procedure setPositional(newValue: boolean); message 'setPositional:';
    function isPositional: boolean; message 'isPositional';
  end;


type
  SKAction_SKAudioNode = objccategory external name 'SKAudioNode' (SKAction)
    class function stereoPanTo_duration (v: single; duration_: NSTimeInterval): SKAction; message 'stereoPanTo:duration:'; { available in 10_11, 9_0 }
    class function stereoPanBy_duration (v: single; duration_: NSTimeInterval): SKAction; message 'stereoPanBy:duration:'; { available in 10_11, 9_0 }
    class function changeReverbTo_duration (v: single; duration_: NSTimeInterval): SKAction; message 'changeReverbTo:duration:'; { available in 10_11, 9_0 }
    class function changeReverbBy_duration (v: single; duration_: NSTimeInterval): SKAction; message 'changeReverbBy:duration:'; { available in 10_11, 9_0 }
    class function changeObstructionTo_duration (v: single; duration_: NSTimeInterval): SKAction; message 'changeObstructionTo:duration:'; { available in 10_11, 9_0 }
    class function changeObstructionBy_duration (v: single; duration_: NSTimeInterval): SKAction; message 'changeObstructionBy:duration:'; { available in 10_11, 9_0 }
    class function changeOcclusionTo_duration (v: single; duration_: NSTimeInterval): SKAction; message 'changeOcclusionTo:duration:'; { available in 10_11, 9_0 }
    class function changeOcclusionBy_duration (v: single; duration_: NSTimeInterval): SKAction; message 'changeOcclusionBy:duration:'; { available in 10_11, 9_0 }
  end;
{$endif}

{$endif}
