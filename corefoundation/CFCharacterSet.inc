{ Parsed from CoreFoundation.framework CFCharacterSet.h }

{$if  not (defined(__COREFOUNDATION_CFCHARACTERSET__))}
{$ifdef TYPES}
const
  __COREFOUNDATION_CFCHARACTERSET__ = 1;

type
  CFCharacterSetRef = OpaqueType;
  CFMutableCharacterSetRef = OpaqueType;
  CFCharacterSetPredefinedSet = OpaqueType;
{$endif}

{$ifdef FUNCTIONS}
function CFCharacterSetGetPredefined(theSetIdentifier: CFCharacterSetPredefinedSet): CFCharacterSetRef; cdecl; external;
function CFCharacterSetCreateWithCharactersInRange(alloc: CFAllocatorRef; theRange: CFRange): CFCharacterSetRef; cdecl; external;
function CFCharacterSetCreateWithCharactersInString(alloc: CFAllocatorRef; theString: CFStringRef): CFCharacterSetRef; cdecl; external;
function CFCharacterSetCreateWithBitmapRepresentation(alloc: CFAllocatorRef; theData: CFDataRef): CFCharacterSetRef; cdecl; external;
function CFCharacterSetCreateInvertedSet(alloc: CFAllocatorRef; theSet: CFCharacterSetRef): CFCharacterSetRef; cdecl; external;
function CFCharacterSetIsSupersetOfSet(theSet: CFCharacterSetRef; theOtherset: CFCharacterSetRef): Boolean; cdecl; external;
function CFCharacterSetHasMemberInPlane(theSet: CFCharacterSetRef; thePlane: CFIndex): Boolean; cdecl; external;
function CFCharacterSetCreateMutable(alloc: CFAllocatorRef): CFMutableCharacterSetRef; cdecl; external;
function CFCharacterSetCreateCopy(alloc: CFAllocatorRef; theSet: CFCharacterSetRef): CFCharacterSetRef; cdecl; external;
function CFCharacterSetCreateMutableCopy(alloc: CFAllocatorRef; theSet: CFCharacterSetRef): CFMutableCharacterSetRef; cdecl; external;
function CFCharacterSetIsCharacterMember(theSet: CFCharacterSetRef; theChar: UniChar): Boolean; cdecl; external;
function CFCharacterSetIsLongCharacterMember(theSet: CFCharacterSetRef; theChar: UTF32Char): Boolean; cdecl; external;
function CFCharacterSetCreateBitmapRepresentation(alloc: CFAllocatorRef; theSet: CFCharacterSetRef): CFDataRef; cdecl; external;
procedure CFCharacterSetAddCharactersInRange(theSet: CFMutableCharacterSetRef; theRange: CFRange); cdecl; external;
procedure CFCharacterSetRemoveCharactersInRange(theSet: CFMutableCharacterSetRef; theRange: CFRange); cdecl; external;
procedure CFCharacterSetAddCharactersInString(theSet: CFMutableCharacterSetRef; theString: CFStringRef); cdecl; external;
procedure CFCharacterSetRemoveCharactersInString(theSet: CFMutableCharacterSetRef; theString: CFStringRef); cdecl; external;
procedure CFCharacterSetUnion(theSet: CFMutableCharacterSetRef; theOtherSet: CFCharacterSetRef); cdecl; external;
procedure CFCharacterSetIntersect(theSet: CFMutableCharacterSetRef; theOtherSet: CFCharacterSetRef); cdecl; external;
procedure CFCharacterSetInvert(theSet: CFMutableCharacterSetRef); cdecl; external;
{$endif}

{$endif}
