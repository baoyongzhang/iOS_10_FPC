{ Parsed from CloudKit.framework CKOperation.h }

{$ifdef TYPES}
type
  CKOperationPtr = ^CKOperation;
{$endif}

{$ifdef CLASSES}

type
  CKOperation = objcclass external (NSOperation)
  public
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    procedure setContainer(newValue: CKContainer); message 'setContainer:';
    function container: CKContainer; message 'container';
    procedure setUsesBackgroundSession(newValue: boolean); message 'setUsesBackgroundSession:';
    function usesBackgroundSession: boolean; message 'usesBackgroundSession';
    procedure setAllowsCellularAccess(newValue: boolean); message 'setAllowsCellularAccess:';
    function allowsCellularAccess: boolean; message 'allowsCellularAccess';
    function operationID: NSString; message 'operationID';
    procedure setLongLived(newValue: boolean); message 'setLongLived:';
    function isLongLived: boolean; message 'isLongLived';
    procedure setTimeoutIntervalForRequest(newValue: NSTimeInterval); message 'setTimeoutIntervalForRequest:';
    function timeoutIntervalForRequest: NSTimeInterval; message 'timeoutIntervalForRequest';
    procedure setTimeoutIntervalForResource(newValue: NSTimeInterval); message 'setTimeoutIntervalForResource:';
    function timeoutIntervalForResource: NSTimeInterval; message 'timeoutIntervalForResource';
    procedure setLongLivedOperationWasPersistedBlock(newValue: OpaqueCBlock); message 'setLongLivedOperationWasPersistedBlock:';
    function longLivedOperationWasPersistedBlock: OpaqueCBlock; message 'longLivedOperationWasPersistedBlock';
  end;
{$endif}

