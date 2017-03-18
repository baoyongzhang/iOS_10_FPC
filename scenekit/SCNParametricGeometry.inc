{ Parsed from SceneKit.framework SCNParametricGeometry.h }

{$ifdef TYPES}
type
  SCNPlanePtr = ^SCNPlane;
  SCNBoxPtr = ^SCNBox;
  SCNPyramidPtr = ^SCNPyramid;
  SCNSpherePtr = ^SCNSphere;
  SCNCylinderPtr = ^SCNCylinder;
  SCNConePtr = ^SCNCone;
  SCNTubePtr = ^SCNTube;
  SCNCapsulePtr = ^SCNCapsule;
  SCNTorusPtr = ^SCNTorus;
  SCNFloorPtr = ^SCNFloor;
  SCNTextPtr = ^SCNText;
  SCNShapePtr = ^SCNShape;
{$endif}

{$ifdef CLASSES}

type
  SCNPlane = objcclass external (SCNGeometry)
  public
    class function planeWithWidth_height (width: CGFloat; height: CGFloat): instancetype; message 'planeWithWidth:height:';
    procedure setWidth(newValue: CGFloat); message 'setWidth:';
    function width: CGFloat; message 'width';
    procedure setHeight(newValue: CGFloat); message 'setHeight:';
    function height: CGFloat; message 'height';
    procedure setWidthSegmentCount(newValue: NSInteger); message 'setWidthSegmentCount:';
    function widthSegmentCount: NSInteger; message 'widthSegmentCount';
    procedure setHeightSegmentCount(newValue: NSInteger); message 'setHeightSegmentCount:';
    function heightSegmentCount: NSInteger; message 'heightSegmentCount';
    procedure set)(newValue: CGFloat cornerRadius); message 'set):';
    function ): CGFloat cornerRadius; message ')';
    procedure set)_(newValue: NSInteger cornerSegmentCount); message 'set):';
    function )_: NSInteger cornerSegmentCount; message ')';
  end;

type
  SCNBox = objcclass external (SCNGeometry)
  public
    class function boxWithWidth_height_length_chamferRadius (width: CGFloat; height: CGFloat; length: CGFloat; chamferRadius: CGFloat): instancetype; message 'boxWithWidth:height:length:chamferRadius:';
    procedure setWidth(newValue: CGFloat); message 'setWidth:';
    function width: CGFloat; message 'width';
    procedure setHeight(newValue: CGFloat); message 'setHeight:';
    function height: CGFloat; message 'height';
    procedure setLength(newValue: CGFloat); message 'setLength:';
    function length: CGFloat; message 'length';
    procedure setChamferRadius(newValue: CGFloat); message 'setChamferRadius:';
    function chamferRadius: CGFloat; message 'chamferRadius';
    procedure setWidthSegmentCount(newValue: NSInteger); message 'setWidthSegmentCount:';
    function widthSegmentCount: NSInteger; message 'widthSegmentCount';
    procedure setHeightSegmentCount(newValue: NSInteger); message 'setHeightSegmentCount:';
    function heightSegmentCount: NSInteger; message 'heightSegmentCount';
    procedure setLengthSegmentCount(newValue: NSInteger); message 'setLengthSegmentCount:';
    function lengthSegmentCount: NSInteger; message 'lengthSegmentCount';
    procedure setChamferSegmentCount(newValue: NSInteger); message 'setChamferSegmentCount:';
    function chamferSegmentCount: NSInteger; message 'chamferSegmentCount';
  end;

type
  SCNPyramid = objcclass external (SCNGeometry)
  public
    class function pyramidWithWidth_height_length (width: CGFloat; height: CGFloat; length: CGFloat): instancetype; message 'pyramidWithWidth:height:length:';
    procedure setWidth(newValue: CGFloat); message 'setWidth:';
    function width: CGFloat; message 'width';
    procedure setHeight(newValue: CGFloat); message 'setHeight:';
    function height: CGFloat; message 'height';
    procedure setLength(newValue: CGFloat); message 'setLength:';
    function length: CGFloat; message 'length';
    procedure setWidthSegmentCount(newValue: NSInteger); message 'setWidthSegmentCount:';
    function widthSegmentCount: NSInteger; message 'widthSegmentCount';
    procedure setHeightSegmentCount(newValue: NSInteger); message 'setHeightSegmentCount:';
    function heightSegmentCount: NSInteger; message 'heightSegmentCount';
    procedure setLengthSegmentCount(newValue: NSInteger); message 'setLengthSegmentCount:';
    function lengthSegmentCount: NSInteger; message 'lengthSegmentCount';
  end;

