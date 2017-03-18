{ Parsed from CoreFoundation.framework CFPropertyList.h }

{$if  not (defined(__COREFOUNDATION_CFPROPERTYLIST__))}
{$ifdef TYPES}
const
  __COREFOUNDATION_CFPROPERTYLIST__ = 1;
{$endif}

{$ifdef TYPES}
type
  CFPropertyListMutabilityOptions = CFOptionFlags;
  CFPropertyListMutabilityOptionsPtr = ^CFPropertyListMutabilityOptions;

const
  kCFPropertyListImmutable = 0;
  kCFPropertyListMutableContainers = 1;
  kCFPropertyListMutableContainersAndLeaves = 2;
{$endif}

{$ifdef FUNCTIONS}
function CFPropertyListCreateFromXMLData(allocator: CFAllocatorRef; xmlData: CFDataRef; mutabilityOption: CFOptionFlags; errorString: CFStringRef): CFPropertyListRef; cdecl; external; deprecated 'in 10_0, 10_10, 2_0, 8_0, "Use CFPropertyListCreateWithData instead."';
function CFPropertyListCreateXMLData(allocator: CFAllocatorRef; propertyList: CFPropertyListRef): CFDataRef; cdecl; external; deprecated 'in 10_0, 10_10, 2_0, 8_0, "Use CFPropertyListCreateData instead."';
function CFPropertyListCreateDeepCopy(allocator: CFAllocatorRef; propertyList: CFPropertyListRef; mutabilityOption: CFOptionFlags): CFPropertyListRef; cdecl; external;
{$endif}

{$ifdef TYPES}
type
  CFPropertyListFormat = CFIndex;
  CFPropertyListFormatPtr = ^CFPropertyListFormat;

const
  kCFPropertyListOpenStepFormat = 1;
  kCFPropertyListXMLFormat_v1_0 = 100;
  kCFPropertyListBinaryFormat_v1_0 = 200;
{$endif}

{$ifdef FUNCTIONS}
function CFPropertyListIsValid(plist: CFPropertyListRef; format: CFPropertyListFormat): Boolean; cdecl; external;
{$endif}

{$if defined(TARGET_OS_MAC) or defined(TARGET_OS_WIN32) or defined(TARGET_OS_EMBEDDED)}
{$ifdef FUNCTIONS}
function CFPropertyListWriteToStream(propertyList: CFPropertyListRef; stream: CFWriteStreamRef; format: CFPropertyListFormat; var errorString: CFStringRef): CFIndex; cdecl; external; deprecated 'in 10_2, 10_10, 2_0, 8_0, "Use CFPropertyListWrite instead."';
function CFPropertyListCreateFromStream(allocator: CFAllocatorRef; stream: CFReadStreamRef; streamLength: CFIndex; mutabilityOption: CFOptionFlags; var format: CFPropertyListFormat; var errorString: CFStringRef): CFPropertyListRef; cdecl; external; deprecated 'in 10_2, 10_10, 2_0, 8_0, "Use CFPropertyListCreateWithStream instead."';
{$endif}

{$endif}
{$ifdef FUNCTIONS}
function CFPropertyListCreateWithData(allocator: CFAllocatorRef; data: CFDataRef; options: CFOptionFlags; format: CFPropertyListFormatPtr; error: CFErrorRefPtr): CFPropertyListRef; cdecl; external; { available in 10_6, 4_0 }
{$endif}

{$if defined(TARGET_OS_MAC) or defined(TARGET_OS_WIN32) or defined(TARGET_OS_EMBEDDED)}
{$ifdef FUNCTIONS}
function CFPropertyListCreateWithStream(allocator: CFAllocatorRef; stream: CFReadStreamRef; streamLength: CFIndex; options: CFOptionFlags; format: CFPropertyListFormatPtr; error: CFErrorRefPtr): CFPropertyListRef; cdecl; external; { available in 10_6, 4_0 }
function CFPropertyListWrite(propertyList: CFPropertyListRef; stream: CFWriteStreamRef; format: CFPropertyListFormat; options: CFOptionFlags; error: CFErrorRefPtr): CFIndex; cdecl; external; { available in 10_6, 4_0 }
{$endif}

{$endif}
{$ifdef FUNCTIONS}
function CFPropertyListCreateData(allocator: CFAllocatorRef; propertyList: CFPropertyListRef; format: CFPropertyListFormat; options: CFOptionFlags; error: CFErrorRefPtr): CFDataRef; cdecl; external; { available in 10_6, 4_0 }
{$endif}

{$endif}
