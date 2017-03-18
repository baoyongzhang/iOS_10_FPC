{ Parsed from CloudKit.framework CKAcceptSharesOperation.h }

{$ifdef TYPES}
type
  CKAcceptSharesOperationPtr = ^CKAcceptSharesOperation;
{$endif}

{$ifdef CLASSES}

type
  CKAcceptSharesOperation = objcclass external (CKOperation)
  public
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithShareMetadatas (shareMetadatas: CKShareMetadata *ProtocolPtr): instancetype; message 'initWithShareMetadatas:';
    procedure setShareMetadatas(newValue: CKShareMetadata *ProtocolPtr); message 'setShareMetadatas:';
    function shareMetadatas: CKShareMetadata *ProtocolPtr; message 'shareMetadatas';
    procedure setPerShareCompletionBlock(newValue: OpaqueCBlock); message 'setPerShareCompletionBlock:';
    function perShareCompletionBlock: OpaqueCBlock; message 'perShareCompletionBlock';
    procedure setAcceptSharesCompletionBlock(newValue: OpaqueCBlock); message 'setAcceptSharesCompletionBlock:';
    function acceptSharesCompletionBlock: OpaqueCBlock; message 'acceptSharesCompletionBlock';
  end;
{$endif}

