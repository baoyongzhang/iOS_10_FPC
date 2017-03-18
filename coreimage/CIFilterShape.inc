{ Parsed from CoreImage.framework CIFilterShape.h }

{$ifdef TYPES}
type
  CIFilterShapePtr = ^CIFilterShape;
{$endif}

{$ifdef CLASSES}

type
  CIFilterShape = objcclass external (NSObject, NSCopyingProtocol)
  private
    _pad: cuint32;
    _priv: pointer;
  public
    class function shapeWithRect (r: CGRect): instancetype; message 'shapeWithRect:';
    function initWithRect (r: CGRect): instancetype; message 'initWithRect:';
    function transformBy_interior (m: CGAffineTransform; flag: boolean): CIFilterShape; message 'transformBy:interior:';
    function insetByX_Y (dx: cint; dy: cint): CIFilterShape; message 'insetByX:Y:';
    function unionWith (s2: CIFilterShape): CIFilterShape; message 'unionWith:';
    function unionWithRect (r: CGRect): CIFilterShape; message 'unionWithRect:';
    function intersectWith (s2: CIFilterShape): CIFilterShape; message 'intersectWith:';
    function intersectWithRect (r: CGRect): CIFilterShape; message 'intersectWithRect:';
    function extent: CGRect; message 'extent';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

