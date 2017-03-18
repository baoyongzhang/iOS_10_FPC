{ Parsed from PushKit.framework PKPushRegistry.h }

{$ifdef TYPES}
type
  PKPushRegistryPtr = ^PKPushRegistry;
  PKPushRegistryDelegateProtocolPtr = ^PKPushRegistryDelegateProtocol;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  PKPushTypeVoIP: PKPushType { available in 8_0 }; cvar; external;
  PKPushTypeComplication: PKPushType { available in 9_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  PKPushRegistry = objcclass external (NSObject)
  public
    procedure setDelegate(newValue: PKPushRegistryDelegateProtocol); message 'setDelegate:';
    function delegate: PKPushRegistryDelegateProtocol; message 'delegate';
    procedure setDesiredPushTypes(newValue: PKPushTypeProtocolPtr); message 'setDesiredPushTypes:';
    function desiredPushTypes: PKPushTypeProtocolPtr; message 'desiredPushTypes';
    function pushTokenForType (type_: PKPushType): nullable NSDataPtr; message 'pushTokenForType:';
    function initWithQueue (queue: nullable dispatch_queue_t): instancetype; message 'initWithQueue:'; { NS_DESIGNATED_INITIALIZER }
    function init: instancetype; message 'init';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  PKPushRegistryDelegateProtocol = objcprotocol external name 'PKPushRegistryDelegate' (NSObjectProtocol)
  required
    procedure pushRegistry_didUpdatePushCredentials_forType (registry: PKPushRegistry; credentials: PKPushCredentials; type_: PKPushType); message 'pushRegistry:didUpdatePushCredentials:forType:';
    procedure pushRegistry_didReceiveIncomingPushWithPayload_forType (registry: PKPushRegistry; payload: PKPushPayload; type_: PKPushType); message 'pushRegistry:didReceiveIncomingPushWithPayload:forType:';
  optional
    procedure pushRegistry_didInvalidatePushTokenForType (registry: PKPushRegistry; type_: PKPushType); message 'pushRegistry:didInvalidatePushTokenForType:';
  end;
{$endif}

