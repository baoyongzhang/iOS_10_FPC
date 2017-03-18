{ Parsed from CoreFoundation.framework CFBag.h }

{$if  not (defined(__COREFOUNDATION_CFBAG__))}
{$ifdef TYPES}
const
  __COREFOUNDATION_CFBAG__ = 1;

type
  CFBagRef = OpaqueType;
  CFMutableBagRef = OpaqueType;
  CFBagRetainCallBack = function (allocator: CFAllocatorRef; value: pointer): pointer; cdecl;
  CFBagReleaseCallBack = procedure (allocator: CFAllocatorRef; value: pointer); cdecl;
  CFBagCopyDescriptionCallBack = function (value: pointer): CFStringRef; cdecl;
  CFBagEqualCallBack = function (value1: pointer; value2: pointer): Boolean; cdecl;
  CFBagHashCallBack = function (value: pointer): CFHashCode; cdecl;

type
  CFBagCallBacks = record
    version: CFIndex;
    retain: CFBagRetainCallBack;
    release: CFBagReleaseCallBack;
    copyDescription: CFBagCopyDescriptionCallBack;
    equal: CFBagEqualCallBack;
    hash: CFBagHashCallBack;
  end;
type
  CFBagCallBacksPtr = ^CFBagCallBacks;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCFTypeBagCallBacks: CFBagCallBacks; cvar; external;
  kCFCopyStringBagCallBacks: CFBagCallBacks; cvar; external;
{$endif}

{$ifdef TYPES}
type
  CFBagApplierFunction = procedure (value: pointer; context: pointer); cdecl;
{$endif}

{$ifdef FUNCTIONS}
function CFBagCreate(allocator: CFAllocatorRef; values: pointer; numValues: CFIndex; callBacks: CFBagCallBacksPtr): CFBagRef; cdecl; external;
function CFBagCreateCopy(allocator: CFAllocatorRef; theBag: CFBagRef): CFBagRef; cdecl; external;
function CFBagCreateMutable(allocator: CFAllocatorRef; capacity: CFIndex; callBacks: CFBagCallBacksPtr): CFMutableBagRef; cdecl; external;
function CFBagCreateMutableCopy(allocator: CFAllocatorRef; capacity: CFIndex; theBag: CFBagRef): CFMutableBagRef; cdecl; external;
function CFBagGetCount(theBag: CFBagRef): CFIndex; cdecl; external;
function CFBagGetCountOfValue(theBag: CFBagRef; value: pointer): CFIndex; cdecl; external;
function CFBagContainsValue(theBag: CFBagRef; value: pointer): Boolean; cdecl; external;
function CFBagGetValue(theBag: CFBagRef; value: pointer): pointer; cdecl; external;
function CFBagGetValueIfPresent(theBag: CFBagRef; candidate: pointer; var value: pointer): Boolean; cdecl; external;
procedure CFBagGetValues(theBag: CFBagRef; values: pointer); cdecl; external;
procedure CFBagApplyFunction(theBag: CFBagRef; applier: CFBagApplierFunction; context: pointer); cdecl; external;
procedure CFBagAddValue(theBag: CFMutableBagRef; value: pointer); cdecl; external;
procedure CFBagReplaceValue(theBag: CFMutableBagRef; value: pointer); cdecl; external;
procedure CFBagSetValue(theBag: CFMutableBagRef; value: pointer); cdecl; external;
procedure CFBagRemoveValue(theBag: CFMutableBagRef; value: pointer); cdecl; external;
procedure CFBagRemoveAllValues(theBag: CFMutableBagRef); cdecl; external;
{$endif}

{$endif}
