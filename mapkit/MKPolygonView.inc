{ Parsed from MapKit.framework MKPolygonView.h }

{$ifdef TYPES}
type
  MKPolygonViewPtr = ^MKPolygonView;
{$endif}

{$ifdef CLASSES}

type
  MKPolygonView = objcclass external (MKOverlayPathView)
  public
    function initWithPolygon (polygon: MKPolygon): instancetype; message 'initWithPolygon:'; deprecated 'in 4_0, 7_0';
    function polygon: MKPolygon; message 'polygon';
  end;
{$endif}

