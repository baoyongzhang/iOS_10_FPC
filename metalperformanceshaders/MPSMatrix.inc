{ Parsed from MetalPerformanceShaders.framework MPSMatrix.h }

{$ifdef TYPES}
type
  MPSMatrixDescriptorPtr = ^MPSMatrixDescriptor;
  MPSMatrixPtr = ^MPSMatrix;
{$endif}

{$ifndef MPSMatrix_h}

{$ifdef CLASSES}

type
  MPSMatrixDescriptor = objcclass external (NSObject)
  public
    procedure setRows(newValue: NSUInteger); message 'setRows:';
    function rows: NSUInteger; message 'rows';
    procedure setColumns(newValue: NSUInteger); message 'setColumns:';
    function columns: NSUInteger; message 'columns';
    procedure setDataType(newValue: MPSDataType); message 'setDataType:';
    function dataType: MPSDataType; message 'dataType';
    procedure setRowBytes(newValue: NSUInteger); message 'setRowBytes:';
    function rowBytes: NSUInteger; message 'rowBytes';
    class function matrixDescriptorWithDimensions_columns_rowBytes_dataType (rows_: NSUInteger; columns_: NSUInteger; rowBytes_: NSUInteger; dataType_: MPSDataType): __nonnull instancetype; message 'matrixDescriptorWithDimensions:columns:rowBytes:dataType:';
    class function rowBytesFromColumns_dataType (columns_: NSUInteger; dataType_: MPSDataType): size_t; message 'rowBytesFromColumns:dataType:';
  end;

type
  MPSMatrix = objcclass external (NSObject)
  public
    function device: MTLDeviceProtocol; message 'device';
    function rows: NSUInteger; message 'rows';
    function columns: NSUInteger; message 'columns';
    function dataType: MPSDataType; message 'dataType';
    function rowBytes: NSUInteger; message 'rowBytes';
    function data: MTLBufferProtocol; message 'data';
    function initWithBuffer_descriptor (buffer: nonnull MTLBufferProtocol; descriptor: nonnull MPSMatrixDescriptorPtr): nonnull instancetype; message 'initWithBuffer:descriptor:';
    function init: nonnull instancetype; message 'init';
  end;
{$endif}

{$endif}
