{ Parsed from SafariServices.framework SFContentBlockerManager.h }

{$ifdef TYPES}
type
  SFContentBlockerManagerPtr = ^SFContentBlockerManager;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  SFContentBlockerErrorDomain: NSString deprecated 'in 9_0, 10_0, "Please use SFErrorDomain."'; cvar; external;
{$endif}

{$ifdef TYPES}
type
  SFContentBlockerErrorCode = NSInteger;
  SFContentBlockerErrorCodePtr = ^SFContentBlockerErrorCode;

const
  SFContentBlockerNoExtensionFound = SFErrorNoExtensionFound deprecated 'in 9_0, 10_0, "Please use SFErrorNoExtensionFound."';
  SFContentBlockerNoAttachmentFound = SFErrorNoAttachmentFound deprecated 'in 9_0, 10_0, "Please use SFErrorNoAttachmentFound."';
  SFContentBlockerLoadingInterrupted = SFErrorLoadingInterrupted deprecated 'in 9_0, 10_0, "Please use SFErrorLoadingInterrupted."';
{$endif}

{$ifdef CLASSES}

type
  SFContentBlockerManager = objcclass external (NSObject)
  public
    class procedure reloadContentBlockerWithIdentifier_completionHandler (identifier: NSString; completionHandler: void (^_Nullable)(NSError *_Nullable error)); message 'reloadContentBlockerWithIdentifier:completionHandler:';
    class procedure getStateOfContentBlockerWithIdentifier_completionHandler (identifier: NSString; completionHandler: OpaqueCBlock); message 'getStateOfContentBlockerWithIdentifier:completionHandler:'; { available in 10_0 }
  end;
{$endif}

