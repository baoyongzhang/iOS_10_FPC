{ Parsed from Accelerate.framework cblas.h }

{$ifndef CBLAS_H}

{$ifndef CBLAS_ENUM_DEFINED_H}
{$ifdef TYPES}
const
  CblasRowMajor = 101;
  CblasColMajor = 102;
const
  CblasNoTrans = 111;
  CblasTrans = 112;
  CblasConjTrans = 113;
  AtlasConj = 114;
const
  CblasUpper = 121;
  CblasLower = 122;
const
  CblasNonUnit = 131;
  CblasUnit = 132;
const
  CblasLeft = 141;
  CblasRight = 142;
{$endif}

{$endif}

{$ifndef CBLAS_ENUM_ONLY}
{$ifdef TYPES}
const
  CBLAS_INDEX = int;
{$endif}

{$ifdef FUNCTIONS}
procedure appleblas_sgeadd(__order: CBLAS_ORDER; __transA: CBLAS_TRANSPOSE; __transB: CBLAS_TRANSPOSE; __m: cint; __n: cint; __alpha: single; __A: psingle; __lda: cint; __beta: single; __B: psingle; __ldb: cint; __C: psingle; __ldc: cint); cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
procedure appleblas_dgeadd(__order: CBLAS_ORDER; __transA: CBLAS_TRANSPOSE; __transB: CBLAS_TRANSPOSE; __m: cint; __n: cint; __alpha: double; __A: pdouble; __lda: cint; __beta: double; __B: pdouble; __ldb: cint; __C: pdouble; __ldc: cint); cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
{$endif}

{$ifdef TYPES}
type
  BLASParamErrorProc = procedure (funcName: PChar; paramName: PChar; var paramPos: pcint; var paramValue: pcint); cdecl;
{$endif}

{$endif}

{$endif}
