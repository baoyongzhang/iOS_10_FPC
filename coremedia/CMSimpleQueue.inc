{ Parsed from CoreMedia.framework CMSimpleQueue.h }

{$ifndef CMSIMPLEQUEUE_H}

{$ifdef TYPES}
type
  CMSimpleQueueRef = OpaqueType;
{$endif}

{$ifdef FUNCTIONS}
function CMSimpleQueueGetTypeID: CFTypeID; cdecl; external; { available starting in __MAC_10_7, __IPHONE_5_0 }
function CMSimpleQueueCreate(allocator: CFAllocatorRef CM_NULLABLE; capacity: cint32; queueOut: CM_RETURNS_RETAINED_PARAMETER CMSimpleQueueRef CM_NULLABLE* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_7, __IPHONE_5_0 }
function CMSimpleQueueEnqueue(queue: CMSimpleQueueRef CM_NONNULL; element: void* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_7, __IPHONE_5_0 }
function CMSimpleQueueDequeue(queue: CMSimpleQueueRef CM_NONNULL): void * CM_NULLABLE; cdecl; external; { available starting in __MAC_10_7, __IPHONE_5_0 }
function CMSimpleQueueGetHead(queue: CMSimpleQueueRef CM_NONNULL): void * CM_NULLABLE; cdecl; external; { available starting in __MAC_10_7, __IPHONE_5_0 }
function CMSimpleQueueReset(queue: CMSimpleQueueRef CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_7, __IPHONE_5_0 }
function CMSimpleQueueGetCapacity(queue: CMSimpleQueueRef CM_NONNULL): cint32; cdecl; external; { available starting in __MAC_10_7, __IPHONE_5_0 }
function CMSimpleQueueGetCount(queue: CMSimpleQueueRef CM_NONNULL): cint32; cdecl; external; { available starting in __MAC_10_7, __IPHONE_5_0 }
{$endif}

{$endif}
