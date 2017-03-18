{ Parsed from CallKit.framework CXStartCallAction.h }

{$ifdef TYPES}
type
  CXStartCallActionPtr = ^CXStartCallAction;
{$endif}

{$ifdef CLASSES}

type
  CXStartCallAction = objcclass external (CXCallAction)
  public
    function initWithCallUUID_handle (callUUID_: NSUUID; handle: CXHandle): instancetype; message 'initWithCallUUID:handle:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCallUUID (callUUID_: NSUUID): instancetype; message 'initWithCallUUID:';
    procedure setHandle(newValue: CXHandle); message 'setHandle:';
    function handle: CXHandle; message 'handle';
    procedure setContactIdentifier(newValue: NSString); message 'setContactIdentifier:';
    function contactIdentifier: NSString; message 'contactIdentifier';
    procedure setVideo(newValue: boolean); message 'setVideo:';
    function isVideo: boolean; message 'isVideo';
    procedure fulfillWithDateStarted (dateStarted: NSDate); message 'fulfillWithDateStarted:';
  end;
{$endif}

