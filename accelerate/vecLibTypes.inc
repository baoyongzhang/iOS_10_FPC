{ Parsed from Accelerate.framework vecLibTypes.h }

{$ifndef __VECLIBTYPES__}

{$if (defined(__ppc__)) or (defined(__ppc64__))}

{$if defined(_AltiVecPIMLanguageExtensionsAreEnabled)}
{$ifdef TYPES}
type
  vUInt8 = __vector  char;
  vUInt8Ptr = ^vUInt8;
  vSInt8 = __vector  char;
  vSInt8Ptr = ^vSInt8;
  vUInt16 = __vector  short;
  vUInt16Ptr = ^vUInt16;
  vSInt16 = __vector  short;
  vSInt16Ptr = ^vSInt16;
  vUInt32 = __vector  int;
  vUInt32Ptr = ^vUInt32;
  vSInt32 = __vector  int;
  vSInt32Ptr = ^vSInt32;
  vFloat = __vector float;
  vFloatPtr = ^vFloat;
  vBool32 = __vector bool int;
  vBool32Ptr = ^vBool32;
{$endif}

{$if (defined(__GNUC__)) and not (defined(__XLC__))}

{$if (defined(__GNUC_MINOR__)) and ((((__GNUC__ = 3)) and ((__GNUC_MINOR__ <= 3))) or ((__GNUC__ < 3)))}

{$else}
{$ifdef TYPES}
const
  __VECLIBTYPES_VDOUBLE__ = 1;

type
  vDouble = double;
  vDoublePtr = ^vDouble;
{$endif}

{$endif}
{$endif}
{$endif}

{$elseif (defined(__i386__)) or (defined(__x86_64__))}

{$ifdef __SSE__}

{$if (defined(__GNUC__))}
{$ifdef TYPES}
type
  vFloat = single;
  vFloatPtr = ^vFloat;
{$endif}

{$else}
{$ifdef TYPES}
type
  vFloat = __m128;
  vFloatPtr = ^vFloat;
{$endif}

{$endif}
{$endif}

{$ifdef __SSE2__}
{$ifdef TYPES}
const
  __VECLIBTYPES_VDOUBLE__ = 1;
{$endif}

{$if (defined(__GNUC__))}

{$if (defined(__GNUC_MINOR__)) and ((((__GNUC__ = 3)) and ((__GNUC_MINOR__ <= 3))) or ((__GNUC__ < 3)))}
{$ifdef TYPES}
type
  vUInt8 = __m128i;
  vUInt8Ptr = ^vUInt8;
  vSInt8 = __m128i;
  vSInt8Ptr = ^vSInt8;
  vUInt16 = __m128i;
  vUInt16Ptr = ^vUInt16;
  vSInt16 = __m128i;
  vSInt16Ptr = ^vSInt16;
  vUInt32 = __m128i;
  vUInt32Ptr = ^vUInt32;
  vSInt32 = __m128i;
  vSInt32Ptr = ^vSInt32;
  vBool32 = __m128i;
  vBool32Ptr = ^vBool32;
  vUInt64 = __m128i;
  vUInt64Ptr = ^vUInt64;
  vSInt64 = __m128i;
  vSInt64Ptr = ^vSInt64;
  vDouble = __m128d;
  vDoublePtr = ^vDouble;
{$endif}

{$else}
{$ifdef TYPES}
type
  vUInt8 = char;
  vUInt8Ptr = ^vUInt8;
  vSInt8 = char;
  vSInt8Ptr = ^vSInt8;
  vUInt16 = cushort;
  vUInt16Ptr = ^vUInt16;
  vSInt16 = cshort;
  vSInt16Ptr = ^vSInt16;
  vUInt32 = cuint;
  vUInt32Ptr = ^vUInt32;
  vSInt32 = cint;
  vSInt32Ptr = ^vSInt32;
  vBool32 = cuint;
  vBool32Ptr = ^vBool32;
  vUInt64 = culonglong;
  vUInt64Ptr = ^vUInt64;
  vSInt64 = clonglong;
  vSInt64Ptr = ^vSInt64;
  vDouble = double;
  vDoublePtr = ^vDouble;
{$endif}

{$endif}

{$else}
{$ifdef TYPES}
type
  vUInt8 = __m128i;
  vUInt8Ptr = ^vUInt8;
  vSInt8 = __m128i;
  vSInt8Ptr = ^vSInt8;
  vUInt16 = __m128i;
  vUInt16Ptr = ^vUInt16;
  vSInt16 = __m128i;
  vSInt16Ptr = ^vSInt16;
  vUInt32 = __m128i;
  vUInt32Ptr = ^vUInt32;
  vSInt32 = __m128i;
  vSInt32Ptr = ^vSInt32;
  vBool32 = __m128i;
  vBool32Ptr = ^vBool32;
  vUInt64 = __m128i;
  vUInt64Ptr = ^vUInt64;
  vSInt64 = __m128i;
  vSInt64Ptr = ^vSInt64;
  vDouble = __m128d;
  vDoublePtr = ^vDouble;
{$endif}

{$endif}
{$endif}

{$elseif defined(__arm__) and defined(__ARM_NEON__)}

{$ifdef TYPES}
type
  vUInt8 = char;
  vUInt8Ptr = ^vUInt8;
  vSInt8 = char;
  vSInt8Ptr = ^vSInt8;
  vUInt16 = cushort;
  vUInt16Ptr = ^vUInt16;
  vSInt16 = cshort;
  vSInt16Ptr = ^vSInt16;
  vUInt32 = cuint;
  vUInt32Ptr = ^vUInt32;
  vSInt32 = cint;
  vSInt32Ptr = ^vSInt32;
  vFloat = single;
  vFloatPtr = ^vFloat;
  vDouble = double;
  vDoublePtr = ^vDouble;
  vBool32 = cuint;
  vBool32Ptr = ^vBool32;
{$endif}

{$else}
{$ifdef TYPES}
type
  vUInt8 = char;
  vUInt8Ptr = ^vUInt8;
  vSInt8 = char;
  vSInt8Ptr = ^vSInt8;
  vUInt16 = cushort;
  vUInt16Ptr = ^vUInt16;
  vSInt16 = cshort;
  vSInt16Ptr = ^vSInt16;
  vUInt32 = cuint;
  vUInt32Ptr = ^vUInt32;
  vSInt32 = cint;
  vSInt32Ptr = ^vSInt32;
  vSInt64 = clonglong;
  vSInt64Ptr = ^vSInt64;
  vUInt64 = culonglong;
  vUInt64Ptr = ^vUInt64;
  vFloat = single;
  vFloatPtr = ^vFloat;
  vDouble = double;
  vDoublePtr = ^vDouble;
  vBool32 = cuint;
  vBool32Ptr = ^vBool32;
{$endif}

{$endif}
{$endif}
