{ Parsed from GameplayKit.framework GKObstacleGraph.h }

{$ifdef TYPES}
type
  GKObstacleGraphPtr = ^GKObstacleGraph;
{$endif}

{$ifdef CLASSES}

type
  GKObstacleGraph = objcclass external (NSObject, NodeType : GKGraphNode2D*Protocol)
  public
    function obstacles: GKPolygonObstacle *ProtocolPtr; message 'obstacles';
    function bufferRadius: single; message 'bufferRadius';
    class function graphWithObstacles_bufferRadius (obstacles_: GKPolygonObstacle *ProtocolPtr; bufferRadius_: single): instancetype; message 'graphWithObstacles:bufferRadius:';
    function initWithObstacles_bufferRadius (obstacles_: GKPolygonObstacle *ProtocolPtr; bufferRadius_: single): instancetype; message 'initWithObstacles:bufferRadius:';
    class function graphWithObstacles_bufferRadius_nodeClass (obstacles_: GKPolygonObstacle *ProtocolPtr; bufferRadius_: single; nodeClass: pobjc_class): instancetype; message 'graphWithObstacles:bufferRadius:nodeClass:';
    function initWithObstacles_bufferRadius_nodeClass (obstacles_: GKPolygonObstacle *ProtocolPtr; bufferRadius_: single; nodeClass: pobjc_class): instancetype; message 'initWithObstacles:bufferRadius:nodeClass:';
    procedure connectNodeUsingObstacles (node: NodeType); message 'connectNodeUsingObstacles:';
    procedure connectNodeUsingObstacles_ignoringObstacles (node: NodeType; obstaclesToIgnore: GKPolygonObstacle *ProtocolPtr); message 'connectNodeUsingObstacles:ignoringObstacles:';
    procedure connectNodeUsingObstacles_ignoringBufferRadiusOfObstacles (node: NodeType; obstaclesBufferRadiusToIgnore: GKPolygonObstacle *ProtocolPtr); message 'connectNodeUsingObstacles:ignoringBufferRadiusOfObstacles:';
    procedure addObstacles (obstacles_: GKPolygonObstacle *ProtocolPtr); message 'addObstacles:';
    procedure removeObstacles (obstacles_: GKPolygonObstacle *ProtocolPtr); message 'removeObstacles:';
    procedure removeAllObstacles; message 'removeAllObstacles';
    function nodesForObstacle (obstacle: GKPolygonObstacle): NodeTypeProtocolPtr; message 'nodesForObstacle:';
    procedure lockConnectionFromNode_toNode (startNode: NodeType; endNode: NodeType); message 'lockConnectionFromNode:toNode:';
    procedure unlockConnectionFromNode_toNode (startNode: NodeType; endNode: NodeType); message 'unlockConnectionFromNode:toNode:';
    function isConnectionLockedFromNode_toNode (startNode: NodeType; endNode: NodeType): boolean; message 'isConnectionLockedFromNode:toNode:';
    function classForGenericArgumentAtIndex (index: NSUInteger): nonnull Class; message 'classForGenericArgumentAtIndex:';
  end;
{$endif}

