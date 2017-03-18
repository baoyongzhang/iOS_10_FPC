{ Parsed from SceneKit.framework SCNLevelOfDetail.h }

{$ifdef TYPES}
type
  SCNLevelOfDetailPtr = ^SCNLevelOfDetail;
{$endif}

{$ifdef CLASSES}

type
  SCNLevelOfDetail = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    class function levelOfDetailWithGeometry_screenSpaceRadius (geometry: nullable SCNGeometryPtr; radius: CGFloat): instancetype; message 'levelOfDetailWithGeometry:screenSpaceRadius:';
    class function levelOfDetailWithGeometry_worldSpaceDistance (geometry: nullable SCNGeometryPtr; distance: CGFloat): instancetype; message 'levelOfDetailWithGeometry:worldSpaceDistance:';
    function geometry: SCNGeometry; message 'geometry';
    function screenSpaceRadius: CGFloat; message 'screenSpaceRadius';
    function worldSpaceDistance: CGFloat; message 'worldSpaceDistance';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

