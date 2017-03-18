{ Parsed from CoreSpotlight.framework CSSearchQuery.h }

{$ifdef TYPES}
type
  CSSearchQueryPtr = ^CSSearchQuery;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  CS_TVOS_UNAVAILABLE: NSString *CSSearchQueryErrorDomain { available in NA, 10_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  CSSearchQueryErrorCode = NSInteger;
  CSSearchQueryErrorCodePtr = ^CSSearchQueryErrorCode;

const
  CSSearchQueryErrorCodeUnknown = -2000;
  CSSearchQueryErrorCodeIndexUnreachable = -2001;
  CSSearchQueryErrorCodeInvalidQuery = -2002;
  CSSearchQueryErrorCodeCancelled = -2003;
{$endif}

{$ifdef CLASSES}

type
  CSSearchQuery = objcclass external (NSObject)
  public
    function init: instancetype; message 'init';
    function initWithQueryString_attributes (queryString: NSString; attributes: NSString *Protocol * _Nullable): instancetype; message 'initWithQueryString:attributes:';
    function isCancelled: boolean; message 'isCancelled';
    function foundItemCount: NSUInteger; message 'foundItemCount';
    procedure setFoundItemsHandler(newValue: OpaqueCBlock); message 'setFoundItemsHandler:';
    function foundItemsHandler: OpaqueCBlock; message 'foundItemsHandler';
    procedure setCompletionHandler(newValue: OpaqueCBlock); message 'setCompletionHandler:';
    function completionHandler: OpaqueCBlock; message 'completionHandler';
    procedure setProtectionClasses(newValue: NSString *ProtocolPtr); message 'setProtectionClasses:';
    function protectionClasses: NSString *ProtocolPtr; message 'protectionClasses';
    procedure start; message 'start';
    procedure cancel; message 'cancel';
  end;
{$endif}

