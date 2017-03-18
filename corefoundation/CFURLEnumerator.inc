{ Parsed from CoreFoundation.framework CFURLEnumerator.h }

{$if (defined(TARGET_OS_MAC) or defined(TARGET_OS_EMBEDDED) or defined(TARGET_OS_IPHONE)) or defined(CF_BUILDING_CF) or defined(NSBUILDINGFOUNDATION)}

{$if  not (defined(__COREFOUNDATION_CFURLENUMERATOR__))}
{$ifdef TYPES}
const
  __COREFOUNDATION_CFURLENUMERATOR__ = 1;

type
  CFURLEnumeratorRef = OpaqueType;
  CFURLRefPtr = OpaqueType;
{$endif}

{$ifdef FUNCTIONS}
function CFURLEnumeratorGetTypeID: CFTypeID; cdecl; external; { available in 10_6, 4_0 }
{$endif}

{$ifdef TYPES}
type
  CFURLEnumeratorOptions = CFOptionFlags;
  CFURLEnumeratorOptionsPtr = ^CFURLEnumeratorOptions;

const
  kCFURLEnumeratorDefaultBehavior = 0;
  kCFURLEnumeratorDescendRecursively = 1 shl 0;
  kCFURLEnumeratorSkipInvisibles = 1 shl 1;
  kCFURLEnumeratorGenerateFileReferenceURLs = 1 shl 2;
  kCFURLEnumeratorSkipPackageContents = 1 shl 3;
  kCFURLEnumeratorIncludeDirectoriesPreOrder = 1 shl 4;
  kCFURLEnumeratorIncludeDirectoriesPostOrder = 1 shl 5;
{$endif}

{$ifdef FUNCTIONS}
function CFURLEnumeratorCreateForDirectoryURL(alloc: CFAllocatorRef; directoryURL: CFURLRef; option: CFURLEnumeratorOptions; propertyKeys: CFArrayRef): CFURLEnumeratorRef; cdecl; external; { available in 10_6, 4_0 }
function CFURLEnumeratorCreateForMountedVolumes(alloc: CFAllocatorRef; option: CFURLEnumeratorOptions; propertyKeys: CFArrayRef): CFURLEnumeratorRef; cdecl; external; { available in 10_6, 4_0 }
{$endif}

{$ifdef TYPES}
type
  CFURLEnumeratorResult = CFIndex;
  CFURLEnumeratorResultPtr = ^CFURLEnumeratorResult;
{$endif}

{$ifdef FUNCTIONS}
function CFURLEnumeratorGetNextURL(enumerator: CFURLEnumeratorRef; url: CFURLRefPtr; error: CFErrorRefPtr): CFURLEnumeratorResult; cdecl; external; { available in 10_6, 4_0 }
procedure CFURLEnumeratorSkipDescendents(enumerator: CFURLEnumeratorRef); cdecl; external; { available in 10_6, 4_0 }
function CFURLEnumeratorGetDescendentLevel(enumerator: CFURLEnumeratorRef): CFIndex; cdecl; external; { available in 10_6, 4_0 }
function CFURLEnumeratorGetSourceDidChange(enumerator: CFURLEnumeratorRef): Boolean; cdecl; external; deprecated 'in 10_6, 10_7, 4_0, 5_0';
{$endif}

{$endif}
{$endif}
