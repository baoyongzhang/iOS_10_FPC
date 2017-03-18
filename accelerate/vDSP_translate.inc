{ Parsed from Accelerate.framework vDSP_translate.h }

{$ifndef __VDSP_TRANSLATE__}

{$if defined(__MAC_OS_X_VERSION_MIN_REQUIRED) and (__MAC_OS_X_VERSION_MIN_REQUIRED < __MAC_10_11)}
{$ifdef TYPES}
const
  vDSP_fft_cip = fft_cip;
  vDSP_fft_cipt = fft_cipt;
  vDSP_fft_cop = fft_cop;
  vDSP_fft_copt = fft_copt;
{$endif}

{$else}
{$endif}
{$endif}
