{ Parsed from Intents.framework INRideFareLineItem.h }

{$ifdef TYPES}
type
  INRideFareLineItemPtr = ^INRideFareLineItem;
{$endif}

{$ifdef CLASSES}

type
  INRideFareLineItem = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function initWithTitle_price_currencyCode (title: NSString; price: NSDecimalNumber; currencyCode: NSString): instancetype; message 'initWithTitle:price:currencyCode:'; { NS_DESIGNATED_INITIALIZER }
    function init: instancetype; message 'init';
    function title: NSString; message 'title';
    function price: NSDecimalNumber; message 'price';
    function currencyCode: NSString; message 'currencyCode';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

