{ Parsed from ModelIO.framework MDLMesh.h }

{$ifdef TYPES}
type
  MDLVertexAttributeDataPtr = ^MDLVertexAttributeData;
  MDLMeshPtr = ^MDLMesh;
{$endif}

{$ifdef CLASSES}

type
  MDLVertexAttributeData = objcclass external (NSObject)
  public
    procedure setMap(newValue: MDLMeshBufferMap); message 'setMap:';
    function map: MDLMeshBufferMap; message 'map';
    procedure setDataStart(newValue: pointer); message 'setDataStart:';
    function dataStart: pointer; message 'dataStart';
    procedure setStride(newValue: NSUInteger); message 'setStride:';
    function stride: NSUInteger; message 'stride';
    procedure setFormat(newValue: MDLVertexFormat); message 'setFormat:';
    function format: MDLVertexFormat; message 'format';
  end;

type
  MDLMesh = objcclass external (MDLObject)
  public
    function initWithBufferAllocator (bufferAllocator: nullable MDLMeshBufferAllocatorProtocol): instancetype; message 'initWithBufferAllocator:';
    function initWithVertexBuffer_vertexCount_descriptor_submeshes (vertexBuffer: MDLMeshBufferProtocol; vertexCount: NSUInteger; descriptor: MDLVertexDescriptor; submeshes: MDLSubmesh*ProtocolPtr): instancetype; message 'initWithVertexBuffer:vertexCount:descriptor:submeshes:';
    function initWithVertexBuffers_vertexCount_descriptor_submeshes (vertexBuffers: id<MDLMeshBufferProtocol>Ptr; vertexCount: NSUInteger; descriptor: MDLVertexDescriptor; submeshes: MDLSubmesh*ProtocolPtr): instancetype; message 'initWithVertexBuffers:vertexCount:descriptor:submeshes:';
    function vertexAttributeDataForAttributeNamed (name: NSString): nullable MDLVertexAttributeDataPtr; message 'vertexAttributeDataForAttributeNamed:';
    function vertexAttributeDataForAttributeNamed_asFormat (name: NSString; format: MDLVertexFormat): nullable MDLVertexAttributeDataPtr; message 'vertexAttributeDataForAttributeNamed:asFormat:';
    function boundingBox: MDLAxisAlignedBoundingBox; message 'boundingBox';
    procedure setVertexDescriptor(newValue: MDLVertexDescriptor); message 'setVertexDescriptor:';
    function vertexDescriptor: MDLVertexDescriptor; message 'vertexDescriptor';
    procedure setVertexCount(newValue: NSUInteger); message 'setVertexCount:';
    function vertexCount: NSUInteger; message 'vertexCount';
    procedure setVertexBuffers(newValue: MDLMeshBufferProtocolProtocolPtr); message 'setVertexBuffers:';
    function vertexBuffers: MDLMeshBufferProtocolProtocolPtr; message 'vertexBuffers';
    procedure setSubmeshes(newValue: MDLSubmesh *ProtocolPtr); message 'setSubmeshes:';
    function submeshes: MDLSubmesh *ProtocolPtr; message 'submeshes';
    function allocator: MDLMeshBufferAllocatorProtocol; message 'allocator';
  end;


