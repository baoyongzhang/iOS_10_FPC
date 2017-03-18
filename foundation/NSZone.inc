{ Parsed from Foundation.framework NSZone.h }
{$ifdef TYPES}
type
  NSZone = OpaqueType;
  NSZonePtr = ^NSZone;
{$endif}

{$ifdef FUNCTIONS}
function NS_SWIFT_UNAVAILABLE: NSZone *NSDefaultMallocZone(void); cdecl; external;
function NS_SWIFT_UNAVAILABLE_: NSZone *NSCreateZone(NSUInteger startSize, NSUInteger granularity, BOOL canFree); cdecl; external;
function NS_SWIFT_UNAVAILABLE__: void NSRecycleZone(NSZone *zone); cdecl; external;
function NS_SWIFT_UNAVAILABLE___: void NSSetZoneName(NSZone * _Nullable zone, NSString *name); cdecl; external;
function NS_SWIFT_UNAVAILABLE____: NSString *NSZoneName(NSZone * _Nullable zone); cdecl; external;
function NS_SWIFT_UNAVAILABLE_____: NSZone * _Nullable NSZoneFromPointer(void *ptr); cdecl; external;
function NS_SWIFT_UNAVAILABLE______: void *NSZoneMalloc(NSZone * _Nullable zone, NSUInteger size); cdecl; external;
function NS_SWIFT_UNAVAILABLE_______: void *NSZoneCalloc(NSZone * _Nullable zone, NSUInteger numElems, NSUInteger byteSize); cdecl; external;
function NS_SWIFT_UNAVAILABLE________: void *NSZoneRealloc(NSZone * _Nullable zone, void * _Nullable ptr, NSUInteger size); cdecl; external;
function NS_SWIFT_UNAVAILABLE_________: void NSZoneFree(NSZone * _Nullable zone, void *ptr); cdecl; external;
{$endif}

{$if (defined(TARGET_OS_MAC) and not (defined(TARGET_OS_EMBEDDED) or defined(TARGET_OS_IPHONE)))}
{$ifdef FUNCTIONS}
function NS_SWIFT_UNAVAILABLE__________: void *NSAllocateCollectable(NSUInteger size, NSUInteger options); cdecl; external;
function NS_SWIFT_UNAVAILABLE___________: void *NSReallocateCollectable(void * _Nullable ptr, NSUInteger size, NSUInteger options); cdecl; external;
{$endif}

{$endif}

{$ifdef FUNCTIONS}
function NSPageSize: NSUInteger; cdecl; external;
function NSLogPageSize: NSUInteger; cdecl; external;
function NSRoundUpToMultipleOfPageSize(bytes: NSUInteger): NSUInteger; cdecl; external;
function NSRoundDownToMultipleOfPageSize(bytes: NSUInteger): NSUInteger; cdecl; external;
function NSAllocateMemoryPages(bytes: NSUInteger): pointer; cdecl; external;
procedure NSDeallocateMemoryPages(ptr: pointer; bytes: NSUInteger); cdecl; external;
procedure NSCopyMemoryPages(source: pointer; dest: pointer; bytes: NSUInteger); cdecl; external;
function NSRealMemoryAvailable: NSUInteger; cdecl; external; deprecated 'in 10_0, 10_8, 2_0, 6_0';
{$endif}

