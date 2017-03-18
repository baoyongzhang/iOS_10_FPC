{ Parsed from Accelerate.framework vDSP.h }

{$ifndef __VDSP__}

{$ifdef TYPES}
const
  vDSP_ENUM = CF_ENUM;
{$endif}

{$ifdef TYPES}
const
  vDSP_Version0 = 600;
  vDSP_Version1 = 0;

type
  vDSP_Length = culong;
  vDSP_LengthPtr = ^vDSP_Length;
  vDSP_Stride = clong;
  vDSP_StridePtr = ^vDSP_Stride;

type
  DSPComplex = record
    real: single;
    imag: single;
  end;
type
  DSPComplexPtr = ^DSPComplex;
type
  DSPDoubleComplex = record
    real: double;
    imag: double;
  end;
type
  DSPDoubleComplexPtr = ^DSPDoubleComplex;
type
  DSPSplitComplex = record
    realp: float *__nonnull;
    imagp: float *__nonnull;
  end;
type
  DSPSplitComplexPtr = ^DSPSplitComplex;
type
  DSPDoubleSplitComplex = record
    realp: double *__nonnull;
    imagp: double *__nonnull;
  end;
type
  DSPDoubleSplitComplexPtr = ^DSPDoubleSplitComplex;

type
  FFTDirection = cint;
  FFTDirectionPtr = ^FFTDirection;
  FFTRadix = cint;
  FFTRadixPtr = ^FFTRadix;

const
  kFFTDirection_Forward = +1;
  kFFTDirection_Inverse = -1;
const
  kFFTRadix2 = 0;
  kFFTRadix3 = 1;
  kFFTRadix5 = 2;
const
  vDSP_HALF_WINDOW = 1;
  vDSP_HANN_DENORM = 0;
  vDSP_HANN_NORM = 2;

type
  vDSP_uint24 = record
    bytes:array[0..2] of cuint8;
  end;
type
  vDSP_uint24Ptr = ^vDSP_uint24;
type
  vDSP_int24 = record
    bytes:array[0..2] of cuint8;
  end;
type
  vDSP_int24Ptr = ^vDSP_int24;

type
  FFTSetup = OpaqueType;
  FFTSetupD = OpaqueType;
  vDSP_biquad_Setup = OpaqueType;
  vDSP_biquad_SetupD = OpaqueType;
  vDSP_biquadm_Setup = OpaqueType;
  vDSP_biquadm_SetupD = OpaqueType;
{$endif}

