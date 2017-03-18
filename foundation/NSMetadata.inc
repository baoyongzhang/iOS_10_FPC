{ Parsed from Foundation.framework NSMetadata.h }

{$ifdef TYPES}
type
  NSMetadataQueryPtr = ^NSMetadataQuery;
  NSMetadataItemPtr = ^NSMetadataItem;
  NSMetadataQueryAttributeValueTuplePtr = ^NSMetadataQueryAttributeValueTuple;
  NSMetadataQueryResultGroupPtr = ^NSMetadataQueryResultGroup;
  NSMetadataQueryDelegateProtocolPtr = ^NSMetadataQueryDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  NSMetadataQuery = objcclass external (NSObject)
  private
    _flags: NSUInteger;
    _interval: NSTimeInterval;
    _private:array[0..10] of id;
    _reserved: pointer;
  public
    procedure setDelegate(newValue: NSMetadataQueryDelegateProtocol); message 'setDelegate:';
    function delegate: NSMetadataQueryDelegateProtocol; message 'delegate';
    procedure setPredicate(newValue: NSPredicate); message 'setPredicate:';
    function predicate: NSPredicate; message 'predicate';
    procedure setSortDescriptors(newValue: NSSortDescriptor *ProtocolPtr); message 'setSortDescriptors:';
    function sortDescriptors: NSSortDescriptor *ProtocolPtr; message 'sortDescriptors';
    procedure setValueListAttributes(newValue: NSString *ProtocolPtr); message 'setValueListAttributes:';
    function valueListAttributes: NSString *ProtocolPtr; message 'valueListAttributes';
    procedure setGroupingAttributes(newValue: NSString *ProtocolPtr); message 'setGroupingAttributes:';
    function groupingAttributes: NSString *ProtocolPtr; message 'groupingAttributes';
    procedure setNotificationBatchingInterval(newValue: NSTimeInterval); message 'setNotificationBatchingInterval:';
    function notificationBatchingInterval: NSTimeInterval; message 'notificationBatchingInterval';
    procedure setSearchScopes(newValue: NSArray); message 'setSearchScopes:';
    function searchScopes: NSArray; message 'searchScopes';
    procedure setSearchItems(newValue: NSArray); message 'setSearchItems:';
    function searchItems: NSArray; message 'searchItems';
    procedure setOperationQueue(newValue: NSOperationQueue); message 'setOperationQueue:';
    function operationQueue: NSOperationQueue; message 'operationQueue';
    function startQuery: boolean; message 'startQuery';
    procedure stopQuery; message 'stopQuery';
    function isStarted: boolean; message 'isStarted';
    function isGathering: boolean; message 'isGathering';
    function isStopped: boolean; message 'isStopped';
    procedure disableUpdates; message 'disableUpdates';
    procedure enableUpdates; message 'enableUpdates';
    function resultCount: NSUInteger; message 'resultCount';
    function resultAtIndex (idx: NSUInteger): id; message 'resultAtIndex:';
    procedure enumerateResultsUsingBlock (block: void (NS_NOESCAPE ^)(id result, NSUInteger idx, BOOL *stop)); message 'enumerateResultsUsingBlock:'; { available in 10_9, 7_0 }
    procedure enumerateResultsWithOptions_usingBlock (opts: NSEnumerationOptions; block: void (NS_NOESCAPE ^)(id result, NSUInteger idx, BOOL *stop)); message 'enumerateResultsWithOptions:usingBlock:'; { available in 10_9, 7_0 }
    function results: NSArray; message 'results';
    function indexOfResult (result_: id): NSUInteger; message 'indexOfResult:';
    function valueLists: NSDictionary *>Ptr; message 'valueLists';
    function groupedResults: NSMetadataQueryResultGroup *ProtocolPtr; message 'groupedResults';
    function valueOfAttribute_forResultAtIndex (attrName: NSString; idx: NSUInteger): nullable id; message 'valueOfAttribute:forResultAtIndex:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSMetadataQueryDelegateProtocol = objcprotocol external name 'NSMetadataQueryDelegate' (NSObjectProtocol)
  optional
    function metadataQuery_replacementObjectForResultObject (query: NSMetadataQuery; result_: NSMetadataItem): id; message 'metadataQuery:replacementObjectForResultObject:';
    function metadataQuery_replacementValueForAttribute_value (query: NSMetadataQuery; attrName: NSString; attrValue: id): id; message 'metadataQuery:replacementValueForAttribute:value:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSMetadataQueryDidStartGatheringNotification: NSNotificationName { available in 10_4, 5_0 }; cvar; external;
  NSMetadataQueryGatheringProgressNotification: NSNotificationName { available in 10_4, 5_0 }; cvar; external;
  NSMetadataQueryDidFinishGatheringNotification: NSNotificationName { available in 10_4, 5_0 }; cvar; external;
  NSMetadataQueryDidUpdateNotification: NSNotificationName { available in 10_4, 5_0 }; cvar; external;
  NSMetadataQueryUpdateAddedItemsKey: NSString { available in 10_9, 8_0 }; cvar; external;
  NSMetadataQueryUpdateChangedItemsKey: NSString { available in 10_9, 8_0 }; cvar; external;
  NSMetadataQueryUpdateRemovedItemsKey: NSString { available in 10_9, 8_0 }; cvar; external;
  NSMetadataQueryResultContentRelevanceAttribute: NSString { available in 10_4, 5_0 }; cvar; external;
  NSMetadataQueryUserHomeScope: NSString { available in 10_4 }; cvar; external;
  NSMetadataQueryLocalComputerScope: NSString { available in 10_4 }; cvar; external;
  NSMetadataQueryNetworkScope: NSString { available in 10_4 }; cvar; external;
  NSMetadataQueryIndexedLocalComputerScope: NSString { available in 10_9 }; cvar; external;
  NSMetadataQueryIndexedNetworkScope: NSString { available in 10_9 }; cvar; external;
  NSMetadataQueryUbiquitousDocumentsScope: NSString { available in 10_7, 5_0 }; cvar; external;
  NSMetadataQueryUbiquitousDataScope: NSString { available in 10_7, 5_0 }; cvar; external;
  NSMetadataQueryAccessibleUbiquitousExternalDocumentsScope: NSString { available in 10_10, 8_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSMetadataItem = objcclass external (NSObject)
  private
    _item: id;
    _reserved: pointer;
  public
    function initWithURL (url: NSURL): nullable instancetype; message 'initWithURL:'; { available in 10_9 }
    function valueForAttribute (key: NSString): nullable id; message 'valueForAttribute:';
    function valuesForAttributes (keys: NSString *ProtocolPtr): nullable NSDictionaryPtr; message 'valuesForAttributes:';
    function attributes: NSString *ProtocolPtr; message 'attributes';
  end;

type
  NSMetadataQueryAttributeValueTuple = objcclass external (NSObject)
  private
    _attr: id;
    _value: id;
    _count: NSUInteger;
    _reserved: pointer;
  public
    function attribute: NSString; message 'attribute';
    function value: id; message 'value';
    function count: NSUInteger; message 'count';
  end;

type
  NSMetadataQueryResultGroup = objcclass external (NSObject)
  private
    _private:array[0..8] of id;
    _private2:array[0..0] of NSUInteger;
    _reserved: pointer;
  public
    function attribute: NSString; message 'attribute';
    function value: id; message 'value';
    function subgroups: NSMetadataQueryResultGroup *ProtocolPtr; message 'subgroups';
    function resultCount: NSUInteger; message 'resultCount';
    function resultAtIndex (idx: NSUInteger): id; message 'resultAtIndex:';
    function results: NSArray; message 'results';
  end;
{$endif}

