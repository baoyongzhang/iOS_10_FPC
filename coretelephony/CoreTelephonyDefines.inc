{ Parsed from CoreTelephony.framework CoreTelephonyDefines.h }

{$ifdef TYPES}
const
  kCTErrorDomainNoError = 0;
  kCTErrorDomainPOSIX = 1;
  kCTErrorDomainMach = 2;

type
  CTError = record
    domain: SInt32;
    error: SInt32;
  end;
type
  CTErrorPtr = ^CTError;
{$endif}

