{$mode delphi}
{$modeswitch objectivec1}
{$modeswitch cvar}

unit DefinedClassesGLKit;
interface

type
  GLKBaseEffect = objcclass external;
  GLKEffectProperty = objcclass external;
  GLKEffectPropertyFog = objcclass external;
  GLKEffectPropertyLight = objcclass external;
  GLKEffectPropertyMaterial = objcclass external;
  GLKEffectPropertyTexture = objcclass external;
  GLKEffectPropertyTransform = objcclass external;
  GLKMesh = objcclass external;
  GLKMeshBuffer = objcclass external;
  GLKMeshBufferAllocator = objcclass external;
  GLKReflectionMapEffect = objcclass external;
  GLKSkyboxEffect = objcclass external;
  GLKSubmesh = objcclass external;
  GLKTextureInfo = objcclass external;
  GLKTextureLoader = objcclass external;
  GLKView = objcclass external;
  GLKViewController = objcclass external;
  GLKNamedEffectProtocol = objcprotocol external name 'GLKNamedEffect';
  GLKViewControllerDelegateProtocol = objcprotocol external name 'GLKViewControllerDelegate';
  GLKViewDelegateProtocol = objcprotocol external name 'GLKViewDelegate';

type
  EAGLContext = objcclass external;

implementation
end.
