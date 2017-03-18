{ Parsed from Accelerate.framework clapack.h }

{$ifndef __CLAPACK_H}

{$if (defined(__LP64__))}
{$ifdef TYPES}
type
  __CLPK_integer = cint;
  __CLPK_integerPtr = ^__CLPK_integer;
  __CLPK_logical = cint;
  __CLPK_logicalPtr = ^__CLPK_logical;
  __CLPK_real = single;
  __CLPK_realPtr = ^__CLPK_real;
  __CLPK_doublereal = double;
  __CLPK_doublerealPtr = ^__CLPK_doublereal;
  __CLPK_L_fp = function : __CLPK_logical; cdecl;
  __CLPK_ftnlen = cint;
  __CLPK_ftnlenPtr = ^__CLPK_ftnlen;
{$endif}

{$else}
{$ifdef TYPES}
type
  __CLPK_integer = clong;
  __CLPK_integerPtr = ^__CLPK_integer;
  __CLPK_logical = clong;
  __CLPK_logicalPtr = ^__CLPK_logical;
  __CLPK_real = single;
  __CLPK_realPtr = ^__CLPK_real;
  __CLPK_doublereal = double;
  __CLPK_doublerealPtr = ^__CLPK_doublereal;
  __CLPK_L_fp = function : __CLPK_logical; cdecl;
  __CLPK_ftnlen = clong;
  __CLPK_ftnlenPtr = ^__CLPK_ftnlen;
{$endif}

{$endif}
{$ifdef TYPES}
type
  __CLPK_complex = record
    r, i: __CLPK_real;
  end;
type
  __CLPK_complexPtr = ^__CLPK_complex;
type
  __CLPK_doublecomplex = record
    r, i: __CLPK_doublereal;
  end;
type
  __CLPK_doublecomplexPtr = ^__CLPK_doublecomplex;
{$endif}

{$endif}
