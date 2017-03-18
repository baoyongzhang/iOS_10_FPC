{ Parsed from SystemConfiguration.framework SCDynamicStore.h }

{$ifndef _SCDYNAMICSTORE_H}

{$ifdef USE_SYSTEMCONFIGURATION_PRIVATE_HEADERS}

{$else}
{$ifdef TYPES}
type
  SCDynamicStoreRef = OpaqueType;

type
  SCDynamicStoreContext = record
    version: CFIndex;
    info: void *__nullable;
    info): void *__nonnull ( *__nullable retain)( voidPtr;
    info)_: void ( *__nullable release)( voidPtr;
    info)_: CFStringRef __nonnull ( *__nullable copyDescription)( voidPtr;
  end;
type
  SCDynamicStoreContextPtr = ^SCDynamicStoreContext;

type
  SCDynamicStoreCallBack = procedure (store: SCDynamicStoreRef; changedKeys: CFArrayRef; info: void* __nullable); cdecl;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kSCDynamicStoreUseSessionKeys: CFStringRef { available starting in __MAC_10_4,__IPHONE_NA }; cvar; external;
{$endif}

{$endif}
{$endif}
