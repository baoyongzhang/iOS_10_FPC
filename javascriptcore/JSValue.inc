{ Parsed from JavaScriptCore.framework JSValue.h }

{$ifdef TYPES}
type
  JSValuePtr = ^JSValue;
{$endif}

{$ifndef JSValue_h}

{$if defined(JSC_OBJC_API_ENABLED)}
{$ifdef CLASSES}

type
  JSValue = objcclass external (NSObject)
  public
    function context: JSContext; message 'context';
    class function valueWithObject_inContext (value: id; context_: JSContext): JSValue; message 'valueWithObject:inContext:';
    class function valueWithBool_inContext (value: boolean; context_: JSContext): JSValue; message 'valueWithBool:inContext:';
    class function valueWithDouble_inContext (value: double; context_: JSContext): JSValue; message 'valueWithDouble:inContext:';
    class function valueWithInt32_inContext (value: cint32; context_: JSContext): JSValue; message 'valueWithInt32:inContext:';
    class function valueWithUInt32_inContext (value: cuint32; context_: JSContext): JSValue; message 'valueWithUInt32:inContext:';
    class function valueWithNewObjectInContext (context_: JSContext): JSValue; message 'valueWithNewObjectInContext:';
    class function valueWithNewArrayInContext (context_: JSContext): JSValue; message 'valueWithNewArrayInContext:';
    class function valueWithNewRegularExpressionFromPattern_flags_inContext (pattern: NSString; flags: NSString; context_: JSContext): JSValue; message 'valueWithNewRegularExpressionFromPattern:flags:inContext:';
    class function valueWithNewErrorFromMessage_inContext (message_: NSString; context_: JSContext): JSValue; message 'valueWithNewErrorFromMessage:inContext:';
    class function valueWithNullInContext (context_: JSContext): JSValue; message 'valueWithNullInContext:';
    class function valueWithUndefinedInContext (context_: JSContext): JSValue; message 'valueWithUndefinedInContext:';
    function toObject: id; message 'toObject';
    function toObjectOfClass (expectedClass: pobjc_class): id; message 'toObjectOfClass:';
    function toBool: boolean; message 'toBool';
    function toDouble: double; message 'toDouble';
    function toInt32: cint32; message 'toInt32';
    function toUInt32: cuint32; message 'toUInt32';
    function toNumber: NSNumber; message 'toNumber';
    function toString: NSString; message 'toString';
    function toDate: NSDate; message 'toDate';
    function toArray: NSArray; message 'toArray';
    function toDictionary: NSDictionary; message 'toDictionary';
    function valueForProperty (property_: NSString): JSValue; message 'valueForProperty:';
    procedure setValue_forProperty (value: id; property_: NSString); message 'setValue:forProperty:';
    function deleteProperty (property_: NSString): boolean; message 'deleteProperty:';
    function hasProperty (property_: NSString): boolean; message 'hasProperty:';
    procedure defineProperty_descriptor (property_: NSString; descriptor: id); message 'defineProperty:descriptor:';
    function valueAtIndex (index: NSUInteger): JSValue; message 'valueAtIndex:';
    procedure setValue_atIndex (value: id; index: NSUInteger); message 'setValue:atIndex:';
    function isUndefined: boolean; message 'isUndefined';
    function isNull: boolean; message 'isNull';
    function isBoolean: boolean; message 'isBoolean';
    function isNumber: boolean; message 'isNumber';
    function isString: boolean; message 'isString';
    function isObject: boolean; message 'isObject';
    function isArray: boolean; message 'isArray';
    function isDate: boolean; message 'isDate';
    function isEqualToObject (value: id): boolean; message 'isEqualToObject:';
    function isEqualWithTypeCoercionToObject (value: id): boolean; message 'isEqualWithTypeCoercionToObject:';
    function isInstanceOf (value: id): boolean; message 'isInstanceOf:';
    function callWithArguments (arguments: NSArray): JSValue; message 'callWithArguments:';
    function constructWithArguments (arguments: NSArray): JSValue; message 'constructWithArguments:';
    function invokeMethod_withArguments (method: NSString; arguments: NSArray): JSValue; message 'invokeMethod:withArguments:';
  end;


type
  StructSupport = objccategory external (JSValue)
    class function valueWithPoint_inContext (point: CGPoint; context_: JSContext): JSValue; message 'valueWithPoint:inContext:';
    class function valueWithRange_inContext (range: NSRange; context_: JSContext): JSValue; message 'valueWithRange:inContext:';
    class function valueWithRect_inContext (rect: CGRect; context_: JSContext): JSValue; message 'valueWithRect:inContext:';
    class function valueWithSize_inContext (size: CGSize; context_: JSContext): JSValue; message 'valueWithSize:inContext:';
    function toPoint: CGPoint; message 'toPoint';
    function toRange: NSRange; message 'toRange';
    function toRect: CGRect; message 'toRect';
    function toSize: CGSize; message 'toSize';
  end;

type
  SubscriptSupport = objccategory external (JSValue)
    function objectForKeyedSubscript (key: id): JSValue; message 'objectForKeyedSubscript:';
    function objectAtIndexedSubscript (index: NSUInteger): JSValue; message 'objectAtIndexedSubscript:';
    procedure setObject_forKeyedSubscript (object_: id; key: NSCopyingProtocol); message 'setObject:forKeyedSubscript:';
    procedure setObject_atIndexedSubscript (object_: id; index: NSUInteger); message 'setObject:atIndexedSubscript:';
  end;

type
  JSValueRefSupport = objccategory external (JSValue)
    class function valueWithJSValueRef_inContext (value: JSValueRef; context_: JSContext): JSValue; message 'valueWithJSValueRef:inContext:';
    function JSValueRef_: JSValueRef; message 'JSValueRef';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  JSPropertyDescriptorWritableKey: extern NSStringPtr; cvar; external;
  JSPropertyDescriptorEnumerableKey: extern NSStringPtr; cvar; external;
  JSPropertyDescriptorConfigurableKey: extern NSStringPtr; cvar; external;
  JSPropertyDescriptorValueKey: extern NSStringPtr; cvar; external;
  JSPropertyDescriptorGetKey: extern NSStringPtr; cvar; external;
  JSPropertyDescriptorSetKey: extern NSStringPtr; cvar; external;
{$endif}

{$endif}
{$endif}
