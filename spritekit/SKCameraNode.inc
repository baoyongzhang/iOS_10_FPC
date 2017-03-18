{ Parsed from SpriteKit.framework SKCameraNode.h }

{$ifdef TYPES}
type
  SKCameraNodePtr = ^SKCameraNode;
{$endif}

{$ifdef CLASSES}

type
  SKCameraNode = objcclass external (SKNode)
  public
    function containsNode (node_: SKNode): boolean; message 'containsNode:';
    function containedNodeSet: SKNode*ProtocolPtr; message 'containedNodeSet';
  end;
{$endif}

