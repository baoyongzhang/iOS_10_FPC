{ Parsed from Intents.framework INRequestPaymentIntentResponse.h }

{$ifdef TYPES}
type
  INRequestPaymentIntentResponsePtr = ^INRequestPaymentIntentResponse;
{$endif}

{$ifdef TYPES}
type
  INRequestPaymentIntentResponseCode = NSInteger;
  INRequestPaymentIntentResponseCodePtr = ^INRequestPaymentIntentResponseCode;

const
  INRequestPaymentIntentResponseCodeUnspecified = 0;
  INRequestPaymentIntentResponseCodeReady = 1;
  INRequestPaymentIntentResponseCodeInProgress = 2;
  INRequestPaymentIntentResponseCodeSuccess = 3;
  INRequestPaymentIntentResponseCodeFailure = 4;
  INRequestPaymentIntentResponseCodeFailureRequiringAppLaunch = 5;
  INRequestPaymentIntentResponseCodeFailureCredentialsUnverified = 6;
  INRequestPaymentIntentResponseCodeFailurePaymentsAmountBelowMinimum = 7;
  INRequestPaymentIntentResponseCodeFailurePaymentsAmountAboveMaximum = 8;
  INRequestPaymentIntentResponseCodeFailurePaymentsCurrencyUnsupported = 9;
  INRequestPaymentIntentResponseCodeFailureNoBankAccount = 10;
{$endif}

{$ifdef CLASSES}

type
  INRequestPaymentIntentResponse = objcclass external (INIntentResponse)
  public
    function init: id; message 'init';
    function initWithCode_userActivity (code: INRequestPaymentIntentResponseCode; userActivity_: nullable NSUserActivityPtr): instancetype; message 'initWithCode:userActivity:'; { NS_DESIGNATED_INITIALIZER }
    function code: INRequestPaymentIntentResponseCode; message 'code';
    procedure setPaymentRecord(newValue: INPaymentRecord); message 'setPaymentRecord:';
    function paymentRecord: INPaymentRecord; message 'paymentRecord';
  end;
{$endif}

