{ Parsed from Foundation.framework NSFileManager.h }

{ Types from NSFileManager }
{$ifdef TYPES}





{$endif}


{ Types from NSDirectoryEnumerator }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  NSFileManagerPtr = ^NSFileManager;
  NSDirectoryEnumeratorPtr = ^NSDirectoryEnumerator;
{$endif}

{$ifdef TYPES}

const
  NSFoundationVersionWithFileManagerResourceForkSupport = 412;

type
  NSVolumeEnumerationOptions = NSUInteger;
  NSVolumeEnumerationOptionsPtr = ^NSVolumeEnumerationOptions;

const
  NSVolumeEnumerationSkipHiddenVolumes = 1 shl 1;
  NSVolumeEnumerationProduceFileReferenceURLs = 1 shl 2;

type
  NSDirectoryEnumerationOptions = NSUInteger;
  NSDirectoryEnumerationOptionsPtr = ^NSDirectoryEnumerationOptions;

const
  NSDirectoryEnumerationSkipsSubdirectoryDescendants = 1 shl 0;
  NSDirectoryEnumerationSkipsPackageDescendants = 1 shl 1;
  NSDirectoryEnumerationSkipsHiddenFiles = 1 shl 2;

type
  NSFileManagerItemReplacementOptions = NSUInteger;
  NSFileManagerItemReplacementOptionsPtr = ^NSFileManagerItemReplacementOptions;

const
  NSFileManagerItemReplacementUsingNewMetadataOnly = 1 shl 0;
  NSFileManagerItemReplacementWithoutDeletingBackupItem = 1 shl 1;

type
  NSURLRelationship = NSInteger;
  NSURLRelationshipPtr = ^NSURLRelationship;

const
  NSURLRelationshipContains = 0;
  NSURLRelationshipSame = 1;
  NSURLRelationshipOther = 2;

type
  NSFileManagerUnmountOptions = NSUInteger;
  NSFileManagerUnmountOptionsPtr = ^NSFileManagerUnmountOptions;

const
  NSFileManagerUnmountAllPartitionsAndEjectDisk = 1 shl 0;
  NSFileManagerUnmountWithoutUI = 1 shl 1;
{$endif}

{$if defined(FOUNDATION_SWIFT_SDK_EPOCH_AT_LEAST)}
{$ifdef EXTERNAL_SYMBOLS}
var
  NSFileManagerUnmountDissentingProcessIdentifierErrorKey: NSString { available in 10_11, NA }; cvar; external;
{$endif}

{$else}
{$ifdef EXTERNAL_SYMBOLS}
var
  NSFileManagerUnmountDissentingProcessIdentifierErrorKey: NSErrorUserInfoKey { available in 10_11, NA }; cvar; external;
{$endif}

