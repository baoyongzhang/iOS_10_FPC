{ Parsed from CoreSpotlight.framework CSSearchableIndex.h }

{$ifdef TYPES}
type
  CSSearchableIndexPtr = ^CSSearchableIndex;
  CSSearchableIndexDelegateProtocolPtr = ^CSSearchableIndexDelegateProtocol;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  CS_TVOS_UNAVAILABLE: NSString *CSIndexErrorDomain { available in NA, 9_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  CSIndexErrorCode = NSInteger;
  CSIndexErrorCodePtr = ^CSIndexErrorCode;

const
  CSIndexErrorCodeUnknownError = -1;
  CSIndexErrorCodeIndexUnavailableError = -1000;
  CSIndexErrorCodeInvalidItemError = -1001;
  CSIndexErrorCodeInvalidClientStateError = -1002;
  CSIndexErrorCodeRemoteConnectionError = -1003;
  CSIndexErrorCodeQuotaExceeded = -1004;
  CSIndexErrorCodeIndexingUnsupported = -1005;
{$endif}

{$ifdef CLASSES}

type
  CSSearchableIndex = objcclass external (NSObject)
  public
    procedure setIndexDelegate(newValue: CSSearchableIndexDelegateProtocol); message 'setIndexDelegate:';
    function indexDelegate: CSSearchableIndexDelegateProtocol; message 'indexDelegate';
    class function isIndexingAvailable: boolean; message 'isIndexingAvailable';
    class function defaultSearchableIndex: instancetype; message 'defaultSearchableIndex';
    function initWithName (name: NSString): instancetype; message 'initWithName:';
    function initWithName_protectionClass (name: NSString; protectionClass: nullable NSStringPtr): instancetype; message 'initWithName:protectionClass:';
    procedure indexSearchableItems_completionHandler (items: CSSearchableItem *ProtocolPtr; completionHandler: void (^ __nullable)(NSError * __nullable error)); message 'indexSearchableItems:completionHandler:';
    procedure deleteSearchableItemsWithIdentifiers_completionHandler (identifiers: NSString *ProtocolPtr; completionHandler: void (^ __nullable)(NSError * __nullable error)); message 'deleteSearchableItemsWithIdentifiers:completionHandler:';
    procedure deleteSearchableItemsWithDomainIdentifiers_completionHandler (domainIdentifiers: NSString *ProtocolPtr; completionHandler: void (^ __nullable)(NSError * __nullable error)); message 'deleteSearchableItemsWithDomainIdentifiers:completionHandler:';
    procedure deleteAllSearchableItemsWithCompletionHandler (completionHandler: void (^ __nullable)(NSError * __nullable error)); message 'deleteAllSearchableItemsWithCompletionHandler:';
  end;


type
  CSOptionalBatching = objccategory external (CSSearchableIndex)
    procedure beginIndexBatch; message 'beginIndexBatch';
    procedure endIndexBatchWithClientState_completionHandler (clientState: NSData; completionHandler: void (^ __nullable)(NSError * __nullable error)); message 'endIndexBatchWithClientState:completionHandler:';
    procedure fetchLastClientStateWithCompletionHandler (completionHandler: OpaqueCBlock); message 'fetchLastClientStateWithCompletionHandler:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  CSSearchableIndexDelegateProtocol = objcprotocol external name 'CSSearchableIndexDelegate' (NSObjectProtocol)
  required
    procedure searchableIndex_reindexAllSearchableItemsWithAcknowledgementHandler (searchableIndex: CSSearchableIndex; acknowledgementHandler: OpaqueCBlock); message 'searchableIndex:reindexAllSearchableItemsWithAcknowledgementHandler:';
    procedure searchableIndex_reindexSearchableItemsWithIdentifiers_acknowledgementHandler (searchableIndex: CSSearchableIndex; identifiers: NSString *ProtocolPtr; acknowledgementHandler: OpaqueCBlock); message 'searchableIndex:reindexSearchableItemsWithIdentifiers:acknowledgementHandler:';
  optional
    procedure searchableIndexDidThrottle (searchableIndex: CSSearchableIndex); message 'searchableIndexDidThrottle:';
    procedure searchableIndexDidFinishThrottle (searchableIndex: CSSearchableIndex); message 'searchableIndexDidFinishThrottle:';
  end;
{$endif}

