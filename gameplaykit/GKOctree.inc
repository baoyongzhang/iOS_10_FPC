{ Parsed from GameplayKit.framework GKOctree.h }

{$ifdef TYPES}
type
  GKOctreeNodePtr = ^GKOctreeNode;
  GKOctreePtr = ^GKOctree;
{$endif}

{$ifdef CLASSES}

type
  GKOctreeNode = objcclass external (NSObject)
  public
    function box: GKBox; message 'box';
  end;

type
  GKOctree = objcclass external (NSObject, ElementType: NSObject*Protocol)
  public
    class function octreeWithBoundingBox_minimumCellSize (box: GKBox; minCellSize: single): instancetype; message 'octreeWithBoundingBox:minimumCellSize:';
    function initWithBoundingBox_minimumCellSize (box: GKBox; minCellSize: single): instancetype; message 'initWithBoundingBox:minimumCellSize:';
    function addElement_withPoint (element: ElementType; point: vector_float3): GKOctreeNode; message 'addElement:withPoint:';
    function addElement_withBox (element: ElementType; box: GKBox): GKOctreeNode; message 'addElement:withBox:';
    function elementsAtPoint (point: vector_float3): ElementTypeProtocolPtr; message 'elementsAtPoint:';
    function elementsInBox (box: GKBox): ElementTypeProtocolPtr; message 'elementsInBox:';
    function removeElement (element: ElementType): boolean; message 'removeElement:';
    function removeElement_withNode (element: ElementType; node: GKOctreeNode): boolean; message 'removeElement:withNode:';
  end;
{$endif}

