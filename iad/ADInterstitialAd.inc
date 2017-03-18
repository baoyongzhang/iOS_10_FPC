{ Parsed from IAd.framework ADInterstitialAd.h }

{$ifdef TYPES}
type
  ADInterstitialAdPtr = ^ADInterstitialAd;
  ADInterstitialAdDelegateProtocolPtr = ^ADInterstitialAdDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  ADInterstitialAd = objcclass external (NSObject)
  public
    procedure setDelegate(newValue: ADInterstitialAdDelegateProtocol); message 'setDelegate:';
    function delegate: ADInterstitialAdDelegateProtocol; message 'delegate';
    function isLoaded: boolean; message 'isLoaded';
    function isActionInProgress: boolean; message 'isActionInProgress';
    procedure cancelAction; message 'cancelAction';
    function presentInView (containerView: UIView): boolean; message 'presentInView:';
    procedure presentFromViewController (viewController: UIViewController); message 'presentFromViewController:'; deprecated 'in 4_3, 7_0, "Use -[UIViewController requestInterstitialAdPresentation] and related APIs documented in <iAd/UIViewControlleriAdAdditions.h>."';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  ADInterstitialAdDelegateProtocol = objcprotocol external name 'ADInterstitialAdDelegate' (NSObjectProtocol)
    procedure interstitialAdDidUnload (interstitialAd: ADInterstitialAd); message 'interstitialAdDidUnload:';
    procedure interstitialAd_didFailWithError (interstitialAd: ADInterstitialAd; error: NSError); message 'interstitialAd:didFailWithError:';
  optional
    procedure interstitialAdWillLoad (interstitialAd: ADInterstitialAd); message 'interstitialAdWillLoad:'; { available in 5_0 }
    procedure interstitialAdDidLoad (interstitialAd: ADInterstitialAd); message 'interstitialAdDidLoad:';
    function interstitialAdActionShouldBegin_willLeaveApplication (interstitialAd: ADInterstitialAd; willLeave: boolean): boolean; message 'interstitialAdActionShouldBegin:willLeaveApplication:';
    procedure interstitialAdActionDidFinish (interstitialAd: ADInterstitialAd); message 'interstitialAdActionDidFinish:';
  end;
{$endif}

