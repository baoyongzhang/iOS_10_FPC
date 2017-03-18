{ Parsed from HomeKit.framework HMEventTrigger.h }

{$ifdef TYPES}
type
  HMEventTriggerPtr = ^HMEventTrigger;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  HMCharacteristicKeyPath: NSString { available in 9_0 }; cvar; external;
  HMCharacteristicValueKeyPath: NSString { available in 9_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  HMEventTrigger = objcclass external (HMTrigger)
  public
    function init: instancetype; message 'init';
    function initWithName_events_predicate (name_: NSString; events: HMEvent *ProtocolPtr; predicate: nullable NSPredicatePtr): instancetype; message 'initWithName:events:predicate:';
    function events: HMEvent *ProtocolPtr; message 'events';
    function predicate: NSPredicate; message 'predicate';
    class function predicateForEvaluatingTriggerOccurringBeforeSignificantEvent_applyingOffset (significantEvent: NSString; offset: nullable NSDateComponentsPtr): NSPredicate; message 'predicateForEvaluatingTriggerOccurringBeforeSignificantEvent:applyingOffset:';
    class function predicateForEvaluatingTriggerOccurringAfterSignificantEvent_applyingOffset (significantEvent: NSString; offset: nullable NSDateComponentsPtr): NSPredicate; message 'predicateForEvaluatingTriggerOccurringAfterSignificantEvent:applyingOffset:';
    class function predicateForEvaluatingTriggerOccurringBeforeDateWithComponents (dateComponents: NSDateComponents): NSPredicate; message 'predicateForEvaluatingTriggerOccurringBeforeDateWithComponents:';
    class function predicateForEvaluatingTriggerOccurringOnDateWithComponents (dateComponents: NSDateComponents): NSPredicate; message 'predicateForEvaluatingTriggerOccurringOnDateWithComponents:';
    class function predicateForEvaluatingTriggerOccurringAfterDateWithComponents (dateComponents: NSDateComponents): NSPredicate; message 'predicateForEvaluatingTriggerOccurringAfterDateWithComponents:';
    class function predicateForEvaluatingTriggerWithCharacteristic_relatedBy_toValue (characteristic: HMCharacteristic; operatorType: NSPredicateOperatorType; value: id): NSPredicate; message 'predicateForEvaluatingTriggerWithCharacteristic:relatedBy:toValue:';
    procedure addEvent_completionHandler (event: HMEvent; completion: OpaqueCBlock); message 'addEvent:completionHandler:';
    procedure removeEvent_completionHandler (event: HMEvent; completion: OpaqueCBlock); message 'removeEvent:completionHandler:';
    procedure updatePredicate_completionHandler (predicate_: nullable NSPredicatePtr; completion: OpaqueCBlock); message 'updatePredicate:completionHandler:';
  end;
{$endif}

