{ Parsed from GameplayKit.framework GKScene.h }

{$ifdef TYPES}
type
  GKScenePtr = ^GKScene;
  GKSceneRootNodeTypeProtocolPtr = ^GKSceneRootNodeTypeProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  GKSceneRootNodeTypeProtocol = objcprotocol external name 'GKSceneRootNodeType' (NSObjectProtocol)
  end;
{$endif}

{$ifdef CLASSES}

type
  GKScene = objcclass external (NSObject, NSCopyingProtocol, NSCodingProtocol)
  public
    class function sceneWithFileNamed (filename: NSString): nullable instancetype; message 'sceneWithFileNamed:';
    function entities: GKEntity *ProtocolPtr; message 'entities';
    procedure setRootNode(newValue: GKSceneRootNodeTypeProtocol); message 'setRootNode:';
    function rootNode: GKSceneRootNodeTypeProtocol; message 'rootNode';
    function graphs: NSDictionary; message 'graphs';
    procedure addEntity (entity: GKEntity); message 'addEntity:';
    procedure removeEntity (entity: GKEntity); message 'removeEntity:';
    procedure addGraph_name (graph: GKGraph; name: NSString); message 'addGraph:name:';
    procedure removeGraph (name: NSString); message 'removeGraph:';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
  end;
{$endif}

