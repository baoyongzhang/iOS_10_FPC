{ Parsed from GameplayKit.framework GKGraph.h }

{$ifdef TYPES}
type
  GKGraphPtr = ^GKGraph;
{$endif}

{$ifdef CLASSES}

type
  GKGraph = objcclass external (NSObject, NSCopyingProtocol, NSCodingProtocol)
  public
    function nodes: GKGraphNode *ProtocolPtr; message 'nodes';
    class function graphWithNodes (nodes_: GKGraphNode *ProtocolPtr): instancetype; message 'graphWithNodes:';
    function initWithNodes (nodes_: GKGraphNode *ProtocolPtr): instancetype; message 'initWithNodes:';
    procedure connectNodeToLowestCostNode_bidirectional (node: GKGraphNode; bidirectional: boolean); message 'connectNodeToLowestCostNode:bidirectional:';
    procedure removeNodes (nodes_: GKGraphNode *ProtocolPtr); message 'removeNodes:';
    procedure addNodes (nodes_: GKGraphNode *ProtocolPtr); message 'addNodes:';
    function findPathFromNode_toNode (startNode: GKGraphNode; endNode: GKGraphNode): __kindof GKGraphNode *ProtocolPtr; message 'findPathFromNode:toNode:';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
  end;
{$endif}

