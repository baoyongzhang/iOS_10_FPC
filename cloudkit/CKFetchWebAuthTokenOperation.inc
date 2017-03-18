{ Parsed from CloudKit.framework CKFetchWebAuthTokenOperation.h }

{$ifdef TYPES}
type
  CKFetchWebAuthTokenOperationPtr = ^CKFetchWebAuthTokenOperation;
{$endif}

{$ifdef CLASSES}

type
  CKFetchWebAuthTokenOperation = objcclass external (CKDatabaseOperation)
  public
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithAPIToken (APIToken: NSString): instancetype; message 'initWithAPIToken:';
    procedure setAPIToken(newValue: NSString); message 'setAPIToken:';
    function APIToken: NSString; message 'APIToken';
    procedure setFetchWebAuthTokenCompletionBlock(newValue: OpaqueCBlock); message 'setFetchWebAuthTokenCompletionBlock:';
    function fetchWebAuthTokenCompletionBlock: OpaqueCBlock; message 'fetchWebAuthTokenCompletionBlock';
  end;
{$endif}

