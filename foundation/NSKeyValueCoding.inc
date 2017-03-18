{ Parsed from Foundation.framework NSKeyValueCoding.h }

{ Types from NSKeyValueCoding }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSUndefinedKeyException: NSExceptionName; cvar; external;
{$endif}

{$ifdef TYPES}
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSAverageKeyValueOperator: NSKeyValueOperator; cvar; external;
  NSCountKeyValueOperator: NSKeyValueOperator; cvar; external;
  NSDistinctUnionOfArraysKeyValueOperator: NSKeyValueOperator; cvar; external;
  NSDistinctUnionOfObjectsKeyValueOperator: NSKeyValueOperator; cvar; external;
  NSDistinctUnionOfSetsKeyValueOperator: NSKeyValueOperator; cvar; external;
  NSMaximumKeyValueOperator: NSKeyValueOperator; cvar; external;
  NSMinimumKeyValueOperator: NSKeyValueOperator; cvar; external;
  NSSumKeyValueOperator: NSKeyValueOperator; cvar; external;
  NSUnionOfArraysKeyValueOperator: NSKeyValueOperator; cvar; external;
  NSUnionOfObjectsKeyValueOperator: NSKeyValueOperator; cvar; external;
  NSUnionOfSetsKeyValueOperator: NSKeyValueOperator; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSKeyValueCoding = objccategory external (NSObject)
    {$if defined(FOUNDATION_SWIFT_SDK_EPOCH_AT_LEAST)}
    function accessInstanceVariablesDirectly: boolean; message 'accessInstanceVariablesDirectly';
    {$endif}
    function valueForKey (key: NSString): nullable id; message 'valueForKey:';
    procedure setValue_forKey (value: nullable id; key: NSString); message 'setValue:forKey:';
    function validateValue_forKey_error (ioValue: id _Nullable * _Nonnull; inKey: NSString; outError: NSErrorPtr): boolean; message 'validateValue:forKey:error:';
    function mutableArrayValueForKey (key: NSString): NSMutableArray; message 'mutableArrayValueForKey:';
    function mutableOrderedSetValueForKey (key: NSString): NSMutableOrderedSet; message 'mutableOrderedSetValueForKey:'; { available in 10_7, 5_0 }
    function mutableSetValueForKey (key: NSString): NSMutableSet; message 'mutableSetValueForKey:';
    function valueForKeyPath (keyPath: NSString): nullable id; message 'valueForKeyPath:';
    procedure setValue_forKeyPath (value: nullable id; keyPath: NSString); message 'setValue:forKeyPath:';
    function validateValue_forKeyPath_error (ioValue: id _Nullable * _Nonnull; inKeyPath: NSString; outError: NSErrorPtr): boolean; message 'validateValue:forKeyPath:error:';
    function mutableArrayValueForKeyPath (keyPath: NSString): NSMutableArray; message 'mutableArrayValueForKeyPath:';
    function mutableOrderedSetValueForKeyPath (keyPath: NSString): NSMutableOrderedSet; message 'mutableOrderedSetValueForKeyPath:'; { available in 10_7, 5_0 }
    function mutableSetValueForKeyPath (keyPath: NSString): NSMutableSet; message 'mutableSetValueForKeyPath:';
    function valueForUndefinedKey (key: NSString): nullable id; message 'valueForUndefinedKey:';
    procedure setValue_forUndefinedKey (value: nullable id; key: NSString); message 'setValue:forUndefinedKey:';
    procedure setNilValueForKey (key: NSString); message 'setNilValueForKey:';
    function dictionaryWithValuesForKeys (keys: NSString *ProtocolPtr): NSDictionary; message 'dictionaryWithValuesForKeys:';
    procedure setValuesForKeysWithDictionary (keyedValues: NSDictionary); message 'setValuesForKeysWithDictionary:';
  end;


type
  NSArray = objcclass external (NSObject, ObjectTypeProtocol)
  public
    function valueForKey (key: NSString): id; message 'valueForKey:';
    procedure setValue_forKey (value: nullable id; key: NSString); message 'setValue:forKey:';
  end;

type
  NSDictionary = objcclass external (NSObject, KeyTypeProtocol, ObjectTypeProtocol)
  public
    function valueForKey (key: NSString): nullable ObjectType; message 'valueForKey:';
  end;

type
  NSMutableDictionary = objcclass external (NSObject, KeyTypeProtocol, ObjectTypeProtocol)
  public
    procedure setValue_forKey (value: nullable ObjectType; key: NSString); message 'setValue:forKey:';
  end;

type
  NSOrderedSet = objcclass external (NSObject, ObjectTypeProtocol)
  public
    function valueForKey (key: NSString): id; message 'valueForKey:'; { available in 10_7, 5_0 }
    procedure setValue_forKey (value: nullable id; key: NSString); message 'setValue:forKey:'; { available in 10_7, 5_0 }
  end;

type
  NSSet = objcclass external (NSObject, ObjectTypeProtocol)
  public
    function valueForKey (key: NSString): id; message 'valueForKey:';
    procedure setValue_forKey (value: nullable id; key: NSString); message 'setValue:forKey:';
  end;
{$endif}

{$if (defined(TARGET_OS_MAC) and not (defined(TARGET_OS_EMBEDDED) or defined(TARGET_OS_IPHONE)))}
{$ifdef CLASSES}

type
  NSDeprecatedKeyValueCoding = objccategory external (NSObject)
    class function useStoredAccessor: boolean; message 'useStoredAccessor'; deprecated 'in 10_0, 10_4, 2_0, 2_0';
    function storedValueForKey (key: NSString): nullable id; message 'storedValueForKey:'; deprecated 'in 10_0, 10_4, 2_0, 2_0';
    procedure takeStoredValue_forKey (value: nullable id; key: NSString); message 'takeStoredValue:forKey:'; deprecated 'in 10_0, 10_4, 2_0, 2_0';
    procedure takeValue_forKey (value: nullable id; key: NSString); message 'takeValue:forKey:'; deprecated 'in 10_0, 10_3, 2_0, 2_0';
    procedure takeValue_forKeyPath (value: nullable id; keyPath: NSString); message 'takeValue:forKeyPath:'; deprecated 'in 10_0, 10_3, 2_0, 2_0';
    function handleQueryWithUnboundKey (key: NSString): nullable id; message 'handleQueryWithUnboundKey:'; deprecated 'in 10_0, 10_3, 2_0, 2_0';
    procedure handleTakeValue_forUnboundKey (value: nullable id; key: NSString); message 'handleTakeValue:forUnboundKey:'; deprecated 'in 10_0, 10_3, 2_0, 2_0';
    procedure unableToSetNilForKey (key: NSString); message 'unableToSetNilForKey:'; deprecated 'in 10_0, 10_3, 2_0, 2_0';
    function valuesForKeys (keys: NSArray): NSDictionary; message 'valuesForKeys:'; deprecated 'in 10_0, 10_3, 2_0, 2_0';
    procedure takeValuesFromDictionary (properties: NSDictionary); message 'takeValuesFromDictionary:'; deprecated 'in 10_0, 10_3, 2_0, 2_0';
  end;
{$endif}

{$endif}
