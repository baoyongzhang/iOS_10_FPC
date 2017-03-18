{ Parsed from CoreFoundation.framework CFBundle.h }

{$if  not (defined(__COREFOUNDATION_CFBUNDLE__))}
{$ifdef TYPES}
const
  __COREFOUNDATION_CFBUNDLE__ = 1;

type
  CFBundleRef = OpaqueType;
{$endif}

{$ifdef FUNCTIONS}

function CFBundleGetMainBundle: CFBundleRef; cdecl; external;
function CFBundleGetBundleWithIdentifier(bundleID: CFStringRef): CFBundleRef; cdecl; external;
function CFBundleGetAllBundles: CFArrayRef; cdecl; external;
function CFBundleGetTypeID: CFTypeID; cdecl; external;
function CFBundleCreate(allocator: CFAllocatorRef; bundleURL: CFURLRef): CFBundleRef; cdecl; external;
function CFBundleCreateBundlesFromDirectory(allocator: CFAllocatorRef; directoryURL: CFURLRef; bundleType: CFStringRef): CFArrayRef; cdecl; external;
function CFBundleCopyBundleURL(bundle: CFBundleRef): CFURLRef; cdecl; external;
function CFBundleGetValueForInfoDictionaryKey(bundle: CFBundleRef; key: CFStringRef): CFTypeRef; cdecl; external;
function CFBundleGetInfoDictionary(bundle: CFBundleRef): CFDictionaryRef; cdecl; external;
function CFBundleGetLocalInfoDictionary(bundle: CFBundleRef): CFDictionaryRef; cdecl; external;
procedure CFBundleGetPackageInfo(bundle: CFBundleRef; var packageType: UInt32; var packageCreator: UInt32); cdecl; external;
function CFBundleGetIdentifier(bundle: CFBundleRef): CFStringRef; cdecl; external;
function CFBundleGetVersionNumber(bundle: CFBundleRef): UInt32; cdecl; external;
function CFBundleGetDevelopmentRegion(bundle: CFBundleRef): CFStringRef; cdecl; external;
function CFBundleCopySupportFilesDirectoryURL(bundle: CFBundleRef): CFURLRef; cdecl; external;
function CFBundleCopyResourcesDirectoryURL(bundle: CFBundleRef): CFURLRef; cdecl; external;
function CFBundleCopyPrivateFrameworksURL(bundle: CFBundleRef): CFURLRef; cdecl; external;
function CFBundleCopySharedFrameworksURL(bundle: CFBundleRef): CFURLRef; cdecl; external;
function CFBundleCopySharedSupportURL(bundle: CFBundleRef): CFURLRef; cdecl; external;
function CFBundleCopyBuiltInPlugInsURL(bundle: CFBundleRef): CFURLRef; cdecl; external;
function CFBundleCopyInfoDictionaryInDirectory(bundleURL: CFURLRef): CFDictionaryRef; cdecl; external;
function CFBundleGetPackageInfoInDirectory(url: CFURLRef; var packageType: UInt32; var packageCreator: UInt32): Boolean; cdecl; external;
function CFBundleCopyResourceURL(bundle: CFBundleRef; resourceName: CFStringRef; resourceType: CFStringRef; subDirName: CFStringRef): CFURLRef; cdecl; external;
function CFBundleCopyResourceURLsOfType(bundle: CFBundleRef; resourceType: CFStringRef; subDirName: CFStringRef): CFArrayRef; cdecl; external;
function CFBundleCopyLocalizedString(bundle: CFBundleRef; key: CFStringRef; value: CFStringRef; tableName: CFStringRef): CFStringRef; cdecl; external;
function CFBundleCopyResourceURLInDirectory(bundleURL: CFURLRef; resourceName: CFStringRef; resourceType: CFStringRef; subDirName: CFStringRef): CFURLRef; cdecl; external;
function CFBundleCopyResourceURLsOfTypeInDirectory(bundleURL: CFURLRef; resourceType: CFStringRef; subDirName: CFStringRef): CFArrayRef; cdecl; external;
function CFBundleCopyBundleLocalizations(bundle: CFBundleRef): CFArrayRef; cdecl; external;
function CFBundleCopyPreferredLocalizationsFromArray(locArray: CFArrayRef): CFArrayRef; cdecl; external;
function CFBundleCopyLocalizationsForPreferences(locArray: CFArrayRef; prefArray: CFArrayRef): CFArrayRef; cdecl; external;
function CFBundleCopyResourceURLForLocalization(bundle: CFBundleRef; resourceName: CFStringRef; resourceType: CFStringRef; subDirName: CFStringRef; localizationName: CFStringRef): CFURLRef; cdecl; external;
function CFBundleCopyResourceURLsOfTypeForLocalization(bundle: CFBundleRef; resourceType: CFStringRef; subDirName: CFStringRef; localizationName: CFStringRef): CFArrayRef; cdecl; external;
function CFBundleCopyInfoDictionaryForURL(url: CFURLRef): CFDictionaryRef; cdecl; external;
function CFBundleCopyLocalizationsForURL(url: CFURLRef): CFArrayRef; cdecl; external;
function CFBundleCopyExecutableArchitecturesForURL(url: CFURLRef): CFArrayRef; cdecl; external; { available in 10_5, 2_0 }
function CFBundleCopyExecutableURL(bundle: CFBundleRef): CFURLRef; cdecl; external;
{$endif}

