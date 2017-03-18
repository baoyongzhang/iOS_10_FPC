{ Parsed from CoreGraphics.framework CGDataProvider.h }

{$ifndef CGDATAPROVIDER_H_}
{$ifdef TYPES}
type
  CGDataProviderRef = OpaqueType;
  CGDataProviderGetBytesCallback = function (info: pointer; buffer: pointer; count: size_t): size_t; cdecl;
  CGDataProviderSkipForwardCallback = function (info: pointer; count: off_t): off_t; cdecl;
  CGDataProviderRewindCallback = procedure (info: pointer); cdecl;
  CGDataProviderReleaseInfoCallback = procedure (info: pointer); cdecl;

type
  CGDataProviderSequentialCallbacks = record
    version: cuint;
    getBytes: CGDataProviderGetBytesCallback;
    skipForward: CGDataProviderSkipForwardCallback;
    rewind: CGDataProviderRewindCallback;
    releaseInfo: CGDataProviderReleaseInfoCallback;
  end;
type
  CGDataProviderSequentialCallbacksPtr = ^CGDataProviderSequentialCallbacks;

type
  CGDataProviderGetBytePointerCallback = function (info: pointer): pointer; cdecl;
  CGDataProviderReleaseBytePointerCallback = procedure (info: pointer; pointer_: pointer); cdecl;
  CGDataProviderGetBytesAtPositionCallback = function (info: pointer; buffer: pointer; pos: off_t; cnt: size_t): size_t; cdecl;

type
  CGDataProviderDirectCallbacks = record
    version: cuint;
    getBytePointer: CGDataProviderGetBytePointerCallback;
    releaseBytePointer: CGDataProviderReleaseBytePointerCallback;
    getBytesAtPosition: CGDataProviderGetBytesAtPositionCallback;
    releaseInfo: CGDataProviderReleaseInfoCallback;
  end;
type
  CGDataProviderDirectCallbacksPtr = ^CGDataProviderDirectCallbacks;
{$endif}

{$ifdef FUNCTIONS}
function CGDataProviderGetTypeID: CFTypeID; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGDataProviderCreateSequential(info: pointer; callbacks: CGDataProviderSequentialCallbacks): CGDataProviderRef; cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
function CGDataProviderCreateDirect(info: pointer; size: off_t; callbacks: CGDataProviderDirectCallbacks): CGDataProviderRef; cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
{$endif}

{$ifdef TYPES}
type
  CGDataProviderReleaseDataCallback = procedure (info: pointer; data: pointer; size: size_t); cdecl;
{$endif}

{$ifdef FUNCTIONS}
function CGDataProviderCreateWithData(info: pointer; data: pointer; size: size_t; releaseData: CGDataProviderReleaseDataCallback): CGDataProviderRef; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGDataProviderCreateWithCFData(data: CFDataRef): CGDataProviderRef; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGDataProviderCreateWithURL(url: CFURLRef): CGDataProviderRef; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGDataProviderCreateWithFilename(filename: PChar): CGDataProviderRef; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGDataProviderRetain(provider: CGDataProviderRef): CGDataProviderRef; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGDataProviderRelease(provider: CGDataProviderRef); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGDataProviderCopyData(provider: CGDataProviderRef): CFDataRef; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
{$endif}

{$endif}
