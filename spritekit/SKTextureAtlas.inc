{ Parsed from SpriteKit.framework SKTextureAtlas.h }

{$ifdef TYPES}
type
  SKTextureAtlasPtr = ^SKTextureAtlas;
{$endif}

{$ifdef CLASSES}

type
  SKTextureAtlas = objcclass external (NSObject, NSCodingProtocol)
  public
    class function atlasNamed (name: NSString): instancetype; message 'atlasNamed:';
    class function atlasWithDictionary (properties: NSDictionary): instancetype; message 'atlasWithDictionary:'; { available in 10_10, 8_0 }
    function textureNamed (name: NSString): SKTexture; message 'textureNamed:';
    class procedure preloadTextureAtlases_withCompletionHandler (textureAtlases: SKTextureAtlas*ProtocolPtr; completionHandler: OpaqueCBlock); message 'preloadTextureAtlases:withCompletionHandler:';
    class procedure preloadTextureAtlasesNamed_withCompletionHandler (atlasNames: NSString *ProtocolPtr; completionHandler: OpaqueCBlock); message 'preloadTextureAtlasesNamed:withCompletionHandler:'; { available in 10_11, 9_0 }
    procedure preloadWithCompletionHandler (completionHandler: OpaqueCBlock); message 'preloadWithCompletionHandler:';
    function textureNames: NSString *ProtocolPtr; message 'textureNames';

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
  end;
{$endif}

