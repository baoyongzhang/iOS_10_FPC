{ Parsed from JavaScriptCore.framework JSObjectRef.h }

{$ifndef JSObjectRef_h}

{$ifdef TYPES}
const
  kJSPropertyAttributeNone = 0;
  kJSPropertyAttributeReadOnly = 1 shl 1;
  kJSPropertyAttributeDontEnum = 1 shl 2;
  kJSPropertyAttributeDontDelete = 1 shl 3;

type
  JSPropertyAttributes = cuint;
  JSPropertyAttributesPtr = ^JSPropertyAttributes;

const
  kJSClassAttributeNone = 0;
  kJSClassAttributeNoAutomaticPrototype = 1 shl 1;

type
  JSClassAttributes = cuint;
  JSClassAttributesPtr = ^JSClassAttributes;
  JSObjectInitializeCallback = procedure (ctx: JSContextRef; object_: JSObjectRef); cdecl;
  JSObjectFinalizeCallback = procedure (object_: JSObjectRef); cdecl;
  JSObjectHasPropertyCallback = function (ctx: JSContextRef; object_: JSObjectRef; propertyName: JSStringRef): cbool; cdecl;
  JSObjectGetPropertyCallback = function (ctx: JSContextRef; object_: JSObjectRef; propertyName: JSStringRef; exception: JSValueRef): JSValueRef; cdecl;
  JSObjectSetPropertyCallback = function (ctx: JSContextRef; object_: JSObjectRef; propertyName: JSStringRef; value: JSValueRef; exception: JSValueRef): cbool; cdecl;
  JSObjectDeletePropertyCallback = function (ctx: JSContextRef; object_: JSObjectRef; propertyName: JSStringRef; exception: JSValueRef): cbool; cdecl;
  JSObjectGetPropertyNamesCallback = procedure (ctx: JSContextRef; object_: JSObjectRef; propertyNames: JSPropertyNameAccumulatorRef); cdecl;
  JSObjectCallAsFunctionCallback = function (ctx: JSContextRef; function_: JSObjectRef; thisObject: JSObjectRef; argumentCount: size_t; arguments: JSValueRef { variable size array of JSValueRef }; exception: JSValueRef): JSValueRef; cdecl;
  JSObjectCallAsConstructorCallback = function (ctx: JSContextRef; constructor: JSObjectRef; argumentCount: size_t; arguments: JSValueRef { variable size array of JSValueRef }; exception: JSValueRef): JSObjectRef; cdecl;
  JSObjectHasInstanceCallback = function (ctx: JSContextRef; constructor: JSObjectRef; possibleInstance: JSValueRef; exception: JSValueRef): cbool; cdecl;
  JSObjectConvertToTypeCallback = function (ctx: JSContextRef; object_: JSObjectRef; type_: JSType; exception: JSValueRef): JSValueRef; cdecl;

type
  JSStaticValue = record
    name: PChar;
    getProperty: JSObjectGetPropertyCallback;
    setProperty: JSObjectSetPropertyCallback;
    attributes: JSPropertyAttributes;
  end;
type
  JSStaticValuePtr = ^JSStaticValue;
type
  JSStaticFunction = record
    name: PChar;
    callAsFunction: JSObjectCallAsFunctionCallback;
    attributes: JSPropertyAttributes;
  end;
type
  JSStaticFunctionPtr = ^JSStaticFunction;
type
  JSClassDefinition = record
    version: cint;
    attributes: JSClassAttributes;
    className: PChar;
    parentClass: JSClassRef;
    staticValues: JSStaticValuePtr;
    staticFunctions: JSStaticFunctionPtr;
    initialize: JSObjectInitializeCallback;
    finalize: JSObjectFinalizeCallback;
    hasProperty: JSObjectHasPropertyCallback;
    getProperty: JSObjectGetPropertyCallback;
    setProperty: JSObjectSetPropertyCallback;
    deleteProperty: JSObjectDeletePropertyCallback;
    getPropertyNames: JSObjectGetPropertyNamesCallback;
    callAsFunction: JSObjectCallAsFunctionCallback;
    callAsConstructor: JSObjectCallAsConstructorCallback;
    hasInstance: JSObjectHasInstanceCallback;
    convertToType: JSObjectConvertToTypeCallback;
  end;
type
  JSClassDefinitionPtr = ^JSClassDefinition;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kJSClassDefinitionEmpty: extern JSClassDefinition; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function JSClassCreate(definition: JSClassDefinitionPtr): JSClassRef; cdecl; external;
