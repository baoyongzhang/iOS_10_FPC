{ Parsed from Foundation.framework NSKeyValueObserving.h }

{$ifdef TYPES}
{$endif}

{$ifdef TYPES}
type
  NSKeyValueObservingOptions = NSUInteger;
  NSKeyValueObservingOptionsPtr = ^NSKeyValueObservingOptions;

const
  NSKeyValueObservingOptionNew = $01;
  NSKeyValueObservingOptionOld = $02;
  NSKeyValueObservingOptionInitial = $04 { available in 10_5, 2_0 };
  NSKeyValueObservingOptionPrior = $08 { available in 10_5, 2_0 };

type
  NSKeyValueChange = NSUInteger;
  NSKeyValueChangePtr = ^NSKeyValueChange;

const
  NSKeyValueChangeSetting = 1;
  NSKeyValueChangeInsertion = 2;
  NSKeyValueChangeRemoval = 3;
  NSKeyValueChangeReplacement = 4;

type
  NSKeyValueSetMutationKind = NSUInteger;
  NSKeyValueSetMutationKindPtr = ^NSKeyValueSetMutationKind;

const
  NSKeyValueUnionSetMutation = 1;
  NSKeyValueMinusSetMutation = 2;
  NSKeyValueIntersectSetMutation = 3;
  NSKeyValueSetSetMutation = 4;

