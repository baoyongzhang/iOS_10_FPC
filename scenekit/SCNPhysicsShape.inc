{ Parsed from SceneKit.framework SCNPhysicsShape.h }

{$ifdef TYPES}
type
  SCNPhysicsShapePtr = ^SCNPhysicsShape;
{$endif}

{$if (defined(SWIFT_SDK_OVERLAY2_SCENEKIT_EPOCH)) and (SWIFT_SDK_OVERLAY2_SCENEKIT_EPOCH >= 3)}
{$ifdef TYPES}
type
  NS_STRING_ENUM = NSString *SCNPhysicsShapeOption;
  NS_STRING_ENUMPtr = ^NS_STRING_ENUM;
{$endif}

{$else}
{$ifdef TYPES}
type
  SCNPhysicsShapeOption = ^NSString;
{$endif}

{$endif}
{$ifdef TYPES}
const
  SCNPhysicsShapeOptionType = SCNPhysicsShapeTypeKey;
  SCNPhysicsShapeOptionKeepAsCompound = SCNPhysicsShapeKeepAsCompoundKey;
  SCNPhysicsShapeOptionScale = SCNPhysicsShapeScaleKey;
{$endif}

{$if (defined(SWIFT_SDK_OVERLAY2_SCENEKIT_EPOCH)) and (SWIFT_SDK_OVERLAY2_SCENEKIT_EPOCH >= 3)}
{$ifdef TYPES}
type
  NS_STRING_ENUM = NSString *SCNPhysicsShapeType;
  NS_STRING_ENUMPtr = ^NS_STRING_ENUM;
{$endif}

{$else}
{$ifdef TYPES}
type
  SCNPhysicsShapeType = ^NSString;
{$endif}

{$endif}
{$ifdef CLASSES}

type
  SCNPhysicsShape = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    class function shapeWithGeometry_options (geometry: SCNGeometry; options: nullable NSDictionaryPtr): instancetype; message 'shapeWithGeometry:options:';
    class function shapeWithNode_options (node: SCNNode; options: nullable NSDictionaryPtr): instancetype; message 'shapeWithNode:options:';
    class function shapeWithShapes_transforms (shapes: SCNPhysicsShape *ProtocolPtr; transforms: nullable NSValue *ProtocolPtr): instancetype; message 'shapeWithShapes:transforms:';
    function options: NSDictionary; message 'options';
    function ios(9.0)): NSDictionary; message 'ios(9.0))';
    function sourceObject: id; message 'sourceObject';
    function ios(9.0))_: id; message 'ios(9.0))';
    function transforms: NSValue *ProtocolPtr; message 'transforms';
    function ios(9.0))__: NSValue *ProtocolPtr; message 'ios(9.0))';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