{$endif}
{$ifdef EXTERNAL_SYMBOLS}
var
  NSUbiquityIdentityDidChangeNotification: NSNotificationName { available in 10_8, 6_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSFileManager = objcclass external (NSObject)
  public
    {$if defined(FOUNDATION_SWIFT_SDK_EPOCH_AT_LEAST)}
    function defaultManager: NSFileManager; message 'defaultManager';
    {$endif}
    function mountedVolumeURLsIncludingResourceValuesForKeys_options (propertyKeys: nullable NSURLResourceKeyProtocolPtr; options: NSVolumeEnumerationOptions): nullable NSURL *ProtocolPtr; message 'mountedVolumeURLsIncludingResourceValuesForKeys:options:'; { available in 10_6, 4_0 }
    procedure unmountVolumeAtURL_options_completionHandler (url: NSURL; mask: NSFileManagerUnmountOptions; completionHandler: OpaqueCBlock); message 'unmountVolumeAtURL:options:completionHandler:'; { available in 10_11, NA }
    function contentsOfDirectoryAtURL_includingPropertiesForKeys_options_error (url: NSURL; keys: nullable NSURLResourceKeyProtocolPtr; mask: NSDirectoryEnumerationOptions; error: NSErrorPtr): nullable NSURL *ProtocolPtr; message 'contentsOfDirectoryAtURL:includingPropertiesForKeys:options:error:'; { available in 10_6, 4_0 }
    function URLsForDirectory_inDomains (directory: NSSearchPathDirectory; domainMask: NSSearchPathDomainMask): NSURL *ProtocolPtr; message 'URLsForDirectory:inDomains:'; { available in 10_6, 4_0 }
    function URLForDirectory_inDomain_appropriateForURL_create_error (directory: NSSearchPathDirectory; domain: NSSearchPathDomainMask; url: nullable NSURLPtr; shouldCreate: boolean; error: NSErrorPtr): nullable NSURLPtr; message 'URLForDirectory:inDomain:appropriateForURL:create:error:'; { available in 10_6, 4_0 }
    function getRelationship_ofDirectoryAtURL_toItemAtURL_error (outRelationship: NSURLRelationshipPtr; directoryURL: NSURL; otherURL: NSURL; error: NSErrorPtr): boolean; message 'getRelationship:ofDirectoryAtURL:toItemAtURL:error:'; { available in 10_10, 8_0 }
    function getRelationship_ofDirectory_inDomain_toItemAtURL_error (outRelationship: NSURLRelationshipPtr; directory: NSSearchPathDirectory; domainMask: NSSearchPathDomainMask; url: NSURL; error: NSErrorPtr): boolean; message 'getRelationship:ofDirectory:inDomain:toItemAtURL:error:'; { available in 10_10, 8_0 }
    function createDirectoryAtURL_withIntermediateDirectories_attributes_error (url: NSURL; createIntermediates: boolean; attributes: nullable NSDictionaryPtr; error: NSErrorPtr): boolean; message 'createDirectoryAtURL:withIntermediateDirectories:attributes:error:'; { available in 10_7, 5_0 }
    function createSymbolicLinkAtURL_withDestinationURL_error (url: NSURL; destURL: NSURL; error: NSErrorPtr): boolean; message 'createSymbolicLinkAtURL:withDestinationURL:error:'; { available in 10_7, 5_0 }
    procedure setDelegate(newValue: NSFileManagerDelegateProtocol); message 'setDelegate:';
    function delegate: NSFileManagerDelegateProtocol; message 'delegate';
    {$if defined(FOUNDATION_SWIFT_SDK_EPOCH_AT_LEAST)}
    function setAttributes_ofItemAtPath_error (attributes: NSDictionary; path: NSString; error: NSErrorPtr): boolean; message 'setAttributes:ofItemAtPath:error:'; { available in 10_5, 2_0 }
    {$endif}
    function createDirectoryAtPath_withIntermediateDirectories_attributes_error (path: NSString; createIntermediates: boolean; attributes: nullable NSDictionaryPtr; error: NSErrorPtr): boolean; message 'createDirectoryAtPath:withIntermediateDirectories:attributes:error:'; { available in 10_5, 2_0 }
    function contentsOfDirectoryAtPath_error (path: NSString; error: NSErrorPtr): nullable NSString *ProtocolPtr; message 'contentsOfDirectoryAtPath:error:'; { available in 10_5, 2_0 }
    function subpathsOfDirectoryAtPath_error (path: NSString; error: NSErrorPtr): nullable NSString *ProtocolPtr; message 'subpathsOfDirectoryAtPath:error:'; { available in 10_5, 2_0 }
    {$if defined(FOUNDATION_SWIFT_SDK_EPOCH_AT_LEAST)}
    function attributesOfItemAtPath_error (path: NSString; error: NSErrorPtr): nullable NSDictionaryPtr; message 'attributesOfItemAtPath:error:'; { available in 10_5, 2_0 }
    {$endif}
    {$if defined(FOUNDATION_SWIFT_SDK_EPOCH_AT_LEAST)}
    function attributesOfFileSystemForPath_error (path: NSString; error: NSErrorPtr): nullable NSDictionaryPtr; message 'attributesOfFileSystemForPath:error:'; { available in 10_5, 2_0 }
    {$endif}
    function createSymbolicLinkAtPath_withDestinationPath_error (path: NSString; destPath: NSString; error: NSErrorPtr): boolean; message 'createSymbolicLinkAtPath:withDestinationPath:error:'; { available in 10_5, 2_0 }
    function destinationOfSymbolicLinkAtPath_error (path: NSString; error: NSErrorPtr): nullable NSStringPtr; message 'destinationOfSymbolicLinkAtPath:error:'; { available in 10_5, 2_0 }
    function copyItemAtPath_toPath_error (srcPath: NSString; dstPath: NSString; error: NSErrorPtr): boolean; message 'copyItemAtPath:toPath:error:'; { available in 10_5, 2_0 }
    function moveItemAtPath_toPath_error (srcPath: NSString; dstPath: NSString; error: NSErrorPtr): boolean; message 'moveItemAtPath:toPath:error:'; { available in 10_5, 2_0 }
    function linkItemAtPath_toPath_error (srcPath: NSString; dstPath: NSString; error: NSErrorPtr): boolean; message 'linkItemAtPath:toPath:error:'; { available in 10_5, 2_0 }
    function removeItemAtPath_error (path: NSString; error: NSErrorPtr): boolean; message 'removeItemAtPath:error:'; { available in 10_5, 2_0 }
    function copyItemAtURL_toURL_error (srcURL: NSURL; dstURL: NSURL; error: NSErrorPtr): boolean; message 'copyItemAtURL:toURL:error:'; { available in 10_6, 4_0 }
    function moveItemAtURL_toURL_error (srcURL: NSURL; dstURL: NSURL; error: NSErrorPtr): boolean; message 'moveItemAtURL:toURL:error:'; { available in 10_6, 4_0 }
    function linkItemAtURL_toURL_error (srcURL: NSURL; dstURL: NSURL; error: NSErrorPtr): boolean; message 'linkItemAtURL:toURL:error:'; { available in 10_6, 4_0 }
    function removeItemAtURL_error (URL: NSURL; error: NSErrorPtr): boolean; message 'removeItemAtURL:error:'; { available in 10_6, 4_0 }
    function trashItemAtURL_resultingItemURL_error (url: NSURL; outResultingURL: NSURL * _Nullable * _Nullable; error: NSErrorPtr): boolean; message 'trashItemAtURL:resultingItemURL:error:'; { available in 10_8 }
    function fileAttributesAtPath_traverseLink (path: NSString; yorn: boolean): nullable NSDictionaryPtr; message 'fileAttributesAtPath:traverseLink:'; deprecated 'in 10_0, 10_5, 2_0, 2_0';
    function changeFileAttributes_atPath (attributes: NSDictionary; path: NSString): boolean; message 'changeFileAttributes:atPath:'; deprecated 'in 10_0, 10_5, 2_0, 2_0';
    function directoryContentsAtPath (path: NSString): nullable NSArrayPtr; message 'directoryContentsAtPath:'; deprecated 'in 10_0, 10_5, 2_0, 2_0';
    function fileSystemAttributesAtPath (path: NSString): nullable NSDictionaryPtr; message 'fileSystemAttributesAtPath:'; deprecated 'in 10_0, 10_5, 2_0, 2_0';
    function pathContentOfSymbolicLinkAtPath (path: NSString): nullable NSStringPtr; message 'pathContentOfSymbolicLinkAtPath:'; deprecated 'in 10_0, 10_5, 2_0, 2_0';
    function createSymbolicLinkAtPath_pathContent (path: NSString; otherpath: NSString): boolean; message 'createSymbolicLinkAtPath:pathContent:'; deprecated 'in 10_0, 10_5, 2_0, 2_0';
    function createDirectoryAtPath_attributes (path: NSString; attributes: NSDictionary): boolean; message 'createDirectoryAtPath:attributes:'; deprecated 'in 10_0, 10_5, 2_0, 2_0';
    {$if (defined(TARGET_OS_MAC) and not (defined(TARGET_OS_EMBEDDED) or defined(TARGET_OS_IPHONE))) or defined(TARGET_OS_WIN32)}
    function linkPath_toPath_handler (src: NSString; dest: NSString; handler: nullable id): boolean; message 'linkPath:toPath:handler:'; deprecated 'in 10_0, 10_5, 2_0, 2_0';
    function copyPath_toPath_handler (src: NSString; dest: NSString; handler: nullable id): boolean; message 'copyPath:toPath:handler:'; deprecated 'in 10_0, 10_5, 2_0, 2_0';
    function movePath_toPath_handler (src: NSString; dest: NSString; handler: nullable id): boolean; message 'movePath:toPath:handler:'; deprecated 'in 10_0, 10_5, 2_0, 2_0';
    function removeFileAtPath_handler (path: NSString; handler: nullable id): boolean; message 'removeFileAtPath:handler:'; deprecated 'in 10_0, 10_5, 2_0, 2_0';
    {$endif}
    function currentDirectoryPath: NSString; message 'currentDirectoryPath';
    function changeCurrentDirectoryPath (path: NSString): boolean; message 'changeCurrentDirectoryPath:';
    function fileExistsAtPath (path: NSString): boolean; message 'fileExistsAtPath:';
    function fileExistsAtPath_isDirectory (path: NSString; isDirectory: nullable BOOLPtr): boolean; message 'fileExistsAtPath:isDirectory:';
    function isReadableFileAtPath (path: NSString): boolean; message 'isReadableFileAtPath:';
    function isWritableFileAtPath (path: NSString): boolean; message 'isWritableFileAtPath:';
    function isExecutableFileAtPath (path: NSString): boolean; message 'isExecutableFileAtPath:';
    function isDeletableFileAtPath (path: NSString): boolean; message 'isDeletableFileAtPath:';
    function contentsEqualAtPath_andPath (path1: NSString; path2: NSString): boolean; message 'contentsEqualAtPath:andPath:';
    function displayNameAtPath (path: NSString): NSString; message 'displayNameAtPath:';
    function componentsToDisplayForPath (path: NSString): nullable NSString *ProtocolPtr; message 'componentsToDisplayForPath:';
    function enumeratorAtPath (path: NSString): nullable NSString *ProtocolPtr; message 'enumeratorAtPath:';
    function enumeratorAtURL_includingPropertiesForKeys_options_errorHandler (url: NSURL; keys: nullable NSURLResourceKeyProtocolPtr; mask: NSDirectoryEnumerationOptions; handler: OpaqueCBlock): nullable NSURL *ProtocolPtr; message 'enumeratorAtURL:includingPropertiesForKeys:options:errorHandler:'; { available in 10_6, 4_0 }
    function subpathsAtPath (path: NSString): nullable NSString *ProtocolPtr; message 'subpathsAtPath:';
    function contentsAtPath (path: NSString): nullable NSDataPtr; message 'contentsAtPath:';
    function createFileAtPath_contents_attributes (path: NSString; data: nullable NSDataPtr; attr: nullable NSDictionaryPtr): boolean; message 'createFileAtPath:contents:attributes:';
    function fileSystemRepresentationWithPath (path: NSString): PChar; message 'fileSystemRepresentationWithPath:';
    function stringWithFileSystemRepresentation_length (str: PChar; len: NSUInteger): NSString; message 'stringWithFileSystemRepresentation:length:';
    function replaceItemAtURL_withItemAtURL_backupItemName_options_resultingItemURL_error (originalItemURL: NSURL; newItemURL: NSURL; backupItemName: nullable NSStringPtr; options: NSFileManagerItemReplacementOptions; resultingURL: NSURL * _Nullable * _Nullable; error: NSErrorPtr): boolean; message 'replaceItemAtURL:withItemAtURL:backupItemName:options:resultingItemURL:error:'; { available in 10_6, 4_0 }
    function setUbiquitous_itemAtURL_destinationURL_error (flag: boolean; url: NSURL; destinationURL: NSURL; error: NSErrorPtr): boolean; message 'setUbiquitous:itemAtURL:destinationURL:error:'; { available in 10_7, 5_0 }
    function isUbiquitousItemAtURL (url: NSURL): boolean; message 'isUbiquitousItemAtURL:'; { available in 10_7, 5_0 }
    function startDownloadingUbiquitousItemAtURL_error (url: NSURL; error: NSErrorPtr): boolean; message 'startDownloadingUbiquitousItemAtURL:error:'; { available in 10_7, 5_0 }
    function evictUbiquitousItemAtURL_error (url: NSURL; error: NSErrorPtr): boolean; message 'evictUbiquitousItemAtURL:error:'; { available in 10_7, 5_0 }
    function URLForUbiquityContainerIdentifier (containerIdentifier: nullable NSStringPtr): nullable NSURLPtr; message 'URLForUbiquityContainerIdentifier:'; { available in 10_7, 5_0 }
    function URLForPublishingUbiquitousItemAtURL_expirationDate_error (url: NSURL; outDate: NSDate * _Nullable * _Nullable; error: NSErrorPtr): nullable NSURLPtr; message 'URLForPublishingUbiquitousItemAtURL:expirationDate:error:'; { available in 10_7, 5_0 }
    function ubiquityIdentityToken: id; message 'ubiquityIdentityToken';
    function containerURLForSecurityApplicationGroupIdentifier (groupIdentifier: NSString): nullable NSURLPtr; message 'containerURLForSecurityApplicationGroupIdentifier:'; { available in 10_8, 7_0 }
  end;


type
  NSFileManager_NSUserInformation = objccategory external name 'NSUserInformation' (NSFileManager)
    function ios: NSURL *homeDirectoryForCurrentUser ); message 'ios';
    function watchos: NSURL *homeDirectoryForCurrentUser ); message 'watchos';

    function tvos): NSURL *homeDirectoryForCurrentUser ); message 'tvos)';
    function temporaryDirectory: NSURL ios(10.0), watchos(3.0),Ptr; message 'temporaryDirectory';
    function tvos(10.0)): NSURL ios(10.0), watchos(3.0),Ptr; message 'tvos(10.0))';
    function homeDirectoryForUser (userName: NSString): nullable NSURLPtr; message 'homeDirectoryForUser:'; { available in macosx(10.12 }
  end;

type
  NSCopyLinkMoveHandler = objccategory external (NSObject)
    function fileManager_shouldProceedAfterError (fm: NSFileManager; errorInfo: NSDictionary): boolean; message 'fileManager:shouldProceedAfterError:'; deprecated 'in 10_0, 10_5, 2_0, 2_0';
    procedure fileManager_willProcessPath (fm: NSFileManager; path: NSString); message 'fileManager:willProcessPath:'; deprecated 'in 10_0, 10_5, 2_0, 2_0';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSFileManagerDelegateProtocol = objcprotocol external name 'NSFileManagerDelegate' (NSObjectProtocol)
  optional
    function fileManager_shouldCopyItemAtPath_toPath (fileManager: NSFileManager; srcPath: NSString; dstPath: NSString): boolean; message 'fileManager:shouldCopyItemAtPath:toPath:';
    function fileManager_shouldCopyItemAtURL_toURL (fileManager: NSFileManager; srcURL: NSURL; dstURL: NSURL): boolean; message 'fileManager:shouldCopyItemAtURL:toURL:'; { available in 10_6, 4_0 }
    function fileManager_shouldProceedAfterError_copyingItemAtPath_toPath (fileManager: NSFileManager; error: NSError; srcPath: NSString; dstPath: NSString): boolean; message 'fileManager:shouldProceedAfterError:copyingItemAtPath:toPath:';
    function fileManager_shouldProceedAfterError_copyingItemAtURL_toURL (fileManager: NSFileManager; error: NSError; srcURL: NSURL; dstURL: NSURL): boolean; message 'fileManager:shouldProceedAfterError:copyingItemAtURL:toURL:'; { available in 10_6, 4_0 }
    function fileManager_shouldMoveItemAtPath_toPath (fileManager: NSFileManager; srcPath: NSString; dstPath: NSString): boolean; message 'fileManager:shouldMoveItemAtPath:toPath:';
    function fileManager_shouldMoveItemAtURL_toURL (fileManager: NSFileManager; srcURL: NSURL; dstURL: NSURL): boolean; message 'fileManager:shouldMoveItemAtURL:toURL:'; { available in 10_6, 4_0 }
    function fileManager_shouldProceedAfterError_movingItemAtPath_toPath (fileManager: NSFileManager; error: NSError; srcPath: NSString; dstPath: NSString): boolean; message 'fileManager:shouldProceedAfterError:movingItemAtPath:toPath:';
    function fileManager_shouldProceedAfterError_movingItemAtURL_toURL (fileManager: NSFileManager; error: NSError; srcURL: NSURL; dstURL: NSURL): boolean; message 'fileManager:shouldProceedAfterError:movingItemAtURL:toURL:'; { available in 10_6, 4_0 }
    function fileManager_shouldLinkItemAtPath_toPath (fileManager: NSFileManager; srcPath: NSString; dstPath: NSString): boolean; message 'fileManager:shouldLinkItemAtPath:toPath:';
    function fileManager_shouldLinkItemAtURL_toURL (fileManager: NSFileManager; srcURL: NSURL; dstURL: NSURL): boolean; message 'fileManager:shouldLinkItemAtURL:toURL:'; { available in 10_6, 4_0 }
    function fileManager_shouldProceedAfterError_linkingItemAtPath_toPath (fileManager: NSFileManager; error: NSError; srcPath: NSString; dstPath: NSString): boolean; message 'fileManager:shouldProceedAfterError:linkingItemAtPath:toPath:';
    function fileManager_shouldProceedAfterError_linkingItemAtURL_toURL (fileManager: NSFileManager; error: NSError; srcURL: NSURL; dstURL: NSURL): boolean; message 'fileManager:shouldProceedAfterError:linkingItemAtURL:toURL:'; { available in 10_6, 4_0 }
    function fileManager_shouldRemoveItemAtPath (fileManager: NSFileManager; path: NSString): boolean; message 'fileManager:shouldRemoveItemAtPath:';
    function fileManager_shouldRemoveItemAtURL (fileManager: NSFileManager; URL: NSURL): boolean; message 'fileManager:shouldRemoveItemAtURL:'; { available in 10_6, 4_0 }
    function fileManager_shouldProceedAfterError_removingItemAtPath (fileManager: NSFileManager; error: NSError; path: NSString): boolean; message 'fileManager:shouldProceedAfterError:removingItemAtPath:';
    function fileManager_shouldProceedAfterError_removingItemAtURL (fileManager: NSFileManager; error: NSError; URL: NSURL): boolean; message 'fileManager:shouldProceedAfterError:removingItemAtURL:'; { available in 10_6, 4_0 }
  end;
{$endif}

{$ifdef CLASSES}

type
  NSDirectoryEnumerator = objcclass external (NSObject, ObjectTypeProtocol)
  public
    {$if defined(FOUNDATION_SWIFT_SDK_EPOCH_AT_LEAST)}
    function fileAttributes: NSDictionary; message 'fileAttributes';
    function directoryAttributes: NSDictionary; message 'directoryAttributes';
    {$endif}
    procedure skipDescendents; message 'skipDescendents';
    function level: NSUInteger; message 'level';
    procedure skipDescendants; message 'skipDescendants'; { available in 10_6, 4_0 }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSFileType: NSFileAttributeKey; cvar; external;
  NSFileTypeDirectory: NSFileAttributeType; cvar; external;
  NSFileTypeRegular: NSFileAttributeType; cvar; external;
  NSFileTypeSymbolicLink: NSFileAttributeType; cvar; external;
  NSFileTypeSocket: NSFileAttributeType; cvar; external;
  NSFileTypeCharacterSpecial: NSFileAttributeType; cvar; external;
  NSFileTypeBlockSpecial: NSFileAttributeType; cvar; external;
  NSFileTypeUnknown: NSFileAttributeType; cvar; external;
  NSFileSize: NSFileAttributeKey; cvar; external;
  NSFileModificationDate: NSFileAttributeKey; cvar; external;
  NSFileReferenceCount: NSFileAttributeKey; cvar; external;
  NSFileDeviceIdentifier: NSFileAttributeKey; cvar; external;
  NSFileOwnerAccountName: NSFileAttributeKey; cvar; external;
  NSFileGroupOwnerAccountName: NSFileAttributeKey; cvar; external;
  NSFilePosixPermissions: NSFileAttributeKey; cvar; external;
  NSFileSystemNumber: NSFileAttributeKey; cvar; external;
  NSFileSystemFileNumber: NSFileAttributeKey; cvar; external;
  NSFileExtensionHidden: NSFileAttributeKey; cvar; external;
  NSFileHFSCreatorCode: NSFileAttributeKey; cvar; external;
  NSFileHFSTypeCode: NSFileAttributeKey; cvar; external;
  NSFileImmutable: NSFileAttributeKey; cvar; external;
  NSFileAppendOnly: NSFileAttributeKey; cvar; external;
  NSFileCreationDate: NSFileAttributeKey; cvar; external;
  NSFileOwnerAccountID: NSFileAttributeKey; cvar; external;
  NSFileGroupOwnerAccountID: NSFileAttributeKey; cvar; external;
  NSFileBusy: NSFileAttributeKey; cvar; external;
  NSFileProtectionKey: NSFileAttributeKey { available in 4_0 }; cvar; external;
  NSFileProtectionNone: NSFileProtectionType { available in 4_0 }; cvar; external;
  NSFileProtectionComplete: NSFileProtectionType { available in 4_0 }; cvar; external;
  NSFileProtectionCompleteUnlessOpen: NSFileProtectionType { available in 5_0 }; cvar; external;
  NSFileProtectionCompleteUntilFirstUserAuthentication: NSFileProtectionType { available in 5_0 }; cvar; external;
  NSFileSystemSize: NSFileAttributeKey; cvar; external;
  NSFileSystemFreeSize: NSFileAttributeKey; cvar; external;
  NSFileSystemNodes: NSFileAttributeKey; cvar; external;
  NSFileSystemFreeNodes: NSFileAttributeKey; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSDictionary = objcclass external (NSObject, KeyTypeProtocol, ObjectTypeProtocol)
  public
    function fileSize: culonglong; message 'fileSize';
    function fileModificationDate: nullable NSDatePtr; message 'fileModificationDate';
    function fileType: nullable NSStringPtr; message 'fileType';
    function filePosixPermissions: NSUInteger; message 'filePosixPermissions';
    function fileOwnerAccountName: nullable NSStringPtr; message 'fileOwnerAccountName';
    function fileGroupOwnerAccountName: nullable NSStringPtr; message 'fileGroupOwnerAccountName';
    function fileSystemNumber: NSInteger; message 'fileSystemNumber';
    function fileSystemFileNumber: NSUInteger; message 'fileSystemFileNumber';
    function fileExtensionHidden: boolean; message 'fileExtensionHidden';
    function fileHFSCreatorCode: OSType; message 'fileHFSCreatorCode';
    function fileHFSTypeCode: OSType; message 'fileHFSTypeCode';
    function fileIsImmutable: boolean; message 'fileIsImmutable';
    function fileIsAppendOnly: boolean; message 'fileIsAppendOnly';
    function fileCreationDate: nullable NSDatePtr; message 'fileCreationDate';
    function fileOwnerAccountID: nullable NSNumberPtr; message 'fileOwnerAccountID';
    function fileGroupOwnerAccountID: nullable NSNumberPtr; message 'fileGroupOwnerAccountID';
  end;
{$endif}

