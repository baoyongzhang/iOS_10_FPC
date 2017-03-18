{ Parsed from Foundation.framework NSFileVersion.h }

{$ifdef TYPES}
type
  NSFileVersionPtr = ^NSFileVersion;
{$endif}

{$ifdef TYPES}
type
  NSFileVersionAddingOptions = NSUInteger;
  NSFileVersionAddingOptionsPtr = ^NSFileVersionAddingOptions;

const
  NSFileVersionAddingByMoving = 1 shl 0;

type
  NSFileVersionReplacingOptions = NSUInteger;
  NSFileVersionReplacingOptionsPtr = ^NSFileVersionReplacingOptions;

const
  NSFileVersionReplacingByMoving = 1 shl 0;
{$endif}

{$ifdef CLASSES}

type
  NSFileVersion = objcclass external (NSObject)
  private
    _fileURL: NSURL;
    _addition: id;
    _deadVersionIdentifier: id;
    _nonLocalVersion: id;
    _contentsURL: NSURL;
    _isBackup: boolean;
    _localizedName: NSString;
    _localizedComputerName: NSString;
    _modificationDate: NSDate;
    _isResolved: boolean;
    _contentsURLIsAccessed: boolean;
    _reserved: id;
    _name: NSString;
  public
    class function currentVersionOfItemAtURL (url: NSURL): nullable NSFileVersionPtr; message 'currentVersionOfItemAtURL:';
    class function otherVersionsOfItemAtURL (url: NSURL): nullable NSFileVersion *ProtocolPtr; message 'otherVersionsOfItemAtURL:';
    class function unresolvedConflictVersionsOfItemAtURL (url: NSURL): nullable NSFileVersion *ProtocolPtr; message 'unresolvedConflictVersionsOfItemAtURL:';
    class procedure getNonlocalVersionsOfItemAtURL_completionHandler (url: NSURL; completionHandler: OpaqueCBlock); message 'getNonlocalVersionsOfItemAtURL:completionHandler:'; { available in 10_10, 8_0 }
    class function versionOfItemAtURL_forPersistentIdentifier (url: NSURL; persistentIdentifier: id): nullable NSFileVersionPtr; message 'versionOfItemAtURL:forPersistentIdentifier:';
    class function addVersionOfItemAtURL_withContentsOfURL_options_error (url: NSURL; contentsURL: NSURL; options: NSFileVersionAddingOptions; outError: NSErrorPtr): nullable NSFileVersionPtr; message 'addVersionOfItemAtURL:withContentsOfURL:options:error:'; { available in 10_7 }
    class function temporaryDirectoryURLForNewVersionOfItemAtURL (url: NSURL): NSURL; message 'temporaryDirectoryURLForNewVersionOfItemAtURL:'; { available in 10_7 }
    function URL: NSURL; message 'URL';
    function localizedName: NSString; message 'localizedName';
    function localizedNameOfSavingComputer: NSString; message 'localizedNameOfSavingComputer';
    function modificationDate: NSDate; message 'modificationDate';
    function persistentIdentifier: NSCodingProtocol; message 'persistentIdentifier';
    function isConflict: boolean; message 'isConflict';
    procedure setResolved(newValue: boolean); message 'setResolved:';
    function isResolved: boolean; message 'isResolved';
    procedure setDiscardable(newValue: boolean); message 'setDiscardable:';
    function isDiscardable: boolean; message 'isDiscardable';
    function hasLocalContents: boolean; message 'hasLocalContents';
    function hasThumbnail: boolean; message 'hasThumbnail';
    function replaceItemAtURL_options_error (url_: NSURL; options: NSFileVersionReplacingOptions; error: NSErrorPtr): nullable NSURLPtr; message 'replaceItemAtURL:options:error:';
    function removeAndReturnError (outError: NSErrorPtr): boolean; message 'removeAndReturnError:';
    class function removeOtherVersionsOfItemAtURL_error (url_: NSURL; outError: NSErrorPtr): boolean; message 'removeOtherVersionsOfItemAtURL:error:';
  end;
{$endif}

