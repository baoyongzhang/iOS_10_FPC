{ Parsed from PassKit.framework PKAddPaymentPassViewController.h }

{$ifdef TYPES}
type
  PKAddPaymentPassRequestConfigurationPtr = ^PKAddPaymentPassRequestConfiguration;
  PKAddPaymentPassRequestPtr = ^PKAddPaymentPassRequest;
  PKAddPaymentPassViewControllerPtr = ^PKAddPaymentPassViewController;
  PKAddPaymentPassViewControllerDelegateProtocolPtr = ^PKAddPaymentPassViewControllerDelegateProtocol;
{$endif}

{$if defined(TARGET_OS_IPHONE)}
{$ifdef TYPES}
type
  PKAddPaymentPassError = NSInteger;
  PKAddPaymentPassErrorPtr = ^PKAddPaymentPassError;

const
  PKAddPaymentPassErrorUnsupported = 0;
  PKAddPaymentPassErrorUserCancelled = 1;
  PKAddPaymentPassErrorSystemCancelled = 2;
{$endif}

{$ifdef CLASSES}

type
  PKAddPaymentPassRequestConfiguration = objcclass external (NSObject)
  public
    function initWithEncryptionScheme (encryptionScheme: PKEncryptionScheme): nullable instancetype; message 'initWithEncryptionScheme:'; { NS_DESIGNATED_INITIALIZER }
    function encryptionScheme: PKEncryptionScheme; message 'encryptionScheme';
    procedure setCardholderName(newValue: NSString); message 'setCardholderName:';
    function cardholderName: NSString; message 'cardholderName';
    procedure setPrimaryAccountSuffix(newValue: NSString); message 'setPrimaryAccountSuffix:';
    function primaryAccountSuffix: NSString; message 'primaryAccountSuffix';
    procedure setCardDetails(newValue: PKLabeledValue *ProtocolPtr); message 'setCardDetails:';
    function cardDetails: PKLabeledValue *ProtocolPtr; message 'cardDetails';
    procedure setLocalizedDescription(newValue: NSString); message 'setLocalizedDescription:';
    function localizedDescription: NSString; message 'localizedDescription';
    procedure setPrimaryAccountIdentifier(newValue: NSString); message 'setPrimaryAccountIdentifier:';
    function primaryAccountIdentifier: NSString; message 'primaryAccountIdentifier';
    procedure setPaymentNetwork(newValue: PKPaymentNetwork); message 'setPaymentNetwork:';
    function paymentNetwork: PKPaymentNetwork; message 'paymentNetwork';
    procedure setRequiresFelicaSecureElement(newValue: boolean); message 'setRequiresFelicaSecureElement:';
    function requiresFelicaSecureElement: boolean; message 'requiresFelicaSecureElement';
  end;

type
  PKAddPaymentPassRequest = objcclass external (NSObject)
  public
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    procedure setEncryptedPassData(newValue: NSData); message 'setEncryptedPassData:';
    function encryptedPassData: NSData; message 'encryptedPassData';
    procedure setActivationData(newValue: NSData); message 'setActivationData:';
    function activationData: NSData; message 'activationData';
    procedure setEphemeralPublicKey(newValue: NSData); message 'setEphemeralPublicKey:';
    function ephemeralPublicKey: NSData; message 'ephemeralPublicKey';
    procedure setWrappedKey(newValue: NSData); message 'setWrappedKey:';
    function wrappedKey: NSData; message 'wrappedKey';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  PKAddPaymentPassViewControllerDelegateProtocol = objcprotocol external name 'PKAddPaymentPassViewControllerDelegate' (NSObjectProtocol)
    procedure addPaymentPassViewController_generateRequestWithCertificateChain_nonce_nonceSignature_completionHandler (controller: PKAddPaymentPassViewController; certificates: NSData *ProtocolPtr; nonce: NSData; nonceSignature: NSData; handler: OpaqueCBlock); message 'addPaymentPassViewController:generateRequestWithCertificateChain:nonce:nonceSignature:completionHandler:';
    procedure addPaymentPassViewController_didFinishAddingPaymentPass_error (controller: PKAddPaymentPassViewController; pass: nullable PKPaymentPassPtr; error: nullable NSErrorPtr); message 'addPaymentPassViewController:didFinishAddingPaymentPass:error:';
  end;
{$endif}

{$ifdef CLASSES}

type
  PKAddPaymentPassViewController = objcclass external (UIViewController)
  public
    class function canAddPaymentPass: boolean; message 'canAddPaymentPass';
    function initWithRequestConfiguration_delegate (configuration: PKAddPaymentPassRequestConfiguration; delegate: nullable PKAddPaymentPassViewControllerDelegateProtocol): nullable instancetype; message 'initWithRequestConfiguration:delegate:'; { NS_DESIGNATED_INITIALIZER }
    procedure setDelegate(newValue: PKAddPaymentPassViewControllerDelegateProtocol); message 'setDelegate:';
    function delegate: PKAddPaymentPassViewControllerDelegateProtocol; message 'delegate';
  end;
{$endif}

{$endif}
