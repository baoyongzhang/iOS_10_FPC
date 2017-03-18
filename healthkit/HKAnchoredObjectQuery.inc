{ Parsed from HealthKit.framework HKAnchoredObjectQuery.h }

{$ifdef TYPES}
type
  HKQueryAnchorPtr = ^HKQueryAnchor;
  HKAnchoredObjectQueryPtr = ^HKAnchoredObjectQuery;
{$endif}

{$ifdef CLASSES}

type
  HKQueryAnchor = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    class function anchorFromValue (value: NSUInteger): instancetype; message 'anchorFromValue:';
    function init: instancetype; message 'init';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;

type
  HKAnchoredObjectQuery = objcclass external (HKQuery)
  public
    procedure setUpdateHandler(newValue: OpaqueCBlock); message 'setUpdateHandler:';
    function updateHandler: OpaqueCBlock; message 'updateHandler';
    function initWithType_predicate_anchor_limit_resultsHandler (type_: HKSampleType; predicate_: nullable NSPredicatePtr; anchor: nullable HKQueryAnchorPtr; limit: NSUInteger; handler: OpaqueCBlock): instancetype; message 'initWithType:predicate:anchor:limit:resultsHandler:'; { available in 9_0, 2_0 }
    function initWithType_predicate_anchor_limit_completionHandler (type_: HKSampleType; predicate_: nullable NSPredicatePtr; anchor: NSUInteger; limit: NSUInteger; handler: OpaqueCBlock): instancetype; message 'initWithType:predicate:anchor:limit:completionHandler:'; deprecated 'in 8_0, 9_0, "Use initWithType:predicate:anchor:limit:resultsHandler:"';
  end;
{$endif}

