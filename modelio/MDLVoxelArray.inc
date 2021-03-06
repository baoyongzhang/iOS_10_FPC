{ Parsed from ModelIO.framework MDLVoxelArray.h }

{$ifdef TYPES}
type
  MDLVoxelArrayPtr = ^MDLVoxelArray;
{$endif}

{$ifdef TYPES}
type
  MDLVoxelIndex = vector_int4;
  MDLVoxelIndexPtr = ^MDLVoxelIndex;

type
  MDLVoxelIndexExtent = record
    minimumExtent: MDLVoxelIndex;
    maximumExtent: MDLVoxelIndex;
  end;
type
  MDLVoxelIndexExtentPtr = ^MDLVoxelIndexExtent;
{$endif}

{$ifdef CLASSES}

type
  MDLVoxelArray = objcclass external (MDLObject)
  public
    function initWithAsset_divisions_patchRadius (asset: MDLAsset; divisions: cint; patchRadius: single): instancetype; message 'initWithAsset:divisions:patchRadius:';
    function initWithData_boundingBox_voxelExtent (voxelData: NSData; boundingBox: MDLAxisAlignedBoundingBox; voxelExtent: single): instancetype; message 'initWithData:boundingBox:voxelExtent:';
    function initWithAsset_divisions_interiorShells_exteriorShells_patchRadius (asset: MDLAsset; divisions: cint; interiorShells: cint; exteriorShells: cint; patchRadius: single): instancetype; message 'initWithAsset:divisions:interiorShells:exteriorShells:patchRadius:';
    function initWithAsset_divisions_interiorNBWidth_exteriorNBWidth_patchRadius (asset: MDLAsset; divisions: cint; interiorNBWidth: single; exteriorNBWidth: single; patchRadius: single): instancetype; message 'initWithAsset:divisions:interiorNBWidth:exteriorNBWidth:patchRadius:'; deprecated 'in 10_11, 10_12, NA, NA';
    function count: NSUInteger; message 'count';
    function voxelIndexExtent: MDLVoxelIndexExtent; message 'voxelIndexExtent';
    function voxelExistsAtIndex_allowAnyX_allowAnyY_allowAnyZ_allowAnyShell (index: MDLVoxelIndex; allowAnyX: boolean; allowAnyY: boolean; allowAnyZ: boolean; allowAnyShell: boolean): boolean; message 'voxelExistsAtIndex:allowAnyX:allowAnyY:allowAnyZ:allowAnyShell:';
    function voxelsWithinExtent (extent: MDLVoxelIndexExtent): nullable NSDataPtr; message 'voxelsWithinExtent:';
    function voxelIndices: nullable NSDataPtr; message 'voxelIndices';
    procedure setVoxelAtIndex (index: MDLVoxelIndex); message 'setVoxelAtIndex:';
    procedure setVoxelsForMesh_divisions_patchRadius (mesh: nonnull MDLMeshPtr; divisions: cint; patchRadius: single); message 'setVoxelsForMesh:divisions:patchRadius:';
    procedure setVoxelsForMesh_divisions_interiorShells_exteriorShells_patchRadius (mesh: nonnull MDLMeshPtr; divisions: cint; interiorShells: cint; exteriorShells: cint; patchRadius: single); message 'setVoxelsForMesh:divisions:interiorShells:exteriorShells:patchRadius:'; deprecated 'in 10_11, 10_12, NA, NA';
    procedure setVoxelsForMesh_divisions_interiorNBWidth_exteriorNBWidth_patchRadius (mesh: nonnull MDLMeshPtr; divisions: cint; interiorNBWidth: single; exteriorNBWidth: single; patchRadius: single); message 'setVoxelsForMesh:divisions:interiorNBWidth:exteriorNBWidth:patchRadius:'; deprecated 'in 10_11, 10_12, NA, NA';
    procedure unionWithVoxels (voxels: MDLVoxelArray); message 'unionWithVoxels:';
    procedure intersectWithVoxels (voxels: MDLVoxelArray); message 'intersectWithVoxels:';
    procedure differenceWithVoxels (voxels: MDLVoxelArray); message 'differenceWithVoxels:';
    function boundingBox: MDLAxisAlignedBoundingBox; message 'boundingBox';
    function indexOfSpatialLocation (location: vector_float3): MDLVoxelIndex; message 'indexOfSpatialLocation:';
    function spatialLocationOfIndex (index: MDLVoxelIndex): vector_float3; message 'spatialLocationOfIndex:';
    function voxelBoundingBoxAtIndex (index: MDLVoxelIndex): MDLAxisAlignedBoundingBox; message 'voxelBoundingBoxAtIndex:';
    procedure convertToSignedShellField; message 'convertToSignedShellField';
    function isValidSignedShellField: boolean; message 'isValidSignedShellField';
    procedure setShellFieldInteriorThickness(newValue: single); message 'setShellFieldInteriorThickness:';
    function shellFieldInteriorThickness: single; message 'shellFieldInteriorThickness';
    procedure setShellFieldExteriorThickness(newValue: single); message 'setShellFieldExteriorThickness:';
    function shellFieldExteriorThickness: single; message 'shellFieldExteriorThickness';
    function coarseMesh: nullable MDLMeshPtr; message 'coarseMesh';
    function coarseMeshUsingAllocator (allocator: nullable MDLMeshBufferAllocatorProtocol): nullable MDLMeshPtr; message 'coarseMeshUsingAllocator:';
    function meshUsingAllocator (allocator: nullable MDLMeshBufferAllocatorProtocol): nullable MDLMeshPtr; message 'meshUsingAllocator:';
  end;
{$endif}

