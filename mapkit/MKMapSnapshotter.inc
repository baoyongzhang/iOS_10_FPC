{ Parsed from MapKit.framework MKMapSnapshotter.h }

{$ifdef TYPES}
type
  MKMapSnapshotterPtr = ^MKMapSnapshotter;
{$endif}

{$ifdef TYPES}
type
  MKMapSnapshotCompletionHandler = OpaqueCBlock { available in 9_2 };
{$endif}

{$ifdef CLASSES}

type
  MKMapSnapshotter = objcclass external (NSObject)
  public
    function initWithOptions (options: MKMapSnapshotOptions): instancetype; message 'initWithOptions:'; { NS_DESIGNATED_INITIALIZER }
    procedure startWithCompletionHandler (completionHandler: MKMapSnapshotCompletionHandler); message 'startWithCompletionHandler:';
    procedure startWithQueue_completionHandler (queue: dispatch_queue_t; completionHandler: MKMapSnapshotCompletionHandler); message 'startWithQueue:completionHandler:';
    procedure cancel; message 'cancel';
    function isLoading: boolean; message 'isLoading';
  end;
{$endif}

