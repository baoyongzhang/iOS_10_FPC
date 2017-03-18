{ Parsed from PassKit.framework PKPaymentMethod.h }

{$ifdef TYPES}
type
  PKPaymentMethodPtr = ^PKPaymentMethod;
{$endif}

{$ifndef __PKPAYMENTMETHOD_H}
{$ifdef CLASSES}

type
  PKPaymentMethod = objcclass external (NSObject)
  private
  public
    function displayName: NSString; message 'displayName';
    function network: PKPaymentNetwork; message 'network';
    function type_: PKPaymentMethodType; message 'type';
    function paymentPass: PKPaymentPass; message 'paymentPass';
  end;
{$endif}

{$endif}
