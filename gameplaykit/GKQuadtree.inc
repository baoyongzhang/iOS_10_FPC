{ Parsed from GameplayKit.framework GKQuadtree.h }

{$ifdef TYPES}
type
  GKQuadtreeNodePtr = ^GKQuadtreeNode;
  GKQuadtreePtr = ^GKQuadtree;
{$endif}

{$ifdef CLASSES}

type
  GKQuadtreeNode = objcclass external (NSObject)
  public
    function quad: GKQuad; message 'quad';
  end;

type
  GKQuadtree = objcclass external (NSObject, ElementType : NSObject*Protocol)
  public
    class function quadtreeWithBoundingQuad_minimumCellSize (quad: GKQuad; minCellSize: single): instancetype; message 'quadtreeWithBoundingQuad:minimumCellSize:';
    function initWithBoundingQuad_minimumCellSize (quad: GKQuad; minCellSize: single): instancetype; message 'initWithBoundingQuad:minimumCellSize:'; { NS_DESIGNATED_INITIALIZER }
    function addElement_withPoint (element: ElementType; point: vector_float2): GKQuadtreeNode; message 'addElement:withPoint:';
    function addElement_withQuad (element: ElementType; quad: GKQuad): GKQuadtreeNode; message 'addElement:withQuad:';
    function elementsAtPoint (point: vector_float2): ElementTypeProtocolPtr; message 'elementsAtPoint:';
    function elementsInQuad (quad: GKQuad): ElementTypeProtocolPtr; message 'elementsInQuad:';
    function removeElement (element: ElementType): boolean; message 'removeElement:';
    function removeElement_withNode (data: ElementType; node: GKQuadtreeNode): boolean; message 'removeElement:withNode:';
  end;
{$endif}

