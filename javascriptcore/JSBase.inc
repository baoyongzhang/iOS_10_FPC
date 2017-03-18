{ Parsed from JavaScriptCore.framework JSBase.h }

{$ifndef JSBase_h}

{$ifdef TYPES}
type
  JSContextGroupRef = OpaqueType;
  JSContextRef = OpaqueType;
  JSGlobalContextRef = OpaqueType;
  JSStringRef = OpaqueType;
  JSClassRef = OpaqueType;
  JSPropertyNameArrayRef = OpaqueType;
  JSPropertyNameAccumulatorRef = OpaqueType;
  JSTypedArrayBytesDeallocator = procedure (bytes: pointer; deallocatorContext: pointer); cdecl;
  JSValueRef = OpaqueType;
  JSObjectRef = OpaqueType;
{$endif}

{$ifdef FUNCTIONS}
function JSEvaluateScript(ctx: JSContextRef; script: JSStringRef; thisObject: JSObjectRef; sourceURL: JSStringRef; startingLineNumber: cint; exception: JSValueRef): JSValueRef; cdecl; external;
function JSCheckScriptSyntax(ctx: JSContextRef; script: JSStringRef; sourceURL: JSStringRef; startingLineNumber: cint; exception: JSValueRef): cbool; cdecl; external;
procedure JSGarbageCollect(ctx: JSContextRef); cdecl; external;
{$endif}

{$endif}
