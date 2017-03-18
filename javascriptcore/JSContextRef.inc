{ Parsed from JavaScriptCore.framework JSContextRef.h }

{$ifndef JSContextRef_h}

{$ifdef FUNCTIONS}
function JSContextGroupCreate: JSContextGroupRef; cdecl; external; { available in 10_6, 7_0 }
function JSContextGroupRetain(group: JSContextGroupRef): JSContextGroupRef; cdecl; external; { available in 10_6, 7_0 }
procedure JSContextGroupRelease(group: JSContextGroupRef); cdecl; external; { available in 10_6, 7_0 }
function JSGlobalContextCreate(globalObjectClass: JSClassRef): JSGlobalContextRef; cdecl; external; { available in 10_5, 7_0 }
function JSGlobalContextCreateInGroup(group: JSContextGroupRef; globalObjectClass: JSClassRef): JSGlobalContextRef; cdecl; external; { available in 10_6, 7_0 }
function JSGlobalContextRetain(ctx: JSGlobalContextRef): JSGlobalContextRef; cdecl; external;
procedure JSGlobalContextRelease(ctx: JSGlobalContextRef); cdecl; external;
function JSContextGetGlobalObject(ctx: JSContextRef): JSObjectRef; cdecl; external;
function JSContextGetGroup(ctx: JSContextRef): JSContextGroupRef; cdecl; external; { available in 10_6, 7_0 }
function JSContextGetGlobalContext(ctx: JSContextRef): JSGlobalContextRef; cdecl; external; { available in 10_7, 7_0 }
function JSGlobalContextCopyName(ctx: JSGlobalContextRef): JSStringRef; cdecl; external; { available in 10_10, 8_0 }
procedure JSGlobalContextSetName(ctx: JSGlobalContextRef; name: JSStringRef); cdecl; external; { available in 10_10, 8_0 }
{$endif}

{$endif}
