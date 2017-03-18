{ Parsed from Intents.framework INRestaurant.h }

{$ifdef TYPES}
type
  INRestaurantPtr = ^INRestaurant;
{$endif}

{$ifdef CLASSES}

type
  INRestaurant = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function initWithLocation_name_vendorIdentifier_restaurantIdentifier (location: CLLocation; name: NSString; vendorIdentifier: NSString; restaurantIdentifier: NSString): instancetype; message 'initWithLocation:name:vendorIdentifier:restaurantIdentifier:'; { NS_DESIGNATED_INITIALIZER }
    procedure setLocation(newValue: CLLocation); message 'setLocation:';
    function location: CLLocation; message 'location';
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    procedure setVendorIdentifier(newValue: NSString); message 'setVendorIdentifier:';
    function vendorIdentifier: NSString; message 'vendorIdentifier';
    procedure setRestaurantIdentifier(newValue: NSString); message 'setRestaurantIdentifier:';
    function restaurantIdentifier: NSString; message 'restaurantIdentifier';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

