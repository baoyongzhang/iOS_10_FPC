{ Parsed from Foundation.framework NSURLCredentialStorage.h }

{ Types from NSURLCredentialStorage }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  NSURLCredentialStoragePtr = ^NSURLCredentialStorage;
{$endif}

{$ifdef CLASSES}

type
  NSURLCredentialStorage = objcclass external (NSObject)
  private
    _internal: NSURLCredentialStorageInternal;
  public
    {$if defined(FOUNDATION_SWIFT_SDK_EPOCH_AT_LEAST)}
    function sharedCredentialStorage: NSURLCredentialStorage; message 'sharedCredentialStorage';
    {$endif}
    function credentialsForProtectionSpace (space: NSURLProtectionSpace): nullable NSDictionaryPtr; message 'credentialsForProtectionSpace:';
    function allCredentials: NSDictionary *>Ptr; message 'allCredentials';
    procedure setCredential_forProtectionSpace (credential: NSURLCredential; space: NSURLProtectionSpace); message 'setCredential:forProtectionSpace:';
    procedure removeCredential_forProtectionSpace (credential: NSURLCredential; space: NSURLProtectionSpace); message 'removeCredential:forProtectionSpace:';
    procedure removeCredential_forProtectionSpace_options (credential: NSURLCredential; space: NSURLProtectionSpace; options: nullable NSDictionaryPtr); message 'removeCredential:forProtectionSpace:options:'; { available in 10_9, 7_0 }
    function defaultCredentialForProtectionSpace (space: NSURLProtectionSpace): nullable NSURLCredentialPtr; message 'defaultCredentialForProtectionSpace:';
    procedure setDefaultCredential_forProtectionSpace (credential: NSURLCredential; space: NSURLProtectionSpace); message 'setDefaultCredential:forProtectionSpace:';
  end;


type
  NSURLCredentialStorage_NSURLSessionTaskAdditions = objccategory external name 'NSURLSessionTaskAdditions' (NSURLCredentialStorage)
    procedure getCredentialsForProtectionSpace_task_completionHandler (protectionSpace: NSURLProtectionSpace; task: NSURLSessionTask; completionHandler: OpaqueCBlock); message 'getCredentialsForProtectionSpace:task:completionHandler:'; { available in 10_10, 8_0 }
    procedure setCredential_forProtectionSpace_task (credential: NSURLCredential; protectionSpace: NSURLProtectionSpace; task: NSURLSessionTask); message 'setCredential:forProtectionSpace:task:'; { available in 10_10, 8_0 }
    procedure removeCredential_forProtectionSpace_options_task (credential: NSURLCredential; protectionSpace: NSURLProtectionSpace; options: nullable NSDictionaryPtr; task: NSURLSessionTask); message 'removeCredential:forProtectionSpace:options:task:'; { available in 10_10, 8_0 }
    procedure getDefaultCredentialForProtectionSpace_task_completionHandler (space: NSURLProtectionSpace; task: NSURLSessionTask; completionHandler: OpaqueCBlock); message 'getDefaultCredentialForProtectionSpace:task:completionHandler:'; { available in 10_10, 8_0 }
    procedure setDefaultCredential_forProtectionSpace_task (credential: NSURLCredential; protectionSpace: NSURLProtectionSpace; task: NSURLSessionTask); message 'setDefaultCredential:forProtectionSpace:task:'; { available in 10_10, 8_0 }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSURLCredentialStorageChangedNotification: NSNotificationName; cvar; external;
  NSURLCredentialStorageRemoveSynchronizableCredentials: NSString { available in 10_9, 7_0 }; cvar; external;
{$endif}

