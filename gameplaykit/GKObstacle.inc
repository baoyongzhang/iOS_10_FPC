{ Parsed from GameplayKit.framework GKObstacle.h }

{ Types from GKPolygonObstacle }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  GKObstaclePtr = ^GKObstacle;
  GKCircleObstaclePtr = ^GKCircleObstacle;
  GKPolygonObstaclePtr = ^GKPolygonObstacle;
  GKSphereObstaclePtr = ^GKSphereObstacle;
{$endif}

{$ifdef CLASSES}

type
  GKObstacle = objcclass external (NSObject)
  end;

type
  GKCircleObstacle = objcclass external (GKObstacle)
  public
    procedure setRadius(newValue: single); message 'setRadius:';
    function radius: single; message 'radius';
    procedure setPosition(newValue: vector_float2); message 'setPosition:';
    function position: vector_float2; message 'position';
    class function obstacleWithRadius (radius_: single): instancetype; message 'obstacleWithRadius:';
    function initWithRadius (radius_: single): instancetype; message 'initWithRadius:'; { NS_DESIGNATED_INITIALIZER }
  end;

type
  GKPolygonObstacle = objcclass external (GKObstacle, NSCodingProtocol)
  public
    function vertexCount: NSUInteger; message 'vertexCount';
    {$if ((defined(SWIFT_SDK_OVERLAY_GAMEPLAYKIT_EPOCH)) and (SWIFT_SDK_OVERLAY_GAMEPLAYKIT_EPOCH >= 1))}
    class function obstacleWithPoints_count (points: vector_float2Ptr; numPoints: size_t): instancetype; message 'obstacleWithPoints:count:';
    function initWithPoints_count (points: vector_float2Ptr; numPoints: size_t): instancetype; message 'initWithPoints:count:'; { NS_DESIGNATED_INITIALIZER }
    {$else}
    class function obstacleWithPoints_count (points: vector_float2Ptr; numPoints: size_t): instancetype; message 'obstacleWithPoints:count:';
    function initWithPoints_count (points: vector_float2Ptr; numPoints: size_t): instancetype; message 'initWithPoints:count:'; { NS_DESIGNATED_INITIALIZER }
    {$endif}
    function vertexAtIndex (index: NSUInteger): vector_float2; message 'vertexAtIndex:';

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
  end;

type
  GKSphereObstacle = objcclass external (GKObstacle)
  public
    procedure setRadius(newValue: single); message 'setRadius:';
    function radius: single; message 'radius';
    procedure setPosition(newValue: vector_float3); message 'setPosition:';
    function position: vector_float3; message 'position';
    class function obstacleWithRadius (radius_: single): instancetype; message 'obstacleWithRadius:';
    function initWithRadius (radius_: single): instancetype; message 'initWithRadius:'; { NS_DESIGNATED_INITIALIZER }
  end;
{$endif}

