{ Parsed from CoreFoundation.framework CFBase.h }

{$if  not (defined(__COREFOUNDATION_CFBASE__))}

{$if (defined(_MSC_VER)) and (defined(_M_IX86))}
{$ifdef TYPES}
const
  __i386__ = 1;
{$endif}

{$endif}

{$if  not (defined(__MACTYPES__))}

{$if  not (defined(_OS_OSTYPES_H))}

{$ifdef TYPES}
type
  UInt8 = char;
  UInt8Ptr = ^UInt8;
  SInt8 = char;
  SInt8Ptr = ^SInt8;
  UInt16 = cushort;
  UInt16Ptr = ^UInt16;
  SInt16 = cshort;
  SInt16Ptr = ^SInt16;
  UInt32 = cuint;
  UInt32Ptr = ^UInt32;
  SInt32 = cint;
  SInt32Ptr = ^SInt32;
  UInt64 = cuint64;
  UInt64Ptr = ^UInt64;
  SInt64 = cint64;
  SInt64Ptr = ^SInt64;
  OSStatus = SInt32;
  OSStatusPtr = ^OSStatus;
{$endif}

{$endif}
{$ifdef TYPES}
type
  Float32 = single;
  Float32Ptr = ^Float32;
  Float64 = double;
  Float64Ptr = ^Float64;
  UniChar = cushort;
  UniCharPtr = ^UniChar;
  UniCharCount = culong;
  UniCharCountPtr = ^UniCharCount;
  StringPtr = ^char;
  ConstStringPtr = ^char;
  Str255 = array[0..255] of char;
  Str255Ptr = ^Str255;
  ConstStr255Param = ^char;
  OSErr = SInt16;
  OSErrPtr = ^OSErr;
  RegionCode = SInt16;
  RegionCodePtr = ^RegionCode;
  LangCode = SInt16;
  LangCodePtr = ^LangCode;
  ScriptCode = SInt16;
  ScriptCodePtr = ^ScriptCode;
  FourCharCode = UInt32;
  FourCharCodePtr = ^FourCharCode;
  OSType = FourCharCode;
  OSTypePtr = ^OSType;
  Byte = UInt8;
  BytePtr = ^Byte;
  SignedByte = SInt8;
  SignedBytePtr = ^SignedByte;
{$endif}

{$endif}

{$if  not (defined(__MACTYPES__)) or ((defined(UNIVERSAL_INTERFACES_VERSION)) and (UNIVERSAL_INTERFACES_VERSION < $0340))}

{$endif}

