{ Parsed from PassKit.framework PKPaymentToken.h }

{$ifdef TYPES}
type
  PKPaymentTokenPtr = ^PKPaymentToken;
{$endif}

{$ifdef CLASSES}

type
  PKPaymentToken = objcclass external (NSObject)
  public
    function paymentMethod: PKPaymentMethod; message 'paymentMethod';
    function __WATCHOS_PROHIBITED_: NSString *paymentInstrumentName; message 'WATCHOS_PROHIBITED';
    function __WATCHOS_PROHIBITED_: NSString *paymentNetwork; message 'WATCHOS_PROHIBITED';
    function transactionIdentifier: NSString; message 'transactionIdentifier';
    function paymentData: NSData; message 'paymentData';
  end;
{$endif}

