{ Parsed from CoreFoundation.framework CFBinaryHeap.h }

{$if  not (defined(__COREFOUNDATION_CFBINARYHEAP__))}
{$ifdef TYPES}
const
  __COREFOUNDATION_CFBINARYHEAP__ = 1;

type
  CFBinaryHeapRef = OpaqueType;

  CFBinaryHeapCompareContext = record
    version: CFIndex;
    info: pointer;
    retain: function (info: pointer): pointer; cdecl;
    release: procedure (info: pointer); cdecl;
    copyDescription: function (info: pointer): CFStringRef; cdecl;
  end;
type
  CFBinaryHeapCompareContextPtr = ^CFBinaryHeapCompareContext;
type
  CFBinaryHeapCallBacks = record
    version: CFIndex;
    retain: function (allocator: CFAllocatorRef; ptr: pointer): pointer; cdecl;
    release: procedure (allocator: CFAllocatorRef; ptr: pointer); cdecl;
    copyDescription: function (ptr: pointer): CFStringRef; cdecl;
    compare: function (ptr1: pointer; ptr2: pointer; context: pointer): CFComparisonResult; cdecl;
  end;
type
  CFBinaryHeapCallBacksPtr = ^CFBinaryHeapCallBacks;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCFStringBinaryHeapCallBacks: CFBinaryHeapCallBacks; cvar; external;
{$endif}

{$ifdef TYPES}
type
  CFBinaryHeapApplierFunction = procedure (val: pointer; context: pointer); cdecl;
{$endif}

{$ifdef FUNCTIONS}
function CFBinaryHeapCreate(allocator: CFAllocatorRef; capacity: CFIndex; callBacks: CFBinaryHeapCallBacksPtr; compareContext: CFBinaryHeapCompareContextPtr): CFBinaryHeapRef; cdecl; external;
function CFBinaryHeapCreateCopy(allocator: CFAllocatorRef; capacity: CFIndex; heap: CFBinaryHeapRef): CFBinaryHeapRef; cdecl; external;
function CFBinaryHeapGetCount(heap: CFBinaryHeapRef): CFIndex; cdecl; external;
function CFBinaryHeapGetCountOfValue(heap: CFBinaryHeapRef; value: pointer): CFIndex; cdecl; external;
function CFBinaryHeapContainsValue(heap: CFBinaryHeapRef; value: pointer): Boolean; cdecl; external;
function CFBinaryHeapGetMinimum(heap: CFBinaryHeapRef): pointer; cdecl; external;
function CFBinaryHeapGetMinimumIfPresent(heap: CFBinaryHeapRef; value: pointer): Boolean; cdecl; external;
procedure CFBinaryHeapGetValues(heap: CFBinaryHeapRef; values: pointer); cdecl; external;
procedure CFBinaryHeapApplyFunction(heap: CFBinaryHeapRef; applier: CFBinaryHeapApplierFunction; context: pointer); cdecl; external;
procedure CFBinaryHeapAddValue(heap: CFBinaryHeapRef; value: pointer); cdecl; external;
procedure CFBinaryHeapRemoveMinimumValue(heap: CFBinaryHeapRef); cdecl; external;
procedure CFBinaryHeapRemoveAllValues(heap: CFBinaryHeapRef); cdecl; external;
{$endif}

{$endif}
