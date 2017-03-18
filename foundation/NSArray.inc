{ Parsed from Foundation.framework NSArray.h }

{ Types from NSArray }
{$ifdef TYPES}

type
  NSBinarySearchingOptions = NSUInteger;
type
  NSBinarySearchingOptionsPtr = ^NSBinarySearchingOptions;
{$endif}


{$ifdef TYPES}
type
  NSArrayPtr = ^NSArray;
  NSMutableArrayPtr = ^NSMutableArray;
{$endif}

{$ifdef CLASSES}

type
  NSArray = objcclass external (NSObject, __covariant ObjectTypeProtocol)
  public
    function count: NSUInteger; message 'count';
    function objectAtIndex (index: NSUInteger): ObjectType; message 'objectAtIndex:';
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithObjects_count (objects: ObjectType _Nonnull; cnt: NSUInteger): instancetype; message 'initWithObjects:count:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
  end;

type
  NSArray = objcclass external (NSObject, ObjectTypeProtocol)
  public
    function arrayByAddingObject (anObject: ObjectType): ObjectTypeProtocolPtr; message 'arrayByAddingObject:';
    function arrayByAddingObjectsFromArray (otherArray: ObjectTypeProtocolPtr): ObjectTypeProtocolPtr; message 'arrayByAddingObjectsFromArray:';
    function componentsJoinedByString (separator: NSString): NSString; message 'componentsJoinedByString:';
    function containsObject (anObject: ObjectType): boolean; message 'containsObject:';
    function description: NSString; message 'description';
    function descriptionWithLocale (locale: nullable id): NSString; message 'descriptionWithLocale:';
    function descriptionWithLocale_indent (locale: nullable id; level: NSUInteger): NSString; message 'descriptionWithLocale:indent:';
    function firstObjectCommonWithArray (otherArray: ObjectTypeProtocolPtr): nullable ObjectType; message 'firstObjectCommonWithArray:';
    procedure getObjects_range (objects: ObjectTypePtr { variable size array of ObjectType }; range: NSRange); message 'getObjects:range:';
    function indexOfObject (anObject: ObjectType): NSUInteger; message 'indexOfObject:';
    function indexOfObject_inRange (anObject: ObjectType; range: NSRange): NSUInteger; message 'indexOfObject:inRange:';
    function indexOfObjectIdenticalTo (anObject: ObjectType): NSUInteger; message 'indexOfObjectIdenticalTo:';
    function indexOfObjectIdenticalTo_inRange (anObject: ObjectType; range: NSRange): NSUInteger; message 'indexOfObjectIdenticalTo:inRange:';
    function isEqualToArray (otherArray: ObjectTypeProtocolPtr): boolean; message 'isEqualToArray:';
    function firstObject: ObjectType; message 'firstObject';
    function lastObject: ObjectType; message 'lastObject';
    function objectEnumerator: ObjectTypeProtocolPtr; message 'objectEnumerator';
    function reverseObjectEnumerator: ObjectTypeProtocolPtr; message 'reverseObjectEnumerator';
    function sortedArrayHint: NSData; message 'sortedArrayHint';
    function sortedArrayUsingFunction_context (comparator: NSInteger (NS_NOESCAPE *)(ObjectType, ObjectType, void * _Nullable); context: nullable voidPtr): ObjectTypeProtocolPtr; message 'sortedArrayUsingFunction:context:';
    function sortedArrayUsingFunction_context_hint (comparator: NSInteger (NS_NOESCAPE *)(ObjectType, ObjectType, void * _Nullable); context: nullable voidPtr; hint: nullable NSDataPtr): ObjectTypeProtocolPtr; message 'sortedArrayUsingFunction:context:hint:';
    function sortedArrayUsingSelector (comparator: SEL): ObjectTypeProtocolPtr; message 'sortedArrayUsingSelector:';
    function subarrayWithRange (range: NSRange): ObjectTypeProtocolPtr; message 'subarrayWithRange:';
    function writeToFile_atomically (path: NSString; useAuxiliaryFile: boolean): boolean; message 'writeToFile:atomically:';
    function writeToURL_atomically (url: NSURL; atomically: boolean): boolean; message 'writeToURL:atomically:';
    procedure makeObjectsPerformSelector_enumerateObjectsUsingBlock (aSelector: SEL; or: id); message 'makeObjectsPerformSelector:enumerateObjectsUsingBlock:';
    procedure makeObjectsPerformSelector_withObject_enumerateObjectsUsingBlock (aSelector: SEL; argument: nullable id; or: id); message 'makeObjectsPerformSelector:withObject:enumerateObjectsUsingBlock:';
    function objectsAtIndexes (indexes: NSIndexSet): ObjectTypeProtocolPtr; message 'objectsAtIndexes:';
    function objectAtIndexedSubscript (idx: NSUInteger): ObjectType; message 'objectAtIndexedSubscript:'; { available in 10_8, 6_0 }
    procedure enumerateObjectsUsingBlock (block: void (NS_NOESCAPE ^)(ObjectType obj, NSUInteger idx, BOOL *stop)); message 'enumerateObjectsUsingBlock:'; { available in 10_6, 4_0 }
    procedure enumerateObjectsWithOptions_usingBlock (opts: NSEnumerationOptions; block: void (NS_NOESCAPE ^)(ObjectType obj, NSUInteger idx, BOOL *stop)); message 'enumerateObjectsWithOptions:usingBlock:'; { available in 10_6, 4_0 }
    procedure enumerateObjectsAtIndexes_options_usingBlock (s: NSIndexSet; opts: NSEnumerationOptions; block: void (NS_NOESCAPE ^)(ObjectType obj, NSUInteger idx, BOOL *stop)); message 'enumerateObjectsAtIndexes:options:usingBlock:'; { available in 10_6, 4_0 }
    function indexOfObjectPassingTest (predicate: BOOL (NS_NOESCAPE ^)(ObjectType obj, NSUInteger idx, BOOL *stop)): NSUInteger; message 'indexOfObjectPassingTest:'; { available in 10_6, 4_0 }
    function indexOfObjectWithOptions_passingTest (opts: NSEnumerationOptions; predicate: BOOL (NS_NOESCAPE ^)(ObjectType obj, NSUInteger idx, BOOL *stop)): NSUInteger; message 'indexOfObjectWithOptions:passingTest:'; { available in 10_6, 4_0 }
    function indexOfObjectAtIndexes_options_passingTest (s: NSIndexSet; opts: NSEnumerationOptions; predicate: BOOL (NS_NOESCAPE^)(ObjectType obj, NSUInteger idx, BOOL *stop)): NSUInteger; message 'indexOfObjectAtIndexes:options:passingTest:'; { available in 10_6, 4_0 }
    function indexesOfObjectsPassingTest (predicate: BOOL (NS_NOESCAPE ^)(ObjectType obj, NSUInteger idx, BOOL *stop)): NSIndexSet; message 'indexesOfObjectsPassingTest:'; { available in 10_6, 4_0 }
    function indexesOfObjectsWithOptions_passingTest (opts: NSEnumerationOptions; predicate: BOOL (NS_NOESCAPE ^)(ObjectType obj, NSUInteger idx, BOOL *stop)): NSIndexSet; message 'indexesOfObjectsWithOptions:passingTest:'; { available in 10_6, 4_0 }
    function indexesOfObjectsAtIndexes_options_passingTest (s: NSIndexSet; opts: NSEnumerationOptions; predicate: BOOL (NS_NOESCAPE ^)(ObjectType obj, NSUInteger idx, BOOL *stop)): NSIndexSet; message 'indexesOfObjectsAtIndexes:options:passingTest:'; { available in 10_6, 4_0 }
    function sortedArrayUsingComparator (cmptr: NSComparator NS_NOESCAPE): ObjectTypeProtocolPtr; message 'sortedArrayUsingComparator:'; { available in 10_6, 4_0 }
    function sortedArrayWithOptions_usingComparator (opts: NSSortOptions; cmptr: NSComparator NS_NOESCAPE): ObjectTypeProtocolPtr; message 'sortedArrayWithOptions:usingComparator:'; { available in 10_6, 4_0 }
    function indexOfObject_inSortedRange_options_usingComparator (obj: ObjectType; r: NSRange; opts: NSBinarySearchingOptions; cmp: NSComparator NS_NOESCAPE): NSUInteger; message 'indexOfObject:inSortedRange:options:usingComparator:'; { available in 10_6, 4_0 }
  end;

