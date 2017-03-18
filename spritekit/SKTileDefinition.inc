{ Parsed from SpriteKit.framework SKTileDefinition.h }

{$ifdef TYPES}
type
  SKTileDefinitionPtr = ^SKTileDefinition;
{$endif}

{$ifdef TYPES}
type
  SKTileDefinitionRotation = NSUInteger;
  SKTileDefinitionRotationPtr = ^SKTileDefinitionRotation;

const
  SKTileDefinitionRotation0 = 0;
  SKTileDefinitionRotation90 = 1;
  SKTileDefinitionRotation180 = 2;
  SKTileDefinitionRotation270 = 3;
{$endif}

{$ifdef CLASSES}

type
  SKTileDefinition = objcclass external (NSObject, NSCopyingProtocol, NSCodingProtocol)
  public
    class function tileDefinitionWithTexture (texture: SKTexture): instancetype; message 'tileDefinitionWithTexture:';
    class function tileDefinitionWithTexture_size (texture: SKTexture; size: CGSize): instancetype; message 'tileDefinitionWithTexture:size:';
    class function tileDefinitionWithTexture_normalTexture_size (texture: SKTexture; normalTexture: SKTexture; size: CGSize): instancetype; message 'tileDefinitionWithTexture:normalTexture:size:';
    class function tileDefinitionWithTextures_size_timePerFrame (textures: SKTexture *ProtocolPtr; size: CGSize; timePerFrame: CGFloat): instancetype; message 'tileDefinitionWithTextures:size:timePerFrame:';
    class function tileDefinitionWithTextures_normalTextures_size_timePerFrame (textures: SKTexture *ProtocolPtr; normalTextures: SKTexture *ProtocolPtr; size: CGSize; timePerFrame: CGFloat): instancetype; message 'tileDefinitionWithTextures:normalTextures:size:timePerFrame:';
    function initWithTexture (texture: SKTexture): instancetype; message 'initWithTexture:';
    function initWithTexture_size (texture: SKTexture; size: CGSize): instancetype; message 'initWithTexture:size:';
    function initWithTexture_normalTexture_size (texture: SKTexture; normalTexture: SKTexture; size: CGSize): instancetype; message 'initWithTexture:normalTexture:size:';
    function initWithTextures_size_timePerFrame (textures: SKTexture *ProtocolPtr; size: CGSize; timePerFrame: CGFloat): instancetype; message 'initWithTextures:size:timePerFrame:';
    function initWithTextures_normalTextures_size_timePerFrame (textures: SKTexture *ProtocolPtr; normalTextures: SKTexture *ProtocolPtr; size: CGSize; timePerFrame: CGFloat): instancetype; message 'initWithTextures:normalTextures:size:timePerFrame:';
    procedure setTextures(newValue: SKTexture *ProtocolPtr); message 'setTextures:';
    function textures: SKTexture *ProtocolPtr; message 'textures';
    procedure setNormalTextures(newValue: SKTexture *ProtocolPtr); message 'setNormalTextures:';
    function normalTextures: SKTexture *ProtocolPtr; message 'normalTextures';
    procedure setUserData(newValue: NSMutableDictionary); message 'setUserData:';
    function userData: NSMutableDictionary; message 'userData';
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    procedure setSize(newValue: CGSize); message 'setSize:';
    function size: CGSize; message 'size';
    procedure setTimePerFrame(newValue: CGFloat); message 'setTimePerFrame:';
    function timePerFrame: CGFloat; message 'timePerFrame';
    procedure setPlacementWeight(newValue: NSUInteger); message 'setPlacementWeight:';
    function placementWeight: NSUInteger; message 'placementWeight';
    procedure setRotation(newValue: SKTileDefinitionRotation); message 'setRotation:';
    function rotation: SKTileDefinitionRotation; message 'rotation';
    procedure setFlipVertically(newValue: boolean); message 'setFlipVertically:';
    function flipVertically: boolean; message 'flipVertically';
    procedure setFlipHorizontally(newValue: boolean); message 'setFlipHorizontally:';
    function flipHorizontally: boolean; message 'flipHorizontally';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
  end;
{$endif}