{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCFCoreFoundationVersionNumber: double; cvar; external;
{$endif}

{$if defined(TARGET_OS_MAC)}
{$ifdef TYPES}
const
  kCFCoreFoundationVersionNumber10_0 = 196.40;
  kCFCoreFoundationVersionNumber10_0_3 = 196.50;
  kCFCoreFoundationVersionNumber10_1 = 226.00;
  kCFCoreFoundationVersionNumber10_1_1 = 226.00;
  kCFCoreFoundationVersionNumber10_1_2 = 227.20;
  kCFCoreFoundationVersionNumber10_1_3 = 227.20;
  kCFCoreFoundationVersionNumber10_1_4 = 227.30;
  kCFCoreFoundationVersionNumber10_2 = 263.00;
  kCFCoreFoundationVersionNumber10_2_1 = 263.10;
  kCFCoreFoundationVersionNumber10_2_2 = 263.10;
  kCFCoreFoundationVersionNumber10_2_3 = 263.30;
  kCFCoreFoundationVersionNumber10_2_4 = 263.30;
  kCFCoreFoundationVersionNumber10_2_5 = 263.50;
  kCFCoreFoundationVersionNumber10_2_6 = 263.50;
  kCFCoreFoundationVersionNumber10_2_7 = 263.50;
  kCFCoreFoundationVersionNumber10_2_8 = 263.50;
  kCFCoreFoundationVersionNumber10_3 = 299.00;
  kCFCoreFoundationVersionNumber10_3_1 = 299.00;
  kCFCoreFoundationVersionNumber10_3_2 = 299.00;
  kCFCoreFoundationVersionNumber10_3_3 = 299.30;
  kCFCoreFoundationVersionNumber10_3_4 = 299.31;
  kCFCoreFoundationVersionNumber10_3_5 = 299.31;
  kCFCoreFoundationVersionNumber10_3_6 = 299.32;
  kCFCoreFoundationVersionNumber10_3_7 = 299.33;
  kCFCoreFoundationVersionNumber10_3_8 = 299.33;
  kCFCoreFoundationVersionNumber10_3_9 = 299.35;
  kCFCoreFoundationVersionNumber10_4 = 368.00;
  kCFCoreFoundationVersionNumber10_4_1 = 368.10;
  kCFCoreFoundationVersionNumber10_4_2 = 368.11;
  kCFCoreFoundationVersionNumber10_4_3 = 368.18;
  kCFCoreFoundationVersionNumber10_4_4_Intel = 368.26;
  kCFCoreFoundationVersionNumber10_4_4_PowerPC = 368.25;
  kCFCoreFoundationVersionNumber10_4_5_Intel = 368.26;
  kCFCoreFoundationVersionNumber10_4_5_PowerPC = 368.25;
  kCFCoreFoundationVersionNumber10_4_6_Intel = 368.26;
  kCFCoreFoundationVersionNumber10_4_6_PowerPC = 368.25;
  kCFCoreFoundationVersionNumber10_4_7 = 368.27;
  kCFCoreFoundationVersionNumber10_4_8 = 368.27;
  kCFCoreFoundationVersionNumber10_4_9 = 368.28;
  kCFCoreFoundationVersionNumber10_4_10 = 368.28;
  kCFCoreFoundationVersionNumber10_4_11 = 368.31;
  kCFCoreFoundationVersionNumber10_5 = 476.00;
  kCFCoreFoundationVersionNumber10_5_1 = 476.00;
  kCFCoreFoundationVersionNumber10_5_2 = 476.10;
  kCFCoreFoundationVersionNumber10_5_3 = 476.13;
  kCFCoreFoundationVersionNumber10_5_4 = 476.14;
  kCFCoreFoundationVersionNumber10_5_5 = 476.15;
  kCFCoreFoundationVersionNumber10_5_6 = 476.17;
  kCFCoreFoundationVersionNumber10_5_7 = 476.18;
  kCFCoreFoundationVersionNumber10_5_8 = 476.19;
  kCFCoreFoundationVersionNumber10_6 = 550.00;
  kCFCoreFoundationVersionNumber10_6_1 = 550.00;
  kCFCoreFoundationVersionNumber10_6_2 = 550.13;
  kCFCoreFoundationVersionNumber10_6_3 = 550.19;
  kCFCoreFoundationVersionNumber10_6_4 = 550.29;
  kCFCoreFoundationVersionNumber10_6_5 = 550.42;
  kCFCoreFoundationVersionNumber10_6_6 = 550.42;
  kCFCoreFoundationVersionNumber10_6_7 = 550.42;
  kCFCoreFoundationVersionNumber10_6_8 = 550.43;
  kCFCoreFoundationVersionNumber10_7 = 635.00;
  kCFCoreFoundationVersionNumber10_7_1 = 635.00;
  kCFCoreFoundationVersionNumber10_7_2 = 635.15;
  kCFCoreFoundationVersionNumber10_7_3 = 635.19;
  kCFCoreFoundationVersionNumber10_7_4 = 635.21;
  kCFCoreFoundationVersionNumber10_7_5 = 635.21;
  kCFCoreFoundationVersionNumber10_8 = 744.00;
  kCFCoreFoundationVersionNumber10_8_1 = 744.00;
  kCFCoreFoundationVersionNumber10_8_2 = 744.12;
  kCFCoreFoundationVersionNumber10_8_3 = 744.18;
  kCFCoreFoundationVersionNumber10_8_4 = 744.19;
  kCFCoreFoundationVersionNumber10_9 = 855.11;
  kCFCoreFoundationVersionNumber10_9_1 = 855.11;
  kCFCoreFoundationVersionNumber10_9_2 = 855.14;
  kCFCoreFoundationVersionNumber10_10 = 1151.16;
  kCFCoreFoundationVersionNumber10_10_1 = 1151.16;
  kCFCoreFoundationVersionNumber10_10_2 = 1152;
  kCFCoreFoundationVersionNumber10_10_3 = 1153.18;
  kCFCoreFoundationVersionNumber10_10_4 = 1153.18;
  kCFCoreFoundationVersionNumber10_10_5 = 1153.18;
  kCFCoreFoundationVersionNumber10_10_Max = 1199;
  kCFCoreFoundationVersionNumber10_11 = 1253;
  kCFCoreFoundationVersionNumber10_11_1 = 1255.1;
  kCFCoreFoundationVersionNumber10_11_2 = 1256.14;
  kCFCoreFoundationVersionNumber10_11_3 = 1256.14;
  kCFCoreFoundationVersionNumber10_11_4 = 1258.1;
  kCFCoreFoundationVersionNumber10_11_Max = 1299;
{$endif}

{$endif}

{$if defined(TARGET_OS_IPHONE)}
{$ifdef TYPES}
const
  kCFCoreFoundationVersionNumber_iPhoneOS_2_0 = 478.23;
  kCFCoreFoundationVersionNumber_iPhoneOS_2_1 = 478.26;
  kCFCoreFoundationVersionNumber_iPhoneOS_2_2 = 478.29;
  kCFCoreFoundationVersionNumber_iPhoneOS_3_0 = 478.47;
  kCFCoreFoundationVersionNumber_iPhoneOS_3_1 = 478.52;
  kCFCoreFoundationVersionNumber_iPhoneOS_3_2 = 478.61;
  kCFCoreFoundationVersionNumber_iOS_4_0 = 550.32;
  kCFCoreFoundationVersionNumber_iOS_4_1 = 550.38;
  kCFCoreFoundationVersionNumber_iOS_4_2 = 550.52;
  kCFCoreFoundationVersionNumber_iOS_4_3 = 550.52;
  kCFCoreFoundationVersionNumber_iOS_5_0 = 675.00;
  kCFCoreFoundationVersionNumber_iOS_5_1 = 690.10;
  kCFCoreFoundationVersionNumber_iOS_6_0 = 793.00;
  kCFCoreFoundationVersionNumber_iOS_6_1 = 793.00;
  kCFCoreFoundationVersionNumber_iOS_7_0 = 847.20;
  kCFCoreFoundationVersionNumber_iOS_7_1 = 847.24;
  kCFCoreFoundationVersionNumber_iOS_8_0 = 1140.1;
  kCFCoreFoundationVersionNumber_iOS_8_1 = 1141.14;
  kCFCoreFoundationVersionNumber_iOS_8_2 = 1142.16;
  kCFCoreFoundationVersionNumber_iOS_8_3 = 1144.17;
  kCFCoreFoundationVersionNumber_iOS_8_4 = 1145.15;
  kCFCoreFoundationVersionNumber_iOS_8_x_Max = 1199;
  kCFCoreFoundationVersionNumber_iOS_9_0 = 1240.1;
  kCFCoreFoundationVersionNumber_iOS_9_1 = 1241.11;
  kCFCoreFoundationVersionNumber_iOS_9_2 = 1242.13;
  kCFCoreFoundationVersionNumber_iOS_9_3 = 1242.13;
  kCFCoreFoundationVersionNumber_iOS_9_4 = 1280.38;
  kCFCoreFoundationVersionNumber_iOS_9_x_Max = 1299;
{$endif}

{$endif}

{$if defined(__LLP64__)}
{$ifdef TYPES}
type
  CFTypeID = culonglong;
  CFTypeIDPtr = ^CFTypeID;
  CFOptionFlags = culonglong;
  CFOptionFlagsPtr = ^CFOptionFlags;
  CFHashCode = culonglong;
  CFHashCodePtr = ^CFHashCode;
  CFIndex = culonglong;
  CFIndexPtr = ^CFIndex;
{$endif}

{$else}
{$ifdef TYPES}
type
  CFTypeID = culong;
  CFTypeIDPtr = ^CFTypeID;
  CFOptionFlags = culong;
  CFOptionFlagsPtr = ^CFOptionFlags;
  CFHashCode = culong;
  CFHashCodePtr = ^CFHashCode;
  CFIndex = clong;
  CFIndexPtr = ^CFIndex;
{$endif}

{$endif}
{$ifdef TYPES}
type
  CFTypeRef = pointer;
  CFStringRef = OpaqueType;
  CFMutableStringRef = OpaqueType;
  CFPropertyListRef = CFTypeRef;
  CFPropertyListRefPtr = ^CFPropertyListRef;
  CFComparisonResult = CFIndex;
  CFComparisonResultPtr = ^CFComparisonResult;
  CFNullRef = OpaqueType;

const
  kCFCompareLessThan = -1;
  kCFCompareEqualTo = 0;
  kCFCompareGreaterThan = 1;

type
  CFComparatorFunction = function (val1: pointer; val2: pointer; context: pointer): CFComparisonResult; cdecl;

type
  CFRange = record
    location: CFIndex;
    length: CFIndex;
  end;
type
  CFRangePtr = ^CFRange;
{$endif}

{$ifdef FUNCTIONS}
function __CFRangeMake(loc: CFIndex; len: CFIndex): CFRange; cdecl; external;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCFNull: CFNullRef; cvar; external;
{$endif}

{$ifdef TYPES}
type
  CFAllocatorRef = OpaqueType;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCFAllocatorDefault: CFAllocatorRef; cvar; external;
  kCFAllocatorSystemDefault: CFAllocatorRef; cvar; external;
  kCFAllocatorMalloc: CFAllocatorRef; cvar; external;
  kCFAllocatorMallocZone: CFAllocatorRef; cvar; external;
  kCFAllocatorNull: CFAllocatorRef; cvar; external;
  kCFAllocatorUseContext: CFAllocatorRef; cvar; external;
{$endif}

{$ifdef TYPES}
type
  CFAllocatorRetainCallBack = function (info: pointer): pointer; cdecl;
  CFAllocatorReleaseCallBack = procedure (info: pointer); cdecl;
  CFAllocatorCopyDescriptionCallBack = function (info: pointer): CFStringRef; cdecl;
  CFAllocatorAllocateCallBack = function (allocSize: CFIndex; hint: CFOptionFlags; info: pointer): pointer; cdecl;
  CFAllocatorReallocateCallBack = function (ptr: pointer; newsize: CFIndex; hint: CFOptionFlags; info: pointer): pointer; cdecl;
  CFAllocatorDeallocateCallBack = procedure (ptr: pointer; info: pointer); cdecl;
  CFAllocatorPreferredSizeCallBack = function (size: CFIndex; hint: CFOptionFlags; info: pointer): CFIndex; cdecl;

type
  CFAllocatorContext = record
    version: CFIndex;
    info: pointer;
    retain: CFAllocatorRetainCallBack;
    release: CFAllocatorReleaseCallBack;
    copyDescription: CFAllocatorCopyDescriptionCallBack;
    allocate: CFAllocatorAllocateCallBack;
    reallocate: CFAllocatorReallocateCallBack;
    deallocate: CFAllocatorDeallocateCallBack;
    preferredSize: CFAllocatorPreferredSizeCallBack;
  end;
type
  CFAllocatorContextPtr = ^CFAllocatorContext;
{$endif}

{$ifdef FUNCTIONS}
function CFAllocatorGetTypeID: CFTypeID; cdecl; external;
procedure CFAllocatorSetDefault(allocator: CFAllocatorRef); cdecl; external;
function CFAllocatorGetDefault: CFAllocatorRef; cdecl; external;
function CFAllocatorCreate(allocator: CFAllocatorRef; var context: CFAllocatorContext): CFAllocatorRef; cdecl; external;
function CFAllocatorAllocate(allocator: CFAllocatorRef; size: CFIndex; hint: CFOptionFlags): pointer; cdecl; external;
function CFAllocatorReallocate(allocator: CFAllocatorRef; ptr: pointer; newsize: CFIndex; hint: CFOptionFlags): pointer; cdecl; external;
procedure CFAllocatorDeallocate(allocator: CFAllocatorRef; ptr: pointer); cdecl; external;
function CFAllocatorGetPreferredSizeForSize(allocator: CFAllocatorRef; size: CFIndex; hint: CFOptionFlags): CFIndex; cdecl; external;
procedure CFAllocatorGetContext(allocator: CFAllocatorRef; var context: CFAllocatorContext); cdecl; external;
function CFGetTypeID(cf: CFTypeRef): CFTypeID; cdecl; external;
function CFCopyTypeIDDescription(type_id: CFTypeID): CFStringRef; cdecl; external;
function CFRetain(cf: CFTypeRef): CFTypeRef; cdecl; external;
procedure CFRelease(cf: CFTypeRef); cdecl; external;
{$endif}

{$if defined(DEPLOYMENT_RUNTIME_SWIFT)}

{$else}
{$ifdef FUNCTIONS}
function CFAutorelease(arg: CFTypeRef): CFTypeRef; cdecl; external; { available in 10_9, 7_0 }
function CFGetRetainCount(cf: CFTypeRef): CFIndex; cdecl; external;
{$endif}

{$endif}
{$ifdef FUNCTIONS}
function CFEqual(cf1: CFTypeRef; cf2: CFTypeRef): Boolean; cdecl; external;
function CFHash(cf: CFTypeRef): CFHashCode; cdecl; external;
function CFCopyDescription(cf: CFTypeRef): CFStringRef; cdecl; external;
function CFGetAllocator(cf: CFTypeRef): CFAllocatorRef; cdecl; external;
{$endif}

