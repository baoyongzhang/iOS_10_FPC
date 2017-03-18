{ Parsed from GameplayKit.framework GKRuleSystem.h }

{$ifdef TYPES}
type
  GKRuleSystemPtr = ^GKRuleSystem;
  GKRulePtr = ^GKRule;
  GKNSPredicateRulePtr = ^GKNSPredicateRule;
{$endif}

{$ifdef CLASSES}

type
  GKRuleSystem = objcclass external (NSObject)
  public
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    procedure evaluate; message 'evaluate';
    function state: NSMutableDictionary; message 'state';
    function rules: GKRule *ProtocolPtr; message 'rules';
    procedure addRule (rule: GKRule); message 'addRule:';
    procedure addRulesFromArray (rules_: GKRule *ProtocolPtr); message 'addRulesFromArray:';
    procedure removeAllRules; message 'removeAllRules';
    function agenda: GKRule *ProtocolPtr; message 'agenda';
    function executed: GKRule *ProtocolPtr; message 'executed';
    function facts: NSArray; message 'facts';
    function gradeForFact (fact: NSObjectProtocol): single; message 'gradeForFact:';
    function minimumGradeForFacts (facts_: NSArray): single; message 'minimumGradeForFacts:';
    function maximumGradeForFacts (facts_: NSArray): single; message 'maximumGradeForFacts:';
    procedure assertFact (fact: NSObjectProtocol); message 'assertFact:';
    procedure assertFact_grade (fact: NSObjectProtocol; grade: single); message 'assertFact:grade:';
    procedure retractFact (fact: NSObjectProtocol); message 'retractFact:';
    procedure retractFact_grade (fact: NSObjectProtocol; grade: single); message 'retractFact:grade:';
    procedure reset; message 'reset';
  end;

type
  GKRule = objcclass external (NSObject)
  public
    procedure setSalience(newValue: NSInteger); message 'setSalience:';
    function salience: NSInteger; message 'salience';
    function evaluatePredicateWithSystem (system: GKRuleSystem): boolean; message 'evaluatePredicateWithSystem:';
    procedure performActionWithSystem (system: GKRuleSystem); message 'performActionWithSystem:';
    class function ruleWithPredicate_assertingFact_grade (predicate: NSPredicate; fact: NSObjectProtocol; grade: single): instancetype; message 'ruleWithPredicate:assertingFact:grade:';
    class function ruleWithPredicate_retractingFact_grade (predicate: NSPredicate; fact: NSObjectProtocol; grade: single): instancetype; message 'ruleWithPredicate:retractingFact:grade:';
    class function ruleWithBlockPredicate_action (predicate: OpaqueCBlock; action: OpaqueCBlock): instancetype; message 'ruleWithBlockPredicate:action:';
  end;

type
  GKNSPredicateRule = objcclass external (GKRule)
  public
    function predicate: NSPredicate; message 'predicate';
    function initWithPredicate (predicate_: NSPredicate): instancetype; message 'initWithPredicate:';
    function evaluatePredicateWithSystem (system: GKRuleSystem): boolean; message 'evaluatePredicateWithSystem:';
  end;
{$endif}

