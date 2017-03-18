{ Parsed from PassKit.framework PKPassLibrary.h }

{$ifdef TYPES}
type
  PKPassLibraryPtr = ^PKPassLibrary;
{$endif}

{$ifdef TYPES}
type
  PKPassLibraryAddPassesStatus = NSInteger;
  PKPassLibraryAddPassesStatusPtr = ^PKPassLibraryAddPassesStatus;

const
  PKPassLibraryDidAddPasses = 0;
  PKPassLibraryShouldReviewPasses = 1;
  PKPassLibraryDidCancelAddPasses = 2;

type
  PKAutomaticPassPresentationSuppressionResult = NSUInteger;
  PKAutomaticPassPresentationSuppressionResultPtr = ^PKAutomaticPassPresentationSuppressionResult;

const
  PKAutomaticPassPresentationSuppressionResultNotSupported = 0;
  PKAutomaticPassPresentationSuppressionResultAlreadyPresenting = 1;
  PKAutomaticPassPresentationSuppressionResultDenied = 2;
  PKAutomaticPassPresentationSuppressionResultCancelled = 3;
  PKAutomaticPassPresentationSuppressionResultSuccess = 4;

type
  PKSuppressionRequestToken = NSUInteger { available in 6_0 };
  PKSuppressionRequestTokenPtr = ^PKSuppressionRequestToken { available in 6_0 };
{$endif}

{$ifdef CLASSES}

type
  PKPassLibrary = objcclass external (NSObject)
  public
    class function isPassLibraryAvailable: boolean; message 'isPassLibraryAvailable'; { available in 6_0 }
    class function requestAutomaticPassPresentationSuppressionWithResponseHandler (responseHandler: OpaqueCBlock): PKSuppressionRequestToken; message 'requestAutomaticPassPresentationSuppressionWithResponseHandler:'; { available in 9_0 }
    class procedure endAutomaticPassPresentationSuppressionWithRequestToken (requestToken: PKSuppressionRequestToken); message 'endAutomaticPassPresentationSuppressionWithRequestToken:'; { available in 9_0 }
    class function isSuppressingAutomaticPassPresentation __WATCHOS_PROHIBITED                       NS_EXTENSION_UNAVAILABLE("Not available to extensions"): boolean; message 'isSuppressingAutomaticPassPresentation __WATCHOS_PROHIBITED                       NS_EXTENSION_UNAVAILABLE("Not available to extensions")'; { available in 9_0 }
    class function classIsPaymentPassActivationAvailable: boolean; message 'isPaymentPassActivationAvailable'; deprecated 'in 8_0, 9_0, "Use -[PKPassLibrary isPaymentPassActivationAvailable] instead"';
    function isPaymentPassActivationAvailable: boolean; message 'isPaymentPassActivationAvailable'; { available in 9_0 }
    function passes: PKPass *ProtocolPtr; message 'passes';
    function passWithPassTypeIdentifier_serialNumber (identifier: NSString; serialNumber: NSString): nullable PKPassPtr; message 'passWithPassTypeIdentifier:serialNumber:';
    function passesOfType (passType: PKPassType): PKPass *ProtocolPtr; message 'passesOfType:'; { available in 8_0 }
    function remotePaymentPasses: PKPaymentPass *ProtocolPtr; message 'remotePaymentPasses'; { available in 9_0 }
    procedure removePass (pass: PKPass); message 'removePass:';
    function containsPass (pass: PKPass): boolean; message 'containsPass:';
    function replacePassWithPass (pass: PKPass): boolean; message 'replacePassWithPass:';
    procedure addPasses_withCompletionHandler (passes_: PKPass *ProtocolPtr; completion: OpaqueCBlock); message 'addPasses:withCompletionHandler:'; { available in 7_0 }
    procedure openPaymentSetup __WATCHOS_PROHIBITED; message 'openPaymentSetup __WATCHOS_PROHIBITED'; { available in 8_3 }
    procedure presentPaymentPass (pass: PKPaymentPass); message 'presentPaymentPass:'; { available in 10_0 }
    function canAddPaymentPassWithPrimaryAccountIdentifier (primaryAccountIdentifier: NSString): boolean; message 'canAddPaymentPassWithPrimaryAccountIdentifier:'; { available in 9_0 }
    function canAddFelicaPass: boolean; message 'canAddFelicaPass'; { available in 10_1 }
    procedure activatePaymentPass_withActivationData_completion (paymentPass: PKPaymentPass; activationData: NSData; completion: OpaqueCBlock); message 'activatePaymentPass:withActivationData:completion:'; { available in 8_0 }
    procedure activatePaymentPass_withActivationCode_completion (paymentPass: PKPaymentPass; activationCode: NSString; completion: OpaqueCBlock); message 'activatePaymentPass:withActivationCode:completion:'; deprecated 'in 8_0, 9_0, "Use activatePaymentPass:withActivationData:completion: instead"';
  end;
{$endif}

{$ifdef TYPES}
type
  NS_EXTENSIBLE_STRING_ENUM = NSString *PKPassLibraryNotificationName;
  NS_EXTENSIBLE_STRING_ENUMPtr = ^NS_EXTENSIBLE_STRING_ENUM;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  PKPassLibraryDidChangeNotification: PKPassLibraryNotificationName { available in 6_0 }; cvar; external;
  PKPassLibraryRemotePaymentPassesDidChangeNotification: PKPassLibraryNotificationName { available in 9_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NS_STRING_ENUM = NSString *PKPassLibraryNotificationKey;
  NS_STRING_ENUMPtr = ^NS_STRING_ENUM;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  PKPassLibraryAddedPassesUserInfoKey: PKPassLibraryNotificationKey { available in 6_0 }; cvar; external;
  PKPassLibraryReplacementPassesUserInfoKey: PKPassLibraryNotificationKey { available in 6_0 }; cvar; external;
  PKPassLibraryRemovedPassInfosUserInfoKey: PKPassLibraryNotificationKey { available in 6_0 }; cvar; external;
  PKPassLibraryPassTypeIdentifierUserInfoKey: PKPassLibraryNotificationKey { available in 6_0 }; cvar; external;
  PKPassLibrarySerialNumberUserInfoKey: PKPassLibraryNotificationKey { available in 6_0 }; cvar; external;
{$endif}

