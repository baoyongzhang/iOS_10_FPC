{ Parsed from CoreFoundation.framework CFFileSecurity.h }

{$if (defined(TARGET_OS_MAC) or defined(TARGET_OS_EMBEDDED) or defined(TARGET_OS_IPHONE)) or defined(CF_BUILDING_CF) or defined(NSBUILDINGFOUNDATION)}

{$if  not (defined(__COREFOUNDATION_CFFILESECURITY__))}
{$ifdef TYPES}
const
  __COREFOUNDATION_CFFILESECURITY__ = 1;

type
  CFFileSecurityRef = OpaqueType;
{$endif}

{$ifdef FUNCTIONS}
function CFFileSecurityGetTypeID: CFTypeID; cdecl; external; { available in 10_7, 5_0 }
function CFFileSecurityCreate(allocator: CFAllocatorRef): CFFileSecurityRef; cdecl; external; { available in 10_7, 5_0 }
function CFFileSecurityCreateCopy(allocator: CFAllocatorRef; fileSec: CFFileSecurityRef): CFFileSecurityRef; cdecl; external; { available in 10_7, 5_0 }
function CFFileSecurityCopyOwnerUUID(fileSec: CFFileSecurityRef; ownerUUID: CFUUIDRef): Boolean; cdecl; external; { available in 10_7, 5_0 }
function CFFileSecuritySetOwnerUUID(fileSec: CFFileSecurityRef; ownerUUID: CFUUIDRef): Boolean; cdecl; external; { available in 10_7, 5_0 }
function CFFileSecurityCopyGroupUUID(fileSec: CFFileSecurityRef; groupUUID: CFUUIDRef): Boolean; cdecl; external; { available in 10_7, 5_0 }
function CFFileSecuritySetGroupUUID(fileSec: CFFileSecurityRef; groupUUID: CFUUIDRef): Boolean; cdecl; external; { available in 10_7, 5_0 }
function CFFileSecurityCopyAccessControlList(fileSec: CFFileSecurityRef; accessControlList: acl_tPtr): Boolean; cdecl; external; { available in 10_7, 5_0 }
function CFFileSecuritySetAccessControlList(fileSec: CFFileSecurityRef; accessControlList: acl_t): Boolean; cdecl; external; { available in 10_7, 5_0 }
function CFFileSecurityGetOwner(fileSec: CFFileSecurityRef; owner: uid_tPtr): Boolean; cdecl; external; { available in 10_7, 5_0 }
function CFFileSecuritySetOwner(fileSec: CFFileSecurityRef; owner: uid_t): Boolean; cdecl; external; { available in 10_7, 5_0 }
function CFFileSecurityGetGroup(fileSec: CFFileSecurityRef; group: gid_tPtr): Boolean; cdecl; external; { available in 10_7, 5_0 }
function CFFileSecuritySetGroup(fileSec: CFFileSecurityRef; group: gid_t): Boolean; cdecl; external; { available in 10_7, 5_0 }
function CFFileSecurityGetMode(fileSec: CFFileSecurityRef; mode: mode_tPtr): Boolean; cdecl; external; { available in 10_7, 5_0 }
function CFFileSecuritySetMode(fileSec: CFFileSecurityRef; mode: mode_t): Boolean; cdecl; external; { available in 10_7, 5_0 }
{$endif}

{$ifdef TYPES}
type
  CFFileSecurityClearOptions = CFOptionFlags;
  CFFileSecurityClearOptionsPtr = ^CFFileSecurityClearOptions;

const
  kCFFileSecurityClearOwner = 1 shl 0;
  kCFFileSecurityClearGroup = 1 shl 1;
  kCFFileSecurityClearMode = 1 shl 2;
  kCFFileSecurityClearOwnerUUID = 1 shl 3;
  kCFFileSecurityClearGroupUUID = 1 shl 4;
  kCFFileSecurityClearAccessControlList = 1 shl 5;
{$endif}

{$ifdef FUNCTIONS}
function CFFileSecurityClearProperties(fileSec: CFFileSecurityRef; clearPropertyMask: CFFileSecurityClearOptions): Boolean; cdecl; external; { available in 10_8, 6_0 }
{$endif}

{$endif}
{$endif}
