{ Parsed from Foundation.framework NSFileWrapper.h }

{$ifdef TYPES}
type
  NSFileWrapperPtr = ^NSFileWrapper;
{$endif}

{$ifdef TYPES}
type
  NSFileWrapperReadingOptions = NSUInteger;
  NSFileWrapperReadingOptionsPtr = ^NSFileWrapperReadingOptions;

const
  NSFileWrapperReadingImmediate = 1 shl 0;
  NSFileWrapperReadingWithoutMapping = 1 shl 1;

type
  NSFileWrapperWritingOptions = NSUInteger;
  NSFileWrapperWritingOptionsPtr = ^NSFileWrapperWritingOptions;

const
  NSFileWrapperWritingAtomic = 1 shl 0;
  NSFileWrapperWritingWithNameUpdating = 1 shl 1;
{$endif}

{$ifdef CLASSES}

type
  NSFileWrapper = objcclass external (NSObject, NSCodingProtocol)
  private
    _fileAttributes: NSDictionary;
    _preferredFileName: NSString;
    _fileName: NSString;
    _contents: id;
    _icon: id;
    _moreVars: id;
  public
    function initWithURL_options_error (url: NSURL; options: NSFileWrapperReadingOptions; outError: NSErrorPtr): nullable instancetype; message 'initWithURL:options:error:'; { available in 10_6, 4_0 }
    function initDirectoryWithFileWrappers (childrenByPreferredName: NSDictionary): instancetype; message 'initDirectoryWithFileWrappers:'; { NS_DESIGNATED_INITIALIZER }
    function initRegularFileWithContents (contents: NSData): instancetype; message 'initRegularFileWithContents:'; { NS_DESIGNATED_INITIALIZER }
    function initSymbolicLinkWithDestinationURL (url: NSURL): instancetype; message 'initSymbolicLinkWithDestinationURL:'; { available in 10_6, 4_0 }
    function initWithSerializedRepresentation (serializeRepresentation: NSData): nullable instancetype; message 'initWithSerializedRepresentation:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (inCoder: NSCoder): nullable instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function isDirectory: boolean; message 'isDirectory';
    function isRegularFile: boolean; message 'isRegularFile';
    function isSymbolicLink: boolean; message 'isSymbolicLink';
    procedure setPreferredFilename(newValue: NSString); message 'setPreferredFilename:';
    function preferredFilename: NSString; message 'preferredFilename';
    procedure setFilename(newValue: NSString); message 'setFilename:';
    function filename: NSString; message 'filename';
    procedure setFileAttributes(newValue: NSDictionary); message 'setFileAttributes:';
    function fileAttributes: NSDictionary; message 'fileAttributes';
    function matchesContentsOfURL (url: NSURL): boolean; message 'matchesContentsOfURL:'; { available in 10_6, 4_0 }
    function readFromURL_options_error (url: NSURL; options: NSFileWrapperReadingOptions; outError: NSErrorPtr): boolean; message 'readFromURL:options:error:'; { available in 10_6, 4_0 }
    function writeToURL_options_originalContentsURL_error (url: NSURL; options: NSFileWrapperWritingOptions; originalContentsURL: nullable NSURLPtr; outError: NSErrorPtr): boolean; message 'writeToURL:options:originalContentsURL:error:'; { available in 10_6, 4_0 }
    function serializedRepresentation: NSData; message 'serializedRepresentation';
    function addFileWrapper (child: NSFileWrapper): NSString; message 'addFileWrapper:';
    function addRegularFileWithContents_preferredFilename (data: NSData; fileName_: NSString): NSString; message 'addRegularFileWithContents:preferredFilename:';
    procedure removeFileWrapper (child: NSFileWrapper); message 'removeFileWrapper:';
    function fileWrappers: NSDictionary; message 'fileWrappers';
    function keyForFileWrapper (child: NSFileWrapper): nullable NSStringPtr; message 'keyForFileWrapper:';
    function regularFileContents: NSData; message 'regularFileContents';
    function symbolicLinkDestinationURL: NSURL; message 'symbolicLinkDestinationURL';

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
  end;
{$endif}

{$if (defined(TARGET_OS_MAC) and not (defined(TARGET_OS_EMBEDDED) or defined(TARGET_OS_IPHONE)))}
{$ifdef CLASSES}

type
  NSDeprecated = objccategory external (NSFileWrapper)
    function initWithPath (path: NSString): nullable id; message 'initWithPath:'; deprecated 'in 10_0, 10_10, "Use -initWithURL:options:error: instead."';
    function initSymbolicLinkWithDestination (path: NSString): id; message 'initSymbolicLinkWithDestination:'; deprecated 'in 10_0, 10_10, "Use -initSymbolicLinkWithDestinationURL: and -setPreferredFileName:, if necessary, instead."';
    function needsToBeUpdatedFromPath (path: NSString): boolean; message 'needsToBeUpdatedFromPath:'; deprecated 'in 10_0, 10_10, "Use -matchesContentsOfURL: instead."';
    function updateFromPath (path: NSString): boolean; message 'updateFromPath:'; deprecated 'in 10_0, 10_10, "Use -readFromURL:options:error: instead."';
    function writeToFile_atomically_updateFilenames (path: NSString; atomicFlag: boolean; updateFilenamesFlag: boolean): boolean; message 'writeToFile:atomically:updateFilenames:'; deprecated 'in 10_0, 10_10, "Use -writeToURL:options:originalContentsURL:error: instead."';
    function addFileWithPath (path: NSString): NSString; message 'addFileWithPath:'; deprecated 'in 10_0, 10_10, "Instantiate a new NSFileWrapper with -initWithURL:options:error:, send it -setPreferredFileName: if necessary, then use -addFileWrapper: instead."';
    function addSymbolicLinkWithDestination_preferredFilename (path: NSString; filename_: NSString): NSString; message 'addSymbolicLinkWithDestination:preferredFilename:'; deprecated 'in 10_0, 10_10, "Instantiate a new NSFileWrapper with -initWithSymbolicLinkDestinationURL:, send it -setPreferredFileName: if necessary, then use -addFileWrapper: instead."';
    function symbolicLinkDestination: NSString; message 'symbolicLinkDestination'; deprecated 'in 10_0, 10_10, "Use -symbolicLinkDestinationURL instead."';
  end;
{$endif}

{$endif}
