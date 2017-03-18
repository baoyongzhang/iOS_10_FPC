{ Parsed from Intents.framework INSendPaymentIntent.h }

{$ifdef TYPES}
type
  INSendPaymentIntentPtr = ^INSendPaymentIntent;
  INSendPaymentIntentHandlingProtocolPtr = ^INSendPaymentIntentHandlingProtocol;
{$endif}

{$ifdef CLASSES}

type
  INSendPaymentIntent = objcclass external (INIntent)
  public
    function initWithPayee_currencyAmount_note (payee: nullable INPersonPtr; currencyAmount: nullable INCurrencyAmountPtr; note: nullable NSStringPtr): instancetype; message 'initWithPayee:currencyAmount:note:'; { NS_DESIGNATED_INITIALIZER }
    function payee: INPerson; message 'payee';
    function currencyAmount: INCurrencyAmount; message 'currencyAmount';
    function note: NSString; message 'note';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  INSendPaymentIntentHandlingProtocol = objcprotocol external name 'INSendPaymentIntentHandling' (NSObjectProtocol)
  required
    procedure handleSendPayment_completion_sendPayment (intent: INSendPaymentIntent; completion: OpaqueCBlock; completion3: id); message 'handleSendPayment:completion:sendPayment:';
  optional
    procedure confirmSendPayment_completion_sendPayment (intent: INSendPaymentIntent; completion: OpaqueCBlock; completion3: id); message 'confirmSendPayment:completion:sendPayment:';
    procedure resolvePayeeForSendPayment_withCompletion_forSendPayment (intent: INSendPaymentIntent; completion: OpaqueCBlock; with_: id); message 'resolvePayeeForSendPayment:withCompletion:forSendPayment:';
    procedure resolveCurrencyAmountForSendPayment_withCompletion_forSendPayment (intent: INSendPaymentIntent; completion: OpaqueCBlock; with_: id); message 'resolveCurrencyAmountForSendPayment:withCompletion:forSendPayment:';
    procedure resolveNoteForSendPayment_withCompletion_forSendPayment (intent: INSendPaymentIntent; completion: OpaqueCBlock; with_: id); message 'resolveNoteForSendPayment:withCompletion:forSendPayment:';
  end;
{$endif}

