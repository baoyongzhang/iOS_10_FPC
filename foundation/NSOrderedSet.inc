{ Parsed from Foundation.framework NSOrderedSet.h }

{ Types from NSMutableOrderedSet }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  NSOrderedSetPtr = ^NSOrderedSet;
  NSMutableOrderedSetPtr = ^NSMutableOrderedSet;
{$endif}

{$ifdef CLASSES}

type
  NSOrderedSet = objcclass external (NSObject, __covariant ObjectTypeProtocol)
  public
    function count: NSUInteger; message 'count';
    function objectAtIndex (idx: NSUInteger): ObjectType; message 'objectAtIndex:';
    function indexOfObject (object_: ObjectType): NSUInteger; message 'indexOfObject:';
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithObjects_count (objects: ObjectType _Nonnull; cnt: NSUInteger): instancetype; message 'initWithObjects:count:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
  end;

type
  NSOrderedSet = objcclass external (NSObject, ObjectTypeProtocol)
  public
    procedure getObjects_range (objects: ObjectTypePtr { variable size array of ObjectType }; range: NSRange); message 'getObjects:range:';
    function objectsAtIndexes (indexes: NSIndexSet): ObjectTypeProtocolPtr; message 'objectsAtIndexes:';
    function firstObject: ObjectType; message 'firstObject';
    function lastObject: ObjectType; message 'lastObject';
    function isEqualToOrderedSet (other: ObjectTypeProtocolPtr): boolean; message 'isEqualToOrderedSet:';
    function containsObject (object_: ObjectType): boolean; message 'containsObject:';
    function intersectsOrderedSet (other: ObjectTypeProtocolPtr): boolean; message 'intersectsOrderedSet:';
    function intersectsSet (set_: ObjectTypeProtocolPtr): boolean; message 'intersectsSet:';
    function isSubsetOfOrderedSet (other: ObjectTypeProtocolPtr): boolean; message 'isSubsetOfOrderedSet:';
    function isSubsetOfSet (set_: ObjectTypeProtocolPtr): boolean; message 'isSubsetOfSet:';
    function objectAtIndexedSubscript (idx: NSUInteger): ObjectType; message 'objectAtIndexedSubscript:'; { available in 10_8, 6_0 }
    function objectEnumerator: ObjectTypeProtocolPtr; message 'objectEnumerator';
    function reverseObjectEnumerator: ObjectTypeProtocolPtr; message 'reverseObjectEnumerator';
    function reversedOrderedSet: ObjectTypeProtocolPtr; message 'reversedOrderedSet';
    function array_: ObjectTypeProtocolPtr; message 'array';
    function set_: ObjectTypeProtocolPtr; message 'set';
    procedure enumerateObjectsUsingBlock (block: void (NS_NOESCAPE ^)(ObjectType obj, NSUInteger idx, BOOL *stop)); message 'enumerateObjectsUsingBlock:';
    procedure enumerateObjectsWithOptions_usingBlock (opts: NSEnumerationOptions; block: void (NS_NOESCAPE ^)(ObjectType obj, NSUInteger idx, BOOL *stop)); message 'enumerateObjectsWithOptions:usingBlock:';
    procedure enumerateObjectsAtIndexes_options_usingBlock (s: NSIndexSet; opts: NSEnumerationOptions; block: void (NS_NOESCAPE ^)(ObjectType obj, NSUInteger idx, BOOL *stop)); message 'enumerateObjectsAtIndexes:options:usingBlock:';
    function indexOfObjectPassingTest (predicate: BOOL (NS_NOESCAPE ^)(ObjectType obj, NSUInteger idx, BOOL *stop)): NSUInteger; message 'indexOfObjectPassingTest:';
    function indexOfObjectWithOptions_passingTest (opts: NSEnumerationOptions; predicate: BOOL (NS_NOESCAPE ^)(ObjectType obj, NSUInteger idx, BOOL *stop)): NSUInteger; message 'indexOfObjectWithOptions:passingTest:';
    function indexOfObjectAtIndexes_options_passingTest (s: NSIndexSet; opts: NSEnumerationOptions; predicate: BOOL (NS_NOESCAPE ^)(ObjectType obj, NSUInteger idx, BOOL *stop)): NSUInteger; message 'indexOfObjectAtIndexes:options:passingTest:';
    function indexesOfObjectsPassingTest (predicate: BOOL (NS_NOESCAPE ^)(ObjectType obj, NSUInteger idx, BOOL *stop)): NSIndexSet; message 'indexesOfObjectsPassingTest:';
    function indexesOfObjectsWithOptions_passingTest (opts: NSEnumerationOptions; predicate: BOOL (NS_NOESCAPE ^)(ObjectType obj, NSUInteger idx, BOOL *stop)): NSIndexSet; message 'indexesOfObjectsWithOptions:passingTest:';
    function indexesOfObjectsAtIndexes_options_passingTest (s: NSIndexSet; opts: NSEnumerationOptions; predicate: BOOL (NS_NOESCAPE ^)(ObjectType obj, NSUInteger idx, BOOL *stop)): NSIndexSet; message 'indexesOfObjectsAtIndexes:options:passingTest:';
    function indexOfObject_inSortedRange_options_usingComparator (object_: ObjectType; range: NSRange; opts: NSBinarySearchingOptions; cmp: NSComparator NS_NOESCAPE): NSUInteger; message 'indexOfObject:inSortedRange:options:usingComparator:';
    function sortedArrayUsingComparator (cmptr: NSComparator NS_NOESCAPE): ObjectTypeProtocolPtr; message 'sortedArrayUsingComparator:';
    function sortedArrayWithOptions_usingComparator (opts: NSSortOptions; cmptr: NSComparator NS_NOESCAPE): ObjectTypeProtocolPtr; message 'sortedArrayWithOptions:usingComparator:';
    function description: NSString; message 'description';
    function descriptionWithLocale (locale: nullable id): NSString; message 'descriptionWithLocale:';
    function descriptionWithLocale_indent (locale: nullable id; level: NSUInteger): NSString; message 'descriptionWithLocale:indent:';
  end;

