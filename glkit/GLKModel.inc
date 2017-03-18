{ Parsed from GLKit.framework GLKModel.h }

{$ifdef TYPES}
type
  GLKMeshBufferAllocatorPtr = ^GLKMeshBufferAllocator;
  GLKMeshBufferPtr = ^GLKMeshBuffer;
  GLKSubmeshPtr = ^GLKSubmesh;
  GLKMeshPtr = ^GLKMesh;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kGLKModelErrorDomain: NSString *__nonnull { available in 10_11, 9_0 }; cvar; external;
  kGLKModelErrorKey: NSString *__nonnull { available in 10_11, 9_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  GLKMeshBufferAllocator = objcclass external (NSObject, MDLMeshBufferAllocatorProtocol)

    { Adopted protocols }
    function newBuffer_type (length: NSUInteger; type_: MDLMeshBufferType): MDLMeshBufferProtocol; message 'newBuffer:type:';
    function newBufferFromZone_data_type (zone: nullable MDLMeshBufferZoneProtocol; data: NSData; type_: MDLMeshBufferType): nullable MDLMeshBufferProtocol; message 'newBufferFromZone:data:type:';
    function newBufferFromZone_length_type (zone: nullable MDLMeshBufferZoneProtocol; length: NSUInteger; type_: MDLMeshBufferType): nullable MDLMeshBufferProtocol; message 'newBufferFromZone:length:type:';
    function newBufferWithData_type (data: NSData; type_: MDLMeshBufferType): MDLMeshBufferProtocol; message 'newBufferWithData:type:';
    function newZone (capacity: NSUInteger): MDLMeshBufferZoneProtocol; message 'newZone:';
    function newZoneForBuffersWithSize_andType (sizes: NSNumber*ProtocolPtr; types: NSNumber*ProtocolPtr): MDLMeshBufferZoneProtocol; message 'newZoneForBuffersWithSize:andType:';
  end;

type
  GLKMeshBuffer = objcclass external (NSObject, MDLMeshBufferProtocol)
  public
    function length: NSUInteger; message 'length';
    function allocator: GLKMeshBufferAllocator; message 'allocator';
    function glBufferName: GLuint; message 'glBufferName';
    function offset: NSUInteger; message 'offset';
    function zone: MDLMeshBufferZoneProtocol; message 'zone';
    function type_: MDLMeshBufferType; message 'type';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure fillData_offset (data: NSData; offset: NSUInteger); message 'fillData:offset:';
    function map: MDLMeshBufferMap; message 'map';
  end;

type
  GLKSubmesh = objcclass external (NSObject)
  public
    function init: nullable instancetype; message 'init';
    function type_: GLenum; message 'type';
    function mode: GLenum; message 'mode';
    function elementCount: GLsizei; message 'elementCount';
    function elementBuffer: GLKMeshBuffer; message 'elementBuffer';
    function mesh: GLKMesh; message 'mesh';
    function name: NSString; message 'name';
  end;

type
  GLKMesh = objcclass external (NSObject)
  public
    function init: nullable instancetype; message 'init';
    function initWithMesh_error (mesh: nonnull MDLMeshPtr; error: NSError * __nullable * __nullable): nullable instancetype; message 'initWithMesh:error:';
    class function newMeshesFromAsset_sourceMeshes_error (asset: nonnull MDLAssetPtr; sourceMeshes: MDLMesh*Protocol* __nullable * __nullable; error: NSError * __nullable * __nullable): nullable GLKMesh*ProtocolPtr; message 'newMeshesFromAsset:sourceMeshes:error:';
    function vertexCount: NSUInteger; message 'vertexCount';
    function vertexBuffers: GLKMeshBuffer *ProtocolPtr; message 'vertexBuffers';
    function vertexDescriptor: MDLVertexDescriptor; message 'vertexDescriptor';
    function submeshes: GLKSubmesh *ProtocolPtr; message 'submeshes';
    function name: NSString; message 'name';
  end;
{$endif}

{$ifdef TYPES}
type
  _GLKVertexAttributeParameters = record
    type_: GLenum;
    size: GLint;
    normalized: GLboolean;
  end;
type
  _GLKVertexAttributeParametersPtr = ^_GLKVertexAttributeParameters;

type
  GLKVertexAttributeParameters = _GLKVertexAttributeParameters;
  GLKVertexAttributeParametersPtr = ^GLKVertexAttributeParameters;
{$endif}

{$ifdef FUNCTIONS}
function GLKVertexAttributeParametersFromModelIO(vertexFormat: MDLVertexFormat): GLKVertexAttributeParameters; cdecl; external;
{$endif}

