{ Parsed from PassKit.framework PKPaymentAuthorizationController.h }

{$ifdef TYPES}
type
  PKPaymentAuthorizationControllerPtr = ^PKPaymentAuthorizationController;
  PKPaymentAuthorizationControllerDelegateProtocolPtr = ^PKPaymentAuthorizationControllerDelegateProtocol;
{$endif}

{$if defined(TARGET_OS_IPHONE)}
{$ifdef PROTOCOLS}

type
  PKPaymentAuthorizationControllerDelegateProtocol = objcprotocol external name 'PKPaymentAuthorizationControllerDelegate' (NSObjectProtocol)
  required
    procedure paymentAuthorizationController_didAuthorizePayment_completion (controller: PKPaymentAuthorizationController; payment: PKPayment; completion: OpaqueCBlock); message 'paymentAuthorizationController:didAuthorizePayment:completion:';
    procedure paymentAuthorizationControllerDidFinish (controller: PKPaymentAuthorizationController); message 'paymentAuthorizationControllerDidFinish:';
  optional
    procedure paymentAuthorizationControllerWillAuthorizePayment (controller: PKPaymentAuthorizationController); message 'paymentAuthorizationControllerWillAuthorizePayment:';
    procedure paymentAuthorizationController_didSelectShippingMethod_completion (controller: PKPaymentAuthorizationController; shippingMethod: PKShippingMethod; completion: OpaqueCBlock); message 'paymentAuthorizationController:didSelectShippingMethod:completion:';
    procedure paymentAuthorizationController_didSelectShippingContact (controller: PKPaymentAuthorizationController; contact: PKContact); message 'paymentAuthorizationController:didSelectShippingContact:';
    procedure paymentAuthorizationController_didSelectPaymentMethod_completion (controller: PKPaymentAuthorizationController; paymentMethod: PKPaymentMethod; completion: OpaqueCBlock); message 'paymentAuthorizationController:didSelectPaymentMethod:completion:';
  end;
{$endif}

{$ifdef CLASSES}

type
  PKPaymentAuthorizationController = objcclass external (NSObject)
  public
    class function canMakePayments: boolean; message 'canMakePayments';
    class function canMakePaymentsUsingNetworks (supportedNetworks: PKPaymentNetworkProtocolPtr): boolean; message 'canMakePaymentsUsingNetworks:';
    class function canMakePaymentsUsingNetworks_capabilities (supportedNetworks: PKPaymentNetworkProtocolPtr; capabilties: PKMerchantCapability): boolean; message 'canMakePaymentsUsingNetworks:capabilities:';
    procedure setDelegate(newValue: PKPaymentAuthorizationControllerDelegateProtocol); message 'setDelegate:';
    function delegate: PKPaymentAuthorizationControllerDelegateProtocol; message 'delegate';
    function initWithPaymentRequest (request: PKPaymentRequest): instancetype; message 'initWithPaymentRequest:'; { NS_DESIGNATED_INITIALIZER }
    procedure presentWithCompletion (completion: OpaqueCBlock); message 'presentWithCompletion:';
    procedure dismissWithCompletion (completion: OpaqueCBlock); message 'dismissWithCompletion:';
  end;
{$endif}

{$endif}
