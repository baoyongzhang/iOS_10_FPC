{ Parsed from Intents.framework INPaymentMethodType.h }

{$ifndef INPaymentMethodType_h}
{$ifdef TYPES}
type
  INPaymentMethodType = NSInteger;
  INPaymentMethodTypePtr = ^INPaymentMethodType;

const
  INPaymentMethodTypeUnknown = 0;
  INPaymentMethodTypeChecking = 1;
  INPaymentMethodTypeSavings = 2;
  INPaymentMethodTypeBrokerage = 3;
  INPaymentMethodTypeDebit = 4;
  INPaymentMethodTypeCredit = 5;
  INPaymentMethodTypePrepaid = 6;
  INPaymentMethodTypeStore = 7;
  INPaymentMethodTypeApplePay = 8;
{$endif}

{$endif}
