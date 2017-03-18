{ Parsed from PassKit.framework PKPaymentButton.h }

{$ifdef TYPES}
type
  PKPaymentButtonPtr = ^PKPaymentButton;
{$endif}

{$if defined(TARGET_OS_IPHONE)}
{$ifdef CLASSES}

type
  PKPaymentButton = objcclass external (UIButton)
  public
    class function buttonWithType_style (buttonType: PKPaymentButtonType; buttonStyle: PKPaymentButtonStyle): instancetype; message 'buttonWithType:style:';
    function initWithPaymentButtonType_paymentButtonStyle (type_: PKPaymentButtonType; style: PKPaymentButtonStyle): instancetype; message 'initWithPaymentButtonType:paymentButtonStyle:'; { available in 9_0 }
  end;
{$endif}

{$endif}
