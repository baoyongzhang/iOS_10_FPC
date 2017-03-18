{ Parsed from CoreFoundation.framework CFByteOrder.h }

{$if  not (defined(__COREFOUNDATION_CFBYTEORDER__))}
{$ifdef TYPES}
const
  __COREFOUNDATION_CFBYTEORDER__ = 1;
{$endif}

{$if ((defined(TARGET_OS_MAC) and not (defined(TARGET_OS_EMBEDDED) or defined(TARGET_OS_IPHONE))) or (defined(TARGET_OS_EMBEDDED) or defined(TARGET_OS_IPHONE))) and not (defined(CF_USE_OSBYTEORDER_H))}
{$ifdef TYPES}
const
  CF_USE_OSBYTEORDER_H = 1;
{$endif}

{$endif}
{$ifdef TYPES}
const
  CFByteOrderUnknown = 0;
  CFByteOrderLittleEndian = 1;
  CFByteOrderBigEndian = 2;

type
  CFByteOrder = CFIndex;
  CFByteOrderPtr = ^CFByteOrder;

type
  CFSwappedFloat32 = record
    v: cuint32;
  end;
type
  CFSwappedFloat32Ptr = ^CFSwappedFloat32;
type
  CFSwappedFloat64 = record
    v: cuint64;
  end;
type
  CFSwappedFloat64Ptr = ^CFSwappedFloat64;
{$endif}

{$endif}
