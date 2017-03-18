{ Parsed from CoreText.framework CTRun.h }

{$ifndef __CTRUN__}
{$ifdef TYPES}
type
  CTRunRef = OpaqueType;
  CTRunStatus = cuint32;
  CTRunStatusPtr = ^CTRunStatus;

const
  kCTRunStatusNoStatus = 0;
  kCTRunStatusRightToLeft = 1 shl 0;
  kCTRunStatusNonMonotonic = 1 shl 1;
  kCTRunStatusHasNonIdentityMatrix = 1 shl 2;
{$endif}

{$endif}
