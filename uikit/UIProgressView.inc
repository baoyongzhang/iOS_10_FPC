{ Parsed from UIKit.framework UIProgressView.h }

{$ifdef TYPES}
type
  UIProgressViewPtr = ^UIProgressView;
{$endif}

{$ifdef TYPES}
type
  UIProgressViewStyle = NSInteger;
  UIProgressViewStylePtr = ^UIProgressViewStyle;

const
  UIProgressViewStyleDefault = 0;
  UIProgressViewStyleBar = 1;
  __TVOS_PROHIBITED = 2;
{$endif}

{$ifdef CLASSES}

type
  UIProgressView = objcclass external (UIView, NSCodingProtocol)
  public
    function initWithFrame (frame: CGRect): instancetype; message 'initWithFrame:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function initWithProgressViewStyle (style: UIProgressViewStyle): instancetype; message 'initWithProgressViewStyle:';
    procedure setProgressViewStyle(newValue: UIProgressViewStyle); message 'setProgressViewStyle:';
    function progressViewStyle: UIProgressViewStyle; message 'progressViewStyle';
    procedure setProgress(newValue: single); message 'setProgress:';
    function progress: single; message 'progress';
    procedure setProgressTintColor(newValue: UIColor); message 'setProgressTintColor:';
    function progressTintColor: UIColor; message 'progressTintColor';
    procedure setTrackTintColor(newValue: UIColor); message 'setTrackTintColor:';
    function trackTintColor: UIColor; message 'trackTintColor';
    procedure setProgressImage(newValue: UIImage); message 'setProgressImage:';
    function progressImage: UIImage; message 'progressImage';
    procedure setTrackImage(newValue: UIImage); message 'setTrackImage:';
    function trackImage: UIImage; message 'trackImage';
    procedure setProgress_animated (progress_: single; animated: boolean); message 'setProgress:animated:'; { available in 5_0 }
    procedure setObservedProgress(newValue: NSProgress); message 'setObservedProgress:';
    function observedProgress: NSProgress; message 'observedProgress';
  end;
{$endif}

