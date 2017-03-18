{ Parsed from GameplayKit.framework GKGraphNode.h }

{$ifdef TYPES}
type
  GKGraphNodePtr = ^GKGraphNode;
  GKGraphNode2DPtr = ^GKGraphNode2D;
  GKGraphNode3DPtr = ^GKGraphNode3D;
  GKGridGraphNodePtr = ^GKGridGraphNode;
{$endif}

{$ifdef CLASSES}

type
  GKGraphNode = objcclass external (NSObject, NSCodingProtocol)
  public
    function connectedNodes: GKGraphNode *ProtocolPtr; message 'connectedNodes';
    procedure addConnectionsToNodes_bidirectional (nodes: GKGraphNode *ProtocolPtr; bidirectional: boolean); message 'addConnectionsToNodes:bidirectional:';
    procedure removeConnectionsToNodes_bidirectional (nodes: GKGraphNode *ProtocolPtr; bidirectional: boolean); message 'removeConnectionsToNodes:bidirectional:';
    function estimatedCostToNode (node: GKGraphNode): single; message 'estimatedCostToNode:';
    function costToNode (node: GKGraphNode): single; message 'costToNode:';
    function findPathToNode (goalNode: GKGraphNode): __kindof GKGraphNode *ProtocolPtr; message 'findPathToNode:';
    function findPathFromNode (startNode: GKGraphNode): __kindof GKGraphNode *ProtocolPtr; message 'findPathFromNode:';

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
  end;

type
  GKGraphNode2D = objcclass external (GKGraphNode)
  public
    procedure setPosition(newValue: vector_float2); message 'setPosition:';
    function position: vector_float2; message 'position';
    class function nodeWithPoint (point: vector_float2): instancetype; message 'nodeWithPoint:';
    function initWithPoint (point: vector_float2): instancetype; message 'initWithPoint:';
  end;

type
  GKGraphNode3D = objcclass external (GKGraphNode)
  public
    procedure setPosition(newValue: vector_float3); message 'setPosition:';
    function position: vector_float3; message 'position';
    class function nodeWithPoint (point: vector_float3): instancetype; message 'nodeWithPoint:';
    function initWithPoint (point: vector_float3): instancetype; message 'initWithPoint:';
  end;

type
  GKGridGraphNode = objcclass external (GKGraphNode)
  public
    function gridPosition: vector_int2; message 'gridPosition';
    class function nodeWithGridPosition (gridPosition_: vector_int2): instancetype; message 'nodeWithGridPosition:';
    function initWithGridPosition (gridPosition_: vector_int2): instancetype; message 'initWithGridPosition:';
  end;
{$endif}

