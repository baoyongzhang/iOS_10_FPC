{ Parsed from CoreGraphics.framework CGDataConsumer.h }

{$ifndef CGDATACONSUMER_H_}
{$ifdef TYPES}
type
  CGDataConsumerRef = OpaqueType;
  CGDataConsumerPutBytesCallback = function (info: pointer; buffer: pointer; count: size_t): size_t; cdecl;
  CGDataConsumerReleaseInfoCallback = procedure (info: pointer); cdecl;

type
  CGDataConsumerCallbacks = record
    putBytes: CGDataConsumerPutBytesCallback;
    releaseConsumer: CGDataConsumerReleaseInfoCallback;
  end;
type
  CGDataConsumerCallbacksPtr = ^CGDataConsumerCallbacks;
{$endif}

{$ifdef FUNCTIONS}
function CGDataConsumerGetTypeID: CFTypeID; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGDataConsumerCreate(info: pointer; cbks: CGDataConsumerCallbacks): CGDataConsumerRef; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGDataConsumerCreateWithURL(url: CFURLRef): CGDataConsumerRef; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGDataConsumerCreateWithCFData(data: CFMutableDataRef): CGDataConsumerRef; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGDataConsumerRetain(consumer: CGDataConsumerRef): CGDataConsumerRef; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGDataConsumerRelease(consumer: CGDataConsumerRef); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
{$endif}

{$endif}
