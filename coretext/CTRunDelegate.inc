{ Parsed from CoreText.framework CTRunDelegate.h }

{$ifndef __CTRUNDELEGATE__}
{$ifdef TYPES}
type
  CTRunDelegateRef = OpaqueType;
  CTRunDelegateDeallocateCallback = procedure (refCon: pointer); cdecl;
  CTRunDelegateGetAscentCallback = function (refCon: pointer): CGFloat; cdecl;
  CTRunDelegateGetDescentCallback = function (refCon: pointer): CGFloat; cdecl;
  CTRunDelegateGetWidthCallback = function (refCon: pointer): CGFloat; cdecl;

type
  CTRunDelegateCallbacks = record
    version: CFIndex;
    dealloc: CTRunDelegateDeallocateCallback;
    getAscent: CTRunDelegateGetAscentCallback;
    getDescent: CTRunDelegateGetDescentCallback;
    getWidth: CTRunDelegateGetWidthCallback;
  end;
type
  CTRunDelegateCallbacksPtr = ^CTRunDelegateCallbacks;

const
  kCTRunDelegateVersion1 = 1;
  kCTRunDelegateCurrentVersion = kCTRunDelegateVersion1;
{$endif}

{$endif}
