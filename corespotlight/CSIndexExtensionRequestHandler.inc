{ Parsed from CoreSpotlight.framework CSIndexExtensionRequestHandler.h }

{$ifdef TYPES}
type
  CSIndexExtensionRequestHandlerPtr = ^CSIndexExtensionRequestHandler;
{$endif}

{$ifdef CLASSES}

type
  CSIndexExtensionRequestHandler = objcclass external (NSObject, NSExtensionRequestHandlingProtocol, CSSearchableIndexDelegateProtocol)

    { Adopted protocols }
    procedure beginRequestWithExtensionContext (context: NSExtensionContext); message 'beginRequestWithExtensionContext:';
    procedure searchableIndex_reindexAllSearchableItemsWithAcknowledgementHandler (searchableIndex: CSSearchableIndex; acknowledgementHandler: OpaqueCBlock); message 'searchableIndex:reindexAllSearchableItemsWithAcknowledgementHandler:';
    procedure searchableIndex_reindexSearchableItemsWithIdentifiers_acknowledgementHandler (searchableIndex: CSSearchableIndex; identifiers: NSString *ProtocolPtr; acknowledgementHandler: OpaqueCBlock); message 'searchableIndex:reindexSearchableItemsWithIdentifiers:acknowledgementHandler:';
    procedure searchableIndexDidFinishThrottle (searchableIndex: CSSearchableIndex); message 'searchableIndexDidFinishThrottle:';
    procedure searchableIndexDidThrottle (searchableIndex: CSSearchableIndex); message 'searchableIndexDidThrottle:';
  end;
{$endif}

