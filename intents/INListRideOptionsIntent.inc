{ Parsed from Intents.framework INListRideOptionsIntent.h }

{$ifdef TYPES}
type
  INListRideOptionsIntentPtr = ^INListRideOptionsIntent;
  INListRideOptionsIntentHandlingProtocolPtr = ^INListRideOptionsIntentHandlingProtocol;
{$endif}

{$ifdef CLASSES}

type
  INListRideOptionsIntent = objcclass external (INIntent)
  public
    function initWithPickupLocation_dropOffLocation (pickupLocation: nullable CLPlacemarkPtr; dropOffLocation: nullable CLPlacemarkPtr): instancetype; message 'initWithPickupLocation:dropOffLocation:'; { NS_DESIGNATED_INITIALIZER }
    function pickupLocation: CLPlacemark; message 'pickupLocation';
    function dropOffLocation: CLPlacemark; message 'dropOffLocation';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  INListRideOptionsIntentHandlingProtocol = objcprotocol external name 'INListRideOptionsIntentHandling' (NSObjectProtocol)
  required
    procedure handleListRideOptions_completion_listRideOptions (intent: INListRideOptionsIntent; completion: OpaqueCBlock; completion3: id); message 'handleListRideOptions:completion:listRideOptions:';
  optional
    procedure confirmListRideOptions_completion_listRideOptions (intent: INListRideOptionsIntent; completion: OpaqueCBlock; completion3: id); message 'confirmListRideOptions:completion:listRideOptions:';
    procedure resolvePickupLocationForListRideOptions_withCompletion_forListRideOptions (intent: INListRideOptionsIntent; completion: OpaqueCBlock; with_: id); message 'resolvePickupLocationForListRideOptions:withCompletion:forListRideOptions:';
    procedure resolveDropOffLocationForListRideOptions_withCompletion_forListRideOptions (intent: INListRideOptionsIntent; completion: OpaqueCBlock; with_: id); message 'resolveDropOffLocationForListRideOptions:withCompletion:forListRideOptions:';
  end;
{$endif}

