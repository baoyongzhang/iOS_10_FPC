{ Parsed from Intents.framework INBookRestaurantReservationIntent.h }

{$ifdef TYPES}
type
  INBookRestaurantReservationIntentPtr = ^INBookRestaurantReservationIntent;
  INBookRestaurantReservationIntentHandlingProtocolPtr = ^INBookRestaurantReservationIntentHandlingProtocol;
{$endif}

{$ifdef CLASSES}

type
  INBookRestaurantReservationIntent = objcclass external (INIntent, NSCopyingProtocol)
  public
    procedure setRestaurant(newValue: INRestaurant); message 'setRestaurant:';
    function restaurant: INRestaurant; message 'restaurant';
    procedure setBookingDateComponents(newValue: NSDateComponents); message 'setBookingDateComponents:';
    function bookingDateComponents: NSDateComponents; message 'bookingDateComponents';
    procedure setPartySize(newValue: NSUInteger); message 'setPartySize:';
    function partySize: NSUInteger; message 'partySize';
    procedure setBookingIdentifier(newValue: NSString); message 'setBookingIdentifier:';
    function bookingIdentifier: NSString; message 'bookingIdentifier';
    procedure setGuest(newValue: INRestaurantGuest); message 'setGuest:';
    function guest: INRestaurantGuest; message 'guest';
    procedure setSelectedOffer(newValue: INRestaurantOffer); message 'setSelectedOffer:';
    function selectedOffer: INRestaurantOffer; message 'selectedOffer';
    procedure setGuestProvidedSpecialRequestText(newValue: NSString); message 'setGuestProvidedSpecialRequestText:';
    function guestProvidedSpecialRequestText: NSString; message 'guestProvidedSpecialRequestText';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  INBookRestaurantReservationIntentHandlingProtocol = objcprotocol external name 'INBookRestaurantReservationIntentHandling' (NSObjectProtocol)
    procedure handleBookRestaurantReservation_completion_bookRestaurantReservation (intent: INBookRestaurantReservationIntent; completion: OpaqueCBlock; completion3: id); message 'handleBookRestaurantReservation:completion:bookRestaurantReservation:';
  optional
    procedure confirmBookRestaurantReservation_completion_bookRestaurantReservation (intent: INBookRestaurantReservationIntent; completion: OpaqueCBlock; completion3: id); message 'confirmBookRestaurantReservation:completion:bookRestaurantReservation:';
    procedure resolveRestaurantForBookRestaurantReservation_withCompletion_for (intent: INBookRestaurantReservationIntent; completion: OpaqueCBlock; completion3: id); message 'resolveRestaurantForBookRestaurantReservation:withCompletion:for:';
    procedure resolveBookingDateComponentsForBookRestaurantReservation_withCompletion_for (intent: INBookRestaurantReservationIntent; completion: OpaqueCBlock; completion3: id); message 'resolveBookingDateComponentsForBookRestaurantReservation:withCompletion:for:';
    procedure resolvePartySizeForBookRestaurantReservation_withCompletion_for (intent: INBookRestaurantReservationIntent; completion: OpaqueCBlock; completion3: id); message 'resolvePartySizeForBookRestaurantReservation:withCompletion:for:';
    procedure resolveGuestForBookRestaurantReservation_withCompletion_for (intent: INBookRestaurantReservationIntent; completion: OpaqueCBlock; completion3: id); message 'resolveGuestForBookRestaurantReservation:withCompletion:for:';
    procedure resolveGuestProvidedSpecialRequestTextForBookRestaurantReservation_withCompletion_for (intent: INBookRestaurantReservationIntent; completion: OpaqueCBlock; completion3: id); message 'resolveGuestProvidedSpecialRequestTextForBookRestaurantReservation:withCompletion:for:';
  end;
{$endif}

