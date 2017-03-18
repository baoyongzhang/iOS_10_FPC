{ Parsed from Foundation.framework NSHashTable.h }

{ Types from NSHashTable }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  NSHashTablePtr = ^NSHashTable;
{$endif}

{$if  not (defined(__FOUNDATION_NSHASHTABLE__))}
{$ifdef TYPES}
const
  __FOUNDATION_NSHASHTABLE__ = 1;
{$endif}

{$ifdef TYPES}
type
  NSHashTableOptions = NSUInteger;
  NSHashTableOptionsPtr = ^NSHashTableOptions;
{$endif}

{$ifdef CLASSES}

type
  NSHashTable = objcclass external (NSObject, ObjectTypeProtocol)
  public
    function initWithOptions_capacity (options: NSPointerFunctionsOptions; initialCapacity: NSUInteger): instancetype; message 'initWithOptions:capacity:'; { NS_DESIGNATED_INITIALIZER }
    function initWithPointerFunctions_capacity (functions: NSPointerFunctions; initialCapacity: NSUInteger): instancetype; message 'initWithPointerFunctions:capacity:'; { NS_DESIGNATED_INITIALIZER }
    class function hashTableWithOptions (options: NSPointerFunctionsOptions): ObjectTypeProtocolPtr; message 'hashTableWithOptions:';
    {$if (defined(TARGET_OS_MAC) and not (defined(TARGET_OS_EMBEDDED) or defined(TARGET_OS_IPHONE))) or defined(TARGET_OS_WIN32)}
    class function hashTableWithWeakObjects: id; message 'hashTableWithWeakObjects'; deprecated 'in 10_5, 10_8';
    {$endif}
    class function weakObjectsHashTable: ObjectTypeProtocolPtr; message 'weakObjectsHashTable'; { available in 10_8, 6_0 }
    function pointerFunctions: NSPointerFunctions; message 'pointerFunctions';
    function count: NSUInteger; message 'count';
    function member (object_: nullable ObjectType): nullable ObjectType; message 'member:';
    function objectEnumerator: ObjectTypeProtocolPtr; message 'objectEnumerator';
    procedure addObject (object_: nullable ObjectType); message 'addObject:';
    procedure removeObject (object_: nullable ObjectType); message 'removeObject:';
    procedure removeAllObjects; message 'removeAllObjects';
    function allObjects: ObjectTypeProtocolPtr; message 'allObjects';
    function anyObject: ObjectType; message 'anyObject';
    function containsObject (anObject: nullable ObjectType): boolean; message 'containsObject:';
    function intersectsHashTable (other: ObjectTypeProtocolPtr): boolean; message 'intersectsHashTable:';
    function isEqualToHashTable (other: ObjectTypeProtocolPtr): boolean; message 'isEqualToHashTable:';
    function isSubsetOfHashTable (other: ObjectTypeProtocolPtr): boolean; message 'isSubsetOfHashTable:';
    procedure intersectHashTable (other: ObjectTypeProtocolPtr); message 'intersectHashTable:';
    procedure unionHashTable (other: ObjectTypeProtocolPtr); message 'unionHashTable:';
    procedure minusHashTable (other: ObjectTypeProtocolPtr); message 'minusHashTable:';
    function setRepresentation: ObjectTypeProtocolPtr; message 'setRepresentation';
  end;
{$endif}

{$if (defined(TARGET_OS_MAC) and not (defined(TARGET_OS_EMBEDDED) or defined(TARGET_OS_IPHONE))) or defined(TARGET_OS_WIN32)}
{$ifdef TYPES}
type
  NSHashEnumerator = record
    _pi: NSUInteger;
    _si: NSUInteger;
    _bs: void *_Nullable;
  end;
type
  NSHashEnumeratorPtr = ^NSHashEnumerator;
{$endif}

{$ifdef FUNCTIONS}
procedure NSFreeHashTable(table: NSHashTable); cdecl; external;
procedure NSResetHashTable(table: NSHashTable); cdecl; external;
function NSCompareHashTables(table1: NSHashTable; table2: NSHashTable): boolean; cdecl; external;
function NSCopyHashTableWithZone(table: NSHashTable; zone: NSZone* _Nullable): NSHashTable; cdecl; external;
function NSHashGet(table: NSHashTable; pointer_: void* _Nullable): pointer; cdecl; external;
procedure NSHashInsert(table: NSHashTable; pointer_: void* _Nullable); cdecl; external;
procedure NSHashInsertKnownAbsent(table: NSHashTable; pointer_: void* _Nullable); cdecl; external;
function NSHashInsertIfAbsent(table: NSHashTable; pointer_: void* _Nullable): void * _Nullable; cdecl; external;
procedure NSHashRemove(table: NSHashTable; pointer_: void* _Nullable); cdecl; external;
function NSEnumerateHashTable(table: NSHashTable): NSHashEnumerator; cdecl; external;
function NSNextHashEnumeratorItem(enumerator: NSHashEnumeratorPtr): void * _Nullable; cdecl; external;
procedure NSEndHashTableEnumeration(enumerator: NSHashEnumeratorPtr); cdecl; external;
function NSCountHashTable(table: NSHashTable): NSUInteger; cdecl; external;
function NSStringFromHashTable(table: NSHashTable): NSString; cdecl; external;
function NSAllHashTableObjects(table: NSHashTable): NSArray; cdecl; external;
{$endif}

{$ifdef TYPES}
type
  NSHashTableCallBacks = record
    table, ): ( *_Nullable hash)(NSHashTable voidPtrPtr;
    table_, )_: ( *_Nullable isEqual)(NSHashTable void *, voidPtrPtr;
    table_, )_: ( *_Nullable retain)(NSHashTable voidPtrPtr;
    table_, )_: ( *_Nullable release)(NSHashTable voidPtrPtr;
    table_, )_: NSString *_Nullable ( *_Nullable describe)(NSHashTable voidPtrPtr;
  end;
type
  NSHashTableCallBacksPtr = ^NSHashTableCallBacks;
{$endif}

{$ifdef FUNCTIONS}
function NSCreateHashTableWithZone(callBacks: NSHashTableCallBacks; capacity: NSUInteger; zone: NSZone* _Nullable): NSHashTable; cdecl; external;
function NSCreateHashTable(callBacks: NSHashTableCallBacks; capacity: NSUInteger): NSHashTable; cdecl; external;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSIntegerHashCallBacks: NSHashTableCallBacks { available in 10_5 }; cvar; external;
  NSNonOwnedPointerHashCallBacks: NSHashTableCallBacks; cvar; external;
  NSNonRetainedObjectHashCallBacks: NSHashTableCallBacks; cvar; external;
  NSObjectHashCallBacks: NSHashTableCallBacks; cvar; external;
  NSOwnedObjectIdentityHashCallBacks: NSHashTableCallBacks; cvar; external;
  NSOwnedPointerHashCallBacks: NSHashTableCallBacks; cvar; external;
  NSPointerToStructHashCallBacks: NSHashTableCallBacks; cvar; external;
  NSIntHashCallBacks: NSHashTableCallBacks deprecated 'in 10_0, 10_5'; cvar; external;
{$endif}

{$else}

{$endif}
{$endif}
