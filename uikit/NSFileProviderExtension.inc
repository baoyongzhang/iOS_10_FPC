{ Parsed from UIKit.framework NSFileProviderExtension.h }

{ Types from NSFileProviderExtension }
{$ifdef TYPES}


{$endif}


{$ifdef TYPES}
type
  NSFileProviderExtensionPtr = ^NSFileProviderExtension;
{$endif}

{$ifdef CLASSES}

type
  NSFileProviderExtension = objcclass external (NSObject)
  public
    class function writePlaceholderAtURL_withMetadata_error (placeholderURL: NSURL; metadata: NSDictionary; error: NSErrorPtr): boolean; message 'writePlaceholderAtURL:withMetadata:error:';
    class function placeholderURLForURL (url: NSURL): NSURL; message 'placeholderURLForURL:';
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function providerIdentifier: NSString; message 'providerIdentifier';
    {$else}
    function providerIdentifier: NSString; message 'providerIdentifier';
    {$endif}
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function documentStorageURL: NSURL; message 'documentStorageURL';
    {$else}
    function documentStorageURL: NSURL; message 'documentStorageURL';
    {$endif}
    function URLForItemWithPersistentIdentifier (identifier: NSString): nullable NSURLPtr; message 'URLForItemWithPersistentIdentifier:';
    function persistentIdentifierForItemAtURL (url: NSURL): nullable NSStringPtr; message 'persistentIdentifierForItemAtURL:';
    procedure providePlaceholderAtURL_completionHandler (url: NSURL; completionHandler: OpaqueCBlock); message 'providePlaceholderAtURL:completionHandler:';
    procedure startProvidingItemAtURL_completionHandler (url: NSURL; completionHandler: OpaqueCBlock); message 'startProvidingItemAtURL:completionHandler:';
    procedure itemChangedAtURL (url: NSURL); message 'itemChangedAtURL:';
    procedure stopProvidingItemAtURL (url: NSURL); message 'stopProvidingItemAtURL:';
  end;
{$endif}

