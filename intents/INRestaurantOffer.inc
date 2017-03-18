{ Parsed from Intents.framework INRestaurantOffer.h }

{$ifdef TYPES}
type
  INRestaurantOfferPtr = ^INRestaurantOffer;
{$endif}

{$ifdef CLASSES}

type
  INRestaurantOffer = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    procedure setOfferTitleText(newValue: NSString); message 'setOfferTitleText:';
    function offerTitleText: NSString; message 'offerTitleText';
    procedure setOfferDetailText(newValue: NSString); message 'setOfferDetailText:';
    function offerDetailText: NSString; message 'offerDetailText';
    procedure setOfferIdentifier(newValue: NSString); message 'setOfferIdentifier:';
    function offerIdentifier: NSString; message 'offerIdentifier';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

