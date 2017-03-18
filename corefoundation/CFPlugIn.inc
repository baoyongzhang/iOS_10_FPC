{ Parsed from CoreFoundation.framework CFPlugIn.h }

{$if  not (defined(__COREFOUNDATION_CFPLUGIN__))}
{$ifdef TYPES}
const
  __COREFOUNDATION_CFPLUGIN__ = 1;
{$endif}

{$if  not (defined(COREFOUNDATION_CFPLUGINCOM_SEPARATE))}
{$ifdef TYPES}
const
  COREFOUNDATION_CFPLUGINCOM_SEPARATE = 1;

type
  CFPlugInRef = OpaqueType;

{$endif}

{$endif}
{$ifdef EXTERNAL_SYMBOLS}
var
  kCFPlugInDynamicRegistrationKey: CFStringRef; cvar; external;
  kCFPlugInDynamicRegisterFunctionKey: CFStringRef; cvar; external;
  kCFPlugInUnloadFunctionKey: CFStringRef; cvar; external;
  kCFPlugInFactoriesKey: CFStringRef; cvar; external;
  kCFPlugInTypesKey: CFStringRef; cvar; external;
{$endif}

{$ifdef TYPES}
type
  CFPlugInDynamicRegisterFunction = procedure (plugIn: CFPlugInRef); cdecl;
  CFPlugInUnloadFunction = procedure (plugIn: CFPlugInRef); cdecl;
  CFPlugInFactoryFunction = function (allocator: CFAllocatorRef; typeUUID: CFUUIDRef): pointer; cdecl;
{$endif}

{$ifdef FUNCTIONS}
function CFPlugInGetTypeID: CFTypeID; cdecl; external;
function CFPlugInCreate(allocator: CFAllocatorRef; plugInURL: CFURLRef): CFPlugInRef; cdecl; external;
function CFPlugInGetBundle(plugIn: CFPlugInRef): CFBundleRef; cdecl; external;
procedure CFPlugInSetLoadOnDemand(plugIn: CFPlugInRef; flag: Boolean); cdecl; external;
function CFPlugInIsLoadOnDemand(plugIn: CFPlugInRef): Boolean; cdecl; external;
function CFPlugInInstanceCreate(allocator: CFAllocatorRef; factoryUUID: CFUUIDRef; typeUUID: CFUUIDRef): pointer; cdecl; external;
function CFPlugInRegisterFactoryFunction(factoryUUID: CFUUIDRef; func: CFPlugInFactoryFunction): Boolean; cdecl; external;
function CFPlugInRegisterFactoryFunctionByName(factoryUUID: CFUUIDRef; plugIn: CFPlugInRef; functionName: CFStringRef): Boolean; cdecl; external;
function CFPlugInUnregisterFactory(factoryUUID: CFUUIDRef): Boolean; cdecl; external;
function CFPlugInRegisterPlugInType(factoryUUID: CFUUIDRef; typeUUID: CFUUIDRef): Boolean; cdecl; external;
function CFPlugInUnregisterPlugInType(factoryUUID: CFUUIDRef; typeUUID: CFUUIDRef): Boolean; cdecl; external;
procedure CFPlugInAddInstanceForFactory(factoryID: CFUUIDRef); cdecl; external;
procedure CFPlugInRemoveInstanceForFactory(factoryID: CFUUIDRef); cdecl; external;
{$endif}

{$ifdef TYPES}
type
  CFPlugInInstanceRef = OpaqueType;
  CFPlugInInstanceGetInterfaceFunction = function (instance: CFPlugInInstanceRef; interfaceName: CFStringRef; var ftbl: pointer): Boolean; cdecl;
  CFPlugInInstanceDeallocateInstanceDataFunction = procedure (instanceData: pointer); cdecl;
{$endif}

{$ifdef FUNCTIONS}
function CFPlugInInstanceGetInterfaceFunctionTable(instance: CFPlugInInstanceRef; interfaceName: CFStringRef; var ftbl: pointer): Boolean; cdecl; external;
function CFPlugInInstanceGetInstanceData(instance: CFPlugInInstanceRef): pointer; cdecl; external;
function CFPlugInInstanceGetTypeID: CFTypeID; cdecl; external;
function CFPlugInInstanceCreateWithInstanceDataSize(allocator: CFAllocatorRef; instanceDataSize: CFIndex; deallocateInstanceFunction: CFPlugInInstanceDeallocateInstanceDataFunction; factoryName: CFStringRef; getInterfaceFunction: CFPlugInInstanceGetInterfaceFunction): CFPlugInInstanceRef; cdecl; external;
{$endif}

{$endif}
