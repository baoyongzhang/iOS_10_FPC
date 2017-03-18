{ Parsed from Intents.framework INRidePartySizeOption.h }

{$ifdef TYPES}
type
  INRidePartySizeOptionPtr = ^INRidePartySizeOption;
{$endif}

{$ifdef CLASSES}

type
  INRidePartySizeOption = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function initWithPartySizeRange_sizeDescription_priceRange (partySizeRange: NSRange; sizeDescription: NSString; priceRange: nullable INPriceRangePtr): instancetype; message 'initWithPartySizeRange:sizeDescription:priceRange:'; { NS_DESIGNATED_INITIALIZER }
    function init: instancetype; message 'init';
    function partySizeRange: NSRange; message 'partySizeRange';
    function sizeDescription: NSString; message 'sizeDescription';
    function priceRange: INPriceRange; message 'priceRange';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