type
  Modifiers = objccategory external (MDLMesh)
    procedure addAttributeWithName_format (name: NSString; format: MDLVertexFormat); message 'addAttributeWithName:format:';
    procedure addAttributeWithName_format_type_data_stride (name: NSString; format: MDLVertexFormat; type_: NSString; data: NSData; stride: NSInteger); message 'addAttributeWithName:format:type:data:stride:';
    procedure addAttributeWithName_format_type_data_stride_time (name: NSString; format: MDLVertexFormat; type_: NSString; data: NSData; stride: NSInteger; time: NSTimeInterval); message 'addAttributeWithName:format:type:data:stride:time:';
    procedure addNormalsWithAttributeNamed_creaseThreshold (attributeName: nullable NSStringPtr; creaseThreshold: single); message 'addNormalsWithAttributeNamed:creaseThreshold:';
    procedure addTangentBasisForTextureCoordinateAttributeNamed_tangentAttributeNamed_bitangentAttributeNamed (textureCoordinateAttributeName: NSString; tangentAttributeNamed: NSString; bitangentAttributeName: nullable NSStringPtr); message 'addTangentBasisForTextureCoordinateAttributeNamed:tangentAttributeNamed:bitangentAttributeNamed:';
    procedure addTangentBasisForTextureCoordinateAttributeNamed_normalAttributeNamed_tangentAttributeNamed (textureCoordinateAttributeName: NSString; normalAttributeNamed: NSString; tangentAttributeNamed: NSString); message 'addTangentBasisForTextureCoordinateAttributeNamed:normalAttributeNamed:tangentAttributeNamed:';
    procedure addUnwrappedTextureCoordinatesForAttributeNamed (textureCoordinateAttributeName: NSString); message 'addUnwrappedTextureCoordinatesForAttributeNamed:';
    procedure makeVerticesUnique; message 'makeVerticesUnique';
    procedure replaceAttributeNamed_withData (name: NSString; newData: nonnull MDLVertexAttributeDataPtr); message 'replaceAttributeNamed:withData:';
    procedure updateAttributeNamed_withData (name: NSString; newData: nonnull MDLVertexAttributeDataPtr); message 'updateAttributeNamed:withData:';
    procedure removeAttributeNamed (name: NSString); message 'removeAttributeNamed:';
  end;

