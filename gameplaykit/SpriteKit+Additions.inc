{ Parsed from GameplayKit.framework SpriteKit+Additions.h }
{$ifdef CLASSES}

type
  SKNode_GameplayKit = objccategory external name 'GameplayKit' (SKNode)
    class function obstaclesFromSpriteTextures_accuracy (sprites: SKNode*ProtocolPtr; accuracy: single): GKPolygonObstacle*ProtocolPtr; message 'obstaclesFromSpriteTextures:accuracy:';
    class function obstaclesFromNodeBounds (nodes: SKNode*ProtocolPtr): GKPolygonObstacle*ProtocolPtr; message 'obstaclesFromNodeBounds:';
    class function obstaclesFromNodePhysicsBodies (nodes: SKNode*ProtocolPtr): GKPolygonObstacle*ProtocolPtr; message 'obstaclesFromNodePhysicsBodies:';
    procedure setEntity(newValue: GKEntity); message 'setEntity:';
    function entity: GKEntity; message 'entity';
  end;

type
  SKScene_GameplayKit = objccategory external name 'GameplayKit' (SKScene)
  end;

type
  SKTileMapNode_GameplayKit = objccategory external name 'GameplayKit' (SKTileMapNode)
    class function tileMapNodesWithTileSet_columns_rows_tileSize_fromNoiseMap_tileTypeNoiseMapThresholds (tileSet_: SKTileSet; columns: NSUInteger; rows: NSUInteger; tileSize_: CGSize; noiseMap: GKNoiseMap; thresholds: NSNumber *ProtocolPtr): SKTileMapNode *ProtocolPtr; message 'tileMapNodesWithTileSet:columns:rows:tileSize:fromNoiseMap:tileTypeNoiseMapThresholds:';
  end;

type
  GameplayKit = objccategory external (SKTexture)
    class function textureWithNoiseMap (noiseMap: GKNoiseMap): instancetype; message 'textureWithNoiseMap:'; { available in 10_12, 10_0 }
  end;
{$endif}

