{ Parsed from WebKit.framework WKWebsiteDataStore.h }

{$ifdef TYPES}
type
  WKWebsiteDataStorePtr = ^WKWebsiteDataStore;
{$endif}

{$if defined(WK_API_ENABLED)}
{$ifdef CLASSES}

type
  WKWebsiteDataStore = objcclass external (NSObject, NSCodingProtocol)
  public
    class function defaultDataStore: WKWebsiteDataStore; message 'defaultDataStore';
    class function nonPersistentDataStore: WKWebsiteDataStore; message 'nonPersistentDataStore';
    function init: instancetype; message 'init';
    function isPersistent: boolean; message 'isPersistent';
    class function allWebsiteDataTypes: NSString *ProtocolPtr; message 'allWebsiteDataTypes';
    procedure fetchDataRecordsOfTypes_completionHandler (dataTypes: NSString *ProtocolPtr; completionHandler: OpaqueCBlock); message 'fetchDataRecordsOfTypes:completionHandler:';
    procedure removeDataOfTypes_forDataRecords_completionHandler (dataTypes: NSString *ProtocolPtr; dataRecords: WKWebsiteDataRecord *ProtocolPtr; completionHandler: OpaqueCBlock); message 'removeDataOfTypes:forDataRecords:completionHandler:';
    procedure removeDataOfTypes_modifiedSince_completionHandler (websiteDataTypes: NSString *ProtocolPtr; date: NSDate; completionHandler: OpaqueCBlock); message 'removeDataOfTypes:modifiedSince:completionHandler:';

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
  end;
{$endif}

{$endif}
