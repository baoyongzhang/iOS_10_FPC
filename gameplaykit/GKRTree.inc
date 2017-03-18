{ Parsed from GameplayKit.framework GKRTree.h }

{$ifdef TYPES}
type
  GKRTreePtr = ^GKRTree;
{$endif}

{$ifdef TYPES}
type
  GKRTreeSplitStrategy = NSInteger;
  GKRTreeSplitStrategyPtr = ^GKRTreeSplitStrategy;

const
  GKRTreeSplitStrategyHalve = 0;
  GKRTreeSplitStrategyLinear = 1;
  GKRTreeSplitStrategyQuadratic = 2;
  GKRTreeSplitStrategyReduceOverlap = 3;
{$endif}

{$ifdef CLASSES}

type
  GKRTree = objcclass external (NSObject, ElementType : NSObject*Protocol)
  public
    procedure setQueryReserve(newValue: NSUInteger); message 'setQueryReserve:';
    function queryReserve: NSUInteger; message 'queryReserve';
    class function treeWithMaxNumberOfChildren (maxNumberOfChildren: NSUInteger): instancetype; message 'treeWithMaxNumberOfChildren:';
    function initWithMaxNumberOfChildren (maxNumberOfChildren: NSUInteger): instancetype; message 'initWithMaxNumberOfChildren:'; { NS_DESIGNATED_INITIALIZER }
    procedure addElement_boundingRectMin_boundingRectMax_splitStrategy (element: ElementType; boundingRectMin: vector_float2; boundingRectMax: vector_float2; splitStrategy: GKRTreeSplitStrategy); message 'addElement:boundingRectMin:boundingRectMax:splitStrategy:';
    procedure removeElement_boundingRectMin_boundingRectMax (element: ElementType; boundingRectMin: vector_float2; boundingRectMax: vector_float2); message 'removeElement:boundingRectMin:boundingRectMax:';
    function elementsInBoundingRectMin_rectMax (rectMin: vector_float2; rectMax: vector_float2): ElementTypeProtocolPtr; message 'elementsInBoundingRectMin:rectMax:';
  end;
{$endif}

