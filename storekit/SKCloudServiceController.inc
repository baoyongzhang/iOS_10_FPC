{ Parsed from StoreKit.framework SKCloudServiceController.h }

{$ifdef TYPES}
type
  SKCloudServiceControllerPtr = ^SKCloudServiceController;
{$endif}

{$ifdef TYPES}
type
  SKCloudServiceAuthorizationStatus = NSInteger;
  SKCloudServiceAuthorizationStatusPtr = ^SKCloudServiceAuthorizationStatus;

const
  SKCloudServiceAuthorizationStatusNotDetermined = 0;
  SKCloudServiceAuthorizationStatusDenied = 1;
  SKCloudServiceAuthorizationStatusRestricted = 2;
  SKCloudServiceAuthorizationStatusAuthorized = 3;

type
  SKCloudServiceCapability = NSUInteger;
  SKCloudServiceCapabilityPtr = ^SKCloudServiceCapability;

const
  SKCloudServiceCapabilityNone = 0;
  SKCloudServiceCapabilityMusicCatalogPlayback = 1 shl 0;
  SKCloudServiceCapabilityMusicCatalogSubscriptionEligible = 1 shl 1 { available in 10_1 };
  SKCloudServiceCapabilityAddToCloudMusicLibrary = 1 shl 8;
{$endif}

{$ifdef CLASSES}

type
  SKCloudServiceController = objcclass external (NSObject)
  public
    class function authorizationStatus: SKCloudServiceAuthorizationStatus; message 'authorizationStatus';
    class procedure requestAuthorization (handler: OpaqueCBlock); message 'requestAuthorization:';
    procedure requestStorefrontIdentifierWithCompletionHandler (completionHandler: OpaqueCBlock); message 'requestStorefrontIdentifierWithCompletionHandler:';
    procedure requestCapabilitiesWithCompletionHandler (completionHandler: OpaqueCBlock); message 'requestCapabilitiesWithCompletionHandler:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  SKStorefrontIdentifierDidChangeNotification: NSString { available in 9_3 }; cvar; external;
  SKCloudServiceCapabilitiesDidChangeNotification: NSString { available in 9_3 }; cvar; external;
{$endif}