type
  NSOrderedSet = objcclass external (NSObject, ObjectTypeProtocol)
  public
    class function orderedSet: instancetype; message 'orderedSet';
    class function orderedSetWithObject (object_: ObjectType): instancetype; message 'orderedSetWithObject:';
    class function orderedSetWithObjects_count (objects: ObjectTypePtr { variable size array of ObjectType }; cnt: NSUInteger): instancetype; message 'orderedSetWithObjects:count:';
    class function orderedSetWithObjects (firstObj: ObjectType): instancetype; varargs; message 'orderedSetWithObjects:';
    class function orderedSetWithOrderedSet (set_: ObjectTypeProtocolPtr): instancetype; message 'orderedSetWithOrderedSet:';
    class function orderedSetWithOrderedSet_range_copyItems (set_: ObjectTypeProtocolPtr; range: NSRange; flag: boolean): instancetype; message 'orderedSetWithOrderedSet:range:copyItems:';
    class function orderedSetWithArray (array_: ObjectTypeProtocolPtr): instancetype; message 'orderedSetWithArray:';
    class function orderedSetWithArray_range_copyItems (array_: ObjectTypeProtocolPtr; range: NSRange; flag: boolean): instancetype; message 'orderedSetWithArray:range:copyItems:';
    class function orderedSetWithSet (set_: ObjectTypeProtocolPtr): instancetype; message 'orderedSetWithSet:';
    class function orderedSetWithSet_copyItems (set_: ObjectTypeProtocolPtr; flag: boolean): instancetype; message 'orderedSetWithSet:copyItems:';
    function initWithObject (object_: ObjectType): instancetype; message 'initWithObject:';
    function initWithObjects (firstObj: ObjectType): instancetype; varargs; message 'initWithObjects:';
    function initWithOrderedSet (set_: ObjectTypeProtocolPtr): instancetype; message 'initWithOrderedSet:';
    function initWithOrderedSet_copyItems (set_: ObjectTypeProtocolPtr; flag: boolean): instancetype; message 'initWithOrderedSet:copyItems:';
    function initWithOrderedSet_range_copyItems (set_: ObjectTypeProtocolPtr; range: NSRange; flag: boolean): instancetype; message 'initWithOrderedSet:range:copyItems:';
    function initWithArray (array_: ObjectTypeProtocolPtr): instancetype; message 'initWithArray:';
    function initWithArray_copyItems (set_: ObjectTypeProtocolPtr; flag: boolean): instancetype; message 'initWithArray:copyItems:';
    function initWithArray_range_copyItems (set_: ObjectTypeProtocolPtr; range: NSRange; flag: boolean): instancetype; message 'initWithArray:range:copyItems:';
    function initWithSet (set_: ObjectTypeProtocolPtr): instancetype; message 'initWithSet:';
    function initWithSet_copyItems (set_: ObjectTypeProtocolPtr; flag: boolean): instancetype; message 'initWithSet:copyItems:';
  end;

