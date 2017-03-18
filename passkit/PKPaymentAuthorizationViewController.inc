{ Parsed from PassKit.framework PKPaymentAuthorizationViewController.h }

{ Types from PKPaymentAuthorizationViewController }
{$ifdef TYPES}
{$else}
{$endif}


{$ifdef TYPES}
type
  PKPaymentAuthorizationViewControllerPtr = ^PKPaymentAuthorizationViewController;
  PKPaymentAuthorizationViewControllerDelegateProtocolPtr = ^PKPaymentAuthorizationViewControllerDelegateProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  PKPaymentAuthorizationViewControllerDelegateProtocol = objcprotocol external name 'PKPaymentAuthorizationViewControllerDelegate' (NSObjectProtocol)
  required
    procedure paymentAuthorizationViewController_didAuthorizePayment_completion (controller: PKPaymentAuthorizationViewController; payment: PKPayment; completion: OpaqueCBlock); message 'paymentAuthorizationViewController:didAuthorizePayment:completion:';
    procedure paymentAuthorizationViewControllerDidFinish (controller: PKPaymentAuthorizationViewController); message 'paymentAuthorizationViewControllerDidFinish:';
  optional
    procedure paymentAuthorizationViewControllerWillAuthorizePayment (controller: PKPaymentAuthorizationViewController); message 'paymentAuthorizationViewControllerWillAuthorizePayment:'; { available in 8_3 }
    procedure paymentAuthorizationViewController_didSelectShippingMethod_completion (controller: PKPaymentAuthorizationViewController; shippingMethod: PKShippingMethod; completion: OpaqueCBlock); message 'paymentAuthorizationViewController:didSelectShippingMethod:completion:';
    procedure paymentAuthorizationViewController_didSelectShippingAddress (controller: PKPaymentAuthorizationViewController; address: ABRecordRef); message 'paymentAuthorizationViewController:didSelectShippingAddress:'; deprecated 'in 8_0, 9_0, "Use the CNContact backed delegate method instead"';
    procedure paymentAuthorizationViewController_didSelectShippingContact (controller: PKPaymentAuthorizationViewController; contact: PKContact); message 'paymentAuthorizationViewController:didSelectShippingContact:'; { available in 9_0 }
    procedure paymentAuthorizationViewController_didSelectPaymentMethod_completion (controller: PKPaymentAuthorizationViewController; paymentMethod: PKPaymentMethod; completion: OpaqueCBlock); message 'paymentAuthorizationViewController:didSelectPaymentMethod:completion:'; { available in 9_0 }
  end;
{$endif}

{$if defined(TARGET_OS_IPHONE)}
{$ifdef CLASSES}

type
  PKPaymentAuthorizationViewController = objcclass external (UIViewController)
  public
    {$else}
    class function canMakePayments: boolean; message 'canMakePayments';
    class function canMakePaymentsUsingNetworks (supportedNetworks: PKPaymentNetworkProtocolPtr): boolean; message 'canMakePaymentsUsingNetworks:';
    class function canMakePaymentsUsingNetworks_capabilities (supportedNetworks: PKPaymentNetworkProtocolPtr; capabilties: PKMerchantCapability): boolean; message 'canMakePaymentsUsingNetworks:capabilities:'; { available in 9_0 }
    procedure setDelegate(newValue: PKPaymentAuthorizationViewControllerDelegateProtocol); message 'setDelegate:';
    function delegate: PKPaymentAuthorizationViewControllerDelegateProtocol; message 'delegate';
    function initWithPaymentRequest (request: PKPaymentRequest): instancetype; message 'initWithPaymentRequest:'; { NS_DESIGNATED_INITIALIZER }
  end;
{$endif}

{$endif}
