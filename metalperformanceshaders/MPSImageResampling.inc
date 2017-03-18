{ Parsed from MetalPerformanceShaders.framework MPSImageResampling.h }

{$ifdef TYPES}
type
  MPSImageLanczosScalePtr = ^MPSImageLanczosScale;
{$endif}

{$ifndef MPS_MPSImageResampling_h}
{$ifdef CLASSES}

type
  MPSImageLanczosScale = objcclass external (MPSUnaryImageKernel)
  public
    procedure setScaleTransform(newValue: MPSScaleTransformPtr); message 'setScaleTransform:';
    function scaleTransform: MPSScaleTransformPtr; message 'scaleTransform';
  end;
{$endif}

{$endif}
