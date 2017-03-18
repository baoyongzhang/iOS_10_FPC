{ Parsed from Foundation.framework NSUbiquitousKeyValueStore.h }

{$ifdef TYPES}
type
  NSUbiquitousKeyValueStorePtr = ^NSUbiquitousKeyValueStore;
{$endif}

{$ifdef CLASSES}

type
  NSUbiquitousKeyValueStore = objcclass external (NSObject)
  private
    _private1: id;
    _private2: id;
    _private3: id;
    _private4: pointer;
    _reserved:array[0..2] of pointer;
    _daemonWakeToken: cint;
    {$if defined(DEPLOYMENT_TARGET_MACOSX)}
    _disabledSuddenTermination: boolean;
    {$endif}
  public
    class function defaultStore: NSUbiquitousKeyValueStore; message 'defaultStore';
    function objectForKey (aKey: NSString): nullable id; message 'objectForKey:';
    procedure setObject_forKey (anObject: nullable id; aKey: NSString); message 'setObject:forKey:';
    procedure removeObjectForKey (aKey: NSString); message 'removeObjectForKey:';
    function stringForKey (aKey: NSString): nullable NSStringPtr; message 'stringForKey:';
    function arrayForKey (aKey: NSString): nullable NSArrayPtr; message 'arrayForKey:';
    function dictionaryForKey (aKey: NSString): nullable NSDictionaryPtr; message 'dictionaryForKey:';
    function dataForKey (aKey: NSString): nullable NSDataPtr; message 'dataForKey:';
    function longLongForKey (aKey: NSString): clonglong; message 'longLongForKey:';
    function doubleForKey (aKey: NSString): double; message 'doubleForKey:';
    function boolForKey (aKey: NSString): boolean; message 'boolForKey:';
    procedure setString_forKey (aString: nullable NSStringPtr; aKey: NSString); message 'setString:forKey:';
    procedure setData_forKey (aData: nullable NSDataPtr; aKey: NSString); message 'setData:forKey:';
    procedure setArray_forKey (anArray: nullable NSArrayPtr; aKey: NSString); message 'setArray:forKey:';
    procedure setDictionary_forKey (aDictionary: nullable NSDictionaryPtr; aKey: NSString); message 'setDictionary:forKey:';
    procedure setLongLong_forKey (value: clonglong; aKey: NSString); message 'setLongLong:forKey:';
    procedure setDouble_forKey (value: double; aKey: NSString); message 'setDouble:forKey:';
    procedure setBool_forKey (value: boolean; aKey: NSString); message 'setBool:forKey:';
    function dictionaryRepresentation: NSDictionary; message 'dictionaryRepresentation';
    function synchronize: boolean; message 'synchronize';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSUbiquitousKeyValueStoreDidChangeExternallyNotification: NSNotificationName { available in 10_7, 5_0 }; cvar; external;
  NSUbiquitousKeyValueStoreChangeReasonKey: NSString { available in 10_7, 5_0 }; cvar; external;
  NSUbiquitousKeyValueStoreChangedKeysKey: NSString { available in 10_7, 5_0 }; cvar; external;
{$endif}

