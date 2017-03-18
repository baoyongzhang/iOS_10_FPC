{ Parsed from GameplayKit.framework GKDecisionTree.h }

{$ifdef TYPES}
type
  GKDecisionNodePtr = ^GKDecisionNode;
  GKDecisionTreePtr = ^GKDecisionTree;
{$endif}

{$ifdef CLASSES}

type
  GKDecisionNode = objcclass external (NSObject)
  public
    function createBranchWithValue_attribute (value: NSNumber; attribute: NSObjectProtocol): instancetype; message 'createBranchWithValue:attribute:';
    function createBranchWithPredicate_attribute (predicate: NSPredicate; attribute: NSObjectProtocol): instancetype; message 'createBranchWithPredicate:attribute:';
    function createBranchWithWeight_attribute (weight: NSInteger; attribute: NSObjectProtocol): instancetype; message 'createBranchWithWeight:attribute:';
  end;

type
  GKDecisionTree = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    function rootNode: GKDecisionNode; message 'rootNode';
    procedure setRandomSource(newValue: GKRandomSource); message 'setRandomSource:';
    function randomSource: GKRandomSource; message 'randomSource';
    function initWithAttribute (attribute: NSObjectProtocol): instancetype; message 'initWithAttribute:';
    function initWithExamples_actions_attributes (examples: NSArray <id <NSObjectProtocol>*>Ptr; actions: id <NSObjectProtocol>Ptr; attributes: id <NSObjectProtocol>Ptr): instancetype; message 'initWithExamples:actions:attributes:';
    function findActionForAnswers (answers: id <NSObjectProtocol, id <NSObjectProtocol>Ptr): nullable NSObjectProtocol; message 'findActionForAnswers:';

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