{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSKeyValueChangeKindKey: NSKeyValueChangeKey; cvar; external;
  NSKeyValueChangeNewKey: NSKeyValueChangeKey; cvar; external;
  NSKeyValueChangeOldKey: NSKeyValueChangeKey; cvar; external;
  NSKeyValueChangeIndexesKey: NSKeyValueChangeKey; cvar; external;
  NSKeyValueChangeNotificationIsPriorKey: NSKeyValueChangeKey { available in 10_5, 2_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSKeyValueObserving = objccategory external (NSObject)
    procedure observeValueForKeyPath_ofObject_change_context (keyPath: nullable NSStringPtr; object_: nullable id; change: nullable NSDictionaryPtr; context: nullable voidPtr); message 'observeValueForKeyPath:ofObject:change:context:';
  end;

type
  NSKeyValueObserverRegistration = objccategory external (NSObject)
    procedure addObserver_forKeyPath_options_context (observer: NSObjectPtr; keyPath: NSString; options: NSKeyValueObservingOptions; context: nullable voidPtr); message 'addObserver:forKeyPath:options:context:';
    procedure removeObserver_forKeyPath_context (observer: NSObjectPtr; keyPath: NSString; context: nullable voidPtr); message 'removeObserver:forKeyPath:context:'; { available in 10_7, 5_0 }
    procedure removeObserver_forKeyPath (observer: NSObjectPtr; keyPath: NSString); message 'removeObserver:forKeyPath:';
  end;


type
  NSArray = objcclass external (NSObject, ObjectTypeProtocol)
  public
    procedure addObserver_toObjectsAtIndexes_forKeyPath_options_context (observer: NSObjectPtr; indexes: NSIndexSet; keyPath: NSString; options: NSKeyValueObservingOptions; context: nullable voidPtr); message 'addObserver:toObjectsAtIndexes:forKeyPath:options:context:';
    procedure removeObserver_fromObjectsAtIndexes_forKeyPath_context (observer: NSObjectPtr; indexes: NSIndexSet; keyPath: NSString; context: nullable voidPtr); message 'removeObserver:fromObjectsAtIndexes:forKeyPath:context:'; { available in 10_7, 5_0 }
    procedure removeObserver_fromObjectsAtIndexes_forKeyPath (observer: NSObjectPtr; indexes: NSIndexSet; keyPath: NSString); message 'removeObserver:fromObjectsAtIndexes:forKeyPath:';
    procedure addObserver_forKeyPath_options_context (observer: NSObjectPtr; keyPath: NSString; options: NSKeyValueObservingOptions; context: nullable voidPtr); message 'addObserver:forKeyPath:options:context:';
    procedure removeObserver_forKeyPath_context (observer: NSObjectPtr; keyPath: NSString; context: nullable voidPtr); message 'removeObserver:forKeyPath:context:'; { available in 10_7, 5_0 }
    procedure removeObserver_forKeyPath (observer: NSObjectPtr; keyPath: NSString); message 'removeObserver:forKeyPath:';
  end;

type
  NSOrderedSet = objcclass external (NSObject, ObjectTypeProtocol)
  public
    procedure addObserver_forKeyPath_options_context (observer: NSObjectPtr; keyPath: NSString; options: NSKeyValueObservingOptions; context: nullable voidPtr); message 'addObserver:forKeyPath:options:context:';
    procedure removeObserver_forKeyPath_context (observer: NSObjectPtr; keyPath: NSString; context: nullable voidPtr); message 'removeObserver:forKeyPath:context:'; { available in 10_7, 5_0 }
    procedure removeObserver_forKeyPath (observer: NSObjectPtr; keyPath: NSString); message 'removeObserver:forKeyPath:';
  end;

type
  NSSet = objcclass external (NSObject, ObjectTypeProtocol)
  public
    procedure addObserver_forKeyPath_options_context (observer: NSObjectPtr; keyPath: NSString; options: NSKeyValueObservingOptions; context: nullable voidPtr); message 'addObserver:forKeyPath:options:context:';
    procedure removeObserver_forKeyPath_context (observer: NSObjectPtr; keyPath: NSString; context: nullable voidPtr); message 'removeObserver:forKeyPath:context:'; { available in 10_7, 5_0 }
    procedure removeObserver_forKeyPath (observer: NSObjectPtr; keyPath: NSString); message 'removeObserver:forKeyPath:';
  end;


type
  NSKeyValueObserverNotification = objccategory external (NSObject)
    procedure willChangeValueForKey (key: NSString); message 'willChangeValueForKey:';
    procedure didChangeValueForKey (key: NSString); message 'didChangeValueForKey:';
    procedure willChange_valuesAtIndexes_forKey (changeKind: NSKeyValueChange; indexes: NSIndexSet; key: NSString); message 'willChange:valuesAtIndexes:forKey:';
    procedure didChange_valuesAtIndexes_forKey (changeKind: NSKeyValueChange; indexes: NSIndexSet; key: NSString); message 'didChange:valuesAtIndexes:forKey:';
    procedure willChangeValueForKey_withSetMutation_usingObjects (key: NSString; mutationKind: NSKeyValueSetMutationKind; objects: NSSet); message 'willChangeValueForKey:withSetMutation:usingObjects:';
    procedure didChangeValueForKey_withSetMutation_usingObjects (key: NSString; mutationKind: NSKeyValueSetMutationKind; objects: NSSet); message 'didChangeValueForKey:withSetMutation:usingObjects:';
  end;

type
  NSKeyValueObservingCustomization = objccategory external (NSObject)
    class function keyPathsForValuesAffectingValueForKey (key: NSString): NSString *ProtocolPtr; message 'keyPathsForValuesAffectingValueForKey:'; { available in 10_5, 2_0 }
    class function automaticallyNotifiesObserversForKey (key: NSString): boolean; message 'automaticallyNotifiesObserversForKey:';
    procedure setObservationInfo(newValue: pointer); message 'setObservationInfo:';
    function observationInfo: pointer; message 'observationInfo';
  end;
{$endif}

{$if (defined(TARGET_OS_MAC) and not (defined(TARGET_OS_EMBEDDED) or defined(TARGET_OS_IPHONE)))}
{$ifdef CLASSES}

type
  NSDeprecatedKeyValueObservingCustomization = objccategory external (NSObject)
    class procedure setKeys_triggerChangeNotificationsForDependentKey (keys: NSArray; dependentKey: NSString); message 'setKeys:triggerChangeNotificationsForDependentKey:'; deprecated 'in 10_0, 10_5, 2_0, 2_0';
  end;
{$endif}

{$endif}
