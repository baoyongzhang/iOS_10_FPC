{ Parsed from SceneKit.framework SCNHitTest.h }

{$ifdef TYPES}
type
  SCNHitTestResultPtr = ^SCNHitTestResult;
{$endif}

{$if (defined(SWIFT_SDK_OVERLAY2_SCENEKIT_EPOCH)) and (SWIFT_SDK_OVERLAY2_SCENEKIT_EPOCH >= 3)}
{$ifdef TYPES}
type
  NS_STRING_ENUM = NSString *SCNHitTestOption;
  NS_STRING_ENUMPtr = ^NS_STRING_ENUM;
{$endif}

{$else}
{$ifdef TYPES}
type
  SCNHitTestOption = ^NSString;
{$endif}

{$endif}
{$ifdef EXTERNAL_SYMBOLS}
var
  SCNHitTestFirstFoundOnlyKey: SCNHitTestOption; cvar; external;
  SCNHitTestSortResultsKey: SCNHitTestOption; cvar; external;
  SCNHitTestClipToZRangeKey: SCNHitTestOption; cvar; external;
  SCNHitTestBackFaceCullingKey: SCNHitTestOption; cvar; external;
  SCNHitTestBoundingBoxOnlyKey: SCNHitTestOption; cvar; external;
  SCNHitTestIgnoreChildNodesKey: SCNHitTestOption; cvar; external;
  SCNHitTestRootNodeKey: SCNHitTestOption; cvar; external;
{$endif}

{$ifdef TYPES}
const
  SCNHitTestOptionIgnoreHiddenNodes = SCNHitTestIgnoreHiddenNodesKey;
{$endif}

{$ifdef CLASSES}

type
  SCNHitTestResult = objcclass external (NSObject)
  public
    function node: SCNNode; message 'node';
    function geometryIndex: NSInteger; message 'geometryIndex';
    function faceIndex: NSInteger; message 'faceIndex';
    function localCoordinates: SCNVector3; message 'localCoordinates';
    function worldCoordinates: SCNVector3; message 'worldCoordinates';
    function localNormal: SCNVector3; message 'localNormal';
    function worldNormal: SCNVector3; message 'worldNormal';
    function modelTransform: SCNMatrix4; message 'modelTransform';
    function boneNode: SCNNode ios(10.0),Ptr; message 'boneNode';
    function tvos(10.0)): SCNNode ios(10.0),Ptr; message 'tvos(10.0))';
    function textureCoordinatesWithMappingChannel (channel: NSInteger): CGPoint; message 'textureCoordinatesWithMappingChannel:';
  end;
{$endif}

