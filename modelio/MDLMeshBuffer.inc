{ Parsed from ModelIO.framework MDLMeshBuffer.h }

{$ifdef TYPES}
type
  MDLMeshBufferMapPtr = ^MDLMeshBufferMap;
  MDLMeshBufferDataPtr = ^MDLMeshBufferData;
  MDLMeshBufferDataAllocatorPtr = ^MDLMeshBufferDataAllocator;
  MDLMeshBufferZoneDefaultPtr = ^MDLMeshBufferZoneDefault;
  MDLMeshBufferProtocolPtr = ^MDLMeshBufferProtocol;
  MDLMeshBufferZoneProtocolPtr = ^MDLMeshBufferZoneProtocol;
  MDLMeshBufferAllocatorProtocolPtr = ^MDLMeshBufferAllocatorProtocol;
{$endif}

{$ifdef TYPES}
type
  MDLMeshBufferType = NSUInteger;
  MDLMeshBufferTypePtr = ^MDLMeshBufferType;

const
  MDLMeshBufferTypeVertex = 1;
  MDLMeshBufferTypeIndex = 2;
{$endif}

{$ifdef CLASSES}

type
  MDLMeshBufferMap = objcclass external (NSObject)
  public
    function initWithBytes_deallocator (bytes: pointer; deallocator: OpaqueCBlock): instancetype; message 'initWithBytes:deallocator:';
    function bytes: pointer; message 'bytes';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  MDLMeshBufferProtocol = objcprotocol external name 'MDLMeshBuffer' (NSObjectProtocol, NSCopyingProtocol)
    procedure fillData_offset (data: NSData; offset: NSUInteger); message 'fillData:offset:';
    function map: MDLMeshBufferMap; message 'map';
    function length: NSUInteger; message 'length';
    function allocator: MDLMeshBufferAllocatorProtocol; message 'allocator';
    function zone: MDLMeshBufferZoneProtocol; message 'zone';
    function type_: MDLMeshBufferType; message 'type';
  end;
{$endif}

{$ifdef CLASSES}

type
  MDLMeshBufferData = objcclass external (NSObject, MDLMeshBufferProtocol)
  public
    function initWithType_length (type_: MDLMeshBufferType; length: NSUInteger): instancetype; message 'initWithType:length:';
    function initWithType_data (type_: MDLMeshBufferType; data: nullable NSDataPtr): instancetype; message 'initWithType:data:';
    function data: NSData; message 'data';

    { Adopted protocols }
    function allocator: MDLMeshBufferAllocatorProtocol; message 'allocator';
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure fillData_offset (data: NSData; offset: NSUInteger); message 'fillData:offset:';
    function length: NSUInteger; message 'length';
    function map: MDLMeshBufferMap; message 'map';
    function type_: MDLMeshBufferType; message 'type';
    function zone: MDLMeshBufferZoneProtocol; message 'zone';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  MDLMeshBufferZoneProtocol = objcprotocol external name 'MDLMeshBufferZone' (NSObjectProtocol)
    function capacity: NSUInteger; message 'capacity';
    function allocator: MDLMeshBufferAllocatorProtocol; message 'allocator';
  end;

type
  MDLMeshBufferAllocatorProtocol = objcprotocol external name 'MDLMeshBufferAllocator' (NSObjectProtocol)
    function newZone (capacity: NSUInteger): MDLMeshBufferZoneProtocol; message 'newZone:';
    function newZoneForBuffersWithSize_andType (sizes: NSNumber*ProtocolPtr; types: NSNumber*ProtocolPtr): MDLMeshBufferZoneProtocol; message 'newZoneForBuffersWithSize:andType:';
    function newBuffer_type (length: NSUInteger; type_: MDLMeshBufferType): MDLMeshBufferProtocol; message 'newBuffer:type:';
    function newBufferWithData_type (data: NSData; type_: MDLMeshBufferType): MDLMeshBufferProtocol; message 'newBufferWithData:type:';
    function newBufferFromZone_length_type (zone: nullable MDLMeshBufferZoneProtocol; length: NSUInteger; type_: MDLMeshBufferType): nullable MDLMeshBufferProtocol; message 'newBufferFromZone:length:type:';
    function newBufferFromZone_data_type (zone: nullable MDLMeshBufferZoneProtocol; data: NSData; type_: MDLMeshBufferType): nullable MDLMeshBufferProtocol; message 'newBufferFromZone:data:type:';
  end;
{$endif}

{$ifdef CLASSES}

type
  MDLMeshBufferDataAllocator = objcclass external (NSObject, MDLMeshBufferAllocatorProtocol)

    { Adopted protocols }
    function newBuffer_type (length: NSUInteger; type_: MDLMeshBufferType): MDLMeshBufferProtocol; message 'newBuffer:type:';
    function newBufferFromZone_data_type (zone: nullable MDLMeshBufferZoneProtocol; data: NSData; type_: MDLMeshBufferType): nullable MDLMeshBufferProtocol; message 'newBufferFromZone:data:type:';
    function newBufferFromZone_length_type (zone: nullable MDLMeshBufferZoneProtocol; length: NSUInteger; type_: MDLMeshBufferType): nullable MDLMeshBufferProtocol; message 'newBufferFromZone:length:type:';
    function newBufferWithData_type (data: NSData; type_: MDLMeshBufferType): MDLMeshBufferProtocol; message 'newBufferWithData:type:';
    function newZone (capacity: NSUInteger): MDLMeshBufferZoneProtocol; message 'newZone:';
    function newZoneForBuffersWithSize_andType (sizes: NSNumber*ProtocolPtr; types: NSNumber*ProtocolPtr): MDLMeshBufferZoneProtocol; message 'newZoneForBuffersWithSize:andType:';
  end;

type
  MDLMeshBufferZoneDefault = objcclass external (NSObject, MDLMeshBufferZoneProtocol)
  public
    function capacity: NSUInteger; message 'capacity';
    function allocator: MDLMeshBufferAllocatorProtocol; message 'allocator';
  end;
{$endif}

