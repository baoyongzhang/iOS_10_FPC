{ Parsed from Foundation.framework NSDictionary.h }

{ Types from NSDictionary }
{$ifdef TYPES}

{$endif}


{ Types from NSDictionary }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  NSDictionaryPtr = ^NSDictionary;
  NSMutableDictionaryPtr = ^NSMutableDictionary;
{$endif}

{$ifdef CLASSES}

type
  NSDictionary = objcclass external (NSObject, __covariant KeyTypeProtocol, __covariant ObjectTypeProtocol)
  public
    function count: NSUInteger; message 'count';
    function objectForKey (aKey: KeyType): nullable ObjectType; message 'objectForKey:';
    function keyEnumerator: KeyTypeProtocolPtr; message 'keyEnumerator';
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    {$if defined(TARGET_OS_WIN32)}
    function initWithObjects_forKeys_count (objects: ObjectType _Nonnull; keys: KeyType _Nonnull; cnt: NSUInteger): instancetype; message 'initWithObjects:forKeys:count:';
    {$else}
    function initWithObjects_forKeys_count (objects: ObjectType _Nonnull; keys: NSCopyingProtocol _Nonnull; cnt: NSUInteger): instancetype; message 'initWithObjects:forKeys:count:'; { NS_DESIGNATED_INITIALIZER }
    {$endif}
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
  end;

type
  NSDictionary = objcclass external (NSObject, KeyTypeProtocol, ObjectTypeProtocol)
  public
    function allKeys: KeyTypeProtocolPtr; message 'allKeys';
    function allKeysForObject (anObject: ObjectType): KeyTypeProtocolPtr; message 'allKeysForObject:';
    function allValues: ObjectTypeProtocolPtr; message 'allValues';
    function description: NSString; message 'description';
    function descriptionInStringsFileFormat: NSString; message 'descriptionInStringsFileFormat';
    function descriptionWithLocale (locale: nullable id): NSString; message 'descriptionWithLocale:';
    function descriptionWithLocale_indent (locale: nullable id; level: NSUInteger): NSString; message 'descriptionWithLocale:indent:';
    function isEqualToDictionary (otherDictionary: NSDictionary): boolean; message 'isEqualToDictionary:';
    function objectEnumerator: ObjectTypeProtocolPtr; message 'objectEnumerator';
    function objectsForKeys_notFoundMarker (keys: KeyTypeProtocolPtr; marker: ObjectType): ObjectTypeProtocolPtr; message 'objectsForKeys:notFoundMarker:';
    function writeToFile_atomically (path: NSString; useAuxiliaryFile: boolean): boolean; message 'writeToFile:atomically:';
    function writeToURL_atomically (url: NSURL; atomically: boolean): boolean; message 'writeToURL:atomically:';
    function keysSortedByValueUsingSelector (comparator: SEL): KeyTypeProtocolPtr; message 'keysSortedByValueUsingSelector:';
    procedure getObjects_andKeys_count (objects: ObjectTypePtr { variable size array of ObjectType }; keys: KeyTypePtr { variable size array of KeyType }; count: NSUInteger); message 'getObjects:andKeys:count:'; { available in 10_7, 5_0 }
    function objectForKeyedSubscript (key: KeyType): nullable ObjectType; message 'objectForKeyedSubscript:'; { available in 10_8, 6_0 }
    procedure enumerateKeysAndObjectsUsingBlock (block: void (NS_NOESCAPE ^)(KeyType key, ObjectType obj, BOOL *stop)); message 'enumerateKeysAndObjectsUsingBlock:'; { available in 10_6, 4_0 }
    procedure enumerateKeysAndObjectsWithOptions_usingBlock (opts: NSEnumerationOptions; block: void (NS_NOESCAPE ^)(KeyType key, ObjectType obj, BOOL *stop)); message 'enumerateKeysAndObjectsWithOptions:usingBlock:'; { available in 10_6, 4_0 }
    function keysSortedByValueUsingComparator (cmptr: NSComparator NS_NOESCAPE): KeyTypeProtocolPtr; message 'keysSortedByValueUsingComparator:'; { available in 10_6, 4_0 }
    function keysSortedByValueWithOptions_usingComparator (opts: NSSortOptions; cmptr: NSComparator NS_NOESCAPE): KeyTypeProtocolPtr; message 'keysSortedByValueWithOptions:usingComparator:'; { available in 10_6, 4_0 }
    function keysOfEntriesPassingTest (predicate: BOOL (NS_NOESCAPE ^)(KeyType key, ObjectType obj, BOOL *stop)): KeyTypeProtocolPtr; message 'keysOfEntriesPassingTest:'; { available in 10_6, 4_0 }
    function keysOfEntriesWithOptions_passingTest (opts: NSEnumerationOptions; predicate: BOOL (NS_NOESCAPE ^)(KeyType key, ObjectType obj, BOOL *stop)): KeyTypeProtocolPtr; message 'keysOfEntriesWithOptions:passingTest:'; { available in 10_6, 4_0 }
  end;

type
  NSDictionary = objcclass external (NSObject, KeyTypeProtocol, ObjectTypeProtocol)
  public
    procedure getObjects_andKeys (objects: ObjectTypePtr { variable size array of ObjectType }; keys: KeyTypePtr { variable size array of KeyType }); message 'getObjects:andKeys:';
  end;

