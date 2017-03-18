{ Parsed from SceneKit.framework SCNSkinner.h }

{$ifdef TYPES}
type
  SCNSkinnerPtr = ^SCNSkinner;
{$endif}

{$ifdef CLASSES}

type
  SCNSkinner = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    procedure setSkeleton(newValue: SCNNode); message 'setSkeleton:';
    function skeleton: SCNNode; message 'skeleton';
    class function skinnerWithBaseGeometry_bones_boneInverseBindTransforms_boneWeights_boneIndices (baseGeometry: nullable SCNGeometryPtr; bones: SCNNode *ProtocolPtr; boneInverseBindTransforms: nullable NSValue *ProtocolPtr; boneWeights: SCNGeometrySource; boneIndices: SCNGeometrySource): instancetype; message 'skinnerWithBaseGeometry:bones:boneInverseBindTransforms:boneWeights:boneIndices:'; { available in macosx(10.10 }
    procedure set)(newValue: SCNGeometry *baseGeometry); message 'set):';
    function ): SCNGeometry *baseGeometry; message ')';
    procedure set)_(newValue: SCNMatrix4 baseGeometryBindTransform); message 'set):';
    function )_: SCNMatrix4 baseGeometryBindTransform; message ')';
    function )__: NSValue *Protocol *boneInverseBindTransforms; message ')';
    function )___: SCNNode *Protocol *bones; message ')';
    function )____: SCNGeometrySource *boneWeights; message ')';
    function )_____: SCNGeometrySource *boneIndices; message ')';

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

