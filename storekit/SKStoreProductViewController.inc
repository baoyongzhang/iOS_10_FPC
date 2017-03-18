{ Parsed from StoreKit.framework SKStoreProductViewController.h }

{$ifdef TYPES}
type
  SKStoreProductViewControllerPtr = ^SKStoreProductViewController;
  SKStoreProductViewControllerDelegateProtocolPtr = ^SKStoreProductViewControllerDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  SKStoreProductViewController = objcclass external (UIViewController)
  public
    procedure setDelegate(newValue: SKStoreProductViewControllerDelegateProtocol); message 'setDelegate:';
    function delegate: SKStoreProductViewControllerDelegateProtocol; message 'delegate';
    procedure loadProductWithParameters_completionBlock (parameters: NSDictionary; block: OpaqueCBlock); message 'loadProductWithParameters:completionBlock:'; { available in 6_0 }
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  SKStoreProductViewControllerDelegateProtocol = objcprotocol external name 'SKStoreProductViewControllerDelegate' (NSObjectProtocol)
  optional
    procedure productViewControllerDidFinish (viewController: SKStoreProductViewController); message 'productViewControllerDidFinish:'; { available in 6_0 }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  SKStoreProductParameterITunesItemIdentifier: NSString { available in 6_0 }; cvar; external;
  SKStoreProductParameterAffiliateToken: NSString { available in 8_0 }; cvar; external;
  SKStoreProductParameterCampaignToken: NSString { available in 8_0 }; cvar; external;
  SKStoreProductParameterProviderToken: NSString { available in 8_3 }; cvar; external;
  SKStoreProductParameterAdvertisingPartnerToken: NSString { available in 9_3 }; cvar; external;
{$endif}