{$ifdef FUNCTIONS}
function vDSP_create_fftsetup_(__Log2n: vDSP_Length; __Radix: FFTRadix): __nullable FFTSetup; cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_0 }
procedure vDSP_destroy_fftsetup_(__setup: __nullable FFTSetup); cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_0 }
function vDSP_create_fftsetupD_(__Log2n: vDSP_Length; __Radix: FFTRadix): __nullable FFTSetupD; cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_destroy_fftsetupD_(__setup: __nullable FFTSetupD); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
function vDSP_biquad_CreateSetup(__Coefficients: pdouble; __M: vDSP_Length): __nullable vDSP_biquad_Setup; cdecl; external; { available starting in __MAC_10_9, __IPHONE_6_0 }
function vDSP_biquad_CreateSetupD(__Coefficients: pdouble; __M: vDSP_Length): __nullable vDSP_biquad_SetupD; cdecl; external; { available starting in __MAC_10_9, __IPHONE_6_0 }
procedure vDSP_biquad_DestroySetup(__setup: __nullable vDSP_biquad_Setup); cdecl; external; { available starting in __MAC_10_9, __IPHONE_6_0 }
procedure vDSP_biquad_DestroySetupD(__setup: __nullable vDSP_biquad_SetupD); cdecl; external; { available starting in __MAC_10_9, __IPHONE_6_0 }
function vDSP_biquadm_CreateSetup(__coeffs: pdouble; __M: vDSP_Length; __N: vDSP_Length): __nullable vDSP_biquadm_Setup; cdecl; external; { available starting in __MAC_10_9, __IPHONE_7_0 }
function vDSP_biquadm_CreateSetupD(__coeffs: pdouble; __M: vDSP_Length; __N: vDSP_Length): __nullable vDSP_biquadm_SetupD; cdecl; external; { available starting in __MAC_10_10, __IPHONE_8_0 }
procedure vDSP_biquadm_DestroySetup(__setup: vDSP_biquadm_Setup); cdecl; external; { available starting in __MAC_10_9, __IPHONE_7_0 }
procedure vDSP_biquadm_DestroySetupD(__setup: vDSP_biquadm_SetupD); cdecl; external; { available starting in __MAC_10_10, __IPHONE_8_0 }
procedure vDSP_biquadm_CopyState(__dest: vDSP_biquadm_Setup; __src: vDSP_biquadm_SetupStructPtr); cdecl; external; { available starting in __MAC_10_9, __IPHONE_7_0 }
procedure vDSP_biquadm_CopyStateD(__dest: vDSP_biquadm_SetupD; __src: vDSP_biquadm_SetupStructDPtr); cdecl; external; { available starting in __MAC_10_10, __IPHONE_8_0 }
procedure vDSP_biquadm_ResetState(__setup: vDSP_biquadm_Setup); cdecl; external; { available starting in __MAC_10_9, __IPHONE_7_0 }
procedure vDSP_biquadm_ResetStateD(__setup: vDSP_biquadm_SetupD); cdecl; external; { available starting in __MAC_10_10, __IPHONE_8_0 }
procedure vDSP_biquadm_SetCoefficientsDouble(__setup: vDSP_biquadm_Setup; __coeffs: pdouble; __start_sec: vDSP_Length; __start_chn: vDSP_Length; __nsec: vDSP_Length; __nchn: vDSP_Length); cdecl; external; { available starting in __MAC_10_11, __IPHONE_9_0 }
procedure vDSP_biquadm_SetTargetsDouble(__setup: vDSP_biquadm_Setup; __targets: pdouble; __interp_rate: single; __interp_threshold: single; __start_sec: vDSP_Length; __start_chn: vDSP_Length; __nsec: vDSP_Length; __nchn: vDSP_Length); cdecl; external; { available starting in __MAC_10_11, __IPHONE_9_0 }
procedure vDSP_biquadm_SetCoefficientsSingle(__setup: vDSP_biquadm_Setup; __coeffs: psingle; __start_sec: vDSP_Length; __start_chn: vDSP_Length; __nsec: vDSP_Length; __nchn: vDSP_Length); cdecl; external; { available starting in __MAC_10_11, __IPHONE_9_0 }
procedure vDSP_biquadm_SetTargetsSingle(__setup: vDSP_biquadm_Setup; __targets: psingle; __interp_rate: single; __interp_threshold: single; __start_sec: vDSP_Length; __start_chn: vDSP_Length; __nsec: vDSP_Length; __nchn: vDSP_Length); cdecl; external; { available starting in __MAC_10_11, __IPHONE_9_0 }
procedure vDSP_biquadm_SetActiveFilters(__setup: vDSP_biquadm_Setup; __filter_states: cboolPtr); cdecl; external; { available starting in __MAC_10_11, __IPHONE_9_0 }
procedure vDSP_ctoz_(__C: DSPComplexPtr; __IC: vDSP_Stride; __Z: DSPSplitComplexPtr; __IZ: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_0 }
procedure vDSP_ctozD_(__C: DSPDoubleComplexPtr; __IC: vDSP_Stride; __Z: DSPDoubleSplitComplexPtr; __IZ: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_ztoc_(__Z: DSPSplitComplexPtr; __IZ: vDSP_Stride; __C: DSPComplexPtr; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_0 }
procedure vDSP_ztocD_(__Z: DSPDoubleSplitComplexPtr; __IZ: vDSP_Stride; __C: DSPDoubleComplexPtr; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_fft_zip_(__Setup: FFTSetup; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __Log2N: vDSP_Length; __Direction: FFTDirection); cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_0 }
procedure vDSP_fft_zipD_(__Setup: FFTSetupD; __C: DSPDoubleSplitComplexPtr; __IC: vDSP_Stride; __Log2N: vDSP_Length; __Direction: FFTDirection); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_fft_zipt_(__Setup: FFTSetup; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __Buffer: DSPSplitComplexPtr; __Log2N: vDSP_Length; __Direction: FFTDirection); cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_0 }
procedure vDSP_fft_ziptD_(__Setup: FFTSetupD; __C: DSPDoubleSplitComplexPtr; __IC: vDSP_Stride; __Buffer: DSPDoubleSplitComplexPtr; __Log2N: vDSP_Length; __Direction: FFTDirection); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_fft_zop_(__Setup: FFTSetup; __A: DSPSplitComplexPtr; __IA: vDSP_Stride; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __Log2N: vDSP_Length; __Direction: FFTDirection); cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_0 }
procedure vDSP_fft_zopt_(__Setup: FFTSetup; __A: DSPSplitComplexPtr; __IA: vDSP_Stride; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __Buffer: DSPSplitComplexPtr; __Log2N: vDSP_Length; __Direction: FFTDirection); cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_0 }
procedure vDSP_fft_zopD_(__Setup: FFTSetupD; __A: DSPDoubleSplitComplexPtr; __IA: vDSP_Stride; __C: DSPDoubleSplitComplexPtr; __IC: vDSP_Stride; __Log2N: vDSP_Length; __Direction: FFTDirection); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_fft_zoptD_(__Setup: FFTSetupD; __A: DSPDoubleSplitComplexPtr; __IA: vDSP_Stride; __C: DSPDoubleSplitComplexPtr; __IC: vDSP_Stride; __Buffer: DSPDoubleSplitComplexPtr; __Log2N: vDSP_Length; __Direction: FFTDirection); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_fft_zrip_(__Setup: FFTSetup; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __Log2N: vDSP_Length; __Direction: FFTDirection); cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_0 }
procedure vDSP_fft_zripD_(__Setup: FFTSetupD; __C: DSPDoubleSplitComplexPtr; __IC: vDSP_Stride; __Log2N: vDSP_Length; __Direction: FFTDirection); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_fft_zript_(__Setup: FFTSetup; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __Buffer: DSPSplitComplexPtr; __Log2N: vDSP_Length; __Direction: FFTDirection); cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_0 }
procedure vDSP_fft_zriptD_(__Setup: FFTSetupD; __C: DSPDoubleSplitComplexPtr; __IC: vDSP_Stride; __Buffer: DSPDoubleSplitComplexPtr; __Log2N: vDSP_Length; __Direction: FFTDirection); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_fft_zrop_(__Setup: FFTSetup; __A: DSPSplitComplexPtr; __IA: vDSP_Stride; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __Log2N: vDSP_Length; __Direction: FFTDirection); cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_0 }
procedure vDSP_fft_zropD_(__Setup: FFTSetupD; __A: DSPDoubleSplitComplexPtr; __IA: vDSP_Stride; __C: DSPDoubleSplitComplexPtr; __IC: vDSP_Stride; __Log2N: vDSP_Length; __Direction: FFTDirection); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_fft_zropt_(__Setup: FFTSetup; __A: DSPSplitComplexPtr; __IA: vDSP_Stride; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __Buffer: DSPSplitComplexPtr; __Log2N: vDSP_Length; __Direction: FFTDirection); cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_0 }
procedure vDSP_fft_zroptD_(__Setup: FFTSetupD; __A: DSPDoubleSplitComplexPtr; __IA: vDSP_Stride; __C: DSPDoubleSplitComplexPtr; __IC: vDSP_Stride; __Buffer: DSPDoubleSplitComplexPtr; __Log2N: vDSP_Length; __Direction: FFTDirection); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_fft2d_zip_(__Setup: FFTSetup; __C: DSPSplitComplexPtr; __IC0: vDSP_Stride; __IC1: vDSP_Stride; __Log2N0: vDSP_Length; __Log2N1: vDSP_Length; __Direction: FFTDirection); cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_0 }
procedure vDSP_fft2d_zipD_(__Setup: FFTSetupD; __C: DSPDoubleSplitComplexPtr; __IC0: vDSP_Stride; __IC1: vDSP_Stride; __Log2N0: vDSP_Length; __Log2N1: vDSP_Length; __Direction: FFTDirection); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_fft2d_zipt_(__Setup: FFTSetup; __C: DSPSplitComplexPtr; __IC1: vDSP_Stride; __IC0: vDSP_Stride; __Buffer: DSPSplitComplexPtr; __Log2N0: vDSP_Length; __Log2N1: vDSP_Length; __Direction: FFTDirection); cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_0 }
procedure vDSP_fft2d_ziptD_(__Setup: FFTSetupD; __C: DSPDoubleSplitComplexPtr; __IC0: vDSP_Stride; __IC1: vDSP_Stride; __Buffer: DSPDoubleSplitComplexPtr; __Log2N0: vDSP_Length; __Log2N1: vDSP_Length; __Direction: FFTDirection); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_fft2d_zop_(__Setup: FFTSetup; __A: DSPSplitComplexPtr; __IA0: vDSP_Stride; __IA1: vDSP_Stride; __C: DSPSplitComplexPtr; __IC0: vDSP_Stride; __IC1: vDSP_Stride; __Log2N0: vDSP_Length; __Log2N1: vDSP_Length; __Direction: FFTDirection); cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_0 }
procedure vDSP_fft2d_zopD_(__Setup: FFTSetupD; __A: DSPDoubleSplitComplexPtr; __IA0: vDSP_Stride; __IA1: vDSP_Stride; __C: DSPDoubleSplitComplexPtr; __IC0: vDSP_Stride; __IC1: vDSP_Stride; __Log2N0: vDSP_Length; __Log2N1: vDSP_Length; __Direction: FFTDirection); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_fft2d_zopt_(__Setup: FFTSetup; __A: DSPSplitComplexPtr; __IA0: vDSP_Stride; __IA1: vDSP_Stride; __C: DSPSplitComplexPtr; __IC0: vDSP_Stride; __IC1: vDSP_Stride; __Buffer: DSPSplitComplexPtr; __Log2N0: vDSP_Length; __Log2N1: vDSP_Length; __Direction: FFTDirection); cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_0 }
procedure vDSP_fft2d_zoptD_(__Setup: FFTSetupD; __A: DSPDoubleSplitComplexPtr; __IA0: vDSP_Stride; __IA1: vDSP_Stride; __C: DSPDoubleSplitComplexPtr; __IC0: vDSP_Stride; __IC1: vDSP_Stride; __Buffer: DSPDoubleSplitComplexPtr; __Log2N0: vDSP_Length; __Log2N1: vDSP_Length; __Direction: FFTDirection); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_fft2d_zrip_(__Setup: FFTSetup; __C: DSPSplitComplexPtr; __IC0: vDSP_Stride; __IC1: vDSP_Stride; __Log2N0: vDSP_Length; __Log2N1: vDSP_Length; __Direction: FFTDirection); cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_0 }
procedure vDSP_fft2d_zripD_(__Setup: FFTSetupD; __C: DSPDoubleSplitComplexPtr; __IC0: vDSP_Stride; __IC1: vDSP_Stride; __Log2N0: vDSP_Length; __Log2N1: vDSP_Length; __flag: FFTDirection); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_fft2d_zript_(__Setup: FFTSetup; __C: DSPSplitComplexPtr; __IC0: vDSP_Stride; __IC1: vDSP_Stride; __Buffer: DSPSplitComplexPtr; __Log2N0: vDSP_Length; __Log2N1: vDSP_Length; __Direction: FFTDirection); cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_0 }
procedure vDSP_fft2d_zriptD_(__Setup: FFTSetupD; __C: DSPDoubleSplitComplexPtr; __IC0: vDSP_Stride; __IC1: vDSP_Stride; __Buffer: DSPDoubleSplitComplexPtr; __Log2N0: vDSP_Length; __Log2N1: vDSP_Length; __flag: FFTDirection); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_fft2d_zrop_(__Setup: FFTSetup; __A: DSPSplitComplexPtr; __IA0: vDSP_Stride; __IA1: vDSP_Stride; __C: DSPSplitComplexPtr; __IC0: vDSP_Stride; __IC1: vDSP_Stride; __Log2N0: vDSP_Length; __Log2N1: vDSP_Length; __Direction: FFTDirection); cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_0 }
procedure vDSP_fft2d_zropt_(__Setup: FFTSetup; __A: DSPSplitComplexPtr; __IA0: vDSP_Stride; __IA1: vDSP_Stride; __C: DSPSplitComplexPtr; __IC0: vDSP_Stride; __IC1: vDSP_Stride; __Buffer: DSPSplitComplexPtr; __Log2N0: vDSP_Length; __Log2N1: vDSP_Length; __Direction: FFTDirection); cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_0 }
procedure vDSP_fft2d_zropD_(__Setup: FFTSetupD; __A: DSPDoubleSplitComplexPtr; __IA0: vDSP_Stride; __IA1: vDSP_Stride; __C: DSPDoubleSplitComplexPtr; __IC0: vDSP_Stride; __IC1: vDSP_Stride; __Log2N0: vDSP_Length; __Log2N1: vDSP_Length; __Direction: FFTDirection); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_fft2d_zroptD_(__Setup: FFTSetupD; __A: DSPDoubleSplitComplexPtr; __IA0: vDSP_Stride; __IA1: vDSP_Stride; __C: DSPDoubleSplitComplexPtr; __IC0: vDSP_Stride; __IC1: vDSP_Stride; __Buffer: DSPDoubleSplitComplexPtr; __Log2N0: vDSP_Length; __Log2N1: vDSP_Length; __Direction: FFTDirection); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_fftm_zip_(__Setup: FFTSetup; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __IM: vDSP_Stride; __Log2N: vDSP_Length; __M: vDSP_Length; __Direction: FFTDirection); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_fftm_zipD_(__Setup: FFTSetupD; __C: DSPDoubleSplitComplexPtr; __IC: vDSP_Stride; __IM: vDSP_Stride; __Log2N: vDSP_Length; __M: vDSP_Length; __Direction: FFTDirection); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_fftm_zipt_(__Setup: FFTSetup; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __IM: vDSP_Stride; __Buffer: DSPSplitComplexPtr; __Log2N: vDSP_Length; __M: vDSP_Length; __Direction: FFTDirection); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_fftm_ziptD_(__Setup: FFTSetupD; __C: DSPDoubleSplitComplexPtr; __IC: vDSP_Stride; __IM: vDSP_Stride; __Buffer: DSPDoubleSplitComplexPtr; __Log2N: vDSP_Length; __M: vDSP_Length; __Direction: FFTDirection); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_fftm_zop_(__Setup: FFTSetup; __A: DSPSplitComplexPtr; __IA: vDSP_Stride; __IMA: vDSP_Stride; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __IMC: vDSP_Stride; __Log2N: vDSP_Length; __M: vDSP_Length; __Direction: FFTDirection); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_fftm_zopD_(__Setup: FFTSetupD; __A: DSPDoubleSplitComplexPtr; __IA: vDSP_Stride; __IMA: vDSP_Stride; __C: DSPDoubleSplitComplexPtr; __IC: vDSP_Stride; __IMC: vDSP_Stride; __Log2N: vDSP_Length; __M: vDSP_Length; __Direction: FFTDirection); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_fftm_zopt_(__Setup: FFTSetup; __A: DSPSplitComplexPtr; __IA: vDSP_Stride; __IMA: vDSP_Stride; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __IMC: vDSP_Stride; __Buffer: DSPSplitComplexPtr; __Log2N: vDSP_Length; __M: vDSP_Length; __Direction: FFTDirection); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_fftm_zoptD_(__Setup: FFTSetupD; __A: DSPDoubleSplitComplexPtr; __IA: vDSP_Stride; __IMA: vDSP_Stride; __C: DSPDoubleSplitComplexPtr; __IC: vDSP_Stride; __IMC: vDSP_Stride; __Buffer: DSPDoubleSplitComplexPtr; __Log2N: vDSP_Length; __M: vDSP_Length; __Direction: FFTDirection); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_fftm_zrip_(__Setup: FFTSetup; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __IM: vDSP_Stride; __Log2N: vDSP_Length; __M: vDSP_Length; __Direction: FFTDirection); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_fftm_zripD_(__Setup: FFTSetupD; __C: DSPDoubleSplitComplexPtr; __IC: vDSP_Stride; __IM: vDSP_Stride; __Log2N: vDSP_Length; __M: vDSP_Length; __Direction: FFTDirection); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_fftm_zript_(__Setup: FFTSetup; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __IM: vDSP_Stride; __Buffer: DSPSplitComplexPtr; __Log2N: vDSP_Length; __M: vDSP_Length; __Direction: FFTDirection); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_fftm_zriptD_(__Setup: FFTSetupD; __C: DSPDoubleSplitComplexPtr; __IC: vDSP_Stride; __IM: vDSP_Stride; __Buffer: DSPDoubleSplitComplexPtr; __Log2N: vDSP_Length; __M: vDSP_Length; __Direction: FFTDirection); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_fftm_zrop_(__Setup: FFTSetup; __A: DSPSplitComplexPtr; __IA: vDSP_Stride; __IMA: vDSP_Stride; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __IMC: vDSP_Stride; __Log2N: vDSP_Length; __M: vDSP_Length; __Direction: FFTDirection); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_fftm_zropt_(__Setup: FFTSetup; __A: DSPSplitComplexPtr; __IA: vDSP_Stride; __IMA: vDSP_Stride; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __IMC: vDSP_Stride; __Buffer: DSPSplitComplexPtr; __Log2N: vDSP_Length; __M: vDSP_Length; __Direction: FFTDirection); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_fftm_zropD_(__Setup: FFTSetupD; __A: DSPDoubleSplitComplexPtr; __IA: vDSP_Stride; __IMA: vDSP_Stride; __C: DSPDoubleSplitComplexPtr; __IC: vDSP_Stride; __IMC: vDSP_Stride; __Log2N: vDSP_Length; __M: vDSP_Length; __Direction: FFTDirection); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_fftm_zroptD_(__Setup: FFTSetupD; __A: DSPDoubleSplitComplexPtr; __IA: vDSP_Stride; __IMA: vDSP_Stride; __C: DSPDoubleSplitComplexPtr; __IC: vDSP_Stride; __IMC: vDSP_Stride; __Buffer: DSPDoubleSplitComplexPtr; __Log2N: vDSP_Length; __M: vDSP_Length; __Direction: FFTDirection); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_fft3_zop_(__Setup: FFTSetup; __A: DSPSplitComplexPtr; __IA: vDSP_Stride; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __Log2N: vDSP_Length; __Direction: FFTDirection); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_9_0';
procedure vDSP_fft3_zopD_(__Setup: FFTSetupD; __A: DSPDoubleSplitComplexPtr; __IA: vDSP_Stride; __C: DSPDoubleSplitComplexPtr; __IC: vDSP_Stride; __Log2N: vDSP_Length; __Direction: FFTDirection); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_9_0';
procedure vDSP_fft5_zop_(__Setup: FFTSetup; __A: DSPSplitComplexPtr; __IA: vDSP_Stride; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __Log2N: vDSP_Length; __Direction: FFTDirection); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_9_0';
procedure vDSP_fft5_zopD_(__Setup: FFTSetupD; __A: DSPDoubleSplitComplexPtr; __IA: vDSP_Stride; __C: DSPDoubleSplitComplexPtr; __IC: vDSP_Stride; __Log2N: vDSP_Length; __Direction: FFTDirection); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_9_0';
procedure vDSP_biquad(__Setup: vDSP_biquad_SetupStructPtr; __Delay: psingle; __X: psingle; __IX: vDSP_Stride; __Y: psingle; __IY: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_9, __IPHONE_6_0 }
procedure vDSP_biquadD(__Setup: vDSP_biquad_SetupStructDPtr; __Delay: pdouble; __X: pdouble; __IX: vDSP_Stride; __Y: pdouble; __IY: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_9, __IPHONE_6_0 }
procedure vDSP_biquadm(__Setup: vDSP_biquadm_Setup; __X: float* __nonnull* __nonnull; __IX: vDSP_Stride; __Y: float* __nonnull* __nonnull; __IY: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_9, __IPHONE_7_0 }
procedure vDSP_biquadmD(__Setup: vDSP_biquadm_SetupD; __X: double* __nonnull* __nonnull; __IX: vDSP_Stride; __Y: double* __nonnull* __nonnull; __IY: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_10, __IPHONE_8_0 }
procedure vDSP_conv_(__A: psingle; __IA: vDSP_Stride; __F: psingle; __IF: vDSP_Stride; __C: psingle; __IC: vDSP_Stride; __N: vDSP_Length; __P: vDSP_Length); cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_0 }
procedure vDSP_convD_(__A: pdouble; __IA: vDSP_Stride; __F: pdouble; __IF: vDSP_Stride; __C: pdouble; __IC: vDSP_Stride; __N: vDSP_Length; __P: vDSP_Length); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_zconv_(__A: DSPSplitComplexPtr; __IA: vDSP_Stride; __F: DSPSplitComplexPtr; __IF: vDSP_Stride; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __N: vDSP_Length; __P: vDSP_Length); cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_0 }
procedure vDSP_zconvD_(__A: DSPDoubleSplitComplexPtr; __IA: vDSP_Stride; __F: DSPDoubleSplitComplexPtr; __IF: vDSP_Stride; __C: DSPDoubleSplitComplexPtr; __IC: vDSP_Stride; __N: vDSP_Length; __P: vDSP_Length); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_f3x3_(__A: psingle; __NR: vDSP_Length; __NC: vDSP_Length; __F: psingle; __C: psingle); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_f3x3D_(__A: pdouble; __NR: vDSP_Length; __NC: vDSP_Length; __F: pdouble; __C: pdouble); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_f5x5_(__A: psingle; __NR: vDSP_Length; __NC: vDSP_Length; __F: psingle; __C: psingle); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_f5x5D_(__A: pdouble; __NR: vDSP_Length; __NC: vDSP_Length; __F: pdouble; __C: pdouble); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_imgfir_(__A: psingle; __NR: vDSP_Length; __NC: vDSP_Length; __F: psingle; __C: psingle; __P: vDSP_Length; __Q: vDSP_Length); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_imgfirD_(__A: pdouble; __NR: vDSP_Length; __NC: vDSP_Length; __F: pdouble; __C: pdouble; __P: vDSP_Length; __Q: vDSP_Length); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_mtrans_(__A: psingle; __IA: vDSP_Stride; __C: psingle; __IC: vDSP_Stride; __M: vDSP_Length; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_mtransD_(__A: pdouble; __IA: vDSP_Stride; __C: pdouble; __IC: vDSP_Stride; __M: vDSP_Length; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_mmul_(__A: psingle; __IA: vDSP_Stride; __B: psingle; __IB: vDSP_Stride; __C: psingle; __IC: vDSP_Stride; __M: vDSP_Length; __N: vDSP_Length; __P: vDSP_Length); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_mmulD_(__A: pdouble; __IA: vDSP_Stride; __B: pdouble; __IB: vDSP_Stride; __C: pdouble; __IC: vDSP_Stride; __M: vDSP_Length; __N: vDSP_Length; __P: vDSP_Length); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_zmma_(__A: DSPSplitComplexPtr; __IA: vDSP_Stride; __B: DSPSplitComplexPtr; __IB: vDSP_Stride; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __D: DSPSplitComplexPtr; __ID: vDSP_Stride; __M: vDSP_Length; __N: vDSP_Length; __P: vDSP_Length); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_zmmaD_(__A: DSPDoubleSplitComplexPtr; __IA: vDSP_Stride; __B: DSPDoubleSplitComplexPtr; __IB: vDSP_Stride; __C: DSPDoubleSplitComplexPtr; __IC: vDSP_Stride; __D: DSPDoubleSplitComplexPtr; __ID: vDSP_Stride; __M: vDSP_Length; __N: vDSP_Length; __P: vDSP_Length); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_zmms_(__A: DSPSplitComplexPtr; __IA: vDSP_Stride; __B: DSPSplitComplexPtr; __IB: vDSP_Stride; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __D: DSPSplitComplexPtr; __ID: vDSP_Stride; __M: vDSP_Length; __N: vDSP_Length; __P: vDSP_Length); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_zmmsD_(__A: DSPDoubleSplitComplexPtr; __IA: vDSP_Stride; __B: DSPDoubleSplitComplexPtr; __IB: vDSP_Stride; __C: DSPDoubleSplitComplexPtr; __IC: vDSP_Stride; __D: DSPDoubleSplitComplexPtr; __ID: vDSP_Stride; __M: vDSP_Length; __N: vDSP_Length; __P: vDSP_Length); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_zvmmaa(__A: DSPSplitComplexPtr; __IA: vDSP_Stride; __B: DSPSplitComplexPtr; __IB: vDSP_Stride; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __D: DSPSplitComplexPtr; __ID: vDSP_Stride; __E: DSPSplitComplexPtr; __IE: vDSP_Stride; __F: DSPSplitComplexPtr; __IF: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_9, __IPHONE_7_0 }
procedure vDSP_zvmmaaD(__A: DSPDoubleSplitComplexPtr; __IA: vDSP_Stride; __B: DSPDoubleSplitComplexPtr; __IB: vDSP_Stride; __C: DSPDoubleSplitComplexPtr; __IC: vDSP_Stride; __D: DSPDoubleSplitComplexPtr; __ID: vDSP_Stride; __E: DSPDoubleSplitComplexPtr; __IE: vDSP_Stride; __F: DSPDoubleSplitComplexPtr; __IF: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_10, __IPHONE_8_0 }
procedure vDSP_zmsm_(__A: DSPSplitComplexPtr; __IA: vDSP_Stride; __B: DSPSplitComplexPtr; __IB: vDSP_Stride; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __D: DSPSplitComplexPtr; __ID: vDSP_Stride; __M: vDSP_Length; __N: vDSP_Length; __P: vDSP_Length); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_zmsmD_(__A: DSPDoubleSplitComplexPtr; __IA: vDSP_Stride; __B: DSPDoubleSplitComplexPtr; __IB: vDSP_Stride; __C: DSPDoubleSplitComplexPtr; __IC: vDSP_Stride; __D: DSPDoubleSplitComplexPtr; __ID: vDSP_Stride; __M: vDSP_Length; __N: vDSP_Length; __P: vDSP_Length); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_zmmul_(__A: DSPSplitComplexPtr; __IA: vDSP_Stride; __B: DSPSplitComplexPtr; __IB: vDSP_Stride; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __M: vDSP_Length; __N: vDSP_Length; __P: vDSP_Length); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_zmmulD_(__A: DSPDoubleSplitComplexPtr; __IA: vDSP_Stride; __B: DSPDoubleSplitComplexPtr; __IB: vDSP_Stride; __C: DSPDoubleSplitComplexPtr; __IC: vDSP_Stride; __M: vDSP_Length; __N: vDSP_Length; __P: vDSP_Length); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_vadd_(__A: psingle; __IA: vDSP_Stride; __B: psingle; __IB: vDSP_Stride; __C: psingle; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_0 }
procedure vDSP_vaddD_(__A: pdouble; __IA: vDSP_Stride; __B: pdouble; __IB: vDSP_Stride; __C: pdouble; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_vaddi(__A: pcint; __IA: vDSP_Stride; __B: pcint; __IB: vDSP_Stride; __C: pcint; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_9, __IPHONE_7_0 }
procedure vDSP_zvadd_(__A: DSPSplitComplexPtr; __IA: vDSP_Stride; __B: DSPSplitComplexPtr; __IB: vDSP_Stride; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_0 }
procedure vDSP_zvaddD_(__A: DSPDoubleSplitComplexPtr; __IA: vDSP_Stride; __B: DSPDoubleSplitComplexPtr; __IB: vDSP_Stride; __C: DSPDoubleSplitComplexPtr; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_zrvadd_(__A: DSPSplitComplexPtr; __IA: vDSP_Stride; __B: psingle; __IB: vDSP_Stride; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_0 }
procedure vDSP_zrvaddD_(__A: DSPDoubleSplitComplexPtr; __IA: vDSP_Stride; __B: pdouble; __IB: vDSP_Stride; __C: DSPDoubleSplitComplexPtr; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_vsub_(__B: psingle; __IB: vDSP_Stride; __A: psingle; __IA: vDSP_Stride; __C: psingle; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_0 }
procedure vDSP_vsubD_(__B: pdouble; __IB: vDSP_Stride; __A: pdouble; __IA: vDSP_Stride; __C: pdouble; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_zvsub_(__A: DSPSplitComplexPtr; __IA: vDSP_Stride; __B: DSPSplitComplexPtr; __IB: vDSP_Stride; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_0 }
procedure vDSP_zvsubD_(__A: DSPDoubleSplitComplexPtr; __IA: vDSP_Stride; __B: DSPDoubleSplitComplexPtr; __IB: vDSP_Stride; __C: DSPDoubleSplitComplexPtr; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_vmul_(__A: psingle; __IA: vDSP_Stride; __B: psingle; __IB: vDSP_Stride; __C: psingle; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_0 }
procedure vDSP_vmulD_(__A: pdouble; __IA: vDSP_Stride; __B: pdouble; __IB: vDSP_Stride; __C: pdouble; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_zrvmul_(__A: DSPSplitComplexPtr; __IA: vDSP_Stride; __B: psingle; __IB: vDSP_Stride; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_0 }
procedure vDSP_zrvmulD_(__A: DSPDoubleSplitComplexPtr; __IA: vDSP_Stride; __B: pdouble; __IB: vDSP_Stride; __C: DSPDoubleSplitComplexPtr; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_vdiv(__B: psingle; __IB: vDSP_Stride; __A: psingle; __IA: vDSP_Stride; __C: psingle; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vdivD(__B: pdouble; __IB: vDSP_Stride; __A: pdouble; __IA: vDSP_Stride; __C: pdouble; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vdivi(__B: pcint; __IB: vDSP_Stride; __A: pcint; __IA: vDSP_Stride; __C: pcint; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_zvdiv(__B: DSPSplitComplexPtr; __IB: vDSP_Stride; __A: DSPSplitComplexPtr; __IA: vDSP_Stride; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_zvdivD(var __B: DSPDoubleSplitComplex; __IB: vDSP_Stride; __A: DSPDoubleSplitComplexPtr; __IA: vDSP_Stride; __C: DSPDoubleSplitComplexPtr; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_zrvdiv(__A: DSPSplitComplexPtr; __IA: vDSP_Stride; __B: psingle; __IB: vDSP_Stride; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_zrvdivD(var __A: DSPDoubleSplitComplex; __IA: vDSP_Stride; __B: pdouble; __IB: vDSP_Stride; __C: DSPDoubleSplitComplexPtr; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vsmul_(__A: psingle; __IA: vDSP_Stride; __B: psingle; __C: psingle; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_0 }
procedure vDSP_vsmulD_(__A: pdouble; __IA: vDSP_Stride; __B: pdouble; __C: pdouble; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_vsq_(__A: psingle; __IA: vDSP_Stride; __C: psingle; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_0 }
procedure vDSP_vsqD_(__A: pdouble; __IA: vDSP_Stride; __C: pdouble; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_vssq_(__A: psingle; __IA: vDSP_Stride; __C: psingle; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_0 }
procedure vDSP_vssqD_(__A: pdouble; __IA: vDSP_Stride; __C: pdouble; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_distancesq(__A: psingle; __IA: vDSP_Stride; __B: psingle; __IB: vDSP_Stride; __C: psingle; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_8, __IPHONE_5_0 }
procedure vDSP_distancesqD(__A: pdouble; __IA: vDSP_Stride; __B: pdouble; __IB: vDSP_Stride; __C: pdouble; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_10, __IPHONE_8_0 }
procedure vDSP_dotpr_(__A: psingle; __IA: vDSP_Stride; __B: psingle; __IB: vDSP_Stride; __C: psingle; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_0 }
procedure vDSP_dotprD_(__A: pdouble; __IA: vDSP_Stride; __B: pdouble; __IB: vDSP_Stride; __C: pdouble; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_zdotpr_(__A: DSPSplitComplexPtr; __IA: vDSP_Stride; __B: DSPSplitComplexPtr; __IB: vDSP_Stride; __C: DSPSplitComplexPtr; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_0 }
procedure vDSP_zdotprD_(__A: DSPDoubleSplitComplexPtr; __IA: vDSP_Stride; __B: DSPDoubleSplitComplexPtr; __IB: vDSP_Stride; __C: DSPDoubleSplitComplexPtr; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_zrdotpr_(__A: DSPSplitComplexPtr; __IA: vDSP_Stride; __B: psingle; __IB: vDSP_Stride; __C: DSPSplitComplexPtr; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_0 }
procedure vDSP_zrdotprD_(__A: DSPDoubleSplitComplexPtr; __IA: vDSP_Stride; __B: pdouble; __IB: vDSP_Stride; __C: DSPDoubleSplitComplexPtr; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_vam_(__A: psingle; __IA: vDSP_Stride; __B: psingle; __IB: vDSP_Stride; __C: psingle; __IC: vDSP_Stride; __D: psingle; __ID: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_0 }
procedure vDSP_vamD_(__A: pdouble; __IA: vDSP_Stride; __B: pdouble; __IB: vDSP_Stride; __C: pdouble; __IC: vDSP_Stride; __D: pdouble; __IDD: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_vma(__A: psingle; __IA: vDSP_Stride; __B: psingle; __IB: vDSP_Stride; __C: psingle; __IC: vDSP_Stride; __D: psingle; __ID: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vmaD(__A: pdouble; __IA: vDSP_Stride; __B: pdouble; __IB: vDSP_Stride; __C: pdouble; __IC: vDSP_Stride; __D: pdouble; __ID: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_zvma(__A: DSPSplitComplexPtr; __IA: vDSP_Stride; __B: DSPSplitComplexPtr; __IB: vDSP_Stride; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __D: DSPSplitComplexPtr; __ID: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_9, __IPHONE_7_0 }
procedure vDSP_zvmaD(__A: DSPDoubleSplitComplexPtr; __IA: vDSP_Stride; __B: DSPDoubleSplitComplexPtr; __IB: vDSP_Stride; __C: DSPDoubleSplitComplexPtr; __IC: vDSP_Stride; __D: DSPDoubleSplitComplexPtr; __ID: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_10, __IPHONE_8_0 }
procedure vDSP_zvmul_(__A: DSPSplitComplexPtr; __IA: vDSP_Stride; __B: DSPSplitComplexPtr; __IB: vDSP_Stride; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __N: vDSP_Length; __Conjugate: cint); cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_0 }
procedure vDSP_zvmulD_(__A: DSPDoubleSplitComplexPtr; __IA: vDSP_Stride; __B: DSPDoubleSplitComplexPtr; __IB: vDSP_Stride; __C: DSPDoubleSplitComplexPtr; __IC: vDSP_Stride; __N: vDSP_Length; __Conjugate: cint); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_zidotpr_(__A: DSPSplitComplexPtr; __IA: vDSP_Stride; __B: DSPSplitComplexPtr; __IB: vDSP_Stride; __C: DSPSplitComplexPtr; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_0 }
procedure vDSP_zidotprD_(__A: DSPDoubleSplitComplexPtr; __IA: vDSP_Stride; __B: DSPDoubleSplitComplexPtr; __IB: vDSP_Stride; __C: DSPDoubleSplitComplexPtr; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_zvcma_(__A: DSPSplitComplexPtr; __IA: vDSP_Stride; __B: DSPSplitComplexPtr; __IB: vDSP_Stride; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __D: DSPSplitComplexPtr; __ID: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_0 }
procedure vDSP_zvcmaD_(__A: DSPDoubleSplitComplexPtr; __IA: vDSP_Stride; __B: DSPDoubleSplitComplexPtr; __IB: vDSP_Stride; __C: DSPDoubleSplitComplexPtr; __IC: vDSP_Stride; __D: DSPDoubleSplitComplexPtr; __ID: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_zrvsub_(__A: DSPSplitComplexPtr; __IA: vDSP_Stride; __B: psingle; __IB: vDSP_Stride; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_0 }
procedure vDSP_zrvsubD_(__A: DSPDoubleSplitComplexPtr; __IA: vDSP_Stride; __B: pdouble; __IB: vDSP_Stride; __C: DSPDoubleSplitComplexPtr; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_0 }
procedure vDSP_vdpsp(__A: pdouble; __IA: vDSP_Stride; __C: psingle; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vspdp(__A: psingle; __IA: vDSP_Stride; __C: pdouble; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vabs(__A: psingle; __IA: vDSP_Stride; __C: psingle; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vabsD(__A: pdouble; __IA: vDSP_Stride; __C: pdouble; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vabsi(__A: pcint; __IA: vDSP_Stride; __C: pcint; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_zvabs(__A: DSPSplitComplexPtr; __IA: vDSP_Stride; __C: psingle; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_zvabsD(__A: DSPDoubleSplitComplexPtr; __IA: vDSP_Stride; __C: pdouble; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_veqvi(__A: pcint; __IA: vDSP_Stride; __B: pcint; __IB: vDSP_Stride; __C: pcint; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vfill(__A: psingle; __C: psingle; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vfillD(__A: pdouble; __C: pdouble; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vfilli(__A: pcint; __C: pcint; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_zvfill(__A: DSPSplitComplexPtr; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_zvfillD(__A: DSPDoubleSplitComplexPtr; __C: DSPDoubleSplitComplexPtr; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vsadd(__A: psingle; __IA: vDSP_Stride; __B: psingle; __C: psingle; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vsaddD(__A: pdouble; __IA: vDSP_Stride; __B: pdouble; __C: pdouble; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vsaddi(__A: pcint; __IA: vDSP_Stride; __B: pcint; __C: pcint; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vsdiv(__A: psingle; __IA: vDSP_Stride; __B: psingle; __C: psingle; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vsdivD(__A: pdouble; __IA: vDSP_Stride; __B: pdouble; __C: pdouble; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vsdivi(__A: pcint; __IA: vDSP_Stride; __B: pcint; __C: pcint; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_zaspec(__A: DSPSplitComplexPtr; __C: psingle; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_zaspecD(var __A: DSPDoubleSplitComplex; __C: pdouble; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_blkman_window(__C: psingle; __N: vDSP_Length; __Flag: cint); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_blkman_windowD(__C: pdouble; __N: vDSP_Length; __Flag: cint); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_zcoher(__A: psingle; __B: psingle; __C: DSPSplitComplexPtr; __D: psingle; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_zcoherD(__A: pdouble; __B: pdouble; __C: DSPDoubleSplitComplexPtr; __D: pdouble; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_desamp(__A: psingle; __DF: vDSP_Stride; __F: psingle; __C: psingle; __N: vDSP_Length; __P: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_desampD(__A: pdouble; __DF: vDSP_Stride; __F: pdouble; __C: pdouble; __N: vDSP_Length; __P: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_zrdesamp(__A: DSPSplitComplexPtr; __DF: vDSP_Stride; __F: psingle; __C: DSPSplitComplexPtr; __N: vDSP_Length; __P: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_zrdesampD(var __A: DSPDoubleSplitComplex; __DF: vDSP_Stride; __F: pdouble; __C: DSPDoubleSplitComplexPtr; __N: vDSP_Length; __P: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_ztrans(__A: psingle; __B: DSPSplitComplexPtr; __C: DSPSplitComplexPtr; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_ztransD(__A: pdouble; __B: DSPDoubleSplitComplexPtr; __C: DSPDoubleSplitComplexPtr; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_zcspec(__A: DSPSplitComplexPtr; __B: DSPSplitComplexPtr; __C: DSPSplitComplexPtr; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_zcspecD(var __A: DSPDoubleSplitComplex; __B: DSPDoubleSplitComplexPtr; __C: DSPDoubleSplitComplexPtr; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_zvcmul(__A: DSPSplitComplexPtr; __IA: vDSP_Stride; __B: DSPSplitComplexPtr; __IB: vDSP_Stride; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_zvcmulD(__A: DSPDoubleSplitComplexPtr; __IA: vDSP_Stride; __B: DSPDoubleSplitComplexPtr; __IB: vDSP_Stride; __C: DSPDoubleSplitComplexPtr; __iC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_zvconj(__A: DSPSplitComplexPtr; __IA: vDSP_Stride; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_zvconjD(__A: DSPDoubleSplitComplexPtr; __IA: vDSP_Stride; __C: DSPDoubleSplitComplexPtr; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_zvzsml(__A: DSPSplitComplexPtr; __IA: vDSP_Stride; __B: DSPSplitComplexPtr; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_zvzsmlD(__A: DSPDoubleSplitComplexPtr; __IA: vDSP_Stride; __B: DSPDoubleSplitComplexPtr; __C: DSPDoubleSplitComplexPtr; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_zvmags(__A: DSPSplitComplexPtr; __IA: vDSP_Stride; __C: psingle; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_zvmagsD(__A: DSPDoubleSplitComplexPtr; __IA: vDSP_Stride; __C: pdouble; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_zvmgsa(__A: DSPSplitComplexPtr; __IA: vDSP_Stride; __B: psingle; __IB: vDSP_Stride; __C: psingle; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_zvmgsaD(__A: DSPDoubleSplitComplexPtr; __IA: vDSP_Stride; __B: pdouble; __IB: vDSP_Stride; __C: pdouble; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_zvmov(__A: DSPSplitComplexPtr; __IA: vDSP_Stride; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_zvmovD(__A: DSPDoubleSplitComplexPtr; __IA: vDSP_Stride; __C: DSPDoubleSplitComplexPtr; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_zvneg(__A: DSPSplitComplexPtr; __IA: vDSP_Stride; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_zvnegD(__A: DSPDoubleSplitComplexPtr; __IA: vDSP_Stride; __C: DSPDoubleSplitComplexPtr; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_zvphas(__A: DSPSplitComplexPtr; __IA: vDSP_Stride; __C: psingle; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_zvphasD(__A: DSPDoubleSplitComplexPtr; __IA: vDSP_Stride; __C: pdouble; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_zvsma(__A: DSPSplitComplexPtr; __IA: vDSP_Stride; __B: DSPSplitComplexPtr; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __D: DSPSplitComplexPtr; __ID: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_zvsmaD(__A: DSPDoubleSplitComplexPtr; __IA: vDSP_Stride; __B: DSPDoubleSplitComplexPtr; __C: DSPDoubleSplitComplexPtr; __IC: vDSP_Stride; __D: DSPDoubleSplitComplexPtr; __ID: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_deq22(__A: psingle; __IA: vDSP_Stride; __B: psingle; __C: psingle; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_deq22D(__A: pdouble; __IA: vDSP_Stride; __B: pdouble; __C: pdouble; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_hamm_window(__C: psingle; __N: vDSP_Length; __Flag: cint); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_hamm_windowD(__C: pdouble; __N: vDSP_Length; __Flag: cint); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_hann_window(__C: psingle; __N: vDSP_Length; __Flag: cint); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_hann_windowD(__C: pdouble; __N: vDSP_Length; __Flag: cint); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_maxmgv(__A: psingle; __IA: vDSP_Stride; __C: psingle; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_maxmgvD(__A: pdouble; __IA: vDSP_Stride; __C: pdouble; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_maxmgvi(__A: psingle; __IA: vDSP_Stride; __C: psingle; var __I: vDSP_Length; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_maxmgviD(__A: pdouble; __IA: vDSP_Stride; __C: pdouble; var __I: vDSP_Length; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_maxv(__A: psingle; __IA: vDSP_Stride; __C: psingle; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_maxvD(__A: pdouble; __I: vDSP_Stride; __C: pdouble; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_maxvi(__A: psingle; __IA: vDSP_Stride; __C: psingle; var __I: vDSP_Length; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_maxviD(__A: pdouble; __IA: vDSP_Stride; __C: pdouble; var __I: vDSP_Length; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_meamgv(__A: psingle; __IA: vDSP_Stride; __C: psingle; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_meamgvD(__A: pdouble; __IA: vDSP_Stride; __C: pdouble; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_meanv(__A: psingle; __IA: vDSP_Stride; __C: psingle; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_meanvD(__A: pdouble; __IA: vDSP_Stride; __C: pdouble; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_measqv(__A: psingle; __IA: vDSP_Stride; __C: psingle; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_measqvD(__A: pdouble; __I: vDSP_Stride; __C: pdouble; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_minmgv(__A: psingle; __IA: vDSP_Stride; __C: psingle; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_minmgvD(__A: pdouble; __IA: vDSP_Stride; __C: pdouble; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_minmgvi(__A: psingle; __IA: vDSP_Stride; __C: psingle; var __I: vDSP_Length; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_minmgviD(__A: pdouble; __IA: vDSP_Stride; __C: pdouble; var __I: vDSP_Length; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_minv(__A: psingle; __IA: vDSP_Stride; __C: psingle; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_minvD(__A: pdouble; __IA: vDSP_Stride; __C: pdouble; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_minvi(__A: psingle; __IA: vDSP_Stride; __C: psingle; var __I: vDSP_Length; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_minviD(__A: pdouble; __IA: vDSP_Stride; __C: pdouble; var __I: vDSP_Length; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_mmov(__A: psingle; __C: psingle; __M: vDSP_Length; __N: vDSP_Length; __TA: vDSP_Length; __TC: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_mmovD(__A: pdouble; __C: pdouble; __M: vDSP_Length; __N: vDSP_Length; __TA: vDSP_Length; __TC: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_mvessq(__A: psingle; __IA: vDSP_Stride; __C: psingle; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_mvessqD(__A: pdouble; __IA: vDSP_Stride; __C: pdouble; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_nzcros(__A: psingle; __IA: vDSP_Stride; __B: vDSP_Length; var __C: vDSP_Length; var __D: vDSP_Length; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_nzcrosD(__A: pdouble; __IA: vDSP_Stride; __B: vDSP_Length; var __C: vDSP_Length; var __D: vDSP_Length; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_polar(__A: psingle; __IA: vDSP_Stride; __C: psingle; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_polarD(__A: pdouble; __IA: vDSP_Stride; __C: pdouble; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_rect(__A: psingle; __IA: vDSP_Stride; __C: psingle; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_rectD(__A: pdouble; __IA: vDSP_Stride; __C: pdouble; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_rmsqv(__A: psingle; __IA: vDSP_Stride; __C: psingle; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_rmsqvD(__A: pdouble; __IA: vDSP_Stride; __C: pdouble; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_svdiv(__A: psingle; __B: psingle; __IB: vDSP_Stride; __C: psingle; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_svdivD(__A: pdouble; __B: pdouble; __IB: vDSP_Stride; __C: pdouble; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_sve(__A: psingle; __I: vDSP_Stride; __C: psingle; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_sveD(__A: pdouble; __I: vDSP_Stride; __C: pdouble; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_svemg(__A: psingle; __IA: vDSP_Stride; __C: psingle; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_svemgD(__A: pdouble; __IA: vDSP_Stride; __C: pdouble; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_svesq(__A: psingle; __IA: vDSP_Stride; __C: psingle; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_svesqD(__A: pdouble; __IA: vDSP_Stride; __C: pdouble; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_sve_svesq(__A: psingle; __IA: vDSP_Stride; __Sum: psingle; __SumOfSquares: psingle; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_8, __IPHONE_6_0 }
procedure vDSP_sve_svesqD(__A: pdouble; __IA: vDSP_Stride; __Sum: pdouble; __SumOfSquares: pdouble; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_8, __IPHONE_6_0 }
{$endif}

{$if (defined(__IPHONE_OS_VERSION_MIN_REQUIRED) and (__IPHONE_OS_VERSION_MIN_REQUIRED < 90000)) or }
{$ifdef FUNCTIONS}
procedure vDSP_normalize(__A: psingle; __IA: vDSP_Stride; __C: psingle; __IC: vDSP_Stride; __Mean: psingle; __StandardDeviation: psingle; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_8, __IPHONE_6_0 }
procedure vDSP_normalizeD(__A: pdouble; __IA: vDSP_Stride; __C: pdouble; __IC: vDSP_Stride; __Mean: pdouble; __StandardDeviation: pdouble; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_8, __IPHONE_6_0 }
{$endif}

{$else}
{$ifdef FUNCTIONS}
procedure vDSP_normalize_(__A: psingle; __IA: vDSP_Stride; __C: float* __nullable; __IC: vDSP_Stride; __Mean: psingle; __StandardDeviation: psingle; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_8, __IPHONE_6_0 }
procedure vDSP_normalizeD_(__A: pdouble; __IA: vDSP_Stride; __C: double* __nullable; __IC: vDSP_Stride; __Mean: pdouble; __StandardDeviation: pdouble; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_8, __IPHONE_6_0 }
{$endif}

{$endif}
{$ifdef FUNCTIONS}
procedure vDSP_svs(__A: psingle; __IA: vDSP_Stride; __C: psingle; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_svsD(__A: pdouble; __IA: vDSP_Stride; __C: pdouble; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vaam(__A: psingle; __IA: vDSP_Stride; __B: psingle; __IB: vDSP_Stride; __C: psingle; __IC: vDSP_Stride; __D: psingle; __ID: vDSP_Stride; __E: psingle; __IE: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vaamD(__A: pdouble; __IA: vDSP_Stride; __B: pdouble; __IB: vDSP_Stride; __C: pdouble; __IC: vDSP_Stride; __D: pdouble; __ID: vDSP_Stride; __E: pdouble; __IE: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vasbm(__A: psingle; __IA: vDSP_Stride; __B: psingle; __IB: vDSP_Stride; __C: psingle; __IC: vDSP_Stride; __D: psingle; __ID: vDSP_Stride; __E: psingle; __IE: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vasbmD(__A: pdouble; __IA: vDSP_Stride; __B: pdouble; __IB: vDSP_Stride; __C: pdouble; __IC: vDSP_Stride; __D: pdouble; __ID: vDSP_Stride; __E: pdouble; __IE: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vasm(__A: psingle; __IA: vDSP_Stride; __B: psingle; __IB: vDSP_Stride; __C: psingle; __D: psingle; __ID: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vasmD(__A: pdouble; __IA: vDSP_Stride; __B: pdouble; __IB: vDSP_Stride; __C: pdouble; __D: pdouble; __ID: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vavlin(__A: psingle; __IA: vDSP_Stride; __B: psingle; __C: psingle; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vavlinD(__A: pdouble; __IA: vDSP_Stride; __B: pdouble; __C: pdouble; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vclip(__A: psingle; __IA: vDSP_Stride; __B: psingle; __C: psingle; __D: psingle; __ID: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vclipD(__A: pdouble; __IA: vDSP_Stride; __B: pdouble; __C: pdouble; __D: pdouble; __ID: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vclipc(__A: psingle; __IA: vDSP_Stride; __B: psingle; __C: psingle; __D: psingle; __ID: vDSP_Stride; __N: vDSP_Length; var __NLow: vDSP_Length; var __NHigh: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vclipcD(__A: pdouble; __IA: vDSP_Stride; __B: pdouble; __C: pdouble; __D: pdouble; __ID: vDSP_Stride; __N: vDSP_Length; var __NLow: vDSP_Length; var __NHigh: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vclr(__C: psingle; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vclrD(__C: pdouble; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vcmprs(__A: psingle; __IA: vDSP_Stride; __B: psingle; __IB: vDSP_Stride; __C: psingle; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vcmprsD(__A: pdouble; __IA: vDSP_Stride; __B: pdouble; __IB: vDSP_Stride; __C: pdouble; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vdbcon(__A: psingle; __IA: vDSP_Stride; __B: psingle; __C: psingle; __IC: vDSP_Stride; __N: vDSP_Length; __F: cuint); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vdbconD(__A: pdouble; __IA: vDSP_Stride; __B: pdouble; __C: pdouble; __IC: vDSP_Stride; __N: vDSP_Length; __F: cuint); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vdist(__A: psingle; __IA: vDSP_Stride; __B: psingle; __IB: vDSP_Stride; __C: psingle; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vdistD(__A: pdouble; __IA: vDSP_Stride; __B: pdouble; __IB: vDSP_Stride; __C: pdouble; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_venvlp(__A: psingle; __IA: vDSP_Stride; __B: psingle; __IB: vDSP_Stride; __C: psingle; __IC: vDSP_Stride; __D: psingle; __ID: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_venvlpD(__A: pdouble; __IA: vDSP_Stride; __B: pdouble; __IB: vDSP_Stride; __C: pdouble; __IC: vDSP_Stride; __D: pdouble; __ID: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vfix8(__A: psingle; __IA: vDSP_Stride; __C: PChar; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vfix8D(__A: pdouble; __IA: vDSP_Stride; __C: PChar; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vfix16(__A: psingle; __IA: vDSP_Stride; __C: pcshort; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vfix16D(__A: pdouble; __IA: vDSP_Stride; __C: pcshort; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vfix32(__A: psingle; __IA: vDSP_Stride; __C: pcint; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vfix32D(__A: pdouble; __IA: vDSP_Stride; __C: pcint; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vfixu8(__A: psingle; __IA: vDSP_Stride; __C: PChar; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vfixu8D(__A: pdouble; __IA: vDSP_Stride; __C: PChar; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vfixu16(__A: psingle; __IA: vDSP_Stride; __C: pcushort; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vfixu16D(__A: pdouble; __IA: vDSP_Stride; __C: pcushort; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vfixu32(__A: psingle; __IA: vDSP_Stride; __C: pcuint; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vfixu32D(__A: pdouble; __IA: vDSP_Stride; __C: pcuint; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vsmfixu24(__A: psingle; __IA: vDSP_Stride; __B: psingle; __C: vDSP_uint24Ptr; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_9, __IPHONE_7_0 }
procedure vDSP_vsmfix24(__A: psingle; __IA: vDSP_Stride; __B: psingle; __C: vDSP_int24Ptr; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_9, __IPHONE_7_0 }
procedure vDSP_vfltu24(__A: vDSP_uint24Ptr; __IA: vDSP_Stride; __C: psingle; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_9, __IPHONE_7_0 }
procedure vDSP_vflt24(__A: vDSP_int24Ptr; __IA: vDSP_Stride; __C: psingle; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_9, __IPHONE_7_0 }
procedure vDSP_vfltsmu24(__A: vDSP_uint24Ptr; __IA: vDSP_Stride; __B: psingle; __C: psingle; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_9, __IPHONE_7_0 }
procedure vDSP_vfltsm24(__A: vDSP_int24Ptr; __IA: vDSP_Stride; __B: psingle; __C: psingle; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_9, __IPHONE_7_0 }
procedure vDSP_vfixr8(__A: psingle; __IA: vDSP_Stride; __C: PChar; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vfixr8D(__A: pdouble; __IA: vDSP_Stride; __C: PChar; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vfixr16(__A: psingle; __IA: vDSP_Stride; __C: pcshort; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vfixr16D(__A: pdouble; __IA: vDSP_Stride; __C: pcshort; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vfixr32(__A: psingle; __IA: vDSP_Stride; __C: pcint; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vfixr32D(__A: pdouble; __IA: vDSP_Stride; __C: pcint; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vfixru8(__A: psingle; __IA: vDSP_Stride; __C: PChar; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vfixru8D(__A: pdouble; __IA: vDSP_Stride; __C: PChar; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vfixru16(__A: psingle; __IA: vDSP_Stride; __C: pcushort; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vfixru16D(__A: pdouble; __IA: vDSP_Stride; __C: pcushort; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vfixru32(__A: psingle; __IA: vDSP_Stride; __C: pcuint; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vfixru32D(__A: pdouble; __IA: vDSP_Stride; __C: pcuint; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vflt8(var __A: PChar; __IA: vDSP_Stride; __C: psingle; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vflt8D(var __A: PChar; __IA: vDSP_Stride; __C: pdouble; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vflt16(var __A: pcshort; __IA: vDSP_Stride; __C: psingle; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vflt16D(var __A: pcshort; __IA: vDSP_Stride; __C: pdouble; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vflt32(__A: pcint; __IA: vDSP_Stride; __C: psingle; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vflt32D(__A: pcint; __IA: vDSP_Stride; __C: pdouble; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vfltu8(__A: PChar; __IA: vDSP_Stride; __C: psingle; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vfltu8D(__A: PChar; __IA: vDSP_Stride; __C: pdouble; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vfltu16(__A: pcushort; __IA: vDSP_Stride; __C: psingle; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vfltu16D(__A: pcushort; __IA: vDSP_Stride; __C: pdouble; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vfltu32(__A: pcuint; __IA: vDSP_Stride; __C: psingle; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vfltu32D(__A: pcuint; __IA: vDSP_Stride; __C: pdouble; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vfrac(__A: psingle; __IA: vDSP_Stride; __C: psingle; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vfracD(__A: pdouble; __IA: vDSP_Stride; __C: pdouble; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vgathr(__A: psingle; var __B: vDSP_Length; __IB: vDSP_Stride; __C: psingle; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vgathrD(__A: pdouble; var __B: vDSP_Length; __IB: vDSP_Stride; __C: pdouble; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vgathra(var __A: float* __nonnull* __nonnull; __IA: vDSP_Stride; __C: psingle; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vgathraD(var __A: double* __nonnull* __nonnull; __IA: vDSP_Stride; __C: pdouble; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vgen(__A: psingle; __B: psingle; __C: psingle; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vgenD(__A: pdouble; __B: pdouble; __C: pdouble; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vgenp(__A: psingle; __IA: vDSP_Stride; __B: psingle; __IB: vDSP_Stride; __C: psingle; __IC: vDSP_Stride; __N: vDSP_Length; __M: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vgenpD(__A: pdouble; __IA: vDSP_Stride; __B: pdouble; __IB: vDSP_Stride; __C: pdouble; __IC: vDSP_Stride; __N: vDSP_Length; __M: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_viclip(__A: psingle; __IA: vDSP_Stride; __B: psingle; __C: psingle; __D: psingle; __ID: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_viclipD(__A: pdouble; __IA: vDSP_Stride; __B: pdouble; __C: pdouble; __D: pdouble; __ID: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vindex(__A: psingle; __B: psingle; __IB: vDSP_Stride; __C: psingle; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vindexD(__A: pdouble; __B: pdouble; __IB: vDSP_Stride; __C: pdouble; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vintb(__A: psingle; __IA: vDSP_Stride; __B: psingle; __IB: vDSP_Stride; __C: psingle; __D: psingle; __ID: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vintbD(__A: pdouble; __IA: vDSP_Stride; __B: pdouble; __IB: vDSP_Stride; __C: pdouble; __D: pdouble; __ID: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vlim(__A: psingle; __IA: vDSP_Stride; __B: psingle; __C: psingle; __D: psingle; __ID: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vlimD(__A: pdouble; __IA: vDSP_Stride; __B: pdouble; __C: pdouble; __D: pdouble; __ID: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vlint(__A: psingle; __B: psingle; __IB: vDSP_Stride; __C: psingle; __IC: vDSP_Stride; __N: vDSP_Length; __M: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vlintD(__A: pdouble; __B: pdouble; __IB: vDSP_Stride; __C: pdouble; __IC: vDSP_Stride; __N: vDSP_Length; __M: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vmax(__A: psingle; __IA: vDSP_Stride; __B: psingle; __IB: vDSP_Stride; __C: psingle; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vmaxD(__A: pdouble; __IA: vDSP_Stride; __B: pdouble; __IB: vDSP_Stride; __C: pdouble; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vmaxmg(__A: psingle; __IA: vDSP_Stride; __B: psingle; __IB: vDSP_Stride; __C: psingle; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vmaxmgD(__A: pdouble; __IA: vDSP_Stride; __B: pdouble; __IB: vDSP_Stride; __C: pdouble; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vswmax(__A: psingle; __IA: vDSP_Stride; __C: psingle; __IC: vDSP_Stride; __N: vDSP_Length; __WindowLength: vDSP_Length); cdecl; external; { available starting in __MAC_10_10, __IPHONE_8_0 }
procedure vDSP_vswmaxD(__A: pdouble; __IA: vDSP_Stride; __C: pdouble; __IC: vDSP_Stride; __N: vDSP_Length; __WindowLength: vDSP_Length); cdecl; external; { available starting in __MAC_10_10, __IPHONE_8_0 }
procedure vDSP_vmin(__A: psingle; __IA: vDSP_Stride; __B: psingle; __IB: vDSP_Stride; __C: psingle; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vminD(__A: pdouble; __IA: vDSP_Stride; __B: pdouble; __IB: vDSP_Stride; __C: pdouble; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vminmg(__A: psingle; __IA: vDSP_Stride; __B: psingle; __IB: vDSP_Stride; __C: psingle; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vminmgD(__A: pdouble; __IA: vDSP_Stride; __B: pdouble; __IB: vDSP_Stride; __C: pdouble; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vmma(__A: psingle; __IA: vDSP_Stride; __B: psingle; __IB: vDSP_Stride; __C: psingle; __IC: vDSP_Stride; __D: psingle; __ID: vDSP_Stride; __E: psingle; __IE: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vmmaD(__A: pdouble; __IA: vDSP_Stride; __B: pdouble; __IB: vDSP_Stride; __C: pdouble; __IC: vDSP_Stride; __D: pdouble; __ID: vDSP_Stride; __E: pdouble; __IE: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vmmsb(__A: psingle; __IA: vDSP_Stride; __B: psingle; __IB: vDSP_Stride; __C: psingle; __IC: vDSP_Stride; __D: psingle; __ID: vDSP_Stride; __E: psingle; __IE: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vmmsbD(__A: pdouble; __IA: vDSP_Stride; __B: pdouble; __IB: vDSP_Stride; __C: pdouble; __IC: vDSP_Stride; __D: pdouble; __ID: vDSP_Stride; __E: pdouble; __IE: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vmsa(__A: psingle; __IA: vDSP_Stride; __B: psingle; __IB: vDSP_Stride; __C: psingle; __D: psingle; __ID: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vmsaD(__A: pdouble; __IA: vDSP_Stride; __B: pdouble; __IB: vDSP_Stride; __C: pdouble; __D: pdouble; __ID: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vmsb(__A: psingle; __IA: vDSP_Stride; __B: psingle; __IB: vDSP_Stride; __C: psingle; __IC: vDSP_Stride; __D: psingle; __ID: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vmsbD(__A: pdouble; __IA: vDSP_Stride; __B: pdouble; __IB: vDSP_Stride; __C: pdouble; __IC: vDSP_Stride; __D: pdouble; __ID: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vnabs(__A: psingle; __IA: vDSP_Stride; __C: psingle; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vnabsD(__A: pdouble; __IA: vDSP_Stride; __C: pdouble; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vneg(__A: psingle; __IA: vDSP_Stride; __C: psingle; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vnegD(__A: pdouble; __IA: vDSP_Stride; __C: pdouble; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vpoly(__A: psingle; __IA: vDSP_Stride; __B: psingle; __IB: vDSP_Stride; __C: psingle; __IC: vDSP_Stride; __N: vDSP_Length; __P: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vpolyD(__A: pdouble; __IA: vDSP_Stride; __B: pdouble; __IB: vDSP_Stride; __C: pdouble; __IC: vDSP_Stride; __N: vDSP_Length; __P: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vpythg(__A: psingle; __IA: vDSP_Stride; __B: psingle; __IB: vDSP_Stride; __C: psingle; __IC: vDSP_Stride; __D: psingle; __ID: vDSP_Stride; __E: psingle; __IE: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vpythgD(__A: pdouble; __IA: vDSP_Stride; __B: pdouble; __IB: vDSP_Stride; __C: pdouble; __IC: vDSP_Stride; __D: pdouble; __ID: vDSP_Stride; __E: pdouble; __IE: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vqint(__A: psingle; __B: psingle; __IB: vDSP_Stride; __C: psingle; __IC: vDSP_Stride; __N: vDSP_Length; __M: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vqintD(__A: pdouble; __B: pdouble; __IB: vDSP_Stride; __C: pdouble; __IC: vDSP_Stride; __N: vDSP_Length; __M: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vramp(__A: psingle; __B: psingle; __C: psingle; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vrampD(__A: pdouble; __B: pdouble; __C: pdouble; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vrsum(__A: psingle; __IA: vDSP_Stride; __S: psingle; __C: psingle; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vrsumD(__A: pdouble; __IA: vDSP_Stride; __S: pdouble; __C: pdouble; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vrvrs(__C: psingle; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vrvrsD(__C: pdouble; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vsbm(__A: psingle; __IA: vDSP_Stride; __B: psingle; __IB: vDSP_Stride; __C: psingle; __IC: vDSP_Stride; __D: psingle; __ID: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vsbmD(__A: pdouble; __IA: vDSP_Stride; __B: pdouble; __IB: vDSP_Stride; __C: pdouble; __IC: vDSP_Stride; __D: pdouble; __ID: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vsbsbm(__A: psingle; __IA: vDSP_Stride; __B: psingle; __IB: vDSP_Stride; __C: psingle; __IC: vDSP_Stride; __D: psingle; __ID: vDSP_Stride; __E: psingle; __IE: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vsbsbmD(__A: pdouble; __IA: vDSP_Stride; __B: pdouble; __IB: vDSP_Stride; __C: pdouble; __IC: vDSP_Stride; __D: pdouble; __ID: vDSP_Stride; __E: pdouble; __IE: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vsbsm(__A: psingle; __IA: vDSP_Stride; __B: psingle; __IB: vDSP_Stride; __C: psingle; __D: psingle; __ID: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vsbsmD(__A: pdouble; __IA: vDSP_Stride; __B: pdouble; __IB: vDSP_Stride; __C: pdouble; __D: pdouble; __ID: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vsimps(__A: psingle; __IA: vDSP_Stride; __B: psingle; __C: psingle; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vsimpsD(__A: pdouble; __IA: vDSP_Stride; __B: pdouble; __C: pdouble; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vsma(__A: psingle; __IA: vDSP_Stride; __B: psingle; __C: psingle; __IC: vDSP_Stride; __D: psingle; __ID: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vsmaD(__A: pdouble; __IA: vDSP_Stride; __B: pdouble; __C: pdouble; __IC: vDSP_Stride; __D: pdouble; __ID: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vsmsa(__A: psingle; __IA: vDSP_Stride; __B: psingle; __C: psingle; __D: psingle; __ID: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vsmsaD(__A: pdouble; __IA: vDSP_Stride; __B: pdouble; __C: pdouble; __D: pdouble; __ID: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vsmsb(__A: psingle; __IA: vDSP_Stride; __B: psingle; __C: psingle; __IC: vDSP_Stride; __D: psingle; __ID: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vsmsbD(__A: pdouble; __IA: vDSP_Stride; __B: pdouble; __C: pdouble; __IC: vDSP_Stride; __D: pdouble; __ID: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vsmsma(__A: psingle; __IA: vDSP_Stride; __B: psingle; __C: psingle; __IC: vDSP_Stride; __D: psingle; __E: psingle; __IE: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_9, __IPHONE_6_0 }
procedure vDSP_vsmsmaD(__A: pdouble; __IA: vDSP_Stride; __B: pdouble; __C: pdouble; __IC: vDSP_Stride; __D: pdouble; __E: pdouble; __IE: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_10, __IPHONE_8_0 }
procedure vDSP_vsort(__C: psingle; __N: vDSP_Length; __Order: cint); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vsortD(__C: pdouble; __N: vDSP_Length; __Order: cint); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vsorti(__C: psingle; var __I: vDSP_Length; var __Temporary: vDSP_Length* __nullable; __N: vDSP_Length; __Order: cint); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vsortiD(__C: pdouble; var __I: vDSP_Length; var __Temporary: vDSP_Length* __nullable; __N: vDSP_Length; __Order: cint); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vswap(__A: psingle; __IA: vDSP_Stride; __B: psingle; __IB: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vswapD(__A: pdouble; __IA: vDSP_Stride; __B: pdouble; __IB: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vswsum(__A: psingle; __IA: vDSP_Stride; __C: psingle; __IC: vDSP_Stride; __N: vDSP_Length; __P: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vswsumD(__A: pdouble; __IA: vDSP_Stride; __C: pdouble; __IC: vDSP_Stride; __N: vDSP_Length; __P: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vtabi(__A: psingle; __IA: vDSP_Stride; __S1: psingle; __S2: psingle; __C: psingle; __M: vDSP_Length; __D: psingle; __ID: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vtabiD(__A: pdouble; __IA: vDSP_Stride; __S1: pdouble; __S2: pdouble; __C: pdouble; __M: vDSP_Length; __D: pdouble; __ID: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vthr(__A: psingle; __IA: vDSP_Stride; __B: psingle; __C: psingle; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vthrD(__A: pdouble; __IA: vDSP_Stride; __B: pdouble; __C: pdouble; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vthres(__A: psingle; __IA: vDSP_Stride; __B: psingle; __C: psingle; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vthresD(__A: pdouble; __IA: vDSP_Stride; __B: pdouble; __C: pdouble; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vthrsc(__A: psingle; __IA: vDSP_Stride; __B: psingle; __C: psingle; __D: psingle; __ID: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vthrscD(__A: pdouble; __IA: vDSP_Stride; __B: pdouble; __C: pdouble; __D: pdouble; __ID: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vtmerg(__A: psingle; __IA: vDSP_Stride; __B: psingle; __IB: vDSP_Stride; __C: psingle; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vtmergD(__A: pdouble; __IA: vDSP_Stride; __B: pdouble; __IB: vDSP_Stride; __C: pdouble; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vtrapz(__A: psingle; __IA: vDSP_Stride; __B: psingle; __C: psingle; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_vtrapzD(__A: pdouble; __IA: vDSP_Stride; __B: pdouble; __C: pdouble; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_wiener(__L: vDSP_Length; __A: psingle; __C: psingle; __F: psingle; __P: psingle; __Flag: cint; var __Error: pcint); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure vDSP_wienerD(__L: vDSP_Length; __A: pdouble; __C: pdouble; __F: pdouble; __P: pdouble; __Flag: cint; var __Error: pcint); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
{$endif}

{$ifdef TYPES}
type
  vDSP_DFT_Setup = OpaqueType;
  vDSP_DFT_SetupD = OpaqueType;
  vDSP_ENUM = function (param1: cint; +1: vDSP_DFT_Direction) { vDSP_DFT_FORWARD =; __Previous: vDSP_DFT_INVERSE = -1 };__nullable vDSP_DFT_Setup vDSP_DFT_CreateSetup( __nullable vDSP_DFT_Setup; __Length: vDSP_Length): ; cdecl { available starting in __MAC_10_6, __IPHONE_4_0 };
  vDSP_ENUM = function (param1: cint; 2: vDSP_DCT_Type){ vDSP_DCT_II =; 3: vDSP_DCT_III =; __Previous: vDSP_DCT_IV = 4};__nullable vDSP_DFT_Setup vDSP_DCT_CreateSetup( __nullable vDSP_DFT_Setup; __Length: vDSP_Length; __Type: vDSP_DCT_Type): ; cdecl { available starting in __MAC_10_9, __IPHONE_6_0 };
{$endif}

{$if defined(vDSP_DeprecateTranslations)}
{$ifdef FUNCTIONS}
function create_fftsetup(__Log2n: vDSP_Length; __Radix: FFTRadix): FFTSetup; cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure destroy_fftsetup(__setup: FFTSetup); cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure ctoz(__C: DSPComplexPtr; __IC: vDSP_Stride; __Z: DSPSplitComplexPtr; __IZ: vDSP_Stride; __N: vDSP_Length); cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure ztoc(__Z: DSPSplitComplexPtr; __IZ: vDSP_Stride; __C: DSPComplexPtr; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure fft_zip(__Setup: FFTSetup; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __Log2N: vDSP_Length; __Direction: FFTDirection); cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure fft_zipt(__Setup: FFTSetup; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __Buffer: DSPSplitComplexPtr; __Log2N: vDSP_Length; __Direction: FFTDirection); cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure fft_zop(__Setup: FFTSetup; __A: DSPSplitComplexPtr; __IA: vDSP_Stride; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __Log2N: vDSP_Length; __Direction: FFTDirection); cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure fft_zopt(__Setup: FFTSetup; __A: DSPSplitComplexPtr; __IA: vDSP_Stride; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __Buffer: DSPSplitComplexPtr; __Log2N: vDSP_Length; __Direction: FFTDirection); cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure fft_zrip(__Setup: FFTSetup; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __Log2N: vDSP_Length; __Direction: FFTDirection); cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure fft_zript(__Setup: FFTSetup; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __Buffer: DSPSplitComplexPtr; __Log2N: vDSP_Length; __Direction: FFTDirection); cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure fft_zrop(__Setup: FFTSetup; __A: DSPSplitComplexPtr; __IA: vDSP_Stride; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __Log2N: vDSP_Length; __Direction: FFTDirection); cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure fft_zropt(__Setup: FFTSetup; __A: DSPSplitComplexPtr; __IA: vDSP_Stride; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __Buffer: DSPSplitComplexPtr; __Log2N: vDSP_Length; __Direction: FFTDirection); cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure fft2d_zip(__Setup: FFTSetup; __C: DSPSplitComplexPtr; __IC0: vDSP_Stride; __IC1: vDSP_Stride; __Log2N0: vDSP_Length; __Log2N1: vDSP_Length; __Direction: FFTDirection); cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure fft2d_zipt(__Setup: FFTSetup; __C: DSPSplitComplexPtr; __IC1: vDSP_Stride; __IC0: vDSP_Stride; __Buffer: DSPSplitComplexPtr; __Log2N0: vDSP_Length; __Log2N1: vDSP_Length; __Direction: FFTDirection); cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure fft2d_zop(__Setup: FFTSetup; __A: DSPSplitComplexPtr; __IA0: vDSP_Stride; __IA1: vDSP_Stride; __C: DSPSplitComplexPtr; __IC0: vDSP_Stride; __IC1: vDSP_Stride; __Log2N0: vDSP_Length; __Log2N1: vDSP_Length; __Direction: FFTDirection); cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure fft2d_zopt(__Setup: FFTSetup; __A: DSPSplitComplexPtr; __IA0: vDSP_Stride; __IA1: vDSP_Stride; __C: DSPSplitComplexPtr; __IC0: vDSP_Stride; __IC1: vDSP_Stride; __Buffer: DSPSplitComplexPtr; __Log2N0: vDSP_Length; __Log2N1: vDSP_Length; __Direction: FFTDirection); cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure fft2d_zrip(__Setup: FFTSetup; __C: DSPSplitComplexPtr; __IC0: vDSP_Stride; __IC1: vDSP_Stride; __Log2N0: vDSP_Length; __Log2N1: vDSP_Length; __Direction: FFTDirection); cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure fft2d_zript(__Setup: FFTSetup; __C: DSPSplitComplexPtr; __IC0: vDSP_Stride; __IC1: vDSP_Stride; __Buffer: DSPSplitComplexPtr; __Log2N0: vDSP_Length; __Log2N1: vDSP_Length; __Direction: FFTDirection); cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure fft2d_zrop(__Setup: FFTSetup; __A: DSPSplitComplexPtr; __IA0: vDSP_Stride; __IA1: vDSP_Stride; __C: DSPSplitComplexPtr; __IC0: vDSP_Stride; __IC1: vDSP_Stride; __Log2N0: vDSP_Length; __Log2N1: vDSP_Length; __Direction: FFTDirection); cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure fft2d_zropt(__Setup: FFTSetup; __A: DSPSplitComplexPtr; __IA0: vDSP_Stride; __IA1: vDSP_Stride; __C: DSPSplitComplexPtr; __IC0: vDSP_Stride; __IC1: vDSP_Stride; __Buffer: DSPSplitComplexPtr; __Log2N0: vDSP_Length; __Log2N1: vDSP_Length; __Direction: FFTDirection); cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure fft3_zop(__Setup: FFTSetup; __A: DSPSplitComplexPtr; __IA: vDSP_Stride; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __Log2N: vDSP_Length; __Direction: FFTDirection); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_9_0';
procedure fft5_zop(__Setup: FFTSetup; __A: DSPSplitComplexPtr; __IA: vDSP_Stride; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __Log2N: vDSP_Length; __Direction: FFTDirection); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_9_0';
procedure fftm_zop(__Setup: FFTSetup; __A: DSPSplitComplexPtr; __IA: vDSP_Stride; __IMA: vDSP_Stride; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __IMC: vDSP_Stride; __Log2N: vDSP_Length; __M: vDSP_Length; __Direction: FFTDirection); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure fftm_zopt(__Setup: FFTSetup; __A: DSPSplitComplexPtr; __IA: vDSP_Stride; __IMA: vDSP_Stride; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __IMC: vDSP_Stride; __Buffer: DSPSplitComplexPtr; __Log2N: vDSP_Length; __M: vDSP_Length; __Direction: FFTDirection); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure fftm_zip(__Setup: FFTSetup; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __IM: vDSP_Stride; __Log2N: vDSP_Length; __M: vDSP_Length; __Direction: FFTDirection); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure fftm_zipt(__Setup: FFTSetup; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __IM: vDSP_Stride; __Buffer: DSPSplitComplexPtr; __Log2N: vDSP_Length; __M: vDSP_Length; __Direction: FFTDirection); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure fftm_zrop(__Setup: FFTSetup; __A: DSPSplitComplexPtr; __IA: vDSP_Stride; __IMA: vDSP_Stride; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __IMC: vDSP_Stride; __Log2N: vDSP_Length; __M: vDSP_Length; __Direction: FFTDirection); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure fftm_zropt(__Setup: FFTSetup; __A: DSPSplitComplexPtr; __IA: vDSP_Stride; __IMA: vDSP_Stride; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __IMC: vDSP_Stride; __Buffer: DSPSplitComplexPtr; __Log2N: vDSP_Length; __M: vDSP_Length; __Direction: FFTDirection); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure fftm_zrip(__Setup: FFTSetup; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __IM: vDSP_Stride; __Log2N: vDSP_Length; __M: vDSP_Length; __Direction: FFTDirection); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure fftm_zript(__Setup: FFTSetup; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __IM: vDSP_Stride; __Buffer: DSPSplitComplexPtr; __Log2N: vDSP_Length; __M: vDSP_Length; __Direction: FFTDirection); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure f3x3(__A: psingle; __NR: vDSP_Length; __NC: vDSP_Length; __F: psingle; __C: psingle); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure f5x5(__A: psingle; __NR: vDSP_Length; __NC: vDSP_Length; __F: psingle; __C: psingle); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure conv(__A: psingle; __IA: vDSP_Stride; __F: psingle; __IF: vDSP_Stride; __C: psingle; __IC: vDSP_Stride; __N: vDSP_Length; __P: vDSP_Length); cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure dotpr(__A: psingle; __IA: vDSP_Stride; __B: psingle; __IB: vDSP_Stride; __C: psingle; __N: vDSP_Length); cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure imgfir(__A: psingle; __NR: vDSP_Length; __NC: vDSP_Length; __F: psingle; __C: psingle; __P: vDSP_Length; __Q: vDSP_Length); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure mtrans(__A: psingle; __IA: vDSP_Stride; __C: psingle; __IC: vDSP_Stride; __M: vDSP_Length; __N: vDSP_Length); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure mmul(__A: psingle; __IA: vDSP_Stride; __B: psingle; __IB: vDSP_Stride; __C: psingle; __IC: vDSP_Stride; __M: vDSP_Length; __N: vDSP_Length; __P: vDSP_Length); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure vadd(__A: psingle; __IA: vDSP_Stride; __B: psingle; __IB: vDSP_Stride; __C: psingle; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure vsub(__B: psingle; __IB: vDSP_Stride; __A: psingle; __IA: vDSP_Stride; __C: psingle; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure vmul(__A: psingle; __IA: vDSP_Stride; __B: psingle; __IB: vDSP_Stride; __C: psingle; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure vsmul(__A: psingle; __IA: vDSP_Stride; __B: psingle; __C: psingle; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure vam(__A: psingle; __IA: vDSP_Stride; __B: psingle; __IB: vDSP_Stride; __C: psingle; __IC: vDSP_Stride; __D: psingle; __ID: vDSP_Stride; __N: vDSP_Length); cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure vsq(__A: psingle; __IA: vDSP_Stride; __C: psingle; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure vssq(__A: psingle; __IA: vDSP_Stride; __C: psingle; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure zvadd(__A: DSPSplitComplexPtr; __IA: vDSP_Stride; __B: DSPSplitComplexPtr; __IB: vDSP_Stride; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure zvsub(__A: DSPSplitComplexPtr; __IA: vDSP_Stride; __B: DSPSplitComplexPtr; __IB: vDSP_Stride; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure zdotpr(__A: DSPSplitComplexPtr; __IA: vDSP_Stride; __B: DSPSplitComplexPtr; __IB: vDSP_Stride; __C: DSPSplitComplexPtr; __N: vDSP_Length); cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure zconv(__A: DSPSplitComplexPtr; __IA: vDSP_Stride; __F: DSPSplitComplexPtr; __IF: vDSP_Stride; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __N: vDSP_Length; __P: vDSP_Length); cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure zvcma(__A: DSPSplitComplexPtr; __IA: vDSP_Stride; __B: DSPSplitComplexPtr; __IB: vDSP_Stride; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __D: DSPSplitComplexPtr; __ID: vDSP_Stride; __N: vDSP_Length); cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure zvmul(__A: DSPSplitComplexPtr; __IA: vDSP_Stride; __B: DSPSplitComplexPtr; __IB: vDSP_Stride; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __N: vDSP_Length; __Conjugate: cint); cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure zidotpr(__A: DSPSplitComplexPtr; __IA: vDSP_Stride; __B: DSPSplitComplexPtr; __IB: vDSP_Stride; __C: DSPSplitComplexPtr; __N: vDSP_Length); cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure zmma(__A: DSPSplitComplexPtr; __IA: vDSP_Stride; __B: DSPSplitComplexPtr; __IB: vDSP_Stride; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __D: DSPSplitComplexPtr; __ID: vDSP_Stride; __M: vDSP_Length; __N: vDSP_Length; __P: vDSP_Length); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure zmms(__A: DSPSplitComplexPtr; __IA: vDSP_Stride; __B: DSPSplitComplexPtr; __IB: vDSP_Stride; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __D: DSPSplitComplexPtr; __ID: vDSP_Stride; __M: vDSP_Length; __N: vDSP_Length; __P: vDSP_Length); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure zmsm(__A: DSPSplitComplexPtr; __IA: vDSP_Stride; __B: DSPSplitComplexPtr; __IB: vDSP_Stride; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __D: DSPSplitComplexPtr; __ID: vDSP_Stride; __M: vDSP_Length; __N: vDSP_Length; __P: vDSP_Length); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure zmmul(__A: DSPSplitComplexPtr; __IA: vDSP_Stride; __B: DSPSplitComplexPtr; __IB: vDSP_Stride; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __M: vDSP_Length; __N: vDSP_Length; __P: vDSP_Length); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure zrvadd(__A: DSPSplitComplexPtr; __IA: vDSP_Stride; __B: psingle; __IB: vDSP_Stride; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure zrvmul(__A: DSPSplitComplexPtr; __IA: vDSP_Stride; __B: psingle; __IB: vDSP_Stride; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure zrvsub(__A: DSPSplitComplexPtr; __IA: vDSP_Stride; __B: psingle; __IB: vDSP_Stride; __C: DSPSplitComplexPtr; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure zrdotpr(__A: DSPSplitComplexPtr; __IA: vDSP_Stride; __B: psingle; __IB: vDSP_Stride; __C: DSPSplitComplexPtr; __N: vDSP_Length); cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure fft_zipD(__Setup: FFTSetupD; __C: DSPDoubleSplitComplexPtr; __IC: vDSP_Stride; __Log2N: vDSP_Length; __Direction: FFTDirection); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure fft_ziptD(__Setup: FFTSetupD; __C: DSPDoubleSplitComplexPtr; __IC: vDSP_Stride; __Buffer: DSPDoubleSplitComplexPtr; __Log2N: vDSP_Length; __Direction: FFTDirection); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure fft_zopD(__Setup: FFTSetupD; __A: DSPDoubleSplitComplexPtr; __IA: vDSP_Stride; __C: DSPDoubleSplitComplexPtr; __IC: vDSP_Stride; __Log2N: vDSP_Length; __Direction: FFTDirection); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure fft_zoptD(__Setup: FFTSetupD; __A: DSPDoubleSplitComplexPtr; __IA: vDSP_Stride; __C: DSPDoubleSplitComplexPtr; __IC: vDSP_Stride; __Buffer: DSPDoubleSplitComplexPtr; __Log2N: vDSP_Length; __Direction: FFTDirection); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure fft_zripD(__Setup: FFTSetupD; __C: DSPDoubleSplitComplexPtr; __IC: vDSP_Stride; __Log2N: vDSP_Length; __Direction: FFTDirection); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure fft_zriptD(__Setup: FFTSetupD; __C: DSPDoubleSplitComplexPtr; __IC: vDSP_Stride; __Buffer: DSPDoubleSplitComplexPtr; __Log2N: vDSP_Length; __Direction: FFTDirection); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure fft_zropD(__Setup: FFTSetupD; __A: DSPDoubleSplitComplexPtr; __IA: vDSP_Stride; __C: DSPDoubleSplitComplexPtr; __IC: vDSP_Stride; __Log2N: vDSP_Length; __Direction: FFTDirection); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure fft_zroptD(__Setup: FFTSetupD; __A: DSPDoubleSplitComplexPtr; __IA: vDSP_Stride; __C: DSPDoubleSplitComplexPtr; __IC: vDSP_Stride; __Buffer: DSPDoubleSplitComplexPtr; __Log2N: vDSP_Length; __Direction: FFTDirection); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure fft2d_zipD(__Setup: FFTSetupD; __C: DSPDoubleSplitComplexPtr; __IC0: vDSP_Stride; __IC1: vDSP_Stride; __Log2N0: vDSP_Length; __Log2N1: vDSP_Length; __Direction: FFTDirection); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure fft2d_ziptD(__Setup: FFTSetupD; __C: DSPDoubleSplitComplexPtr; __IC0: vDSP_Stride; __IC1: vDSP_Stride; __Buffer: DSPDoubleSplitComplexPtr; __Log2N0: vDSP_Length; __Log2N1: vDSP_Length; __Direction: FFTDirection); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure fft2d_zopD(__Setup: FFTSetupD; __A: DSPDoubleSplitComplexPtr; __IA0: vDSP_Stride; __IA1: vDSP_Stride; __C: DSPDoubleSplitComplexPtr; __IC0: vDSP_Stride; __IC1: vDSP_Stride; __Log2N0: vDSP_Length; __Log2N1: vDSP_Length; __Direction: FFTDirection); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure fft2d_zoptD(__Setup: FFTSetupD; __A: DSPDoubleSplitComplexPtr; __IA0: vDSP_Stride; __IA1: vDSP_Stride; __C: DSPDoubleSplitComplexPtr; __IC0: vDSP_Stride; __IC1: vDSP_Stride; __Buffer: DSPDoubleSplitComplexPtr; __Log2N0: vDSP_Length; __Log2N1: vDSP_Length; __Direction: FFTDirection); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure fft2d_zripD(__Setup: FFTSetupD; __C: DSPDoubleSplitComplexPtr; __IC0: vDSP_Stride; __IC1: vDSP_Stride; __Log2N0: vDSP_Length; __Log2N1: vDSP_Length; __flag: FFTDirection); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure fft2d_zriptD(__Setup: FFTSetupD; __C: DSPDoubleSplitComplexPtr; __IC0: vDSP_Stride; __IC1: vDSP_Stride; __Buffer: DSPDoubleSplitComplexPtr; __Log2N0: vDSP_Length; __Log2N1: vDSP_Length; __flag: FFTDirection); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure fft2d_zropD(__Setup: FFTSetupD; __A: DSPDoubleSplitComplexPtr; __IA0: vDSP_Stride; __IA1: vDSP_Stride; __C: DSPDoubleSplitComplexPtr; __IC0: vDSP_Stride; __IC1: vDSP_Stride; __Log2N0: vDSP_Length; __Log2N1: vDSP_Length; __Direction: FFTDirection); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure fft2d_zroptD(__Setup: FFTSetupD; __A: DSPDoubleSplitComplexPtr; __IA0: vDSP_Stride; __IA1: vDSP_Stride; __C: DSPDoubleSplitComplexPtr; __IC0: vDSP_Stride; __IC1: vDSP_Stride; __Buffer: DSPDoubleSplitComplexPtr; __Log2N0: vDSP_Length; __Log2N1: vDSP_Length; __Direction: FFTDirection); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure fftm_zipD(__Setup: FFTSetupD; __C: DSPDoubleSplitComplexPtr; __IC: vDSP_Stride; __IM: vDSP_Stride; __Log2N: vDSP_Length; __M: vDSP_Length; __Direction: FFTDirection); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure fftm_ziptD(__Setup: FFTSetupD; __C: DSPDoubleSplitComplexPtr; __IC: vDSP_Stride; __IM: vDSP_Stride; __Buffer: DSPDoubleSplitComplexPtr; __Log2N: vDSP_Length; __M: vDSP_Length; __Direction: FFTDirection); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure fftm_zopD(__Setup: FFTSetupD; __A: DSPDoubleSplitComplexPtr; __IA: vDSP_Stride; __IMA: vDSP_Stride; __C: DSPDoubleSplitComplexPtr; __IC: vDSP_Stride; __IMC: vDSP_Stride; __Log2N: vDSP_Length; __M: vDSP_Length; __Direction: FFTDirection); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure fftm_zoptD(__Setup: FFTSetupD; __A: DSPDoubleSplitComplexPtr; __IA: vDSP_Stride; __IMA: vDSP_Stride; __C: DSPDoubleSplitComplexPtr; __IC: vDSP_Stride; __IMC: vDSP_Stride; __Buffer: DSPDoubleSplitComplexPtr; __Log2N: vDSP_Length; __M: vDSP_Length; __Direction: FFTDirection); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure fftm_zripD(__Setup: FFTSetupD; __C: DSPDoubleSplitComplexPtr; __IC: vDSP_Stride; __IM: vDSP_Stride; __Log2N: vDSP_Length; __M: vDSP_Length; __Direction: FFTDirection); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure fftm_zriptD(__Setup: FFTSetupD; __C: DSPDoubleSplitComplexPtr; __IC: vDSP_Stride; __IM: vDSP_Stride; __Buffer: DSPDoubleSplitComplexPtr; __Log2N: vDSP_Length; __M: vDSP_Length; __Direction: FFTDirection); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure fftm_zropD(__Setup: FFTSetupD; __A: DSPDoubleSplitComplexPtr; __IA: vDSP_Stride; __IMA: vDSP_Stride; __C: DSPDoubleSplitComplexPtr; __IC: vDSP_Stride; __IMC: vDSP_Stride; __Log2N: vDSP_Length; __M: vDSP_Length; __Direction: FFTDirection); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure fftm_zroptD(__Setup: FFTSetupD; __A: DSPDoubleSplitComplexPtr; __IA: vDSP_Stride; __IMA: vDSP_Stride; __C: DSPDoubleSplitComplexPtr; __IC: vDSP_Stride; __IMC: vDSP_Stride; __Buffer: DSPDoubleSplitComplexPtr; __Log2N: vDSP_Length; __M: vDSP_Length; __Direction: FFTDirection); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure fft3_zopD(__Setup: FFTSetupD; __A: DSPDoubleSplitComplexPtr; __IA: vDSP_Stride; __C: DSPDoubleSplitComplexPtr; __IC: vDSP_Stride; __Log2N: vDSP_Length; __Direction: FFTDirection); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_9_0';
procedure fft5_zopD(__Setup: FFTSetupD; __A: DSPDoubleSplitComplexPtr; __IA: vDSP_Stride; __C: DSPDoubleSplitComplexPtr; __IC: vDSP_Stride; __Log2N: vDSP_Length; __Direction: FFTDirection); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_9_0';
procedure ctozD(__C: DSPDoubleComplexPtr; __IC: vDSP_Stride; __Z: DSPDoubleSplitComplexPtr; __IZ: vDSP_Stride; __N: vDSP_Length); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure ztocD(__Z: DSPDoubleSplitComplexPtr; __IZ: vDSP_Stride; __C: DSPDoubleComplexPtr; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure vsmulD(__A: pdouble; __IA: vDSP_Stride; __B: pdouble; __C: pdouble; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
function create_fftsetupD(__Log2n: vDSP_Length; __Radix: FFTRadix): FFTSetupD; cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure destroy_fftsetupD(__setup: FFTSetupD); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure f3x3D(__A: pdouble; __NR: vDSP_Length; __NC: vDSP_Length; __F: pdouble; __C: pdouble); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure f5x5D(__A: pdouble; __NR: vDSP_Length; __NC: vDSP_Length; __F: pdouble; __C: pdouble); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure convD(__A: pdouble; __IA: vDSP_Stride; __F: pdouble; __IF: vDSP_Stride; __C: pdouble; __IC: vDSP_Stride; __N: vDSP_Length; __P: vDSP_Length); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure dotprD(__A: pdouble; __IA: vDSP_Stride; __B: pdouble; __IB: vDSP_Stride; __C: pdouble; __N: vDSP_Length); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure imgfirD(__A: pdouble; __NR: vDSP_Length; __NC: vDSP_Length; __F: pdouble; __C: pdouble; __P: vDSP_Length; __Q: vDSP_Length); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure mtransD(__A: pdouble; __IA: vDSP_Stride; __C: pdouble; __IC: vDSP_Stride; __M: vDSP_Length; __N: vDSP_Length); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure mmulD(__A: pdouble; __IA: vDSP_Stride; __B: pdouble; __IB: vDSP_Stride; __C: pdouble; __IC: vDSP_Stride; __M: vDSP_Length; __N: vDSP_Length; __P: vDSP_Length); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure vaddD(__A: pdouble; __IA: vDSP_Stride; __B: pdouble; __IB: vDSP_Stride; __C: pdouble; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure vsubD(__B: pdouble; __IB: vDSP_Stride; __A: pdouble; __IA: vDSP_Stride; __C: pdouble; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure vmulD(__A: pdouble; __IA: vDSP_Stride; __B: pdouble; __IB: vDSP_Stride; __C: pdouble; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure vamD(__A: pdouble; __IA: vDSP_Stride; __B: pdouble; __IB: vDSP_Stride; __C: pdouble; __IC: vDSP_Stride; __D: pdouble; __IDD: vDSP_Stride; __N: vDSP_Length); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure vsqD(__A: pdouble; __IA: vDSP_Stride; __C: pdouble; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure vssqD(__A: pdouble; __IA: vDSP_Stride; __C: pdouble; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure zvaddD(__A: DSPDoubleSplitComplexPtr; __IA: vDSP_Stride; __B: DSPDoubleSplitComplexPtr; __IB: vDSP_Stride; __C: DSPDoubleSplitComplexPtr; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure zvsubD(__A: DSPDoubleSplitComplexPtr; __IA: vDSP_Stride; __B: DSPDoubleSplitComplexPtr; __IB: vDSP_Stride; __C: DSPDoubleSplitComplexPtr; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure zdotprD(__A: DSPDoubleSplitComplexPtr; __IA: vDSP_Stride; __B: DSPDoubleSplitComplexPtr; __IB: vDSP_Stride; __C: DSPDoubleSplitComplexPtr; __N: vDSP_Length); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure zconvD(__A: DSPDoubleSplitComplexPtr; __IA: vDSP_Stride; __F: DSPDoubleSplitComplexPtr; __IF: vDSP_Stride; __C: DSPDoubleSplitComplexPtr; __IC: vDSP_Stride; __N: vDSP_Length; __P: vDSP_Length); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure zvcmaD(__A: DSPDoubleSplitComplexPtr; __IA: vDSP_Stride; __B: DSPDoubleSplitComplexPtr; __IB: vDSP_Stride; __C: DSPDoubleSplitComplexPtr; __IC: vDSP_Stride; __D: DSPDoubleSplitComplexPtr; __ID: vDSP_Stride; __N: vDSP_Length); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure zvmulD(__A: DSPDoubleSplitComplexPtr; __IA: vDSP_Stride; __B: DSPDoubleSplitComplexPtr; __IB: vDSP_Stride; __C: DSPDoubleSplitComplexPtr; __IC: vDSP_Stride; __N: vDSP_Length; __Conjugate: cint); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure zidotprD(__A: DSPDoubleSplitComplexPtr; __IA: vDSP_Stride; __B: DSPDoubleSplitComplexPtr; __IB: vDSP_Stride; __C: DSPDoubleSplitComplexPtr; __N: vDSP_Length); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure zmmaD(__A: DSPDoubleSplitComplexPtr; __IA: vDSP_Stride; __B: DSPDoubleSplitComplexPtr; __IB: vDSP_Stride; __C: DSPDoubleSplitComplexPtr; __IC: vDSP_Stride; __D: DSPDoubleSplitComplexPtr; __ID: vDSP_Stride; __M: vDSP_Length; __N: vDSP_Length; __P: vDSP_Length); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure zmmsD(__A: DSPDoubleSplitComplexPtr; __IA: vDSP_Stride; __B: DSPDoubleSplitComplexPtr; __IB: vDSP_Stride; __C: DSPDoubleSplitComplexPtr; __IC: vDSP_Stride; __D: DSPDoubleSplitComplexPtr; __ID: vDSP_Stride; __M: vDSP_Length; __N: vDSP_Length; __P: vDSP_Length); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure zmsmD(__A: DSPDoubleSplitComplexPtr; __IA: vDSP_Stride; __B: DSPDoubleSplitComplexPtr; __IB: vDSP_Stride; __C: DSPDoubleSplitComplexPtr; __IC: vDSP_Stride; __D: DSPDoubleSplitComplexPtr; __ID: vDSP_Stride; __M: vDSP_Length; __N: vDSP_Length; __P: vDSP_Length); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure zmmulD(__A: DSPDoubleSplitComplexPtr; __IA: vDSP_Stride; __B: DSPDoubleSplitComplexPtr; __IB: vDSP_Stride; __C: DSPDoubleSplitComplexPtr; __IC: vDSP_Stride; __M: vDSP_Length; __N: vDSP_Length; __P: vDSP_Length); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure zrvaddD(__A: DSPDoubleSplitComplexPtr; __IA: vDSP_Stride; __B: pdouble; __IB: vDSP_Stride; __C: DSPDoubleSplitComplexPtr; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure zrvmulD(__A: DSPDoubleSplitComplexPtr; __IA: vDSP_Stride; __B: pdouble; __IB: vDSP_Stride; __C: DSPDoubleSplitComplexPtr; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure zrvsubD(__A: DSPDoubleSplitComplexPtr; __IA: vDSP_Stride; __B: pdouble; __IB: vDSP_Stride; __C: DSPDoubleSplitComplexPtr; __IC: vDSP_Stride; __N: vDSP_Length); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
procedure zrdotprD(__A: DSPDoubleSplitComplexPtr; __IA: vDSP_Stride; __B: pdouble; __IB: vDSP_Stride; __C: DSPDoubleSplitComplexPtr; __N: vDSP_Length); cdecl; external; deprecated 'in __MAC_10_2, __MAC_10_11, __IPHONE_4_0, __IPHONE_NA';
{$endif}

{$endif}

{$ifndef USE_NON_APPLE_STANDARD_DATATYPES}
{$ifdef TYPES}
const
  USE_NON_APPLE_STANDARD_DATATYPES = 1;
{$endif}

{$endif}

{$if defined(USE_NON_APPLE_STANDARD_DATATYPES)}
{$ifdef TYPES}
const
  FFT_FORWARD = kFFTDirection_Forward;
  FFT_INVERSE = kFFTDirection_Inverse;
const
  FFT_RADIX2 = kFFTRadix2;
  FFT_RADIX3 = kFFTRadix3;
  FFT_RADIX5 = kFFTRadix5;

type
  COMPLEX = DSPComplex;
  COMPLEXPtr = ^COMPLEX;
  COMPLEX_SPLIT = DSPSplitComplex;
  COMPLEX_SPLITPtr = ^COMPLEX_SPLIT;
  DOUBLE_COMPLEX = DSPDoubleComplex;
  DOUBLE_COMPLEXPtr = ^DOUBLE_COMPLEX;
  DOUBLE_COMPLEX_SPLIT = DSPDoubleSplitComplex;
  DOUBLE_COMPLEX_SPLITPtr = ^DOUBLE_COMPLEX_SPLIT;
{$endif}

{$endif}

{$endif}
