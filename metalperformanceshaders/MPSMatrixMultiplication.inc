{ Parsed from MetalPerformanceShaders.framework MPSMatrixMultiplication.h }

{$ifdef TYPES}
type
  MPSMatrixMultiplicationPtr = ^MPSMatrixMultiplication;
{$endif}

{$ifndef MPSMatrixMultiplication_h}
{$ifdef CLASSES}

type
  MPSMatrixMultiplication = objcclass external (MPSKernel)
  public
    procedure setResultMatrixOrigin(newValue: MTLOrigin); message 'setResultMatrixOrigin:';
    function resultMatrixOrigin: MTLOrigin; message 'resultMatrixOrigin';
    procedure setLeftMatrixOrigin(newValue: MTLOrigin); message 'setLeftMatrixOrigin:';
    function leftMatrixOrigin: MTLOrigin; message 'leftMatrixOrigin';
    procedure setRightMatrixOrigin(newValue: MTLOrigin); message 'setRightMatrixOrigin:';
    function rightMatrixOrigin: MTLOrigin; message 'rightMatrixOrigin';
    function initWithDevice_transposeLeft_transposeRight_resultRows_resultColumns_interiorColumns_alpha_beta (device_: nonnull MTLDeviceProtocol; transposeLeft: boolean; transposeRight: boolean; resultRows: NSUInteger; resultColumns: NSUInteger; interiorColumns: NSUInteger; alpha: double; beta: double): nonnull instancetype; message 'initWithDevice:transposeLeft:transposeRight:resultRows:resultColumns:interiorColumns:alpha:beta:';
    function initWithDevice (device_: nonnull MTLDeviceProtocol): nonnull instancetype; message 'initWithDevice:';
    procedure encodeToCommandBuffer_leftMatrix_rightMatrix_resultMatrix_commandBuffer_rightMatrix (commandBuffer: nonnull MTLCommandBufferProtocol; leftMatrix: MPSMatrix * __nonnull; rightMatrix: MPSMatrix * __nonnull; resultMatrix: MPSMatrix* __nonnull; leftMatrix5: id; resultMatrix6: id); message 'encodeToCommandBuffer:leftMatrix:rightMatrix:resultMatrix:commandBuffer:rightMatrix:';
  end;
{$endif}

{$endif}
