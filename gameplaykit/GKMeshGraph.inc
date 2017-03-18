{ Parsed from GameplayKit.framework GKMeshGraph.h }

{$ifdef TYPES}
type
  GKMeshGraphPtr = ^GKMeshGraph;
{$endif}

{$ifdef TYPES}
type
  GKMeshGraphTriangulationMode = NSUInteger;
  GKMeshGraphTriangulationModePtr = ^GKMeshGraphTriangulationMode;

const
  GKMeshGraphTriangulationModeVertices = 1 shl 0;
  GKMeshGraphTriangulationModeCenters = 1 shl 1;
  GKMeshGraphTriangulationModeEdgeMidpoints = 1 shl 2;
{$endif}

{$ifdef CLASSES}

type
  GKMeshGraph = objcclass external (NSObject, NodeType : GKGraphNode2D*Protocol)
  public
    function obstacles: GKPolygonObstacle *ProtocolPtr; message 'obstacles';
    function bufferRadius: single; message 'bufferRadius';
    procedure setTriangulationMode(newValue: GKMeshGraphTriangulationMode); message 'setTriangulationMode:';
    function triangulationMode: GKMeshGraphTriangulationMode; message 'triangulationMode';
    function triangleCount: NSUInteger; message 'triangleCount';
    class function graphWithBufferRadius_minCoordinate_maxCoordinate_nodeClass (bufferRadius_: single; min: vector_float2; max: vector_float2; nodeClass: pobjc_class): instancetype; message 'graphWithBufferRadius:minCoordinate:maxCoordinate:nodeClass:';
    function initWithBufferRadius_minCoordinate_maxCoordinate_nodeClass (bufferRadius_: single; min: vector_float2; max: vector_float2; nodeClass: pobjc_class): instancetype; message 'initWithBufferRadius:minCoordinate:maxCoordinate:nodeClass:';
    class function graphWithBufferRadius_minCoordinate_maxCoordinate (bufferRadius_: single; min: vector_float2; max: vector_float2): instancetype; message 'graphWithBufferRadius:minCoordinate:maxCoordinate:';
    function initWithBufferRadius_minCoordinate_maxCoordinate (bufferRadius_: single; min: vector_float2; max: vector_float2): instancetype; message 'initWithBufferRadius:minCoordinate:maxCoordinate:';
    procedure addObstacles (obstacles_: GKPolygonObstacle*ProtocolPtr); message 'addObstacles:';
    procedure removeObstacles (obstacles_: GKPolygonObstacle*ProtocolPtr); message 'removeObstacles:';
    procedure connectNodeUsingObstacles (node: NodeType); message 'connectNodeUsingObstacles:';
    procedure triangulate; message 'triangulate';
    function triangleAtIndex (index: NSUInteger): GKTriangle; message 'triangleAtIndex:';
    function classForGenericArgumentAtIndex (index: NSUInteger): nonnull Class; message 'classForGenericArgumentAtIndex:';
  end;
{$endif}

