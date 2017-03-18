{ Parsed from Intents.framework INGetRideStatusIntent.h }

{$ifdef TYPES}
type
  INGetRideStatusIntentPtr = ^INGetRideStatusIntent;
  INGetRideStatusIntentHandlingProtocolPtr = ^INGetRideStatusIntentHandlingProtocol;
  INGetRideStatusIntentResponseObserverProtocolPtr = ^INGetRideStatusIntentResponseObserverProtocol;
{$endif}

{$ifdef CLASSES}

type
  INGetRideStatusIntent = objcclass external (INIntent)
  public
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  INGetRideStatusIntentHandlingProtocol = objcprotocol external name 'INGetRideStatusIntentHandling' (NSObjectProtocol)
  required
    procedure handleGetRideStatus_completion_getRideStatus (intent: INGetRideStatusIntent; completion: OpaqueCBlock; completion3: id); message 'handleGetRideStatus:completion:getRideStatus:';
    procedure startSendingUpdatesForGetRideStatus_toObserver_forGetRideStatus (intent: INGetRideStatusIntent; observer: INGetRideStatusIntentResponseObserverProtocol; to_: id); message 'startSendingUpdatesForGetRideStatus:toObserver:forGetRideStatus:';
    procedure stopSendingUpdatesForGetRideStatus (intent: INGetRideStatusIntent); message 'stopSendingUpdatesForGetRideStatus:';
  optional
    procedure confirmGetRideStatus_completion_getRideStatus (intent: INGetRideStatusIntent; completion: OpaqueCBlock; completion3: id); message 'confirmGetRideStatus:completion:getRideStatus:';
  end;

type
  INGetRideStatusIntentResponseObserverProtocol = objcprotocol external name 'INGetRideStatusIntentResponseObserver' (NSObjectProtocol)
    procedure getRideStatusResponseDidUpdate (response: INGetRideStatusIntentResponse); message 'getRideStatusResponseDidUpdate:';
  end;
{$endif}

