{ Parsed from MetalPerformanceShaders.framework MPSImageIntegral.h }

{$ifdef TYPES}
type
  MPSImageIntegralPtr = ^MPSImageIntegral;
  MPSImageIntegralOfSquaresPtr = ^MPSImageIntegralOfSquares;
{$endif}

{$ifndef MPS_MPSImageIntegral_h}
{$ifdef CLASSES}

type
  MPSImageIntegral = objcclass external (MPSUnaryImageKernel)
  end;

type
  MPSImageIntegralOfSquares = objcclass external (MPSUnaryImageKernel)
  end;
{$endif}

{$endif}