type
  SCNSphere = objcclass external (SCNGeometry)
  public
    class function sphereWithRadius (radius: CGFloat): instancetype; message 'sphereWithRadius:';
    procedure setRadius(newValue: CGFloat); message 'setRadius:';
    function radius: CGFloat; message 'radius';
    procedure setGeodesic(newValue: boolean); message 'setGeodesic:';
    function isGeodesic: boolean; message 'isGeodesic';
    procedure setSegmentCount(newValue: NSInteger); message 'setSegmentCount:';
    function segmentCount: NSInteger; message 'segmentCount';
  end;

type
  SCNCylinder = objcclass external (SCNGeometry)
  public
    class function cylinderWithRadius_height (radius: CGFloat; height: CGFloat): instancetype; message 'cylinderWithRadius:height:';
    procedure setRadius(newValue: CGFloat); message 'setRadius:';
    function radius: CGFloat; message 'radius';
    procedure setHeight(newValue: CGFloat); message 'setHeight:';
    function height: CGFloat; message 'height';
    procedure setRadialSegmentCount(newValue: NSInteger); message 'setRadialSegmentCount:';
    function radialSegmentCount: NSInteger; message 'radialSegmentCount';
    procedure setHeightSegmentCount(newValue: NSInteger); message 'setHeightSegmentCount:';
    function heightSegmentCount: NSInteger; message 'heightSegmentCount';
  end;

type
  SCNCone = objcclass external (SCNGeometry)
  public
    class function coneWithTopRadius_bottomRadius_height (topRadius: CGFloat; bottomRadius: CGFloat; height: CGFloat): instancetype; message 'coneWithTopRadius:bottomRadius:height:';
    procedure setTopRadius(newValue: CGFloat); message 'setTopRadius:';
    function topRadius: CGFloat; message 'topRadius';
    procedure setBottomRadius(newValue: CGFloat); message 'setBottomRadius:';
    function bottomRadius: CGFloat; message 'bottomRadius';
    procedure setHeight(newValue: CGFloat); message 'setHeight:';
    function height: CGFloat; message 'height';
    procedure setRadialSegmentCount(newValue: NSInteger); message 'setRadialSegmentCount:';
    function radialSegmentCount: NSInteger; message 'radialSegmentCount';
    procedure setHeightSegmentCount(newValue: NSInteger); message 'setHeightSegmentCount:';
    function heightSegmentCount: NSInteger; message 'heightSegmentCount';
  end;

type
  SCNTube = objcclass external (SCNGeometry)
  public
    class function tubeWithInnerRadius_outerRadius_height (innerRadius: CGFloat; outerRadius: CGFloat; height: CGFloat): instancetype; message 'tubeWithInnerRadius:outerRadius:height:';
    procedure setInnerRadius(newValue: CGFloat); message 'setInnerRadius:';
    function innerRadius: CGFloat; message 'innerRadius';
    procedure setOuterRadius(newValue: CGFloat); message 'setOuterRadius:';
    function outerRadius: CGFloat; message 'outerRadius';
    procedure setHeight(newValue: CGFloat); message 'setHeight:';
    function height: CGFloat; message 'height';
    procedure setRadialSegmentCount(newValue: NSInteger); message 'setRadialSegmentCount:';
    function radialSegmentCount: NSInteger; message 'radialSegmentCount';
    procedure setHeightSegmentCount(newValue: NSInteger); message 'setHeightSegmentCount:';
    function heightSegmentCount: NSInteger; message 'heightSegmentCount';
  end;

type
  SCNCapsule = objcclass external (SCNGeometry)
  public
    class function capsuleWithCapRadius_height (capRadius: CGFloat; height: CGFloat): instancetype; message 'capsuleWithCapRadius:height:';
    procedure setCapRadius(newValue: CGFloat); message 'setCapRadius:';
    function capRadius: CGFloat; message 'capRadius';
    procedure setHeight(newValue: CGFloat); message 'setHeight:';
    function height: CGFloat; message 'height';
    procedure setRadialSegmentCount(newValue: NSInteger); message 'setRadialSegmentCount:';
    function radialSegmentCount: NSInteger; message 'radialSegmentCount';
    procedure setHeightSegmentCount(newValue: NSInteger); message 'setHeightSegmentCount:';
    function heightSegmentCount: NSInteger; message 'heightSegmentCount';
    procedure setCapSegmentCount(newValue: NSInteger); message 'setCapSegmentCount:';
    function capSegmentCount: NSInteger; message 'capSegmentCount';
  end;

type
  SCNTorus = objcclass external (SCNGeometry)
  public
    class function torusWithRingRadius_pipeRadius (ringRadius: CGFloat; pipeRadius: CGFloat): instancetype; message 'torusWithRingRadius:pipeRadius:';
    procedure setRingRadius(newValue: CGFloat); message 'setRingRadius:';
    function ringRadius: CGFloat; message 'ringRadius';
    procedure setPipeRadius(newValue: CGFloat); message 'setPipeRadius:';
    function pipeRadius: CGFloat; message 'pipeRadius';
    procedure setRingSegmentCount(newValue: NSInteger); message 'setRingSegmentCount:';
    function ringSegmentCount: NSInteger; message 'ringSegmentCount';
    procedure setPipeSegmentCount(newValue: NSInteger); message 'setPipeSegmentCount:';
    function pipeSegmentCount: NSInteger; message 'pipeSegmentCount';
  end;

