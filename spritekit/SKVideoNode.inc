{ Parsed from SpriteKit.framework SKVideoNode.h }

{$ifdef TYPES}
type
  SKVideoNodePtr = ^SKVideoNode;
{$endif}

{$ifdef CLASSES}

type
  SKVideoNode = objcclass external (SKNode)
  public
    class function videoNodeWithAVPlayer (player: AVPlayer): SKVideoNode; message 'videoNodeWithAVPlayer:';
    class function videoNodeWithVideoFileNamed (videoFile: NSString): SKVideoNode; message 'videoNodeWithVideoFileNamed:'; deprecated 'in 10_8, 10_11, 7_0, 9_0';
    class function videoNodeWithFileNamed (videoFile: NSString): SKVideoNode; message 'videoNodeWithFileNamed:'; { available in 10_11, 9_0 }
    class function videoNodeWithVideoURL (videoURL: NSURL): SKVideoNode; message 'videoNodeWithVideoURL:'; deprecated 'in 10_8, 10_11, 7_0, 9_0';
    class function videoNodeWithURL (videoURL: NSURL): SKVideoNode; message 'videoNodeWithURL:'; { available in 10_11, 9_0 }
    function initWithAVPlayer (player: AVPlayer): instancetype; message 'initWithAVPlayer:'; { NS_DESIGNATED_INITIALIZER }
    function initWithVideoFileNamed (videoFile: NSString): instancetype; message 'initWithVideoFileNamed:'; deprecated 'in 10_8, 10_10, 7_0, 8_0';
    function initWithFileNamed (videoFile: NSString): instancetype; message 'initWithFileNamed:'; { available in 10_10, 8_0 }
    function initWithVideoURL (url: NSURL): instancetype; message 'initWithVideoURL:'; deprecated 'in 10_8, 10_10, 7_0, 8_0';
    function initWithURL (url: NSURL): instancetype; message 'initWithURL:'; { available in 10_10, 8_0 }
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    procedure play; message 'play';
    procedure pause; message 'pause';
    procedure setSize(newValue: CGSize); message 'setSize:';
    function size: CGSize; message 'size';
    procedure setAnchorPoint(newValue: CGPoint); message 'setAnchorPoint:';
    function anchorPoint: CGPoint; message 'anchorPoint';
  end;
{$endif}

