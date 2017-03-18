{ Parsed from CallKit.framework CXCallDirectoryExtensionContext.h }

{$ifdef TYPES}
type
  CXCallDirectoryExtensionContextPtr = ^CXCallDirectoryExtensionContext;
  CXCallDirectoryExtensionContextDelegateProtocolPtr = ^CXCallDirectoryExtensionContextDelegateProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  CXCallDirectoryExtensionContextDelegateProtocol = objcprotocol external name 'CXCallDirectoryExtensionContextDelegate' (NSObjectProtocol)
    procedure requestFailedForExtensionContext_withError (extensionContext: CXCallDirectoryExtensionContext; error: NSError); message 'requestFailedForExtensionContext:withError:';
  end;
{$endif}

{$ifdef CLASSES}

type
  CXCallDirectoryExtensionContext = objcclass external (NSExtensionContext)
  public
    procedure setDelegate(newValue: CXCallDirectoryExtensionContextDelegateProtocol); message 'setDelegate:';
    function delegate: CXCallDirectoryExtensionContextDelegateProtocol; message 'delegate';
    procedure addBlockingEntryWithNextSequentialPhoneNumber (phoneNumber: CXCallDirectoryPhoneNumber); message 'addBlockingEntryWithNextSequentialPhoneNumber:';
    procedure addIdentificationEntryWithNextSequentialPhoneNumber_label (phoneNumber: CXCallDirectoryPhoneNumber; label_: NSString); message 'addIdentificationEntryWithNextSequentialPhoneNumber:label:';
    procedure completeRequestWithCompletionHandler (completion: OpaqueCBlock); message 'completeRequestWithCompletionHandler:';
    procedure completeRequestReturningItems_completionHandler (items: nullable NSArrayPtr; completionHandler: void (^__nullable)(BOOL expired)); message 'completeRequestReturningItems:completionHandler:';
  end;
{$endif}

