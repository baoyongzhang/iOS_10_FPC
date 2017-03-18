{ Parsed from Foundation.framework NSExpression.h }

{ Types from NSExpression }
{$ifdef TYPES}


{$endif}


{$ifdef TYPES}
type
  NSExpressionPtr = ^NSExpression;
{$endif}

{$ifdef TYPES}
type
  NSExpressionType = NSUInteger;
  NSExpressionTypePtr = ^NSExpressionType;

const
  NSConstantValueExpressionType = 0;
  NSEvaluatedObjectExpressionType = 1;
  NSVariableExpressionType = 2;
  NSKeyPathExpressionType = 3;
  NSFunctionExpressionType = 4;
  NSUnionSetExpressionType = 5 { available in 10_5, 3_0 };
  NSIntersectSetExpressionType = 6 { available in 10_5, 3_0 };
  NSMinusSetExpressionType = 7 { available in 10_5, 3_0 };
  NSSubqueryExpressionType = 13 { available in 10_5, 3_0 };
  NSAggregateExpressionType = 14 { available in 10_5, 3_0 };
  NSAnyKeyExpressionType = 15 { available in 10_9, 7_0 };
  NSBlockExpressionType = 19;
  NSConditionalExpressionType = 20 { available in 10_11, 9_0 };
{$endif}

{$ifdef CLASSES}

type
  NSExpression = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  private
    _expressionFlags: bitpacked record
      case byte of
        0: (_anonBitField__expressionFlags0: cuint);
        1: (
          _evaluationBlocked: 0..1;
          _reservedExpressionFlags: 0..((1 shl 31)-1);
        );
      end;
    {$ifdef __LP64__}
    reserved: cuint32;
    {$endif}
    _expressionType: NSExpressionType;
  public
    class function expressionWithFormat_argumentArray (expressionFormat: NSString; arguments: NSArray): NSExpression; message 'expressionWithFormat:argumentArray:'; { available in 10_6,4_0 }
    class function expressionWithFormat (expressionFormat: NSString): NSExpression; varargs; message 'expressionWithFormat:'; { available in 10_6,4_0 }
    class function expressionWithFormat_arguments (expressionFormat: NSString; argList: va_list): NSExpression; message 'expressionWithFormat:arguments:'; { available in 10_6,4_0 }
    class function expressionForConstantValue (obj: nullable id): NSExpression; message 'expressionForConstantValue:';
    class function expressionForEvaluatedObject: NSExpression; message 'expressionForEvaluatedObject';
    class function expressionForVariable (string_: NSString): NSExpression; message 'expressionForVariable:';
    class function expressionForKeyPath (keyPath: NSString): NSExpression; message 'expressionForKeyPath:';
    class function expressionForFunction_arguments (name: NSString; parameters: NSArray): NSExpression; message 'expressionForFunction:arguments:';
    class function expressionForAggregate (subexpressions: NSArray): NSExpression; message 'expressionForAggregate:'; { available in 10_5, 3_0 }
    class function expressionForUnionSet_with (left: NSExpression; right: NSExpression): NSExpression; message 'expressionForUnionSet:with:'; { available in 10_5, 3_0 }
    class function expressionForIntersectSet_with (left: NSExpression; right: NSExpression): NSExpression; message 'expressionForIntersectSet:with:'; { available in 10_5, 3_0 }
    class function expressionForMinusSet_with (left: NSExpression; right: NSExpression): NSExpression; message 'expressionForMinusSet:with:'; { available in 10_5, 3_0 }
    class function expressionForSubquery_usingIteratorVariable_predicate (expression: NSExpression; variable: NSString; predicate: id): NSExpression; message 'expressionForSubquery:usingIteratorVariable:predicate:'; { available in 10_5, 3_0 }
    class function expressionForFunction_selectorName_arguments (target: NSExpression; name: NSString; parameters: nullable NSArrayPtr): NSExpression; message 'expressionForFunction:selectorName:arguments:'; { available in 10_5, 3_0 }
    class function expressionForAnyKey: NSExpression; message 'expressionForAnyKey'; { available in 10_9, 7_0 }
    class function expressionForBlock_arguments (block: OpaqueCBlock; arguments: nullable NSExpression *ProtocolPtr): NSExpression; message 'expressionForBlock:arguments:'; { available in 10_6, 4_0 }
    class function expressionForConditional_trueExpression_falseExpression (predicate: NSPredicate; trueExpression: NSExpression; falseExpression: NSExpression): NSExpression; message 'expressionForConditional:trueExpression:falseExpression:'; { available in 10_11, 9_0 }
    function initWithExpressionType (type_: NSExpressionType): instancetype; message 'initWithExpressionType:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (coder: NSCoder): nullable instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function expressionType: NSExpressionType; message 'expressionType';
    {$if defined(FOUNDATION_SWIFT_SDK_EPOCH_AT_LEAST)}
    function constantValue: id; message 'constantValue';
    {$endif}
    function keyPath: NSString; message 'keyPath';
    function function_: NSString; message 'function';
    function variable: NSString; message 'variable';
    function operand: NSExpression; message 'operand';
    function arguments: NSExpression *ProtocolPtr; message 'arguments';
    function collection: id; message 'collection';
    function predicate: NSPredicate; message 'predicate';
    function leftExpression: NSExpression; message 'leftExpression';
    function rightExpression: NSExpression; message 'rightExpression';
    function trueExpression: NSExpression; message 'trueExpression';
    function falseExpression: NSExpression; message 'falseExpression';
    procedure setExpressionBlock(newValue: OpaqueCBlock); message 'setExpressionBlock:';
    function expressionBlock: OpaqueCBlock; message 'expressionBlock';
    {$if defined(FOUNDATION_SWIFT_SDK_EPOCH_AT_LEAST)}
    function expressionValueWithObject_context (object_: nullable id; context: nullable NSMutableDictionaryPtr): nullable id; message 'expressionValueWithObject:context:';
    {$endif}
    procedure allowEvaluation; message 'allowEvaluation'; { available in 10_9, 7_0 }

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

