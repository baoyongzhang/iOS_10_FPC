{ Parsed from MapKit.framework MKCircleView.h }

{$ifdef TYPES}
type
  MKCircleViewPtr = ^MKCircleView;
{$endif}

{$ifdef CLASSES}

type
  MKCircleView = objcclass external (MKOverlayPathView)
  public
    function initWithCircle (circle: MKCircle): instancetype; message 'initWithCircle:'; deprecated 'in 4_0, 7_0';
    function circle: MKCircle; message 'circle';
  end;
{$endif}

