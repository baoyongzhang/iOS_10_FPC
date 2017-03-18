{ Parsed from SpriteKit.framework SKTileSet.h }

{$ifdef TYPES}
type
  SKTileSetPtr = ^SKTileSet;
  SKTileGroupPtr = ^SKTileGroup;
  SKTileGroupRulePtr = ^SKTileGroupRule;
{$endif}

{$ifdef TYPES}
type
  SKTileSetType = NSUInteger;
  SKTileSetTypePtr = ^SKTileSetType;

const
  SKTileSetTypeGrid = 0;
  SKTileSetTypeIsometric = 1;
  SKTileSetTypeHexagonalFlat = 2;
  SKTileSetTypeHexagonalPointy = 3;

type
  SKTileAdjacencyMask = NSUInteger;
  SKTileAdjacencyMaskPtr = ^SKTileAdjacencyMask;

const
  SKTileAdjacencyUp = 1 shl 0;
  SKTileAdjacencyUpperRight = 1 shl 1;
  SKTileAdjacencyRight = 1 shl 2;
  SKTileAdjacencyLowerRight = 1 shl 3;
  SKTileAdjacencyDown = 1 shl 4;
  SKTileAdjacencyLowerLeft = 1 shl 5;
  SKTileAdjacencyLeft = 1 shl 6;
  SKTileAdjacencyUpperLeft = 1 shl 7;
  SKTileAdjacencyAll = SKTileAdjacencyUp + SKTileAdjacencyUpperRight + SKTileAdjacencyRight + SKTileAdjacencyLowerRight + SKTileAdjacencyDown + SKTileAdjacencyLowerLeft + SKTileAdjacencyLeft + SKTileAdjacencyUpperLeft;
  SKTileHexFlatAdjacencyUp = 1 shl 0;
  SKTileHexFlatAdjacencyUpperRight = 1 shl 1;
  SKTileHexFlatAdjacencyLowerRight = 1 shl 2;
  SKTileHexFlatAdjacencyDown = 1 shl 3;
  SKTileHexFlatAdjacencyLowerLeft = 1 shl 4;
  SKTileHexFlatAdjacencyUpperLeft = 1 shl 5;
  SKTileHexFlatAdjacencyAll = SKTileHexFlatAdjacencyUp + SKTileHexFlatAdjacencyUpperRight + SKTileHexFlatAdjacencyLowerRight + SKTileHexFlatAdjacencyDown + SKTileHexFlatAdjacencyLowerLeft + SKTileHexFlatAdjacencyUpperLeft;
  SKTileHexPointyAdjacencyUpperLeft = 1 shl 0;
  SKTileHexPointyAdjacencyUpperRight = 1 shl 1;
  SKTileHexPointyAdjacencyRight = 1 shl 2;
  SKTileHexPointyAdjacencyLowerRight = 1 shl 3;
  SKTileHexPointyAdjacencyLowerLeft = 1 shl 4;
  SKTileHexPointyAdjacencyLeft = 1 shl 5;
  SKTileHexPointyAdjacencyAdd = SKTileHexPointyAdjacencyUpperLeft + SKTileHexPointyAdjacencyUpperRight + SKTileHexPointyAdjacencyRight + SKTileHexPointyAdjacencyLowerRight + SKTileHexPointyAdjacencyLowerLeft + SKTileHexPointyAdjacencyLeft;
  SKTileAdjacencyUpEdge = SKTileAdjacencyRight + SKTileAdjacencyLowerRight + SKTileAdjacencyDown + SKTileAdjacencyLowerLeft + SKTileAdjacencyLeft;
  SKTileAdjacencyUpperRightEdge = SKTileAdjacencyDown + SKTileAdjacencyLowerLeft + SKTileAdjacencyLeft;
  SKTileAdjacencyRightEdge = SKTileAdjacencyDown + SKTileAdjacencyLowerLeft + SKTileAdjacencyLeft + SKTileAdjacencyUpperLeft + SKTileAdjacencyUp;
  SKTileAdjacencyLowerRightEdge = SKTileAdjacencyLeft + SKTileAdjacencyUpperLeft + SKTileAdjacencyUp;
  SKTileAdjacencyDownEdge = SKTileAdjacencyUp + SKTileAdjacencyUpperRight + SKTileAdjacencyRight + SKTileAdjacencyLeft + SKTileAdjacencyUpperLeft;
  SKTileAdjacencyLowerLeftEdge = SKTileAdjacencyUp + SKTileAdjacencyUpperRight + SKTileAdjacencyRight;
  SKTileAdjacencyLeftEdge = SKTileAdjacencyUp + SKTileAdjacencyUpperRight + SKTileAdjacencyRight + SKTileAdjacencyLowerRight + SKTileAdjacencyDown;
  SKTileAdjacencyUpperLeftEdge = SKTileAdjacencyRight + SKTileAdjacencyLowerRight + SKTileAdjacencyDown;
  SKTileAdjacencyUpperRightCorner = SKTileAdjacencyUp + SKTileAdjacencyUpperRight + SKTileAdjacencyRight + SKTileAdjacencyLowerRight + SKTileAdjacencyDown + SKTileAdjacencyLeft + SKTileAdjacencyUpperLeft;
  SKTileAdjacencyLowerRightCorner = SKTileAdjacencyUp + SKTileAdjacencyUpperRight + SKTileAdjacencyRight + SKTileAdjacencyLowerRight + SKTileAdjacencyDown + SKTileAdjacencyLowerLeft + SKTileAdjacencyLeft;
  SKTileAdjacencyLowerLeftCorner = SKTileAdjacencyUp + SKTileAdjacencyRight + SKTileAdjacencyLowerRight + SKTileAdjacencyDown + SKTileAdjacencyLowerLeft + SKTileAdjacencyLeft + SKTileAdjacencyUpperLeft;
  SKTileAdjacencyUpperLeftCorner = SKTileAdjacencyUp + SKTileAdjacencyUpperRight + SKTileAdjacencyRight + SKTileAdjacencyDown + SKTileAdjacencyLowerLeft + SKTileAdjacencyLeft + SKTileAdjacencyUpperLeft;
{$endif}

