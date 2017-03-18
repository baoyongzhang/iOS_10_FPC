{ Parsed from CallKit.framework CXCallObserver.h }

{$ifdef TYPES}
type
  CXCallObserverPtr = ^CXCallObserver;
  CXCallObserverDelegateProtocolPtr = ^CXCallObserverDelegateProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  CXCallObserverDelegateProtocol = objcprotocol external name 'CXCallObserverDelegate' (NSObjectProtocol)
    procedure callObserver_callChanged (callObserver: CXCallObserver; call: CXCall); message 'callObserver:callChanged:';
  end;
{$endif}

{$ifdef CLASSES}

type
  CXCallObserver = objcclass external (NSObject)
  public
    function calls: CXCall *ProtocolPtr; message 'calls';
    procedure setDelegate_queue (delegate: nullable CXCallObserverDelegateProtocol; queue: nullable dispatch_queue_t); message 'setDelegate:queue:';
  end;
{$endif}

