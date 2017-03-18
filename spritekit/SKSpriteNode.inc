{ Parsed from SpriteKit.framework SKSpriteNode.h }

{$ifdef TYPES}
type
  SKSpriteNodePtr = ^SKSpriteNode;
{$endif}

{$ifdef CLASSES}

type
  SKSpriteNode = objcclass external (SKNode, SKWarpableProtocol)
  public
    class function spriteNodeWithTexture_size (texture: nullable SKTexturePtr; size: CGSize): instancetype; message 'spriteNodeWithTexture:size:';
    class function spriteNodeWithTexture (texture: nullable SKTexturePtr): instancetype; message 'spriteNodeWithTexture:';
    class function spriteNodeWithTexture_normalMap (texture: nullable SKTexturePtr; normalMap: nullable SKTexturePtr): instancetype; message 'spriteNodeWithTexture:normalMap:';
    class function spriteNodeWithImageNamed (name_: NSString): instancetype; message 'spriteNodeWithImageNamed:';
    class function spriteNodeWithImageNamed_normalMapped (name_: NSString; generateNormalMap: boolean): instancetype; message 'spriteNodeWithImageNamed:normalMapped:';
    class function spriteNodeWithColor_size (color: SKColorPtr; size: CGSize): instancetype; message 'spriteNodeWithColor:size:';
    function initWithTexture_color_size (texture: nullable SKTexturePtr; color: SKColorPtr; size: CGSize): instancetype; message 'initWithTexture:color:size:'; { NS_DESIGNATED_INITIALIZER }
    function initWithTexture (texture: nullable SKTexturePtr): instancetype; message 'initWithTexture:';
    function initWithImageNamed (name_: NSString): instancetype; message 'initWithImageNamed:';
    function initWithColor_size (color: SKColorPtr; size: CGSize): instancetype; message 'initWithColor:size:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    procedure setTexture(newValue: SKTexture); message 'setTexture:';
    function texture: SKTexture; message 'texture';
    procedure setNormalTexture(newValue: SKTexture); message 'setNormalTexture:';
    function normalTexture: SKTexture; message 'normalTexture';
    procedure setLightingBitMask(newValue: cuint32); message 'setLightingBitMask:';
    function lightingBitMask: cuint32; message 'lightingBitMask';
    procedure setShadowCastBitMask(newValue: cuint32); message 'setShadowCastBitMask:';
    function shadowCastBitMask: cuint32; message 'shadowCastBitMask';
    procedure setShadowedBitMask(newValue: cuint32); message 'setShadowedBitMask:';
    function shadowedBitMask: cuint32; message 'shadowedBitMask';
    procedure setCenterRect(newValue: CGRect); message 'setCenterRect:';
    function centerRect: CGRect; message 'centerRect';
    procedure setColorBlendFactor(newValue: CGFloat); message 'setColorBlendFactor:';
    function colorBlendFactor: CGFloat; message 'colorBlendFactor';
    procedure setColor(newValue: SKColorPtr); message 'setColor:';
    function color: SKColorPtr; message 'color';
    procedure setBlendMode(newValue: SKBlendMode); message 'setBlendMode:';
    function blendMode: SKBlendMode; message 'blendMode';
    procedure setAnchorPoint(newValue: CGPoint); message 'setAnchorPoint:';
    function anchorPoint: CGPoint; message 'anchorPoint';
    procedure setSize(newValue: CGSize); message 'setSize:';
    function size: CGSize; message 'size';
    procedure scaleToSize (size_: CGSize); message 'scaleToSize:'; { available in 10_12, 10_0 }
    procedure setShader(newValue: SKShader); message 'setShader:';
    function shader: SKShader; message 'shader';
    procedure setAttributeValues(newValue: NSDictionary); message 'setAttributeValues:';
    function attributeValues: NSDictionary; message 'attributeValues';
    function valueForAttributeNamed (key: nonnull NSStringPtr): nullable SKAttributeValuePtr; message 'valueForAttributeNamed:';
    procedure setValue_forAttributeNamed__ (value: SKAttributeValue; key: nonnull NSStringPtr; forAttribute: id); message 'setValue:forAttributeNamed:_:';

    { Adopted protocols }
    procedure setSubdivisionLevels(newValue: NSInteger); message 'setSubdivisionLevels:';
    function subdivisionLevels: NSInteger; message 'subdivisionLevels';
    procedure setWarpGeometry(newValue: SKWarpGeometry); message 'setWarpGeometry:';
    function warpGeometry: SKWarpGeometry; message 'warpGeometry';
  end;
{$endif}

