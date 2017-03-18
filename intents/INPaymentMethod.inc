{ Parsed from Intents.framework INPaymentMethod.h }

{$ifdef TYPES}
type
  INPaymentMethodPtr = ^INPaymentMethod;
{$endif}

{$ifdef CLASSES}

type
  INPaymentMethod = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function init: instancetype; message 'init';
    function initWithType_name_identificationHint_icon (type_: INPaymentMethodType; name: nullable NSStringPtr; identificationHint: nullable NSStringPtr; icon: nullable INImagePtr): instancetype; message 'initWithType:name:identificationHint:icon:'; { NS_DESIGNATED_INITIALIZER }
    function type_: INPaymentMethodType; message 'type';
    function name: NSString; message 'name';
    function identificationHint: NSString; message 'identificationHint';
    function icon: INImage; message 'icon';
    class function applePayPaymentMethod: instancetype; message 'applePayPaymentMethod';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

