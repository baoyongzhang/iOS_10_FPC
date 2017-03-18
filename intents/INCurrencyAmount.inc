{ Parsed from Intents.framework INCurrencyAmount.h }

{$ifdef TYPES}
type
  INCurrencyAmountPtr = ^INCurrencyAmount;
{$endif}

{$ifdef CLASSES}

type
  INCurrencyAmount = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function init: instancetype; message 'init';
    function initWithAmount_currencyCode (amount: NSDecimalNumber; currencyCode: NSString): instancetype; message 'initWithAmount:currencyCode:'; { NS_DESIGNATED_INITIALIZER }
    function amount: NSDecimalNumber; message 'amount';
    function currencyCode: NSString; message 'currencyCode';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

