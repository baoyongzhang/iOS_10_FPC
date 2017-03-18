{ Parsed from Intents.framework INRequestPaymentIntent.h }

{$ifdef TYPES}
type
  INRequestPaymentIntentPtr = ^INRequestPaymentIntent;
  INRequestPaymentIntentHandlingProtocolPtr = ^INRequestPaymentIntentHandlingProtocol;
{$endif}

{$ifdef CLASSES}

type
  INRequestPaymentIntent = objcclass external (INIntent)
  public
    function initWithPayer_currencyAmount_note (payer: nullable INPersonPtr; currencyAmount: nullable INCurrencyAmountPtr; note: nullable NSStringPtr): instancetype; message 'initWithPayer:currencyAmount:note:'; { NS_DESIGNATED_INITIALIZER }
    function payer: INPerson; message 'payer';
    function currencyAmount: INCurrencyAmount; message 'currencyAmount';
    function note: NSString; message 'note';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  INRequestPaymentIntentHandlingProtocol = objcprotocol external name 'INRequestPaymentIntentHandling' (NSObjectProtocol)
  required
    procedure handleRequestPayment_completion_requestPayment (intent: INRequestPaymentIntent; completion: OpaqueCBlock; completion3: id); message 'handleRequestPayment:completion:requestPayment:';
  optional
    procedure confirmRequestPayment_completion_requestPayment (intent: INRequestPaymentIntent; completion: OpaqueCBlock; completion3: id); message 'confirmRequestPayment:completion:requestPayment:';
    procedure resolvePayerForRequestPayment_withCompletion_forRequestPayment (intent: INRequestPaymentIntent; completion: OpaqueCBlock; with_: id); message 'resolvePayerForRequestPayment:withCompletion:forRequestPayment:';
    procedure resolveCurrencyAmountForRequestPayment_withCompletion_forRequestPayment (intent: INRequestPaymentIntent; completion: OpaqueCBlock; with_: id); message 'resolveCurrencyAmountForRequestPayment:withCompletion:forRequestPayment:';
    procedure resolveNoteForRequestPayment_withCompletion_forRequestPayment (intent: INRequestPaymentIntent; completion: OpaqueCBlock; with_: id); message 'resolveNoteForRequestPayment:withCompletion:forRequestPayment:';
  end;
{$endif}

