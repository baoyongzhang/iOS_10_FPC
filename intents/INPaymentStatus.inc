{ Parsed from Intents.framework INPaymentStatus.h }

{$ifndef INPaymentStatus_h}
{$ifdef TYPES}
type
  INPaymentStatus = NSInteger;
  INPaymentStatusPtr = ^INPaymentStatus;

const
  INPaymentStatusUnknown = 0;
  INPaymentStatusPending = 1;
  INPaymentStatusCompleted = 2;
  INPaymentStatusCanceled = 3;
  INPaymentStatusFailed = 4;
{$endif}

{$endif}
