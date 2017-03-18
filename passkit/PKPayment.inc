{ Parsed from PassKit.framework PKPayment.h }

{ Types from PKPayment }
{$ifdef TYPES}


{$endif}


{$ifdef TYPES}
type
  PKPaymentPtr = ^PKPayment;
{$endif}

{$ifdef CLASSES}

type
  PKPayment = objcclass external (NSObject)
  public
    function token: PKPaymentToken; message 'token';
    function billingContact: PKContact; message 'billingContact';
    {$if defined(TARGET_OS_IOS)}
    function __WATCHOS_PROHIBITED_: ABRecordRef billingAddress; message 'WATCHOS_PROHIBITED';
    {$endif}
    function shippingContact: PKContact; message 'shippingContact';
    {$if defined(TARGET_OS_IOS)}
    function __WATCHOS_PROHIBITED_: ABRecordRef shippingAddress; message 'WATCHOS_PROHIBITED';
    {$endif}
    function shippingMethod: PKShippingMethod; message 'shippingMethod';
  end;
{$endif}