type
  NSDictionary = objcclass external (NSObject, KeyTypeProtocol, ObjectTypeProtocol)
  public
    class function dictionary: instancetype; message 'dictionary';
    class function dictionaryWithObject_forKey (object_: ObjectType; key: NSCopyingProtocol): instancetype; message 'dictionaryWithObject:forKey:';
    {$if defined(TARGET_OS_WIN32)}
    class function dictionaryWithObjects_forKeys_count (objects: ObjectTypePtr { variable size array of ObjectType }; keys: KeyTypePtr { variable size array of KeyType }; cnt: NSUInteger): instancetype; message 'dictionaryWithObjects:forKeys:count:';
    {$else}
    class function dictionaryWithObjects_forKeys_count (objects: ObjectTypePtr { variable size array of ObjectType }; keys: NSCopyingProtocol; cnt: NSUInteger): instancetype; message 'dictionaryWithObjects:forKeys:count:';
    {$endif}
    class function dictionaryWithObjectsAndKeys (firstObject: id): instancetype; message 'dictionaryWithObjectsAndKeys:';
    class function dictionaryWithDictionary (dict: NSDictionary): instancetype; message 'dictionaryWithDictionary:';
    class function dictionaryWithObjects_forKeys (objects: ObjectTypeProtocolPtr; keys: KeyType <NSCopyingProtocol>Ptr): instancetype; message 'dictionaryWithObjects:forKeys:';
    function initWithObjectsAndKeys (firstObject: id): instancetype; varargs; message 'initWithObjectsAndKeys:';
    function initWithDictionary (otherDictionary: NSDictionary): instancetype; message 'initWithDictionary:';
    function initWithDictionary_copyItems (otherDictionary: NSDictionary; flag: boolean): instancetype; message 'initWithDictionary:copyItems:';
    function initWithObjects_forKeys (objects: ObjectTypeProtocolPtr; keys: KeyType <NSCopyingProtocol>Ptr): instancetype; message 'initWithObjects:forKeys:';
    class function dictionaryWithContentsOfFile (path: NSString): nullable NSDictionaryPtr; message 'dictionaryWithContentsOfFile:';
    class function dictionaryWithContentsOfURL (url: NSURL): nullable NSDictionaryPtr; message 'dictionaryWithContentsOfURL:';
    function initWithContentsOfFile (path: NSString): nullable NSDictionaryPtr; message 'initWithContentsOfFile:';
    function initWithContentsOfURL (url: NSURL): nullable NSDictionaryPtr; message 'initWithContentsOfURL:';
  end;

type
  NSMutableDictionary = objcclass external (NSObject, KeyTypeProtocol, ObjectTypeProtocol)
  public
    procedure removeObjectForKey (aKey: KeyType); message 'removeObjectForKey:';
    procedure setObject_forKey (anObject: ObjectType; aKey: NSCopyingProtocol); message 'setObject:forKey:';
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithCapacity (numItems: NSUInteger): instancetype; message 'initWithCapacity:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
  end;

type
  NSMutableDictionary = objcclass external (NSObject, KeyTypeProtocol, ObjectTypeProtocol)
  public
    procedure addEntriesFromDictionary (otherDictionary: NSDictionary); message 'addEntriesFromDictionary:';
    procedure removeAllObjects; message 'removeAllObjects';
    procedure removeObjectsForKeys (keyArray: KeyTypeProtocolPtr); message 'removeObjectsForKeys:';
    procedure setDictionary (otherDictionary: NSDictionary); message 'setDictionary:';
    procedure setObject_forKeyedSubscript (obj: nullable ObjectType; key: NSCopyingProtocol); message 'setObject:forKeyedSubscript:'; { available in 10_8, 6_0 }
  end;

type
  NSMutableDictionary = objcclass external (NSObject, KeyTypeProtocol, ObjectTypeProtocol)
  public
    class function dictionaryWithCapacity (numItems: NSUInteger): instancetype; message 'dictionaryWithCapacity:';
    class function dictionaryWithContentsOfFile (path: NSString): nullable NSMutableDictionaryPtr; message 'dictionaryWithContentsOfFile:';
    class function dictionaryWithContentsOfURL (url: NSURL): nullable NSMutableDictionaryPtr; message 'dictionaryWithContentsOfURL:';
    function initWithContentsOfFile (path: NSString): nullable NSMutableDictionaryPtr; message 'initWithContentsOfFile:';
    function initWithContentsOfURL (url: NSURL): nullable NSMutableDictionaryPtr; message 'initWithContentsOfURL:';
  end;

type
  NSDictionary = objcclass external (NSObject, KeyTypeProtocol, ObjectTypeProtocol)
  public
    class function sharedKeySetForKeys (keys: KeyType <NSCopyingProtocol>Ptr): id; message 'sharedKeySetForKeys:'; { available in 10_8, 6_0 }
  end;

type
  NSMutableDictionary = objcclass external (NSObject, KeyTypeProtocol, ObjectTypeProtocol)
  public
    class function dictionaryWithSharedKeySet (keyset: id): NSMutableDictionary; message 'dictionaryWithSharedKeySet:'; { available in 10_8, 6_0 }
  end;
{$endif}