type
  Generators = objccategory external (MDLMesh)
    function initBoxWithExtent_segments_inwardNormals_geometryType_allocator (extent: vector_float3; segments: vector_uint3; inwardNormals: boolean; geometryType: MDLGeometryType; allocator_: nullable MDLMeshBufferAllocatorProtocol): instancetype; message 'initBoxWithExtent:segments:inwardNormals:geometryType:allocator:';
    function initSphereWithExtent_segments_inwardNormals_geometryType_allocator (extent: vector_float3; segments: vector_uint2; inwardNormals: boolean; geometryType: MDLGeometryType; allocator_: nullable MDLMeshBufferAllocatorProtocol): instancetype; message 'initSphereWithExtent:segments:inwardNormals:geometryType:allocator:';
    function initHemisphereWithExtent_segments_inwardNormals_cap_geometryType_allocator (extent: vector_float3; segments: vector_uint2; inwardNormals: boolean; cap: boolean; geometryType: MDLGeometryType; allocator_: nullable MDLMeshBufferAllocatorProtocol): instancetype; message 'initHemisphereWithExtent:segments:inwardNormals:cap:geometryType:allocator:';
    function initCylinderWithExtent_segments_inwardNormals_topCap_bottomCap_geometryType_allocator (extent: vector_float3; segments: vector_uint2; inwardNormals: boolean; topCap: boolean; bottomCap: boolean; geometryType: MDLGeometryType; allocator_: nullable MDLMeshBufferAllocatorProtocol): instancetype; message 'initCylinderWithExtent:segments:inwardNormals:topCap:bottomCap:geometryType:allocator:';
    function initCapsuleWithExtent_cylinderSegments_hemisphereSegments_inwardNormals_geometryType_allocator (extent: vector_float3; segments: vector_uint2; hemisphereSegments: cuint32; inwardNormals: boolean; geometryType: MDLGeometryType; allocator_: nullable MDLMeshBufferAllocatorProtocol): instancetype; message 'initCapsuleWithExtent:cylinderSegments:hemisphereSegments:inwardNormals:geometryType:allocator:';
    function initConeWithExtent_segments_inwardNormals_cap_geometryType_allocator (extent: vector_float3; segments: vector_uint2; inwardNormals: boolean; cap: boolean; geometryType: MDLGeometryType; allocator_: nullable MDLMeshBufferAllocatorProtocol): instancetype; message 'initConeWithExtent:segments:inwardNormals:cap:geometryType:allocator:';
    function initPlaneWithExtent_segments_geometryType_allocator (extent: vector_float3; segments: vector_uint2; geometryType: MDLGeometryType; allocator_: nullable MDLMeshBufferAllocatorProtocol): instancetype; message 'initPlaneWithExtent:segments:geometryType:allocator:';
    function initIcosahedronWithExtent_inwardNormals_geometryType_allocator (extent: vector_float3; inwardNormals: boolean; geometryType: MDLGeometryType; allocator_: nullable MDLMeshBufferAllocatorProtocol): instancetype; message 'initIcosahedronWithExtent:inwardNormals:geometryType:allocator:';
    function initMeshBySubdividingMesh_submeshIndex_subdivisionLevels_allocator (mesh: MDLMesh; submeshIndex: cint; subdivisionLevels: cuint; allocator_: nullable MDLMeshBufferAllocatorProtocol): instancetype; message 'initMeshBySubdividingMesh:submeshIndex:subdivisionLevels:allocator:';
    class function newBoxWithDimensions_segments_geometryType_inwardNormals_allocator (dimensions: vector_float3; segments: vector_uint3; geometryType: MDLGeometryType; inwardNormals: boolean; allocator_: nullable MDLMeshBufferAllocatorProtocol): instancetype; message 'newBoxWithDimensions:segments:geometryType:inwardNormals:allocator:';
    class function newEllipsoidWithRadii_radialSegments_verticalSegments_geometryType_inwardNormals_hemisphere_allocator (radii: vector_float3; radialSegments: NSUInteger; verticalSegments: NSUInteger; geometryType: MDLGeometryType; inwardNormals: boolean; hemisphere: boolean; allocator_: nullable MDLMeshBufferAllocatorProtocol): instancetype; message 'newEllipsoidWithRadii:radialSegments:verticalSegments:geometryType:inwardNormals:hemisphere:allocator:';
    class function newCylinderWithHeight_radii_radialSegments_verticalSegments_geometryType_inwardNormals_allocator (height: single; radii: vector_float2; radialSegments: NSUInteger; verticalSegments: NSUInteger; geometryType: MDLGeometryType; inwardNormals: boolean; allocator_: nullable MDLMeshBufferAllocatorProtocol): instancetype; message 'newCylinderWithHeight:radii:radialSegments:verticalSegments:geometryType:inwardNormals:allocator:';
    class function newCapsuleWithHeight_radii_radialSegments_verticalSegments_hemisphereSegments_geometryType_inwardNormals_allocator (height: single; radii: vector_float2; radialSegments: NSUInteger; verticalSegments: NSUInteger; hemisphereSegments: NSUInteger; geometryType: MDLGeometryType; inwardNormals: boolean; allocator_: nullable MDLMeshBufferAllocatorProtocol): instancetype; message 'newCapsuleWithHeight:radii:radialSegments:verticalSegments:hemisphereSegments:geometryType:inwardNormals:allocator:';
    class function newEllipticalConeWithHeight_radii_radialSegments_verticalSegments_geometryType_inwardNormals_allocator (height: single; radii: vector_float2; radialSegments: NSUInteger; verticalSegments: NSUInteger; geometryType: MDLGeometryType; inwardNormals: boolean; allocator_: nullable MDLMeshBufferAllocatorProtocol): instancetype; message 'newEllipticalConeWithHeight:radii:radialSegments:verticalSegments:geometryType:inwardNormals:allocator:';
    class function newPlaneWithDimensions_segments_geometryType_allocator (dimensions: vector_float2; segments: vector_uint2; geometryType: MDLGeometryType; allocator_: nullable MDLMeshBufferAllocatorProtocol): instancetype; message 'newPlaneWithDimensions:segments:geometryType:allocator:';
    class function newIcosahedronWithRadius_inwardNormals_geometryType_allocator (radius: single; inwardNormals: boolean; geometryType: MDLGeometryType; allocator_: nullable MDLMeshBufferAllocatorProtocol): instancetype; message 'newIcosahedronWithRadius:inwardNormals:geometryType:allocator:';
    class function newIcosahedronWithRadius_inwardNormals_allocator (radius: single; inwardNormals: boolean; allocator_: nullable MDLMeshBufferAllocatorProtocol): instancetype; message 'newIcosahedronWithRadius:inwardNormals:allocator:';
    class function newSubdividedMesh_submeshIndex_subdivisionLevels (mesh: MDLMesh; submeshIndex: NSUInteger; subdivisionLevels: NSUInteger): nullable instancetype; message 'newSubdividedMesh:submeshIndex:subdivisionLevels:';
  end;

