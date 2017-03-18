{ Parsed from Metal.framework MTLComputePipeline.h }

{$ifdef TYPES}
type
  MTLComputePipelineReflectionPtr = ^MTLComputePipelineReflection;
  MTLComputePipelineDescriptorPtr = ^MTLComputePipelineDescriptor;
  MTLComputePipelineStateProtocolPtr = ^MTLComputePipelineStateProtocol;
{$endif}

{$ifdef CLASSES}

type
  MTLComputePipelineReflection = objcclass external (NSObject)
  public
    function arguments: MTLArgument *ProtocolPtr; message 'arguments';
  end;

type
  MTLComputePipelineDescriptor = objcclass external (NSObject, NSCopyingProtocol)
  public
    procedure setLabel(newValue: NSString); message 'setLabel:';
    function label_: NSString; message 'label';
    procedure setComputeFunction(newValue: MTLFunctionProtocol); message 'setComputeFunction:';
    function computeFunction: MTLFunctionProtocol; message 'computeFunction';
    procedure setThreadGroupSizeIsMultipleOfThreadExecutionWidth(newValue: boolean); message 'setThreadGroupSizeIsMultipleOfThreadExecutionWidth:';
    function threadGroupSizeIsMultipleOfThreadExecutionWidth: boolean; message 'threadGroupSizeIsMultipleOfThreadExecutionWidth';
    procedure setStageInputDescriptor(newValue: MTLStageInputOutputDescriptor); message 'setStageInputDescriptor:';
    function stageInputDescriptor: MTLStageInputOutputDescriptor; message 'stageInputDescriptor';
    procedure reset; message 'reset';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  MTLComputePipelineStateProtocol = objcprotocol external name 'MTLComputePipelineState' (NSObjectProtocol)
    function device: MTLDeviceProtocol; message 'device';
    function maxTotalThreadsPerThreadgroup: NSUInteger; message 'maxTotalThreadsPerThreadgroup';
    function threadExecutionWidth: NSUInteger; message 'threadExecutionWidth';
  end;
{$endif}