function JSClassRetain(jsClass: JSClassRef): JSClassRef; cdecl; external;
procedure JSClassRelease(jsClass: JSClassRef); cdecl; external;
function JSObjectMake(ctx: JSContextRef; jsClass: JSClassRef; data: pointer): JSObjectRef; cdecl; external;
function JSObjectMakeFunctionWithCallback(ctx: JSContextRef; name: JSStringRef; callAsFunction: JSObjectCallAsFunctionCallback): JSObjectRef; cdecl; external;
function JSObjectMakeConstructor(ctx: JSContextRef; jsClass: JSClassRef; callAsConstructor: JSObjectCallAsConstructorCallback): JSObjectRef; cdecl; external;
function JSObjectMakeArray(ctx: JSContextRef; argumentCount: size_t; arguments: JSValueRef { variable size array of JSValueRef }; exception: JSValueRef): JSObjectRef; cdecl; external; { available in 10_6, 7_0 }
function JSObjectMakeDate(ctx: JSContextRef; argumentCount: size_t; arguments: JSValueRef { variable size array of JSValueRef }; exception: JSValueRef): JSObjectRef; cdecl; external; { available in 10_6, 7_0 }
function JSObjectMakeError(ctx: JSContextRef; argumentCount: size_t; arguments: JSValueRef { variable size array of JSValueRef }; exception: JSValueRef): JSObjectRef; cdecl; external; { available in 10_6, 7_0 }
function JSObjectMakeRegExp(ctx: JSContextRef; argumentCount: size_t; arguments: JSValueRef { variable size array of JSValueRef }; exception: JSValueRef): JSObjectRef; cdecl; external; { available in 10_6, 7_0 }
function JSObjectMakeFunction(ctx: JSContextRef; name: JSStringRef; parameterCount: cuint; parameterNames: JSStringRef { variable size array of JSStringRef }; body: JSStringRef; sourceURL: JSStringRef; startingLineNumber: cint; exception: JSValueRef): JSObjectRef; cdecl; external;
function JSObjectGetPrototype(ctx: JSContextRef; object_: JSObjectRef): JSValueRef; cdecl; external;
procedure JSObjectSetPrototype(ctx: JSContextRef; object_: JSObjectRef; value: JSValueRef); cdecl; external;
function JSObjectHasProperty(ctx: JSContextRef; object_: JSObjectRef; propertyName: JSStringRef): cbool; cdecl; external;
function JSObjectGetProperty(ctx: JSContextRef; object_: JSObjectRef; propertyName: JSStringRef; exception: JSValueRef): JSValueRef; cdecl; external;
procedure JSObjectSetProperty(ctx: JSContextRef; object_: JSObjectRef; propertyName: JSStringRef; value: JSValueRef; attributes: JSPropertyAttributes; exception: JSValueRef); cdecl; external;
function JSObjectDeleteProperty(ctx: JSContextRef; object_: JSObjectRef; propertyName: JSStringRef; exception: JSValueRef): cbool; cdecl; external;
function JSObjectGetPropertyAtIndex(ctx: JSContextRef; object_: JSObjectRef; propertyIndex: cuint; exception: JSValueRef): JSValueRef; cdecl; external;
procedure JSObjectSetPropertyAtIndex(ctx: JSContextRef; object_: JSObjectRef; propertyIndex: cuint; value: JSValueRef; exception: JSValueRef); cdecl; external;
function JSObjectGetPrivate(object_: JSObjectRef): pointer; cdecl; external;
function JSObjectSetPrivate(object_: JSObjectRef; data: pointer): cbool; cdecl; external;
function JSObjectIsFunction(ctx: JSContextRef; object_: JSObjectRef): cbool; cdecl; external;
function JSObjectCallAsFunction(ctx: JSContextRef; object_: JSObjectRef; thisObject: JSObjectRef; argumentCount: size_t; arguments: JSValueRef { variable size array of JSValueRef }; exception: JSValueRef): JSValueRef; cdecl; external;
function JSObjectIsConstructor(ctx: JSContextRef; object_: JSObjectRef): cbool; cdecl; external;
function JSObjectCallAsConstructor(ctx: JSContextRef; object_: JSObjectRef; argumentCount: size_t; arguments: JSValueRef { variable size array of JSValueRef }; exception: JSValueRef): JSObjectRef; cdecl; external;
function JSObjectCopyPropertyNames(ctx: JSContextRef; object_: JSObjectRef): JSPropertyNameArrayRef; cdecl; external;
function JSPropertyNameArrayRetain(array_: JSPropertyNameArrayRef): JSPropertyNameArrayRef; cdecl; external;
procedure JSPropertyNameArrayRelease(array_: JSPropertyNameArrayRef); cdecl; external;
function JSPropertyNameArrayGetCount(array_: JSPropertyNameArrayRef): size_t; cdecl; external;
function JSPropertyNameArrayGetNameAtIndex(array_: JSPropertyNameArrayRef; index: size_t): JSStringRef; cdecl; external;
procedure JSPropertyNameAccumulatorAddName(accumulator: JSPropertyNameAccumulatorRef; propertyName: JSStringRef); cdecl; external;
{$endif}

{$endif}
