{ Parsed from Accelerate.framework vForce.h }

{$ifndef __VFORCE_H}

{$ifdef __cplusplus}

{$ifdef TYPES}
type
  __float_complex_t = std::floatProtocol;
  __float_complex_tPtr = ^__float_complex_t;
  __double_complex_t = std::doubleProtocol;
  __double_complex_tPtr = ^__double_complex_t;
{$endif}

{$else}
{$ifdef TYPES}
type
  __float_complex_t = _Complex float;
  __float_complex_tPtr = ^__float_complex_t;
  __double_complex_t = _Complex double;
  __double_complex_tPtr = ^__double_complex_t;
{$endif}

{$endif}

{$endif}
