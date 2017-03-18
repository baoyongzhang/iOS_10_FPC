{ Parsed from SpriteKit.framework SKEffectNode.h }

{ Types from SKEffectNode }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  SKEffectNodePtr = ^SKEffectNode;
{$endif}

{$ifdef CLASSES}

type
  SKEffectNode = objcclass external (SKNode, SKWarpableProtocol)
  public
    {$if defined(__NULL_MACRO__)}
    procedure setFilter(newValue: CIFilter); message 'setFilter:';
    function filter: CIFilter; message 'filter';
    {$endif}
    procedure setShouldCenterFilter(newValue: boolean); message 'setShouldCenterFilter:';
    function shouldCenterFilter: boolean; message 'shouldCenterFilter';
    procedure setShouldEnableEffects(newValue: boolean); message 'setShouldEnableEffects:';
    function shouldEnableEffects: boolean; message 'shouldEnableEffects';
    procedure setShouldRasterize(newValue: boolean); message 'setShouldRasterize:';
    function shouldRasterize: boolean; message 'shouldRasterize';
    procedure setBlendMode(newValue: SKBlendMode); message 'setBlendMode:';
    function blendMode: SKBlendMode; message 'blendMode';
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

