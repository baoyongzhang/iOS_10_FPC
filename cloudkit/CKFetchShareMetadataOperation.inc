{ Parsed from CloudKit.framework CKFetchShareMetadataOperation.h }

{$ifdef TYPES}
type
  CKFetchShareMetadataOperationPtr = ^CKFetchShareMetadataOperation;
{$endif}

{$ifdef CLASSES}

type
  CKFetchShareMetadataOperation = objcclass external (CKOperation)
  public
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithShareURLs (shareURLs: NSURL *ProtocolPtr): instancetype; message 'initWithShareURLs:';
    procedure setShareURLs(newValue: NSURL *ProtocolPtr); message 'setShareURLs:';
    function shareURLs: NSURL *ProtocolPtr; message 'shareURLs';
    procedure setShouldFetchRootRecord(newValue: boolean); message 'setShouldFetchRootRecord:';
    function shouldFetchRootRecord: boolean; message 'shouldFetchRootRecord';
    procedure setRootRecordDesiredKeys(newValue: NSString *ProtocolPtr); message 'setRootRecordDesiredKeys:';
    function rootRecordDesiredKeys: NSString *ProtocolPtr; message 'rootRecordDesiredKeys';
    procedure setPerShareMetadataBlock(newValue: OpaqueCBlock); message 'setPerShareMetadataBlock:';
    function perShareMetadataBlock: OpaqueCBlock; message 'perShareMetadataBlock';
    procedure setFetchShareMetadataCompletionBlock(newValue: OpaqueCBlock); message 'setFetchShareMetadataCompletionBlock:';
    function fetchShareMetadataCompletionBlock: OpaqueCBlock; message 'fetchShareMetadataCompletionBlock';
  end;
{$endif}

