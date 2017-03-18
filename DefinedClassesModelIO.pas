{$mode delphi}
{$modeswitch objectivec1}
{$modeswitch cvar}

unit DefinedClassesModelIO;
interface

type
  MDLAreaLight = objcclass external;
  MDLAsset = objcclass external;
  MDLCamera = objcclass external;
  MDLCheckerboardTexture = objcclass external;
  MDLColorSwatchTexture = objcclass external;
  MDLLight = objcclass external;
  MDLLightProbe = objcclass external;
  MDLMaterial = objcclass external;
  MDLMaterialProperty = objcclass external;
  MDLMaterialPropertyConnection = objcclass external;
  MDLMaterialPropertyGraph = objcclass external;
  MDLMaterialPropertyNode = objcclass external;
  MDLMesh = objcclass external;
  MDLMeshBufferData = objcclass external;
  MDLMeshBufferDataAllocator = objcclass external;
  MDLMeshBufferMap = objcclass external;
  MDLMeshBufferZoneDefault = objcclass external;
  MDLNoiseTexture = objcclass external;
  MDLNormalMapTexture = objcclass external;
  MDLObject = objcclass external;
  MDLObjectContainer = objcclass external;
  MDLPhotometricLight = objcclass external;
  MDLPhysicallyPlausibleLight = objcclass external;
  MDLPhysicallyPlausibleScatteringFunction = objcclass external;
  MDLScatteringFunction = objcclass external;
  MDLSkyCubeTexture = objcclass external;
  MDLStereoscopicCamera = objcclass external;
  MDLSubmesh = objcclass external;
  MDLSubmeshTopology = objcclass external;
  MDLTexture = objcclass external;
  MDLTextureFilter = objcclass external;
  MDLTextureSampler = objcclass external;
  MDLTransform = objcclass external;
  MDLURLTexture = objcclass external;
  MDLVertexAttribute = objcclass external;
  MDLVertexAttributeData = objcclass external;
  MDLVertexBufferLayout = objcclass external;
  MDLVertexDescriptor = objcclass external;
  MDLVoxelArray = objcclass external;
  MDLComponentProtocol = objcprotocol external name 'MDLComponent';
  MDLLightProbeIrradianceDataSourceProtocol = objcprotocol external name 'MDLLightProbeIrradianceDataSource';
  MDLMeshBufferAllocatorProtocol = objcprotocol external name 'MDLMeshBufferAllocator';
  MDLMeshBufferProtocol = objcprotocol external name 'MDLMeshBuffer';
  MDLMeshBufferZoneProtocol = objcprotocol external name 'MDLMeshBufferZone';
  MDLNamedProtocol = objcprotocol external name 'MDLNamed';
  MDLObjectContainerComponentProtocol = objcprotocol external name 'MDLObjectContainerComponent';
  MDLTransformComponentProtocol = objcprotocol external name 'MDLTransformComponent';

type
  MDLColorSpec = objcclass external;
  NSString = objcclass external;
  NSURL = objcclass external;

implementation
end.
