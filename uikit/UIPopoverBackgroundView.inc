{ Parsed from UIKit.framework UIPopoverBackgroundView.h }

{ Types from UIPopoverBackgroundView }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  UIPopoverBackgroundViewPtr = ^UIPopoverBackgroundView;
  UIPopoverBackgroundViewMethodsProtocolPtr = ^UIPopoverBackgroundViewMethodsProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  UIPopoverBackgroundViewMethodsProtocol = objcprotocol external name 'UIPopoverBackgroundViewMethods'
    class function arrowBase: CGFloat; message 'arrowBase';
    class function contentViewInsets: UIEdgeInsets; message 'contentViewInsets';
    class function arrowHeight: CGFloat; message 'arrowHeight';
  end;
{$endif}

{$ifdef CLASSES}

type
  UIPopoverBackgroundView = objcclass external (UIView, UIPopoverBackgroundViewMethodsProtocol)
  public
    procedure setArrowOffset(newValue: CGFloat); message 'setArrowOffset:';
    function arrowOffset: CGFloat; message 'arrowOffset';
    procedure setArrowDirection(newValue: UIPopoverArrowDirection); message 'setArrowDirection:';
    function arrowDirection: UIPopoverArrowDirection; message 'arrowDirection';
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function wantsDefaultContentAppearance: boolean; message 'wantsDefaultContentAppearance';
    {$else}
    class function wantsDefaultContentAppearance: boolean; message 'wantsDefaultContentAppearance'; { available in 6_0 }
    {$endif}

    { Adopted protocols }
    class function arrowBase: CGFloat; message 'arrowBase';
    class function arrowHeight: CGFloat; message 'arrowHeight';
    class function contentViewInsets: UIEdgeInsets; message 'contentViewInsets';
  end;
{$endif}

