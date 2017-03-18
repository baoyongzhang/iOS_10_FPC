{ Parsed from Intents.framework INSendPaymentIntentResponse.h }

{$ifdef TYPES}
type
  INSendPaymentIntentResponsePtr = ^INSendPaymentIntentResponse;
{$endif}

{$ifdef TYPES}
type
  INSendPaymentIntentResponseCode = NSInteger;
  INSendPaymentIntentResponseCodePtr = ^INSendPaymentIntentResponseCode;

const
  INSendPaymentIntentResponseCodeUnspecified = 0;
  INSendPaymentIntentResponseCodeReady = 1;
  INSendPaymentIntentResponseCodeInProgress = 2;
  INSendPaymentIntentResponseCodeSuccess = 3;
  INSendPaymentIntentResponseCodeFailure = 4;
  INSendPaymentIntentResponseCodeFailureRequiringAppLaunch = 5;
  INSendPaymentIntentResponseCodeFailureCredentialsUnverified = 6;
  INSendPaymentIntentResponseCodeFailurePaymentsAmountBelowMinimum = 7;
  INSendPaymentIntentResponseCodeFailurePaymentsAmountAboveMaximum = 8;
  INSendPaymentIntentResponseCodeFailurePaymentsCurrencyUnsupported = 9;
  INSendPaymentIntentResponseCodeFailureInsufficientFunds = 10;
  INSendPaymentIntentResponseCodeFailureNoBankAccount = 11;
{$endif}

{$ifdef CLASSES}

type
  INSendPaymentIntentResponse = objcclass external (INIntentResponse)
  public
    function init: id; message 'init';
    function initWithCode_userActivity (code: INSendPaymentIntentResponseCode; userActivity_: nullable NSUserActivityPtr): instancetype; message 'initWithCode:userActivity:'; { NS_DESIGNATED_INITIALIZER }
    function code: INSendPaymentIntentResponseCode; message 'code';
    procedure setPaymentRecord(newValue: INPaymentRecord); message 'setPaymentRecord:';
    function paymentRecord: INPaymentRecord; message 'paymentRecord';
  end;
{$endif}

