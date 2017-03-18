{ Parsed from UIKit.framework UIRegion.h }

{ Types from UIRegion }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  UIRegionPtr = ^UIRegion;
{$endif}

{$ifdef CLASSES}

type
  UIRegion = objcclass external (NSObject, NSCopyingProtocol, NSCodingProtocol)
  public
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function infiniteRegion: UIRegion; message 'infiniteRegion';
    {$else}
    class function infiniteRegion: UIRegion; message 'infiniteRegion';
    {$endif}
    function initWithRadius (radius: CGFloat): instancetype; message 'initWithRadius:';
    function initWithSize (size: CGSize): instancetype; message 'initWithSize:';
    function inverseRegion: instancetype; message 'inverseRegion';
    function regionByUnionWithRegion (region: UIRegion): instancetype; message 'regionByUnionWithRegion:';
    function regionByDifferenceFromRegion (region: UIRegion): instancetype; message 'regionByDifferenceFromRegion:';
    function regionByIntersectionWithRegion (region: UIRegion): instancetype; message 'regionByIntersectionWithRegion:';
    function containsPoint (point: CGPoint): boolean; message 'containsPoint:';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
  end;
{$endif}

