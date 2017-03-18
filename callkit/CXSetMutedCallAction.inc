{ Parsed from CallKit.framework CXSetMutedCallAction.h }

{$ifdef TYPES}
type
  CXSetMutedCallActionPtr = ^CXSetMutedCallAction;
{$endif}

{$ifdef CLASSES}

type
  CXSetMutedCallAction = objcclass external (CXCallAction)
  public
    function initWithCallUUID_muted (callUUID_: NSUUID; muted: boolean): instancetype; message 'initWithCallUUID:muted:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCallUUID (callUUID_: NSUUID): instancetype; message 'initWithCallUUID:';
    procedure setMuted(newValue: boolean); message 'setMuted:';
    function isMuted: boolean; message 'isMuted';
  end;
{$endif}

