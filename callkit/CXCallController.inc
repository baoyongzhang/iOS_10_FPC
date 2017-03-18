{ Parsed from CallKit.framework CXCallController.h }

{$ifdef TYPES}
type
  CXCallControllerPtr = ^CXCallController;
{$endif}

{$ifdef CLASSES}

type
  CXCallController = objcclass external (NSObject)
  public
    function init: instancetype; message 'init';
    function initWithQueue (queue: dispatch_queue_t): instancetype; message 'initWithQueue:'; { NS_DESIGNATED_INITIALIZER }
    function callObserver: CXCallObserver; message 'callObserver';
    procedure requestTransaction_completion (transaction: CXTransaction; completion: OpaqueCBlock); message 'requestTransaction:completion:';
  end;
{$endif}

