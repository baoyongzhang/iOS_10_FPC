{ Parsed from MetalKit.framework MTKModel.h }

{$ifdef TYPES}
type
  MTKMeshBufferAllocatorPtr = ^MTKMeshBufferAllocator;
  MTKMeshBufferPtr = ^MTKMeshBuffer;
  MTKSubmeshPtr = ^MTKSubmesh;
  MTKMeshPtr = ^MTKMesh;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  MTKModelErrorDomain: NSString *__nonnull { available in 10_11, 9_0 }; cvar; external;
  MTKModelErrorKey: NSString *__nonnull { available in 10_11, 9_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  MTKMeshBufferAllocator = objcclass external (NSObject, MDLMeshBufferAllocatorProtocol)
  public
    function init: nonnull instancetype; message 'init';
    function initWithDevice (device: nonnull MTLDeviceProtocol): nonnull instancetype; message 'initWithDevice:';
    function device: MTLDeviceProtocol; message 'device';

    { Adopted protocols }
    function newBuffer_type (length: NSUInteger; type_: MDLMeshBufferType): MDLMeshBufferProtocol; message 'newBuffer:type:';
    function newBufferFromZone_data_type (zone: nullable MDLMeshBufferZoneProtocol; data: NSData; type_: MDLMeshBufferType): nullable MDLMeshBufferProtocol; message 'newBufferFromZone:data:type:';
    function newBufferFromZone_length_type (zone: nullable MDLMeshBufferZoneProtocol; length: NSUInteger; type_: MDLMeshBufferType): nullable MDLMeshBufferProtocol; message 'newBufferFromZone:length:type:';
    function newBufferWithData_type (data: NSData; type_: MDLMeshBufferType): MDLMeshBufferProtocol; message 'newBufferWithData:type:';
    function newZone (capacity: NSUInteger): MDLMeshBufferZoneProtocol; message 'newZone:';
    function newZoneForBuffersWithSize_andType (sizes: NSNumber*ProtocolPtr; types: NSNumber*ProtocolPtr): MDLMeshBufferZoneProtocol; message 'newZoneForBuffersWithSize:andType:';
  end;

type
  MTKMeshBuffer = objcclass external (NSObject, MDLMeshBufferProtocol, MDLNamedProtocol)
  public
    function init: nonnull instancetype; message 'init';
    function length: NSUInteger; message 'length';
    function allocator: MTKMeshBufferAllocator; message 'allocator';
    function zone: MDLMeshBufferZoneProtocol; message 'zone';
    function buffer: MTLBufferProtocol; message 'buffer';
    function offset: NSUInteger; message 'offset';
    function type_: MDLMeshBufferType; message 'type';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure fillData_offset (data: NSData; offset: NSUInteger); message 'fillData:offset:';
    function map: MDLMeshBufferMap; message 'map';
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
  end;

type
  MTKSubmesh = objcclass external (NSObject)
  public
    function init: nonnull instancetype; message 'init';
    function primitiveType: MTLPrimitiveType; message 'primitiveType';
    function indexType: MTLIndexType; message 'indexType';
    function indexBuffer: MTKMeshBuffer; message 'indexBuffer';
    function indexCount: NSUInteger; message 'indexCount';
    function mesh: MTKMesh; message 'mesh';
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
  end;

type
  MTKMesh = objcclass external (NSObject)
  public
    function init: nonnull instancetype; message 'init';
    function initWithMesh_device_error (mesh: nonnull MDLMeshPtr; device: nonnull MTLDeviceProtocol; error: NSError * __nullable * __nullable): nullable instancetype; message 'initWithMesh:device:error:';
    class function newMeshesFromAsset_device_sourceMeshes_error (asset: nonnull MDLAssetPtr; device: nonnull MTLDeviceProtocol; sourceMeshes: MDLMesh*Protocol* __nullable * __nullable; error: NSError * __nullable * __nullable): nullable MTKMesh*ProtocolPtr; message 'newMeshesFromAsset:device:sourceMeshes:error:';
    function vertexBuffers: MTKMeshBuffer *ProtocolPtr; message 'vertexBuffers';
    function vertexDescriptor: MDLVertexDescriptor; message 'vertexDescriptor';
    function submeshes: MTKSubmesh *ProtocolPtr; message 'submeshes';
    function vertexCount: NSUInteger; message 'vertexCount';
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
  end;
{$endif}

{$ifdef FUNCTIONS}
function MTKModelIOVertexDescriptorFromMetal(metalDescriptor: MTLVertexDescriptor* __nonnull): MDLVertexDescriptor* __nonnull; cdecl; external;
function MTKModelIOVertexDescriptorFromMetalWithError(metalDescriptor: MTLVertexDescriptor* __nonnull; error: NSError* __nullable* __nullable): MDLVertexDescriptor* __nonnull; cdecl; external;
function MTKMetalVertexDescriptorFromModelIO(modelIODescriptor: MDLVertexDescriptor* __nonnull): MTLVertexDescriptor* __nonnull; cdecl; external;
function MTKMetalVertexDescriptorFromModelIOWithError(modelIODescriptor: MDLVertexDescriptor* __nonnull; error: NSError* __nullable* __nullable): MTLVertexDescriptor* __nonnull; cdecl; external;
function MTKModelIOVertexFormatFromMetal(vertexFormat: MTLVertexFormat): MDLVertexFormat; cdecl; external;
function MTKMetalVertexFormatFromModelIO(vertexFormat: MDLVertexFormat): MTLVertexFormat; cdecl; external;
{$endif}

