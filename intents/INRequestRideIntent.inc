{ Parsed from Intents.framework INRequestRideIntent.h }

{$ifdef TYPES}
type
  INRequestRideIntentPtr = ^INRequestRideIntent;
  INRequestRideIntentHandlingProtocolPtr = ^INRequestRideIntentHandlingProtocol;
{$endif}

{$ifdef CLASSES}

type
  INRequestRideIntent = objcclass external (INIntent)
  public
    function initWithPickupLocation_dropOffLocation_rideOptionName_partySize_paymentMethod (pickupLocation: nullable CLPlacemarkPtr; dropOffLocation: nullable CLPlacemarkPtr; rideOptionName: nullable INSpeakableStringPtr; partySize: nullable NSNumberPtr; paymentMethod: nullable INPaymentMethodPtr): instancetype; message 'initWithPickupLocation:dropOffLocation:rideOptionName:partySize:paymentMethod:'; { NS_DESIGNATED_INITIALIZER }
    function pickupLocation: CLPlacemark; message 'pickupLocation';
    function dropOffLocation: CLPlacemark; message 'dropOffLocation';
    function rideOptionName: INSpeakableString; message 'rideOptionName';
    function NS_REFINED_FOR_SWIFT_: NSNumber *partySize; message 'NS_REFINED_FOR_SWIFT';
    function paymentMethod: INPaymentMethod; message 'paymentMethod';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  INRequestRideIntentHandlingProtocol = objcprotocol external name 'INRequestRideIntentHandling' (NSObjectProtocol)
  required
    procedure handleRequestRide_completion_requestRide (intent: INRequestRideIntent; completion: OpaqueCBlock; completion3: id); message 'handleRequestRide:completion:requestRide:';
  optional
    procedure confirmRequestRide_completion_requestRide (intent: INRequestRideIntent; completion: OpaqueCBlock; completion3: id); message 'confirmRequestRide:completion:requestRide:';
    procedure resolvePickupLocationForRequestRide_withCompletion_forRequestRide (intent: INRequestRideIntent; completion: OpaqueCBlock; with_: id); message 'resolvePickupLocationForRequestRide:withCompletion:forRequestRide:';
    procedure resolveDropOffLocationForRequestRide_withCompletion_forRequestRide (intent: INRequestRideIntent; completion: OpaqueCBlock; with_: id); message 'resolveDropOffLocationForRequestRide:withCompletion:forRequestRide:';
    procedure resolveRideOptionNameForRequestRide_withCompletion_forRequestRide (intent: INRequestRideIntent; completion: OpaqueCBlock; with_: id); message 'resolveRideOptionNameForRequestRide:withCompletion:forRequestRide:';
    procedure resolvePartySizeForRequestRide_withCompletion_forRequestRide (intent: INRequestRideIntent; completion: OpaqueCBlock; with_: id); message 'resolvePartySizeForRequestRide:withCompletion:forRequestRide:';
  end;
{$endif}

