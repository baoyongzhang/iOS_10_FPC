{ Parsed from SpriteKit.framework SKShader.h }

{$ifdef TYPES}
type
  SKShaderPtr = ^SKShader;
{$endif}

{$ifdef CLASSES}

type
  SKShader = objcclass external (NSObject, NSCopyingProtocol, NSCodingProtocol)
  public
    function initWithSource (source: NSString): instancetype; message 'initWithSource:';
    function initWithSource_uniforms (source: NSString; uniforms: SKUniform*ProtocolPtr): instancetype; message 'initWithSource:uniforms:';
    class function shader: instancetype; message 'shader';
    class function shaderWithSource (source: NSString): instancetype; message 'shaderWithSource:';
    class function shaderWithSource_uniforms (source: NSString; uniforms: SKUniform*ProtocolPtr): instancetype; message 'shaderWithSource:uniforms:';
    class function shaderWithFileNamed (name: NSString): instancetype; message 'shaderWithFileNamed:';
    procedure setSource(newValue: NSString); message 'setSource:';
    function source: NSString; message 'source';
    procedure setUniforms(newValue: SKUniform *ProtocolPtr); message 'setUniforms:';
    function uniforms: SKUniform *ProtocolPtr; message 'uniforms';
    procedure addUniform (uniform: SKUniform); message 'addUniform:';
    function uniformNamed (name: NSString): nullable SKUniformPtr; message 'uniformNamed:';
    procedure removeUniformNamed (name: NSString); message 'removeUniformNamed:';
    procedure setAttributes(newValue: SKAttribute *ProtocolPtr); message 'setAttributes:';
    function attributes: SKAttribute *ProtocolPtr; message 'attributes';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
  end;
{$endif}