{$ifdef CLASSES}

type
  SKTileSet = objcclass external (NSObject, NSCopyingProtocol, NSCodingProtocol)
  public
    class function tileSetWithTileGroups (tileGroups: SKTileGroup *ProtocolPtr): instancetype; message 'tileSetWithTileGroups:';
    class function tileSetWithTileGroups_tileSetType (tileGroups: SKTileGroup *ProtocolPtr; tileSetType: SKTileSetType): instancetype; message 'tileSetWithTileGroups:tileSetType:';
    function initWithTileGroups (tileGroups: SKTileGroup *ProtocolPtr): instancetype; message 'initWithTileGroups:';
    function initWithTileGroups_tileSetType (tileGroups: SKTileGroup *ProtocolPtr; tileSetType: SKTileSetType): instancetype; message 'initWithTileGroups:tileSetType:';
    class function tileSetNamed (name: NSString): nullable instancetype; message 'tileSetNamed:';
    class function tileSetFromURL (url: NSURL): nullable instancetype; message 'tileSetFromURL:';
    procedure setTileGroups(newValue: SKTileGroup *ProtocolPtr); message 'setTileGroups:';
    function tileGroups: SKTileGroup *ProtocolPtr; message 'tileGroups';
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    procedure setType(newValue: SKTileSetType); message 'setType:';
    function type_: SKTileSetType; message 'type';
    procedure setDefaultTileGroup(newValue: SKTileGroup); message 'setDefaultTileGroup:';
    function defaultTileGroup: SKTileGroup; message 'defaultTileGroup';
    procedure setDefaultTileSize(newValue: CGSize); message 'setDefaultTileSize:';
    function defaultTileSize: CGSize; message 'defaultTileSize';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
  end;

type
  SKTileGroup = objcclass external (NSObject, NSCopyingProtocol, NSCodingProtocol)
  public
    class function tileGroupWithTileDefinition (tileDefinition: SKTileDefinition): instancetype; message 'tileGroupWithTileDefinition:';
    class function tileGroupWithRules (rules: SKTileGroupRule *ProtocolPtr): instancetype; message 'tileGroupWithRules:';
    class function emptyTileGroup: instancetype; message 'emptyTileGroup';
    function initWithTileDefinition (tileDefinition: SKTileDefinition): instancetype; message 'initWithTileDefinition:';
    function initWithRules (rules: SKTileGroupRule *ProtocolPtr): instancetype; message 'initWithRules:';
    procedure setRules(newValue: SKTileGroupRule *ProtocolPtr); message 'setRules:';
    function rules: SKTileGroupRule *ProtocolPtr; message 'rules';
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
  end;

type
  SKTileGroupRule = objcclass external (NSObject, NSCopyingProtocol, NSCodingProtocol)
  public
    class function tileGroupRuleWithAdjacency_tileDefinitions (adjacency: SKTileAdjacencyMask; tileDefinitions: SKTileDefinition*ProtocolPtr): instancetype; message 'tileGroupRuleWithAdjacency:tileDefinitions:';
    function initWithAdjacency_tileDefinitions (adjacency: SKTileAdjacencyMask; tileDefinitions: SKTileDefinition *ProtocolPtr): instancetype; message 'initWithAdjacency:tileDefinitions:';
    procedure setAdjacency(newValue: SKTileAdjacencyMask); message 'setAdjacency:';
    function adjacency: SKTileAdjacencyMask; message 'adjacency';
    procedure setTileDefinitions(newValue: SKTileDefinition *ProtocolPtr); message 'setTileDefinitions:';
    function tileDefinitions: SKTileDefinition *ProtocolPtr; message 'tileDefinitions';
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
  end;
{$endif}