type
  MDLLightBaking = objccategory external (MDLMesh)
    function generateAmbientOcclusionTextureWithSize_raysPerSample_attenuationFactor_objectsToConsider_vertexAttributeNamed_materialPropertyNamed (textureSize: vector_int2; raysPerSample: NSInteger; attenuationFactor: single; objectsToConsider: MDLObject*ProtocolPtr; vertexAttributeName: NSString; materialPropertyName: NSString): boolean; message 'generateAmbientOcclusionTextureWithSize:raysPerSample:attenuationFactor:objectsToConsider:vertexAttributeNamed:materialPropertyNamed:';
    function generateAmbientOcclusionTextureWithQuality_attenuationFactor_objectsToConsider_vertexAttributeNamed_materialPropertyNamed (bakeQuality: single; attenuationFactor: single; objectsToConsider: MDLObject*ProtocolPtr; vertexAttributeName: NSString; materialPropertyName: NSString): boolean; message 'generateAmbientOcclusionTextureWithQuality:attenuationFactor:objectsToConsider:vertexAttributeNamed:materialPropertyNamed:';
    function generateAmbientOcclusionVertexColorsWithRaysPerSample_attenuationFactor_objectsToConsider_vertexAttributeNamed (raysPerSample: NSInteger; attenuationFactor: single; objectsToConsider: MDLObject*ProtocolPtr; vertexAttributeName: NSString): boolean; message 'generateAmbientOcclusionVertexColorsWithRaysPerSample:attenuationFactor:objectsToConsider:vertexAttributeNamed:';
    function generateAmbientOcclusionVertexColorsWithQuality_attenuationFactor_objectsToConsider_vertexAttributeNamed (bakeQuality: single; attenuationFactor: single; objectsToConsider: MDLObject*ProtocolPtr; vertexAttributeName: NSString): boolean; message 'generateAmbientOcclusionVertexColorsWithQuality:attenuationFactor:objectsToConsider:vertexAttributeNamed:';
    function generateLightMapTextureWithTextureSize_lightsToConsider_objectsToConsider_vertexAttributeNamed_materialPropertyNamed (textureSize: vector_int2; lightsToConsider: MDLLight*ProtocolPtr; objectsToConsider: MDLObject*ProtocolPtr; vertexAttributeName: NSString; materialPropertyName: NSString): boolean; message 'generateLightMapTextureWithTextureSize:lightsToConsider:objectsToConsider:vertexAttributeNamed:materialPropertyNamed:';
    function generateLightMapTextureWithQuality_lightsToConsider_objectsToConsider_vertexAttributeNamed_materialPropertyNamed (bakeQuality: single; lightsToConsider: MDLLight*ProtocolPtr; objectsToConsider: MDLObject*ProtocolPtr; vertexAttributeName: NSString; materialPropertyName: NSString): boolean; message 'generateLightMapTextureWithQuality:lightsToConsider:objectsToConsider:vertexAttributeNamed:materialPropertyNamed:';
    function generateLightMapVertexColorsWithLightsToConsider_objectsToConsider_vertexAttributeNamed (lightsToConsider: MDLLight*ProtocolPtr; objectsToConsider: MDLObject*ProtocolPtr; vertexAttributeName: NSString): boolean; message 'generateLightMapVertexColorsWithLightsToConsider:objectsToConsider:vertexAttributeNamed:';
  end;
{$endif}