type
  SCNFloor = objcclass external (SCNGeometry)
  public
    class function floor: instancetype; message 'floor';
    procedure setReflectivity(newValue: CGFloat); message 'setReflectivity:';
    function reflectivity: CGFloat; message 'reflectivity';
    procedure setReflectionFalloffStart(newValue: CGFloat); message 'setReflectionFalloffStart:';
    function reflectionFalloffStart: CGFloat; message 'reflectionFalloffStart';
    procedure setReflectionFalloffEnd(newValue: CGFloat); message 'setReflectionFalloffEnd:';
    function reflectionFalloffEnd: CGFloat; message 'reflectionFalloffEnd';
    procedure setReflectionCategoryBitMask(newValue: NSUInteger ios(10.0),); message 'setReflectionCategoryBitMask:';
    function reflectionCategoryBitMask: NSUInteger ios(10.0),; message 'reflectionCategoryBitMask';
    procedure setTvos(10.0))(newValue: NSUInteger ios(10.0),); message 'setTvos(10.0)):';
    function tvos(10.0)): NSUInteger ios(10.0),; message 'tvos(10.0))';
    procedure setWidth(newValue: CGFloat); message 'setWidth:';
    function width: CGFloat; message 'width';
    procedure setLength(newValue: CGFloat); message 'setLength:';
    function length: CGFloat; message 'length';
    procedure set)(newValue: CGFloat reflectionResolutionScaleFactor); message 'set):';
    function ): CGFloat reflectionResolutionScaleFactor; message ')';
  end;

type
  SCNText = objcclass external (SCNGeometry)
  public
    class function textWithString_extrusionDepth (string_: nullable id; extrusionDepth: CGFloat): instancetype; message 'textWithString:extrusionDepth:';
    procedure setExtrusionDepth(newValue: CGFloat); message 'setExtrusionDepth:';
    function extrusionDepth: CGFloat; message 'extrusionDepth';
    procedure setString(newValue: id); message 'setString:';
    function string_: id; message 'string';
    procedure setFont(newValue: UIFont); message 'setFont:';
    function font: UIFont; message 'font';
    procedure setWrapped(newValue: boolean); message 'setWrapped:';
    function isWrapped: boolean; message 'isWrapped';
    procedure setContainerFrame(newValue: CGRect); message 'setContainerFrame:';
    function containerFrame: CGRect; message 'containerFrame';
    procedure setTruncationMode(newValue: NSString); message 'setTruncationMode:';
    function truncationMode: NSString; message 'truncationMode';
    procedure setAlignmentMode(newValue: NSString); message 'setAlignmentMode:';
    function alignmentMode: NSString; message 'alignmentMode';
    procedure setChamferRadius(newValue: CGFloat); message 'setChamferRadius:';
    function chamferRadius: CGFloat; message 'chamferRadius';
    procedure setChamferProfile(newValue: UIBezierPath); message 'setChamferProfile:';
    function chamferProfile: UIBezierPath; message 'chamferProfile';
    procedure set)(newValue: CGFloat flatness); message 'set):';
    function ): CGFloat flatness; message ')';
  end;
{$endif}

{$ifdef TYPES}
type
  SCNChamferMode = NSInteger;
  SCNChamferModePtr = ^SCNChamferMode;

const
  SCNChamferModeBoth = 0;
  SCNChamferModeFront = 1;
  SCNChamferModeBack = 2;
{$endif}

{$ifdef CLASSES}

type
  SCNShape = objcclass external (SCNGeometry)
  public
    class function shapeWithPath_extrusionDepth (path: nullable UIBezierPathPtr; extrusionDepth: CGFloat): instancetype; message 'shapeWithPath:extrusionDepth:';
    procedure setPath(newValue: UIBezierPath); message 'setPath:';
    function path: UIBezierPath; message 'path';
    procedure setExtrusionDepth(newValue: CGFloat); message 'setExtrusionDepth:';
    function extrusionDepth: CGFloat; message 'extrusionDepth';
    procedure setChamferMode(newValue: SCNChamferMode); message 'setChamferMode:';
    function chamferMode: SCNChamferMode; message 'chamferMode';
    procedure setChamferRadius(newValue: CGFloat); message 'setChamferRadius:';
    function chamferRadius: CGFloat; message 'chamferRadius';
    procedure setChamferProfile(newValue: UIBezierPath); message 'setChamferProfile:';
    function chamferProfile: UIBezierPath; message 'chamferProfile';
  end;
{$endif}

