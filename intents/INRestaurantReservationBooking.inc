{ Parsed from Intents.framework INRestaurantReservationBooking.h }

{$ifdef TYPES}
type
  INRestaurantReservationBookingPtr = ^INRestaurantReservationBooking;
{$endif}

{$ifdef CLASSES}

type
  INRestaurantReservationBooking = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function initWithRestaurant_bookingDate_partySize_bookingIdentifier (restaurant: INRestaurant; bookingDate: NSDate; partySize: NSUInteger; bookingIdentifier: NSString): instancetype; message 'initWithRestaurant:bookingDate:partySize:bookingIdentifier:'; { NS_DESIGNATED_INITIALIZER }
    procedure setRestaurant(newValue: INRestaurant); message 'setRestaurant:';
    function restaurant: INRestaurant; message 'restaurant';
    procedure setBookingDescription(newValue: NSString); message 'setBookingDescription:';
    function bookingDescription: NSString; message 'bookingDescription';
    procedure setBookingDate(newValue: NSDate); message 'setBookingDate:';
    function bookingDate: NSDate; message 'bookingDate';
    procedure setPartySize(newValue: NSUInteger); message 'setPartySize:';
    function partySize: NSUInteger; message 'partySize';
    procedure setBookingIdentifier(newValue: NSString); message 'setBookingIdentifier:';
    function bookingIdentifier: NSString; message 'bookingIdentifier';
    procedure setBookingAvailable(newValue: boolean); message 'setBookingAvailable:';
    function isBookingAvailable: boolean; message 'isBookingAvailable';
    procedure setOffers(newValue: INRestaurantOffer *ProtocolPtr); message 'setOffers:';
    function offers: INRestaurantOffer *ProtocolPtr; message 'offers';
    procedure setRequiresManualRequest(newValue: boolean); message 'setRequiresManualRequest:';
    function requiresManualRequest: boolean; message 'requiresManualRequest';
    procedure setRequiresEmailAddress(newValue: boolean); message 'setRequiresEmailAddress:';
    function requiresEmailAddress: boolean; message 'requiresEmailAddress';
    procedure setRequiresName(newValue: boolean); message 'setRequiresName:';
    function requiresName: boolean; message 'requiresName';
    procedure setRequiresPhoneNumber(newValue: boolean); message 'setRequiresPhoneNumber:';
    function requiresPhoneNumber: boolean; message 'requiresPhoneNumber';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

