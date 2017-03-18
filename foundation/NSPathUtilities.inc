{ Parsed from Foundation.framework NSPathUtilities.h }

{ Types from NSStringPathExtensions }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
{$endif}

{$ifdef CLASSES}

type
  NSStringPathExtensions = objccategory external (NSString)
    class function pathWithComponents (components: NSString *ProtocolPtr): NSString; message 'pathWithComponents:';
    function pathComponents: NSString *ProtocolPtr; message 'pathComponents';
    function isAbsolutePath: boolean; message 'isAbsolutePath';
    function lastPathComponent: NSString; message 'lastPathComponent';
    function stringByDeletingLastPathComponent: NSString; message 'stringByDeletingLastPathComponent';
    function stringByAppendingPathComponent (str: NSString): NSString; message 'stringByAppendingPathComponent:';
    function pathExtension: NSString; message 'pathExtension';
    function stringByDeletingPathExtension: NSString; message 'stringByDeletingPathExtension';
    function stringByAppendingPathExtension (str: NSString): nullable NSStringPtr; message 'stringByAppendingPathExtension:';
    function stringByAbbreviatingWithTildeInPath: NSString; message 'stringByAbbreviatingWithTildeInPath';
    function stringByExpandingTildeInPath: NSString; message 'stringByExpandingTildeInPath';
    function stringByStandardizingPath: NSString; message 'stringByStandardizingPath';
    function stringByResolvingSymlinksInPath: NSString; message 'stringByResolvingSymlinksInPath';
    function stringsByAppendingPaths (paths: NSString *ProtocolPtr): NSString *ProtocolPtr; message 'stringsByAppendingPaths:';
    {$if defined(FOUNDATION_SWIFT_SDK_EPOCH_AT_LEAST)}
    function completePathIntoString_caseSensitive_matchesIntoArray_filterTypes (outputName: NSString * _Nullable * _Nullable; flag: boolean; outputArray: NSString *Protocol * _Nullable * _Nullable; filterTypes: nullable NSString *ProtocolPtr): NSUInteger; message 'completePathIntoString:caseSensitive:matchesIntoArray:filterTypes:';
    {$endif}
    function fileSystemRepresentation: PChar; message 'fileSystemRepresentation';
    function getFileSystemRepresentation_maxLength (cname: PChar; max: NSUInteger): boolean; message 'getFileSystemRepresentation:maxLength:';
  end;


type
  NSArray = objcclass external (NSObject, ObjectTypeProtocol)
  public
    function pathsMatchingExtensions (filterTypes: NSString *ProtocolPtr): NSString *ProtocolPtr; message 'pathsMatchingExtensions:';
  end;
{$endif}

{$ifdef FUNCTIONS}
function NSUserName: NSString; cdecl; external;
function NSFullUserName: NSString; cdecl; external;
function NSHomeDirectory: NSString; cdecl; external;
function NSHomeDirectoryForUser(userName: NSString* _Nullable): NSString * _Nullable; cdecl; external;
function NSTemporaryDirectory: NSString; cdecl; external;
function NSOpenStepRootDirectory: NSString; cdecl; external;
{$endif}

{$ifdef TYPES}
type
  NSSearchPathDirectory = NSUInteger;
  NSSearchPathDirectoryPtr = ^NSSearchPathDirectory;

const
  NSApplicationDirectory = 1;
  NSDemoApplicationDirectory = 2;
  NSDeveloperApplicationDirectory = 3;
  NSAdminApplicationDirectory = 4;
  NSLibraryDirectory = 5;
  NSDeveloperDirectory = 6;
  NSUserDirectory = 7;
  NSDocumentationDirectory = 8;
  NSDocumentDirectory = 9;
  NSCoreServiceDirectory = 10;
  NSAutosavedInformationDirectory = 11 { available in 10_6, 4_0 };
  NSDesktopDirectory = 12;
  NSCachesDirectory = 13;
  NSApplicationSupportDirectory = 14;
  NSDownloadsDirectory = 15 { available in 10_5, 2_0 };
  NSInputMethodsDirectory = 16 { available in 10_6, 4_0 };
  NSMoviesDirectory = 17 { available in 10_6, 4_0 };
  NSMusicDirectory = 18 { available in 10_6, 4_0 };
  NSPicturesDirectory = 19 { available in 10_6, 4_0 };
  NSPrinterDescriptionDirectory = 20 { available in 10_6, 4_0 };
  NSSharedPublicDirectory = 21 { available in 10_6, 4_0 };
  NSPreferencePanesDirectory = 22 { available in 10_6, 4_0 };
  NSApplicationScriptsDirectory = 23 { available in 10_8, NA };
  NSItemReplacementDirectory = 99 { available in 10_6, 4_0 };
  NSAllApplicationsDirectory = 100;
  NSAllLibrariesDirectory = 101;
  NSTrashDirectory = 102 { available in 10_8, NA };

type
  NSSearchPathDomainMask = NSUInteger;
  NSSearchPathDomainMaskPtr = ^NSSearchPathDomainMask;

const
  NSUserDomainMask = 1;
  NSLocalDomainMask = 2;
  NSNetworkDomainMask = 4;
  NSSystemDomainMask = 8;
  NSAllDomainsMask = $0ffff;
{$endif}

{$ifdef FUNCTIONS}
function NSSearchPathForDirectoriesInDomains(directory: NSSearchPathDirectory; domainMask: NSSearchPathDomainMask; expandTilde: boolean): NSString *ProtocolPtr; cdecl; external;
{$endif}

