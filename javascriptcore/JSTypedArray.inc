{ Parsed from JavaScriptCore.framework JSTypedArray.h }

{$ifndef JSTypedArray_h}

{$ifdef FUNCTIONS}
function JSObjectMakeTypedArray(ctx: JSContextRef; arrayType: JSTypedArrayType; length: size_t; exception: JSValueRef): JSObjectRef; cdecl; external; { available in 10_12, 10_0 }
function JSObjectMakeTypedArrayWithBytesNoCopy(ctx: JSContextRef; arrayType: JSTypedArrayType; bytes: pointer; byteLength: size_t; bytesDeallocator: JSTypedArrayBytesDeallocator; deallocatorContext: pointer; exception: JSValueRef): JSObjectRef; cdecl; external; { available in 10_12, 10_0 }
function JSObjectMakeTypedArrayWithArrayBuffer(ctx: JSContextRef; arrayType: JSTypedArrayType; buffer: JSObjectRef; exception: JSValueRef): JSObjectRef; cdecl; external; { available in 10_12, 10_0 }
function JSObjectMakeTypedArrayWithArrayBufferAndOffset(ctx: JSContextRef; arrayType: JSTypedArrayType; buffer: JSObjectRef; byteOffset: size_t; length: size_t; exception: JSValueRef): JSObjectRef; cdecl; external; { available in 10_12, 10_0 }
function JSObjectGetTypedArrayBytesPtr(ctx: JSContextRef; object_: JSObjectRef; exception: JSValueRef): pointer; cdecl; external; { available in 10_12, 10_0 }
function JSObjectGetTypedArrayLength(ctx: JSContextRef; object_: JSObjectRef; exception: JSValueRef): size_t; cdecl; external; { available in 10_12, 10_0 }
function JSObjectGetTypedArrayByteLength(ctx: JSContextRef; object_: JSObjectRef; exception: JSValueRef): size_t; cdecl; external; { available in 10_12, 10_0 }
function JSObjectGetTypedArrayByteOffset(ctx: JSContextRef; object_: JSObjectRef; exception: JSValueRef): size_t; cdecl; external; { available in 10_12, 10_0 }
function JSObjectGetTypedArrayBuffer(ctx: JSContextRef; object_: JSObjectRef; exception: JSValueRef): JSObjectRef; cdecl; external; { available in 10_12, 10_0 }
function JSObjectMakeArrayBufferWithBytesNoCopy(ctx: JSContextRef; bytes: pointer; byteLength: size_t; bytesDeallocator: JSTypedArrayBytesDeallocator; deallocatorContext: pointer; exception: JSValueRef): JSObjectRef; cdecl; external; { available in 10_12, 10_0 }
function JSObjectGetArrayBufferBytesPtr(ctx: JSContextRef; object_: JSObjectRef; exception: JSValueRef): pointer; cdecl; external; { available in 10_12, 10_0 }
function JSObjectGetArrayBufferByteLength(ctx: JSContextRef; object_: JSObjectRef; exception: JSValueRef): size_t; cdecl; external; { available in 10_12, 10_0 }
{$endif}

{$endif}
