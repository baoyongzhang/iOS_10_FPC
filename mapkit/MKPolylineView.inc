{ Parsed from MapKit.framework MKPolylineView.h }

{$ifdef TYPES}
type
  MKPolylineViewPtr = ^MKPolylineView;
{$endif}

{$ifdef CLASSES}

type
  MKPolylineView = objcclass external (MKOverlayPathView)
  public
    function initWithPolyline (polyline: MKPolyline): instancetype; message 'initWithPolyline:'; deprecated 'in 4_0, 7_0';
    function polyline: MKPolyline; message 'polyline';
  end;
{$endif}

