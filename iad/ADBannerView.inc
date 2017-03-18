{ Parsed from IAd.framework ADBannerView.h }

{$ifdef TYPES}
type
  ADBannerViewPtr = ^ADBannerView;
  ADBannerViewDelegateProtocolPtr = ^ADBannerViewDelegateProtocol;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  ADErrorDomain: NSString; cvar; external;
{$endif}

{$ifdef TYPES}
type
  ADError = NSInteger;
  ADErrorPtr = ^ADError;

const
  {$if (__IPHONE_4_0 <= __IPHONE_OS_VERSION_MAX_ALLOWED)}
  ADErrorUnknown = 0;
  ADErrorServerFailure = 1;
  ADErrorLoadingThrottled = 2;
  ADErrorInventoryUnavailable = 3;
  {$endif}
  {$if (__IPHONE_4_1 <= __IPHONE_OS_VERSION_MAX_ALLOWED)}
  ADErrorConfigurationError = 4;
  ADErrorBannerVisibleWithoutContent = 5;
  {$endif}
  {$if (__IPHONE_4_3 <= __IPHONE_OS_VERSION_MAX_ALLOWED)}
  ADErrorApplicationInactive = 6;
  {$endif}
  {$if (__IPHONE_6_0 <= __IPHONE_OS_VERSION_MAX_ALLOWED)}
  ADErrorAdUnloaded = 7;
  {$endif}
  {$if (__IPHONE_9_3 <= __IPHONE_OS_VERSION_MAX_ALLOWED)}
  ADErrorAssetLoadFailure = 8;
  {$endif}

type
  ADAdType = NSInteger;
  ADAdTypePtr = ^ADAdType;

const
  ADAdTypeBanner = 0;
  ADAdTypeMediumRectangle = 1;
{$endif}

{$ifdef CLASSES}

type
  ADBannerView = objcclass external (UIView)
  public
    function initWithAdType (type_: ADAdType): instancetype; message 'initWithAdType:'; { available in 6_0 }
    function adType: ADAdType; message 'adType';
    procedure setDelegate(newValue: ADBannerViewDelegateProtocol); message 'setDelegate:';
    function delegate: ADBannerViewDelegateProtocol; message 'delegate';
    function isBannerLoaded: boolean; message 'isBannerLoaded';
    function isBannerViewActionInProgress: boolean; message 'isBannerViewActionInProgress';
    procedure cancelBannerViewAction; message 'cancelBannerViewAction';
    procedure setAdvertisingSection(newValue: NSString); message 'setAdvertisingSection:';
    function advertisingSection: NSString; message 'advertisingSection';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  ADBannerViewDelegateProtocol = objcprotocol external name 'ADBannerViewDelegate' (NSObjectProtocol)
  optional
    procedure bannerViewWillLoadAd (banner: ADBannerView); message 'bannerViewWillLoadAd:'; { available in 5_0 }
    procedure bannerViewDidLoadAd (banner: ADBannerView); message 'bannerViewDidLoadAd:';
    procedure bannerView_didFailToReceiveAdWithError (banner: ADBannerView; error: NSError); message 'bannerView:didFailToReceiveAdWithError:';
    function bannerViewActionShouldBegin_willLeaveApplication (banner: ADBannerView; willLeave: boolean): boolean; message 'bannerViewActionShouldBegin:willLeaveApplication:';
    procedure bannerViewActionDidFinish (banner: ADBannerView); message 'bannerViewActionDidFinish:';
  end;
{$endif}

