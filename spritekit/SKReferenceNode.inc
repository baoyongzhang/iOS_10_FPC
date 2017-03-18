{ Parsed from SpriteKit.framework SKReferenceNode.h }

{$ifdef TYPES}
type
  SKReferenceNodePtr = ^SKReferenceNode;
{$endif}

{$ifdef CLASSES}

type
  SKReferenceNode = objcclass external (SKNode)
  public
    function initWithURL (url: nullable NSURLPtr): instancetype; message 'initWithURL:'; { NS_DESIGNATED_INITIALIZER }
    function initWithFileNamed (fileName: nullable NSStringPtr): instancetype; message 'initWithFileNamed:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    class function referenceNodeWithFileNamed (fileName: NSString): instancetype; message 'referenceNodeWithFileNamed:';
    class function referenceNodeWithURL (referenceURL: NSURL): instancetype; message 'referenceNodeWithURL:';
    procedure didLoadReferenceNode (node_: nullable SKNodePtr); message 'didLoadReferenceNode:';
    procedure resolveReferenceNode; message 'resolveReferenceNode';
  end;
{$endif}

