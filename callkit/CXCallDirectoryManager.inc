{ Parsed from CallKit.framework CXCallDirectoryManager.h }

{$ifdef TYPES}
type
  CXCallDirectoryManagerPtr = ^CXCallDirectoryManager;
{$endif}

{$ifdef TYPES}
type
  CXCallDirectoryEnabledStatus = NSInteger;
  CXCallDirectoryEnabledStatusPtr = ^CXCallDirectoryEnabledStatus;

const
  CXCallDirectoryEnabledStatusUnknown = 0;
  CXCallDirectoryEnabledStatusDisabled = 1;
  CXCallDirectoryEnabledStatusEnabled = 2;
{$endif}

{$ifdef CLASSES}

type
  CXCallDirectoryManager = objcclass external (NSObject)
  public
    function sharedInstance: CXCallDirectoryManager; message 'sharedInstance';
    procedure reloadExtensionWithIdentifier_completionHandler (identifier: NSString; completion: OpaqueCBlock); message 'reloadExtensionWithIdentifier:completionHandler:';
    procedure getEnabledStatusForExtensionWithIdentifier_completionHandler (identifier: NSString; completion: OpaqueCBlock); message 'getEnabledStatusForExtensionWithIdentifier:completionHandler:';
  end;
{$endif}

