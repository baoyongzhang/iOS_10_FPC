{ Parsed from Intents.framework INPaymentRecord.h }

{$ifdef TYPES}
type
  INPaymentRecordPtr = ^INPaymentRecord;
{$endif}

{$ifdef CLASSES}

type
  INPaymentRecord = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function init: id; message 'init';
    function initWithPayee_payer_currencyAmount_paymentMethod_note_status_feeAmount (payee: nullable INPersonPtr; payer: nullable INPersonPtr; currencyAmount: nullable INCurrencyAmountPtr; paymentMethod: nullable INPaymentMethodPtr; note: nullable NSStringPtr; status: INPaymentStatus; feeAmount: nullable INCurrencyAmountPtr): nullable instancetype; message 'initWithPayee:payer:currencyAmount:paymentMethod:note:status:feeAmount:'; { NS_DESIGNATED_INITIALIZER }
    function initWithPayee_payer_currencyAmount_paymentMethod_note_status (payee: nullable INPersonPtr; payer: nullable INPersonPtr; currencyAmount: nullable INCurrencyAmountPtr; paymentMethod: nullable INPaymentMethodPtr; note: nullable NSStringPtr; status: INPaymentStatus): nullable instancetype; message 'initWithPayee:payer:currencyAmount:paymentMethod:note:status:';
    function payee: INPerson; message 'payee';
    function payer: INPerson; message 'payer';
    function currencyAmount: INCurrencyAmount; message 'currencyAmount';
    function paymentMethod: INPaymentMethod; message 'paymentMethod';
    function note: NSString; message 'note';
    function status: INPaymentStatus; message 'status';
    function feeAmount: INCurrencyAmount; message 'feeAmount';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

