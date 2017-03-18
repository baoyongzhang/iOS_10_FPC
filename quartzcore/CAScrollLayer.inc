{ Parsed from QuartzCore.framework CAScrollLayer.h }

{$ifdef TYPES}
type
  CAScrollLayerPtr = ^CAScrollLayer;
{$endif}

{$ifdef CLASSES}

type
  CAScrollLayer = objcclass external (CALayer)
  public
    procedure scrollToPoint (p: CGPoint); message 'scrollToPoint:';
    procedure scrollToRect (r: CGRect); message 'scrollToRect:';
    procedure setScrollMode(newValue: NSString); message 'setScrollMode:';
    function scrollMode: NSString; message 'scrollMode';
  end;


type
  CALayerScrolling = objccategory external (CALayer)
    procedure scrollPoint (p: CGPoint); message 'scrollPoint:';
    procedure scrollRectToVisible (r: CGRect); message 'scrollRectToVisible:';
    function visibleRect: CGRect; message 'visibleRect';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCAScrollNone: NSString { available starting in 10.5, 2.0, 9.0, 2.0 }; cvar; external;
  kCAScrollVertically: NSString { available starting in 10.5, 2.0, 9.0, 2.0 }; cvar; external;
  kCAScrollHorizontally: NSString { available starting in 10.5, 2.0, 9.0, 2.0 }; cvar; external;
  kCAScrollBoth: NSString { available starting in 10.5, 2.0, 9.0, 2.0 }; cvar; external;
{$endif}

