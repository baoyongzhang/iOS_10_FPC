{ Parsed from JavaScriptCore.framework JSValueRef.h }

{$ifndef JSValueRef_h}

{$ifdef TYPES}
const
  kJSTypeUndefined = 0;
  kJSTypeNull = 1;
  kJSTypeBoolean = 2;
  kJSTypeNumber = 3;
  kJSTypeString = 4;
  kJSTypeObject = 5;
type
  JSType = clong;
const
  kJSTypedArrayTypeInt8Array = 0;
  kJSTypedArrayTypeInt16Array = 1;
  kJSTypedArrayTypeInt32Array = 2;
  kJSTypedArrayTypeUint8Array = 3;
  kJSTypedArrayTypeUint8ClampedArray = 4;
  kJSTypedArrayTypeUint16Array = 5;
  kJSTypedArrayTypeUint32Array = 6;
  kJSTypedArrayTypeFloat32Array = 7;
  kJSTypedArrayTypeFloat64Array = 8;
  kJSTypedArrayTypeArrayBuffer = 9;
  kJSTypedArrayTypeNone = 10;
type
  JSTypedArrayType = clong;
{$endif}

{$ifdef FUNCTIONS}
function JSValueGetType(ctx: JSContextRef; param2: JSValueRef): JSType; cdecl; external;
function JSValueIsUndefined(ctx: JSContextRef; value: JSValueRef): cbool; cdecl; external;
function JSValueIsNull(ctx: JSContextRef; value: JSValueRef): cbool; cdecl; external;
function JSValueIsBoolean(ctx: JSContextRef; value: JSValueRef): cbool; cdecl; external;
function JSValueIsNumber(ctx: JSContextRef; value: JSValueRef): cbool; cdecl; external;
function JSValueIsString(ctx: JSContextRef; value: JSValueRef): cbool; cdecl; external;
function JSValueIsObject(ctx: JSContextRef; value: JSValueRef): cbool; cdecl; external;
function JSValueIsObjectOfClass(ctx: JSContextRef; value: JSValueRef; jsClass: JSClassRef): cbool; cdecl; external;
function JSValueIsArray(ctx: JSContextRef; value: JSValueRef): cbool; cdecl; external; { available in 10_11, 9_0 }
function JSValueIsDate(ctx: JSContextRef; value: JSValueRef): cbool; cdecl; external; { available in 10_11, 9_0 }
function JSValueGetTypedArrayType(ctx: JSContextRef; value: JSValueRef; exception: JSValueRef): JSTypedArrayType; cdecl; external; { available in 10_12, 10_0 }
function JSValueIsEqual(ctx: JSContextRef; a: JSValueRef; b: JSValueRef; exception: JSValueRef): cbool; cdecl; external;
function JSValueIsStrictEqual(ctx: JSContextRef; a: JSValueRef; b: JSValueRef): cbool; cdecl; external;
function JSValueIsInstanceOfConstructor(ctx: JSContextRef; value: JSValueRef; constructor: JSObjectRef; exception: JSValueRef): cbool; cdecl; external;
function JSValueMakeUndefined(ctx: JSContextRef): JSValueRef; cdecl; external;
function JSValueMakeNull(ctx: JSContextRef): JSValueRef; cdecl; external;
function JSValueMakeBoolean(ctx: JSContextRef; boolean: cbool): JSValueRef; cdecl; external;
function JSValueMakeNumber(ctx: JSContextRef; number: double): JSValueRef; cdecl; external;
function JSValueMakeString(ctx: JSContextRef; string_: JSStringRef): JSValueRef; cdecl; external;
function JSValueMakeFromJSONString(ctx: JSContextRef; string_: JSStringRef): JSValueRef; cdecl; external; { available in 10_7, 7_0 }
function JSValueCreateJSONString(ctx: JSContextRef; value: JSValueRef; indent: cuint; exception: JSValueRef): JSStringRef; cdecl; external; { available in 10_7, 7_0 }
function JSValueToBoolean(ctx: JSContextRef; value: JSValueRef): cbool; cdecl; external;
function JSValueToNumber(ctx: JSContextRef; value: JSValueRef; exception: JSValueRef): double; cdecl; external;
function JSValueToStringCopy(ctx: JSContextRef; value: JSValueRef; exception: JSValueRef): JSStringRef; cdecl; external;
function JSValueToObject(ctx: JSContextRef; value: JSValueRef; exception: JSValueRef): JSObjectRef; cdecl; external;
procedure JSValueProtect(ctx: JSContextRef; value: JSValueRef); cdecl; external;
procedure JSValueUnprotect(ctx: JSContextRef; value: JSValueRef); cdecl; external;
{$endif}

{$endif}
