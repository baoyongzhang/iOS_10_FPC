{ Parsed from Intents.framework INRestaurantReservationUserBooking.h }

{$ifdef TYPES}
type
  INRestaurantReservationUserBookingPtr = ^INRestaurantReservationUserBooking;
{$endif}

{$ifdef TYPES}
type
  INRestaurantReservationUserBookingStatus = NSUInteger;
  INRestaurantReservationUserBookingStatusPtr = ^INRestaurantReservationUserBookingStatus;

const
  INRestaurantReservationUserBookingStatusPending = 0;
  INRestaurantReservationUserBookingStatusConfirmed = 1;
  INRestaurantReservationUserBookingStatusDenied = 2;
{$endif}

{$ifdef CLASSES}

type
  INRestaurantReservationUserBooking = objcclass external (INRestaurantReservationBooking, NSCopyingProtocol)
  public
    function initWithRestaurant_bookingDate_partySize_bookingIdentifier_guest_status_dateStatusModified (restaurant_: INRestaurant; bookingDate_: NSDate; partySize_: NSUInteger; bookingIdentifier_: NSString; guest: INRestaurantGuest; status: INRestaurantReservationUserBookingStatus; dateStatusModified: NSDate): instancetype; message 'initWithRestaurant:bookingDate:partySize:bookingIdentifier:guest:status:dateStatusModified:';
    procedure setGuest(newValue: INRestaurantGuest); message 'setGuest:';
    function guest: INRestaurantGuest; message 'guest';
    procedure setAdvisementText(newValue: NSString); message 'setAdvisementText:';
    function advisementText: NSString; message 'advisementText';
    procedure setSelectedOffer(newValue: INRestaurantOffer); message 'setSelectedOffer:';
    function selectedOffer: INRestaurantOffer; message 'selectedOffer';
    procedure setGuestProvidedSpecialRequestText(newValue: NSString); message 'setGuestProvidedSpecialRequestText:';
    function guestProvidedSpecialRequestText: NSString; message 'guestProvidedSpecialRequestText';
    procedure setStatus(newValue: INRestaurantReservationUserBookingStatus); message 'setStatus:';
    function status: INRestaurantReservationUserBookingStatus; message 'status';
    procedure setDateStatusModified(newValue: NSDate); message 'setDateStatusModified:';
    function dateStatusModified: NSDate; message 'dateStatusModified';
  end;
{$endif}

