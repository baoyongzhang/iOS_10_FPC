{ Parsed from CoreMedia.framework CMBlockBuffer.h }

{$ifndef CMBLOCKBUFFER_H}

{$ifdef TYPES}
type
  CMBlockBufferFlags = cuint32;
  CMBlockBufferFlagsPtr = ^CMBlockBufferFlags;
{$endif}

{$ifdef TYPES}
type
  CMBlockBufferRef = OpaqueType;

type
  CMBlockBufferCustomBlockSource = record
    version: cuint32;
    refCon, sizeInBytes): void *CM_NULLABLE ( *CM_NULLABLE AllocateBlock)(void *CM_NULLABLE size_t;
    refCon_, doomedMemoryBlock, sizeInBytes)_: ( *CM_NULLABLE FreeBlock)(void *CM_NULLABLE void *CM_NONNULL size_t;
    refCon_: void *CM_NULLABLE;
  end;
type
  CMBlockBufferCustomBlockSourcePtr = ^CMBlockBufferCustomBlockSource;
{$endif}

{$ifdef FUNCTIONS}
function CMBlockBufferCreateEmpty(structureAllocator: CFAllocatorRef CM_NULLABLE; subBlockCapacity: cuint32; flags: CMBlockBufferFlags; newBBufOut: CM_RETURNS_RETAINED_PARAMETER CMBlockBufferRef CM_NULLABLE* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMBlockBufferCreateWithMemoryBlock(structureAllocator: CFAllocatorRef CM_NULLABLE; memoryBlock: void* CM_NULLABLE; blockLength: size_t; blockAllocator: CFAllocatorRef CM_NULLABLE; customBlockSource: CMBlockBufferCustomBlockSource* CM_NULLABLE; offsetToData: size_t; dataLength: size_t; flags: CMBlockBufferFlags; newBBufOut: CM_RETURNS_RETAINED_PARAMETER CMBlockBufferRef CM_NULLABLE* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMBlockBufferCreateWithBufferReference(structureAllocator: CFAllocatorRef CM_NULLABLE; targetBuffer: CMBlockBufferRef CM_NONNULL; offsetToData: size_t; dataLength: size_t; flags: CMBlockBufferFlags; newBBufOut: CM_RETURNS_RETAINED_PARAMETER CMBlockBufferRef CM_NULLABLE* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMBlockBufferCreateContiguous(structureAllocator: CFAllocatorRef CM_NULLABLE; sourceBuffer: CMBlockBufferRef CM_NONNULL; blockAllocator: CFAllocatorRef CM_NULLABLE; customBlockSource: CMBlockBufferCustomBlockSource* CM_NULLABLE; offsetToData: size_t; dataLength: size_t; flags: CMBlockBufferFlags; newBBufOut: CM_RETURNS_RETAINED_PARAMETER CMBlockBufferRef CM_NULLABLE* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMBlockBufferGetTypeID: CFTypeID; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMBlockBufferAppendMemoryBlock(theBuffer: CMBlockBufferRef CM_NONNULL; memoryBlock: void* CM_NULLABLE; blockLength: size_t; blockAllocator: CFAllocatorRef CM_NULLABLE; customBlockSource: CMBlockBufferCustomBlockSource* CM_NULLABLE; offsetToData: size_t; dataLength: size_t; flags: CMBlockBufferFlags): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMBlockBufferAppendBufferReference(theBuffer: CMBlockBufferRef CM_NONNULL; targetBBuf: CMBlockBufferRef CM_NONNULL; offsetToData: size_t; dataLength: size_t; flags: CMBlockBufferFlags): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMBlockBufferAssureBlockMemory(theBuffer: CMBlockBufferRef CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMBlockBufferAccessDataBytes(theBuffer: CMBlockBufferRef CM_NONNULL; offset: size_t; length: size_t; temporaryBlock: void* CM_NONNULL; returnedPointer: char* CM_NULLABLE* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMBlockBufferCopyDataBytes(theSourceBuffer: CMBlockBufferRef CM_NONNULL; offsetToData: size_t; dataLength: size_t; destination: void* CM_NONNULL): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMBlockBufferReplaceDataBytes(sourceBytes: void* CM_NONNULL; destinationBuffer: CMBlockBufferRef CM_NONNULL; offsetIntoDestination: size_t; dataLength: size_t): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMBlockBufferFillDataBytes(fillByte: char; destinationBuffer: CMBlockBufferRef CM_NONNULL; offsetIntoDestination: size_t; dataLength: size_t): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMBlockBufferGetDataPointer(theBuffer: CMBlockBufferRef CM_NONNULL; offset: size_t; lengthAtOffset: size_t* CM_NULLABLE; totalLength: size_t* CM_NULLABLE; dataPointer: char* CM_NULLABLE* CM_NULLABLE): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMBlockBufferGetDataLength(theBuffer: CMBlockBufferRef CM_NONNULL): size_t; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMBlockBufferIsRangeContiguous(theBuffer: CMBlockBufferRef CM_NONNULL; offset: size_t; length: size_t): Boolean; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
function CMBlockBufferIsEmpty(theBuffer: CMBlockBufferRef CM_NONNULL): Boolean; cdecl; external; { available starting in __MAC_10_7,__IPHONE_4_0 }
{$endif}

{$endif}
