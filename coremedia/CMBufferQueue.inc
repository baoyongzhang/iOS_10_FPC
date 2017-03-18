{ Parsed from CoreMedia.framework CMBufferQueue.h }

{$ifndef CMBUFFERQUEUE_H}

{$ifdef TYPES}
type
  CMBufferQueueRef = OpaqueType;
  CMBufferRef = CM_BRIDGED_TYPE(id) CFTypeRef;
  CMBufferRefPtr = ^CMBufferRef;
  CMBufferGetTimeCallback = function (buf: CMBufferRef CM_NONNULL; refcon: void* CM_NULLABLE): CMTime; cdecl;
  CMBufferGetBooleanCallback = function (buf: CMBufferRef CM_NONNULL; refcon: void* CM_NULLABLE): Boolean; cdecl;
  CMBufferCompareCallback = function (buf1: CMBufferRef CM_NONNULL; buf2: CMBufferRef CM_NONNULL; refcon: void* CM_NULLABLE): CFComparisonResult; cdecl;
  CMBufferGetSizeCallback = function (buf: CMBufferRef CM_NONNULL; refcon: void* CM_NULLABLE): size_t; cdecl;

type
  CMBufferCallbacks = record
    version: cuint32;
    refcon: void *CM_NULLABLE;
    getDecodeTimeStamp: CMBufferGetTimeCallback CM_NULLABLE;
    getPresentationTimeStamp: CMBufferGetTimeCallback CM_NULLABLE;
    getDuration: CMBufferGetTimeCallback CM_NONNULL;
    isDataReady: CMBufferGetBooleanCallback CM_NULLABLE;
    compare: CMBufferCompareCallback CM_NULLABLE;
    dataBecameReadyNotification: CFStringRef CM_NULLABLE;
    getSize: CMBufferGetSizeCallback CM_NULLABLE;
  end;
type
  CMBufferCallbacksPtr = ^CMBufferCallbacks;
{$endif}

{$ifdef FUNCTIONS}
function CMBufferQueueGetCallbacksForUnsortedSampleBuffers: CMBufferCallbacks * CM_NONNULL; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMBufferQueueGetCallbacksForSampleBuffersSortedByOutputPTS: CMBufferCallbacks * CM_NONNULL; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_3 }
function CMBufferQueueCreate(allocator: CFAllocatorRef CM_NULLABLE; capacity: CMItemCount; callbacks: CMBufferCallbacks* CM_NONNULL; queueOut: CM_RETURNS_RETAINED_PARAMETER CMBufferQueueRef CM_NULLABLE* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMBufferQueueGetTypeID: CFTypeID; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMBufferQueueEnqueue(queue: CMBufferQueueRef CM_NONNULL; buf: CMBufferRef CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMBufferQueueDequeueAndRetain(queue: CMBufferQueueRef CM_NONNULL): CMBufferRef CM_NULLABLE; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMBufferQueueDequeueIfDataReadyAndRetain(queue: CMBufferQueueRef CM_NONNULL): CMBufferRef CM_NULLABLE; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMBufferQueueGetHead(queue: CMBufferQueueRef CM_NONNULL): CMBufferRef CM_NULLABLE; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMBufferQueueIsEmpty(queue: CMBufferQueueRef CM_NONNULL): Boolean; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMBufferQueueMarkEndOfData(queue: CMBufferQueueRef CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMBufferQueueContainsEndOfData(queue: CMBufferQueueRef CM_NONNULL): Boolean; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMBufferQueueIsAtEndOfData(queue: CMBufferQueueRef CM_NONNULL): Boolean; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMBufferQueueReset(queue: CMBufferQueueRef CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMBufferQueueGetBufferCount(queue: CMBufferQueueRef CM_NONNULL): CMItemCount; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMBufferQueueGetDuration(queue: CMBufferQueueRef CM_NONNULL): CMTime; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMBufferQueueGetMinDecodeTimeStamp(queue: CMBufferQueueRef CM_NONNULL): CMTime; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMBufferQueueGetFirstDecodeTimeStamp(queue: CMBufferQueueRef CM_NONNULL): CMTime; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMBufferQueueGetMinPresentationTimeStamp(queue: CMBufferQueueRef CM_NONNULL): CMTime; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMBufferQueueGetFirstPresentationTimeStamp(queue: CMBufferQueueRef CM_NONNULL): CMTime; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMBufferQueueGetMaxPresentationTimeStamp(queue: CMBufferQueueRef CM_NONNULL): CMTime; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMBufferQueueGetEndPresentationTimeStamp(queue: CMBufferQueueRef CM_NONNULL): CMTime; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMBufferQueueGetTotalSize(queue: CMBufferQueueRef CM_NONNULL): size_t; cdecl; external; { available starting in __MAC_10_10,__IPHONE_7_1 }
{$endif}

{$ifdef TYPES}
type
  CMBufferQueueTriggerToken = OpaqueType;
  CMBufferQueueTriggerCallback = procedure (triggerRefcon: void* CM_NULLABLE; triggerToken: CMBufferQueueTriggerToken CM_NONNULL); cdecl;
  CMBufferQueueTriggerCondition = cint32;
  CMBufferQueueTriggerConditionPtr = ^CMBufferQueueTriggerCondition;
{$endif}

{$ifdef FUNCTIONS}
function CMBufferQueueInstallTrigger(queue: CMBufferQueueRef CM_NONNULL; triggerCallback: CMBufferQueueTriggerCallback CM_NULLABLE; triggerRefcon: void* CM_NULLABLE; triggerCondition: CMBufferQueueTriggerCondition; triggerTime: CMTime; triggerTokenOut: CMBufferQueueTriggerToken CM_NULLABLE* CM_NULLABLE): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMBufferQueueInstallTriggerWithIntegerThreshold(queue: CMBufferQueueRef CM_NONNULL; triggerCallback: CMBufferQueueTriggerCallback CM_NULLABLE; triggerRefcon: void* CM_NULLABLE; triggerCondition: CMBufferQueueTriggerCondition; triggerThreshold: CMItemCount; triggerTokenOut: CMBufferQueueTriggerToken CM_NULLABLE* CM_NULLABLE): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMBufferQueueRemoveTrigger(queue: CMBufferQueueRef CM_NONNULL; triggerToken: CMBufferQueueTriggerToken CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMBufferQueueTestTrigger(queue: CMBufferQueueRef CM_NONNULL; triggerToken: CMBufferQueueTriggerToken CM_NONNULL): Boolean; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
{$endif}

{$ifdef TYPES}
type
  CMBufferValidationCallback = function (queue: CMBufferQueueRef CM_NONNULL; buf: CMBufferRef CM_NONNULL; validationRefCon: void* CM_NULLABLE): OSStatus; cdecl;
{$endif}

{$ifdef FUNCTIONS}
function CMBufferQueueSetValidationCallback(queue: CMBufferQueueRef CM_NONNULL; validationCallback: CMBufferValidationCallback CM_NONNULL; validationRefCon: void* CM_NULLABLE): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
{$endif}

{$endif}
