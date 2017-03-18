{ Parsed from Intents.framework INPriceRange.h }

{$ifdef TYPES}
type
  INPriceRangePtr = ^INPriceRange;
{$endif}

{$ifdef CLASSES}

type
  INPriceRange = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function init: instancetype; message 'init';
    function initWithRangeBetweenPrice_andPrice_currencyCode_firstPrice (firstPrice: NSDecimalNumber; secondPrice: NSDecimalNumber; currencyCode: NSString; secondPrice4: id): instancetype; message 'initWithRangeBetweenPrice:andPrice:currencyCode:firstPrice:'; { NS_DESIGNATED_INITIALIZER }
    function initWithMaximumPrice_currencyCode_maximumPrice (maximumPrice: NSDecimalNumber; currencyCode: NSString; currencyCode3: id): instancetype; message 'initWithMaximumPrice:currencyCode:maximumPrice:'; { NS_DESIGNATED_INITIALIZER }
    function initWithMinimumPrice_currencyCode_minimumPrice (minimumPrice: NSDecimalNumber; currencyCode: NSString; currencyCode3: id): instancetype; message 'initWithMinimumPrice:currencyCode:minimumPrice:'; { NS_DESIGNATED_INITIALIZER }
    function initWithPrice_currencyCode_price (price: NSDecimalNumber; currencyCode: NSString; currencyCode3: id): instancetype; message 'initWithPrice:currencyCode:price:';
    function minimumPrice: NSDecimalNumber; message 'minimumPrice';
    function maximumPrice: NSDecimalNumber; message 'maximumPrice';
    function currencyCode: NSString; message 'currencyCode';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

