{ Parsed from UIKit.framework UIActivityIndicatorView.h }

{ Types from UIActivityIndicatorView }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  UIActivityIndicatorViewPtr = ^UIActivityIndicatorView;
{$endif}

{$ifdef TYPES}
type
  UIActivityIndicatorViewStyle = NSInteger;
  UIActivityIndicatorViewStylePtr = ^UIActivityIndicatorViewStyle;

const
  UIActivityIndicatorViewStyleWhiteLarge = 0;
  UIActivityIndicatorViewStyleWhite = 1;
  UIActivityIndicatorViewStyleGray = 2;
  __TVOS_PROHIBITED = 3;
{$endif}

{$ifdef CLASSES}

type
  UIActivityIndicatorView = objcclass external (UIView, NSCodingProtocol)
  public
    function initWithActivityIndicatorStyle (style: UIActivityIndicatorViewStyle): instancetype; message 'initWithActivityIndicatorStyle:'; { NS_DESIGNATED_INITIALIZER }
    function initWithFrame (frame: CGRect): instancetype; message 'initWithFrame:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (coder: NSCoder): instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    procedure setActivityIndicatorViewStyle(newValue: UIActivityIndicatorViewStyle); message 'setActivityIndicatorViewStyle:';
    function activityIndicatorViewStyle: UIActivityIndicatorViewStyle; message 'activityIndicatorViewStyle';
    procedure setHidesWhenStopped(newValue: boolean); message 'setHidesWhenStopped:';
    function hidesWhenStopped: boolean; message 'hidesWhenStopped';
    procedure setColor(newValue: UIColor); message 'setColor:';
    function color: UIColor; message 'color';
    procedure startAnimating; message 'startAnimating';
    procedure stopAnimating; message 'stopAnimating';
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function isAnimating: boolean; message 'isAnimating';
    {$else}
    function isAnimating: boolean; message 'isAnimating';
    {$endif}
  end;
{$endif}