type
  NSArray = objcclass external (NSObject, ObjectTypeProtocol)
  public
    class function array_: instancetype; message 'array';
    class function arrayWithObject (anObject: ObjectType): instancetype; message 'arrayWithObject:';
    class function arrayWithObjects_count (objects: ObjectTypePtr { variable size array of ObjectType }; cnt: NSUInteger): instancetype; message 'arrayWithObjects:count:';
    class function arrayWithObjects (firstObj: ObjectType): instancetype; varargs; message 'arrayWithObjects:';
    class function arrayWithArray (array__: ObjectTypeProtocolPtr): instancetype; message 'arrayWithArray:';
    function initWithObjects (firstObj: ObjectType): instancetype; varargs; message 'initWithObjects:';
    function initWithArray (array__: ObjectTypeProtocolPtr): instancetype; message 'initWithArray:';
    function initWithArray_copyItems (array__: ObjectTypeProtocolPtr; flag: boolean): instancetype; message 'initWithArray:copyItems:';
    class function arrayWithContentsOfFile (path: NSString): nullable ObjectTypeProtocolPtr; message 'arrayWithContentsOfFile:';
    class function arrayWithContentsOfURL (url: NSURL): nullable ObjectTypeProtocolPtr; message 'arrayWithContentsOfURL:';
    function initWithContentsOfFile (path: NSString): nullable ObjectTypeProtocolPtr; message 'initWithContentsOfFile:';
    function initWithContentsOfURL (url: NSURL): nullable ObjectTypeProtocolPtr; message 'initWithContentsOfURL:';
  end;

