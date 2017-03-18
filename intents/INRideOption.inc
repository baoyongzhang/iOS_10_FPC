{ Parsed from Intents.framework INRideOption.h }

{$ifdef TYPES}
type
  INRideOptionPtr = ^INRideOption;
{$endif}

{$ifdef CLASSES}

type
  INRideOption = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function init: instancetype; message 'init';
    function initWithName_estimatedPickupDate (name: NSString; estimatedPickupDate: NSDate): instancetype; message 'initWithName:estimatedPickupDate:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (decoder: NSCoder): nullable instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    procedure setEstimatedPickupDate(newValue: NSDate); message 'setEstimatedPickupDate:';
    function estimatedPickupDate: NSDate; message 'estimatedPickupDate';
    procedure setPriceRange(newValue: INPriceRange); message 'setPriceRange:';
    function priceRange: INPriceRange; message 'priceRange';
    procedure setUsesMeteredFare(newValue: NSNumber); message 'setUsesMeteredFare:';
    function usesMeteredFare: NSNumber; message 'usesMeteredFare';
    procedure setDisclaimerMessage(newValue: NSString); message 'setDisclaimerMessage:';
    function disclaimerMessage: NSString; message 'disclaimerMessage';
    procedure setAvailablePartySizeOptions(newValue: INRidePartySizeOption *ProtocolPtr); message 'setAvailablePartySizeOptions:';
    function availablePartySizeOptions: INRidePartySizeOption *ProtocolPtr; message 'availablePartySizeOptions';
    procedure setAvailablePartySizeOptionsSelectionPrompt(newValue: NSString); message 'setAvailablePartySizeOptionsSelectionPrompt:';
    function availablePartySizeOptionsSelectionPrompt: NSString; message 'availablePartySizeOptionsSelectionPrompt';
    procedure setSpecialPricing(newValue: NSString); message 'setSpecialPricing:';
    function specialPricing: NSString; message 'specialPricing';
    procedure setSpecialPricingBadgeImage(newValue: INImage); message 'setSpecialPricingBadgeImage:';
    function specialPricingBadgeImage: INImage; message 'specialPricingBadgeImage';
    procedure setFareLineItems(newValue: INRideFareLineItem *ProtocolPtr); message 'setFareLineItems:';
    function fareLineItems: INRideFareLineItem *ProtocolPtr; message 'fareLineItems';
    procedure setUserActivityForBookingInApplication(newValue: NSUserActivity); message 'setUserActivityForBookingInApplication:';
    function userActivityForBookingInApplication: NSUserActivity; message 'userActivityForBookingInApplication';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;


type
  INRideOption_Deprecated = objccategory external name 'Deprecated' (INRideOption)
    procedure setIdentifier(newValue: NSString); message 'setIdentifier:';
    function identifier: NSString; message 'identifier';
  end;
{$endif}

