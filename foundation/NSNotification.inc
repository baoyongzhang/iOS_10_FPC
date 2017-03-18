{ Parsed from Foundation.framework NSNotification.h }

{ Types from NSNotificationCenter }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  NSNotificationPtr = ^NSNotification;
  NSNotificationCenterPtr = ^NSNotificationCenter;
{$endif}

{$ifdef TYPES}
{$endif}

{$ifdef CLASSES}

type
  NSNotification = objcclass external (NSObject, NSCopyingProtocol, NSCodingProtocol)
  public
    function name: NSNotificationName; message 'name';
    function object_: id; message 'object';
    function userInfo: NSDictionary; message 'userInfo';
    function initWithName_object_userInfo (name_: NSNotificationName; object_: nullable id; userInfo_: nullable NSDictionaryPtr): instancetype; message 'initWithName:object:userInfo:'; { available in 10_6, 4_0 }
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
  end;


type
  NSNotificationCreation = objccategory external (NSNotification)
    class function notificationWithName_object (aName: NSNotificationName; anObject: nullable id): instancetype; message 'notificationWithName:object:';
    class function notificationWithName_object_userInfo (aName: NSNotificationName; anObject: nullable id; aUserInfo: nullable NSDictionaryPtr): instancetype; message 'notificationWithName:object:userInfo:';
    function init: instancetype; message 'init';
  end;


type
  NSNotificationCenter = objcclass external (NSObject)
  private
    _impl: pointer;
    _callback: pointer;
    _pad:array[0..10] of pointer;
  public
    {$if defined(FOUNDATION_SWIFT_SDK_EPOCH_AT_LEAST)}
    function defaultCenter: NSNotificationCenter; message 'defaultCenter';
    procedure addObserver_selector_name_object (observer: id; aSelector: SEL; aName: nullable NSNotificationName; anObject: nullable id); message 'addObserver:selector:name:object:';
    {$endif}
    procedure postNotification (notification: NSNotification); message 'postNotification:';
    procedure postNotificationName_object (aName: NSNotificationName; anObject: nullable id); message 'postNotificationName:object:';
    procedure postNotificationName_object_userInfo (aName: NSNotificationName; anObject: nullable id; aUserInfo: nullable NSDictionaryPtr); message 'postNotificationName:object:userInfo:';
    procedure removeObserver (observer: id); message 'removeObserver:';
    procedure removeObserver_name_object (observer: id; aName: nullable NSNotificationName; anObject: nullable id); message 'removeObserver:name:object:';
    function addObserverForName_object_queue_usingBlock (name: nullable NSNotificationName; obj: nullable id; queue: nullable NSOperationQueuePtr; block: OpaqueCBlock): NSObjectProtocol; message 'addObserverForName:object:queue:usingBlock:'; { available in 10_6, 4_0 }
  end;
{$endif}