type
  NSMutableOrderedSet = objcclass external (NSObject, ObjectTypeProtocol)
  public
    procedure insertObject_atIndex (object_: ObjectType; idx: NSUInteger); message 'insertObject:atIndex:';
    procedure removeObjectAtIndex (idx: NSUInteger); message 'removeObjectAtIndex:';
    procedure replaceObjectAtIndex_withObject (idx: NSUInteger; object_: ObjectType); message 'replaceObjectAtIndex:withObject:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithCapacity (numItems: NSUInteger): instancetype; message 'initWithCapacity:'; { NS_DESIGNATED_INITIALIZER }
  end;

type
  NSMutableOrderedSet = objcclass external (NSObject, ObjectTypeProtocol)
  public
    procedure addObject (object_: ObjectType); message 'addObject:';
    procedure addObjects_count (objects: ObjectTypePtr { variable size array of ObjectType }; count: NSUInteger); message 'addObjects:count:';
    procedure addObjectsFromArray (array_: ObjectTypeProtocolPtr); message 'addObjectsFromArray:';
    procedure exchangeObjectAtIndex_withObjectAtIndex (idx1: NSUInteger; idx2: NSUInteger); message 'exchangeObjectAtIndex:withObjectAtIndex:';
    procedure moveObjectsAtIndexes_toIndex (indexes: NSIndexSet; idx: NSUInteger); message 'moveObjectsAtIndexes:toIndex:';
    procedure insertObjects_atIndexes (objects: ObjectTypeProtocolPtr; indexes: NSIndexSet); message 'insertObjects:atIndexes:';
    procedure setObject_atIndex (obj: ObjectType; idx: NSUInteger); message 'setObject:atIndex:';
    procedure setObject_atIndexedSubscript (obj: ObjectType; idx: NSUInteger); message 'setObject:atIndexedSubscript:'; { available in 10_8, 6_0 }
    procedure replaceObjectsInRange_withObjects_count (range: NSRange; objects: ObjectTypePtr { variable size array of ObjectType }; count: NSUInteger); message 'replaceObjectsInRange:withObjects:count:';
    procedure replaceObjectsAtIndexes_withObjects (indexes: NSIndexSet; objects: ObjectTypeProtocolPtr); message 'replaceObjectsAtIndexes:withObjects:';
    procedure removeObjectsInRange (range: NSRange); message 'removeObjectsInRange:';
    procedure removeObjectsAtIndexes (indexes: NSIndexSet); message 'removeObjectsAtIndexes:';
    procedure removeAllObjects; message 'removeAllObjects';
    procedure removeObject (object_: ObjectType); message 'removeObject:';
    procedure removeObjectsInArray (array_: ObjectTypeProtocolPtr); message 'removeObjectsInArray:';
    procedure intersectOrderedSet (other: ObjectTypeProtocolPtr); message 'intersectOrderedSet:';
    procedure minusOrderedSet (other: ObjectTypeProtocolPtr); message 'minusOrderedSet:';
    procedure unionOrderedSet (other: ObjectTypeProtocolPtr); message 'unionOrderedSet:';
    procedure intersectSet (other: ObjectTypeProtocolPtr); message 'intersectSet:';
    procedure minusSet (other: ObjectTypeProtocolPtr); message 'minusSet:';
    procedure unionSet (other: ObjectTypeProtocolPtr); message 'unionSet:';
    {$if defined(NS_BLOCKS_AVAILABLE)}
    procedure sortUsingComparator (cmptr: NSComparator NS_NOESCAPE); message 'sortUsingComparator:';
    procedure sortWithOptions_usingComparator (opts: NSSortOptions; cmptr: NSComparator NS_NOESCAPE); message 'sortWithOptions:usingComparator:';
    procedure sortRange_options_usingComparator (range: NSRange; opts: NSSortOptions; cmptr: NSComparator NS_NOESCAPE); message 'sortRange:options:usingComparator:';
    {$endif}
  end;

type
  NSMutableOrderedSet = objcclass external (NSObject, ObjectTypeProtocol)
  public
    class function orderedSetWithCapacity (numItems: NSUInteger): instancetype; message 'orderedSetWithCapacity:';
  end;
{$endif}

