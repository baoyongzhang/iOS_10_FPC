{ Parsed from GameplayKit.framework GKGridGraph.h }

{$ifdef TYPES}
type
  GKGridGraphPtr = ^GKGridGraph;
{$endif}

{$ifdef CLASSES}

type
  GKGridGraph = objcclass external (NSObject, NodeType : GKGridGraphNode *Protocol)
  public
    function gridOrigin: vector_int2; message 'gridOrigin';
    function gridWidth: NSUInteger; message 'gridWidth';
    function gridHeight: NSUInteger; message 'gridHeight';
    function diagonalsAllowed: boolean; message 'diagonalsAllowed';
    class function graphFromGridStartingAt_width_height_diagonalsAllowed (position: vector_int2; width: cint; height: cint; diagonalsAllowed_: boolean): instancetype; message 'graphFromGridStartingAt:width:height:diagonalsAllowed:';
    function initFromGridStartingAt_width_height_diagonalsAllowed (position: vector_int2; width: cint; height: cint; diagonalsAllowed_: boolean): instancetype; message 'initFromGridStartingAt:width:height:diagonalsAllowed:';
    class function graphFromGridStartingAt_width_height_diagonalsAllowed_nodeClass (position: vector_int2; width: cint; height: cint; diagonalsAllowed_: boolean; nodeClass: pobjc_class): instancetype; message 'graphFromGridStartingAt:width:height:diagonalsAllowed:nodeClass:';
    function initFromGridStartingAt_width_height_diagonalsAllowed_nodeClass (position: vector_int2; width: cint; height: cint; diagonalsAllowed_: boolean; nodeClass: pobjc_class): instancetype; message 'initFromGridStartingAt:width:height:diagonalsAllowed:nodeClass:';
    function nodeAtGridPosition (position: vector_int2): nullable NodeType; message 'nodeAtGridPosition:';
    procedure connectNodeToAdjacentNodes (node: GKGridGraphNode); message 'connectNodeToAdjacentNodes:';
    function classForGenericArgumentAtIndex (index: NSUInteger): nonnull Class; message 'classForGenericArgumentAtIndex:';
  end;
{$endif}