type
  NSArray = objcclass external (NSObject, ObjectTypeProtocol)
  public
    procedure getObjects (objects: ObjectTypePtr { variable size array of ObjectType }); message 'getObjects:';
  end;

type
  NSMutableArray = objcclass external (NSObject, ObjectTypeProtocol)
  public
    procedure addObject (anObject: ObjectType); message 'addObject:';
    procedure insertObject_atIndex (anObject: ObjectType; index: NSUInteger); message 'insertObject:atIndex:';
    procedure removeLastObject; message 'removeLastObject';
    procedure removeObjectAtIndex (index: NSUInteger); message 'removeObjectAtIndex:';
    procedure replaceObjectAtIndex_withObject (index: NSUInteger; anObject: ObjectType); message 'replaceObjectAtIndex:withObject:';
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithCapacity (numItems: NSUInteger): instancetype; message 'initWithCapacity:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
  end;

type
  NSMutableArray = objcclass external (NSObject, ObjectTypeProtocol)
  public
    procedure addObjectsFromArray (otherArray: ObjectTypeProtocolPtr); message 'addObjectsFromArray:';
    procedure exchangeObjectAtIndex_withObjectAtIndex (idx1: NSUInteger; idx2: NSUInteger); message 'exchangeObjectAtIndex:withObjectAtIndex:';
    procedure removeAllObjects; message 'removeAllObjects';
    procedure removeObject_inRange (anObject: ObjectType; range: NSRange); message 'removeObject:inRange:';
    procedure removeObject (anObject: ObjectType); message 'removeObject:';
    procedure removeObjectIdenticalTo_inRange (anObject: ObjectType; range: NSRange); message 'removeObjectIdenticalTo:inRange:';
    procedure removeObjectIdenticalTo (anObject: ObjectType); message 'removeObjectIdenticalTo:';
    procedure removeObjectsFromIndices_numIndices (indices: NSUIntegerPtr; cnt: NSUInteger); message 'removeObjectsFromIndices:numIndices:'; deprecated 'in 10_0, 10_6, 2_0, 4_0';
    procedure removeObjectsInArray (otherArray: ObjectTypeProtocolPtr); message 'removeObjectsInArray:';
    procedure removeObjectsInRange (range: NSRange); message 'removeObjectsInRange:';
    procedure replaceObjectsInRange_withObjectsFromArray_range (range: NSRange; otherArray: ObjectTypeProtocolPtr; otherRange: NSRange); message 'replaceObjectsInRange:withObjectsFromArray:range:';
    procedure replaceObjectsInRange_withObjectsFromArray (range: NSRange; otherArray: ObjectTypeProtocolPtr); message 'replaceObjectsInRange:withObjectsFromArray:';
    procedure setArray (otherArray: ObjectTypeProtocolPtr); message 'setArray:';
    procedure sortUsingFunction_context (compare: NSInteger (NS_NOESCAPE *)(ObjectType,  ObjectType, void * _Nullable); context: nullable voidPtr); message 'sortUsingFunction:context:';
    procedure sortUsingSelector (comparator: SEL); message 'sortUsingSelector:';
    procedure insertObjects_atIndexes (objects: ObjectTypeProtocolPtr; indexes: NSIndexSet); message 'insertObjects:atIndexes:';
    procedure removeObjectsAtIndexes (indexes: NSIndexSet); message 'removeObjectsAtIndexes:';
    procedure replaceObjectsAtIndexes_withObjects (indexes: NSIndexSet; objects: ObjectTypeProtocolPtr); message 'replaceObjectsAtIndexes:withObjects:';
    procedure setObject_atIndexedSubscript (obj: ObjectType; idx: NSUInteger); message 'setObject:atIndexedSubscript:'; { available in 10_8, 6_0 }
    procedure sortUsingComparator (cmptr: NSComparator NS_NOESCAPE); message 'sortUsingComparator:'; { available in 10_6, 4_0 }
    procedure sortWithOptions_usingComparator (opts: NSSortOptions; cmptr: NSComparator NS_NOESCAPE); message 'sortWithOptions:usingComparator:'; { available in 10_6, 4_0 }
  end;

type
  NSMutableArray = objcclass external (NSObject, ObjectTypeProtocol)
  public
    class function arrayWithCapacity (numItems: NSUInteger): instancetype; message 'arrayWithCapacity:';
    class function arrayWithContentsOfFile (path: NSString): nullable ObjectTypeProtocolPtr; message 'arrayWithContentsOfFile:';
    class function arrayWithContentsOfURL (url: NSURL): nullable ObjectTypeProtocolPtr; message 'arrayWithContentsOfURL:';
    function initWithContentsOfFile (path: NSString): nullable ObjectTypeProtocolPtr; message 'initWithContentsOfFile:';
    function initWithContentsOfURL (url: NSURL): nullable ObjectTypeProtocolPtr; message 'initWithContentsOfURL:';
  end;
{$endif}

