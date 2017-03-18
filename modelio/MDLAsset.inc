{ Parsed from ModelIO.framework MDLAsset.h }

{$ifdef TYPES}
type
  MDLAssetPtr = ^MDLAsset;
  MDLLightProbeIrradianceDataSourceProtocolPtr = ^MDLLightProbeIrradianceDataSourceProtocol;
{$endif}

{$ifdef CLASSES}

type
  MDLAsset = objcclass external (NSObject, NSCopyingProtocol, NSFastEnumerationProtocol)
  public
    function initWithURL (URL: NSURL): instancetype; message 'initWithURL:';
    function initWithURL_vertexDescriptor_bufferAllocator (URL: NSURL; vertexDescriptor: nullable MDLVertexDescriptorPtr; bufferAllocator: nullable MDLMeshBufferAllocatorProtocol): instancetype; message 'initWithURL:vertexDescriptor:bufferAllocator:';
    function initWithBufferAllocator (bufferAllocator: nullable MDLMeshBufferAllocatorProtocol): instancetype; message 'initWithBufferAllocator:';
    function initWithURL_vertexDescriptor_bufferAllocator_preserveTopology_error (URL: NSURL; vertexDescriptor: nullable MDLVertexDescriptorPtr; bufferAllocator: nullable MDLMeshBufferAllocatorProtocol; preserveTopology: boolean; error: NSError * __nullable * __nullable): instancetype; message 'initWithURL:vertexDescriptor:bufferAllocator:preserveTopology:error:';
    function exportAssetToURL_exportAssetToURL (URL: NSURL; error: id): boolean; message 'exportAssetToURL:exportAssetToURL:';
    function exportAssetToURL_error (URL: NSURL; error: NSError * __nullable * __nullable): boolean; message 'exportAssetToURL:error:';
    class function canImportFileExtension (extension: NSString): boolean; message 'canImportFileExtension:';
    class function canExportFileExtension (extension: NSString): boolean; message 'canExportFileExtension:';
    function childObjectsOfClass (objectClass: pobjc_class): MDLObject*ProtocolPtr; message 'childObjectsOfClass:';
    function boundingBoxAtTime (time: NSTimeInterval): MDLAxisAlignedBoundingBox; message 'boundingBoxAtTime:';
    function boundingBox: MDLAxisAlignedBoundingBox; message 'boundingBox';
    procedure setFrameInterval(newValue: NSTimeInterval); message 'setFrameInterval:';
    function frameInterval: NSTimeInterval; message 'frameInterval';
    procedure setStartTime(newValue: NSTimeInterval); message 'setStartTime:';
    function startTime: NSTimeInterval; message 'startTime';
    procedure setEndTime(newValue: NSTimeInterval); message 'setEndTime:';
    function endTime: NSTimeInterval; message 'endTime';
    function URL: NSURL; message 'URL';
    function bufferAllocator: MDLMeshBufferAllocatorProtocol; message 'bufferAllocator';
    function vertexDescriptor: MDLVertexDescriptor; message 'vertexDescriptor';
    procedure addObject (object_: MDLObject); message 'addObject:';
    procedure removeObject (object_: MDLObject); message 'removeObject:';
    function count: NSUInteger; message 'count';
    function objectAtIndexedSubscript (index: NSUInteger): nullable MDLObjectPtr; message 'objectAtIndexedSubscript:';
    function objectAtIndex (index: NSUInteger): MDLObject; message 'objectAtIndex:';
    procedure setMasters(newValue: MDLObjectContainerComponentProtocol); message 'setMasters:';
    function masters: MDLObjectContainerComponentProtocol; message 'masters';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    function countByEnumeratingWithState_objects_count (state: NSFastEnumerationStatePtr; buffer: id  _Nullable; len: NSUInteger): NSUInteger; message 'countByEnumeratingWithState:objects:count:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  MDLLightProbeIrradianceDataSourceProtocol = objcprotocol external name 'MDLLightProbeIrradianceDataSource' (NSObjectProtocol)
    procedure setBoundingBox(newValue: MDLAxisAlignedBoundingBox); message 'setBoundingBox:';
    function boundingBox: MDLAxisAlignedBoundingBox; message 'boundingBox';
  optional
    procedure setSphericalHarmonicsLevel(newValue: NSUInteger); message 'setSphericalHarmonicsLevel:';
    function sphericalHarmonicsLevel: NSUInteger; message 'sphericalHarmonicsLevel';
    function sphericalHarmonicsCoefficientsAtPosition (position: vector_float3): NSData; message 'sphericalHarmonicsCoefficientsAtPosition:';
  end;
{$endif}

{$ifdef CLASSES}

type
  MDLAsset_MDLLightBaking = objccategory external name 'MDLLightBaking' (MDLAsset)
    class function placeLightProbesWithDensity_heuristic_usingIrradianceDataSource (value: single; type_: MDLProbePlacement; dataSource: MDLLightProbeIrradianceDataSourceProtocol): MDLLightProbe *ProtocolPtr; message 'placeLightProbesWithDensity:heuristic:usingIrradianceDataSource:';
  end;
{$endif}