{$ifdef TYPES}
const
  kCFBundleExecutableArchitectureI386 = $00000007;
  kCFBundleExecutableArchitecturePPC = $00000012;
  kCFBundleExecutableArchitectureX86_64 = $01000007;
  kCFBundleExecutableArchitecturePPC64 = $01000012;
{$endif}

{$ifdef FUNCTIONS}
function CFBundleCopyExecutableArchitectures(bundle: CFBundleRef): CFArrayRef; cdecl; external; { available in 10_5, 2_0 }
function CFBundlePreflightExecutable(bundle: CFBundleRef; var error: CFErrorRef): Boolean; cdecl; external; { available in 10_5, 2_0 }
function CFBundleLoadExecutableAndReturnError(bundle: CFBundleRef; var error: CFErrorRef): Boolean; cdecl; external; { available in 10_5, 2_0 }
function CFBundleLoadExecutable(bundle: CFBundleRef): Boolean; cdecl; external;
function CFBundleIsExecutableLoaded(bundle: CFBundleRef): Boolean; cdecl; external;
procedure CFBundleUnloadExecutable(bundle: CFBundleRef); cdecl; external;
function CFBundleGetFunctionPointerForName(bundle: CFBundleRef; functionName: CFStringRef): pointer; cdecl; external;
procedure CFBundleGetFunctionPointersForNames(bundle: CFBundleRef; functionNames: CFArrayRef; ftbl: pointer { variable size array of pointer }); cdecl; external;
function CFBundleGetDataPointerForName(bundle: CFBundleRef; symbolName: CFStringRef): pointer; cdecl; external;
procedure CFBundleGetDataPointersForNames(bundle: CFBundleRef; symbolNames: CFArrayRef; stbl: pointer { variable size array of pointer }); cdecl; external;
function CFBundleCopyAuxiliaryExecutableURL(bundle: CFBundleRef; executableName: CFStringRef): CFURLRef; cdecl; external;
function CFBundleGetPlugIn(bundle: CFBundleRef): CFPlugInRef; cdecl; external;
{$endif}

{$if defined(__LP64__)}
{$ifdef TYPES}
type
  CFBundleRefNum = cint;
  CFBundleRefNumPtr = ^CFBundleRefNum;
{$endif}

{$else}
{$ifdef TYPES}
type
  CFBundleRefNum = SInt16;
  CFBundleRefNumPtr = ^CFBundleRefNum;
{$endif}

{$endif}
{$ifdef FUNCTIONS}
function CFBundleOpenBundleResourceMap(bundle: CFBundleRef): CFBundleRefNum; cdecl; external;
function CFBundleOpenBundleResourceFiles(bundle: CFBundleRef; var refNum: CFBundleRefNum; var localizedRefNum: CFBundleRefNum): SInt32; cdecl; external;
procedure CFBundleCloseBundleResourceMap(bundle: CFBundleRef; refNum: CFBundleRefNum); cdecl; external;
{$endif}

{$endif}
