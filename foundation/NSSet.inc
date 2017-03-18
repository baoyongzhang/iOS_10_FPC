{ Parsed from Foundation.framework NSSet.h }

{$ifdef TYPES}
type
  NSSetPtr = ^NSSet;
  NSMutableSetPtr = ^NSMutableSet;
{$endif}

{$ifdef CLASSES}

type
  NSSet = objcclass external (NSObject, __covariant ObjectTypeProtocol)
  public
    function count: NSUInteger; message 'count';
    function member (object_: ObjectType): nullable ObjectType; message 'member:';
    function objectEnumerator: ObjectTypeProtocolPtr; message 'objectEnumerator';
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithObjects_count (objects: ObjectType _Nonnull; cnt: NSUInteger): instancetype; message 'initWithObjects:count:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
  end;

type
  NSSet = objcclass external (NSObject, ObjectTypeProtocol)
  public
    function allObjects: ObjectTypeProtocolPtr; message 'allObjects';
    function anyObject: nullable ObjectType; message 'anyObject';
    function containsObject (anObject: ObjectType): boolean; message 'containsObject:';
    function description: NSString; message 'description';
    function descriptionWithLocale (locale: nullable id): NSString; message 'descriptionWithLocale:';
    function intersectsSet (otherSet: ObjectTypeProtocolPtr): boolean; message 'intersectsSet:';
    function isEqualToSet (otherSet: ObjectTypeProtocolPtr): boolean; message 'isEqualToSet:';
    function isSubsetOfSet (otherSet: ObjectTypeProtocolPtr): boolean; message 'isSubsetOfSet:';
    procedure makeObjectsPerformSelector_enumerateObjectsUsingBlock (aSelector: SEL; or: id); message 'makeObjectsPerformSelector:enumerateObjectsUsingBlock:';
    procedure makeObjectsPerformSelector_withObject_enumerateObjectsUsingBlock (aSelector: SEL; argument: nullable id; or: id); message 'makeObjectsPerformSelector:withObject:enumerateObjectsUsingBlock:';
    function setByAddingObject (anObject: ObjectType): ObjectTypeProtocolPtr; message 'setByAddingObject:'; { available in 10_5, 2_0 }
    function setByAddingObjectsFromSet (other: ObjectTypeProtocolPtr): ObjectTypeProtocolPtr; message 'setByAddingObjectsFromSet:'; { available in 10_5, 2_0 }
    function setByAddingObjectsFromArray (other: ObjectTypeProtocolPtr): ObjectTypeProtocolPtr; message 'setByAddingObjectsFromArray:'; { available in 10_5, 2_0 }
    procedure enumerateObjectsUsingBlock (block: void (NS_NOESCAPE ^)(ObjectType obj, BOOL *stop)); message 'enumerateObjectsUsingBlock:'; { available in 10_6, 4_0 }
    procedure enumerateObjectsWithOptions_usingBlock (opts: NSEnumerationOptions; block: void (NS_NOESCAPE ^)(ObjectType obj, BOOL *stop)); message 'enumerateObjectsWithOptions:usingBlock:'; { available in 10_6, 4_0 }
    function objectsPassingTest (predicate: BOOL (NS_NOESCAPE ^)(ObjectType obj, BOOL *stop)): ObjectTypeProtocolPtr; message 'objectsPassingTest:'; { available in 10_6, 4_0 }
    function objectsWithOptions_passingTest (opts: NSEnumerationOptions; predicate: BOOL (NS_NOESCAPE ^)(ObjectType obj, BOOL *stop)): ObjectTypeProtocolPtr; message 'objectsWithOptions:passingTest:'; { available in 10_6, 4_0 }
  end;

type
  NSSet = objcclass external (NSObject, ObjectTypeProtocol)
  public
    class function set_: instancetype; message 'set';
    class function setWithObject (object_: ObjectType): instancetype; message 'setWithObject:';
    class function setWithObjects_count (objects: ObjectTypePtr { variable size array of ObjectType }; cnt: NSUInteger): instancetype; message 'setWithObjects:count:';
    class function setWithObjects (firstObj: ObjectType): instancetype; varargs; message 'setWithObjects:';
    class function setWithSet (set__: ObjectTypeProtocolPtr): instancetype; message 'setWithSet:';
    class function setWithArray (array_: ObjectTypeProtocolPtr): instancetype; message 'setWithArray:';
    function initWithObjects (firstObj: ObjectType): instancetype; varargs; message 'initWithObjects:';
    function initWithSet (set__: ObjectTypeProtocolPtr): instancetype; message 'initWithSet:';
    function initWithSet_copyItems (set__: ObjectTypeProtocolPtr; flag: boolean): instancetype; message 'initWithSet:copyItems:';
    function initWithArray (array_: ObjectTypeProtocolPtr): instancetype; message 'initWithArray:';
  end;

type
  NSMutableSet = objcclass external (NSObject, ObjectTypeProtocol)
  public
    procedure addObject (object_: ObjectType); message 'addObject:';
    procedure removeObject (object_: ObjectType); message 'removeObject:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithCapacity (numItems: NSUInteger): instancetype; message 'initWithCapacity:'; { NS_DESIGNATED_INITIALIZER }
  end;

type
  NSMutableSet = objcclass external (NSObject, ObjectTypeProtocol)
  public
    procedure addObjectsFromArray (array_: ObjectTypeProtocolPtr); message 'addObjectsFromArray:';
    procedure intersectSet (otherSet: ObjectTypeProtocolPtr); message 'intersectSet:';
    procedure minusSet (otherSet: ObjectTypeProtocolPtr); message 'minusSet:';
    procedure removeAllObjects; message 'removeAllObjects';
    procedure unionSet (otherSet: ObjectTypeProtocolPtr); message 'unionSet:';
    procedure setSet (otherSet: ObjectTypeProtocolPtr); message 'setSet:';
  end;

type
  NSMutableSet = objcclass external (NSObject, ObjectTypeProtocol)
  public
    class function setWithCapacity (numItems: NSUInteger): instancetype; message 'setWithCapacity:';
  end;

type
  NSCountedSet = objcclass external (NSObject, ObjectTypeProtocol)
  private
    _table: id;
    _reserved: pointer;
  public
    function initWithCapacity (numItems: NSUInteger): instancetype; message 'initWithCapacity:'; { NS_DESIGNATED_INITIALIZER }
    function initWithArray (array_: ObjectTypeProtocolPtr): instancetype; message 'initWithArray:';
    function initWithSet (set_: ObjectTypeProtocolPtr): instancetype; message 'initWithSet:';
    function countForObject (object_: ObjectType): NSUInteger; message 'countForObject:';
    function objectEnumerator: ObjectTypeProtocolPtr; message 'objectEnumerator';
    procedure addObject (object_: ObjectType); message 'addObject:';
    procedure removeObject (object_: ObjectType); message 'removeObject:';
  end;
{$endif}

