{ Parsed from CallKit.framework CXSetGroupCallAction.h }

{$ifdef TYPES}
type
  CXSetGroupCallActionPtr = ^CXSetGroupCallAction;
{$endif}

{$ifdef CLASSES}

type
  CXSetGroupCallAction = objcclass external (CXCallAction)
  public
    function initWithCallUUID_callUUIDToGroupWith (callUUID_: NSUUID; callUUIDToGroupWith: nullable NSUUIDPtr): instancetype; message 'initWithCallUUID:callUUIDToGroupWith:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCallUUID (callUUID_: NSUUID): instancetype; message 'initWithCallUUID:';
    procedure setCallUUIDToGroupWith(newValue: NSUUID); message 'setCallUUIDToGroupWith:';
    function callUUIDToGroupWith: NSUUID; message 'callUUIDToGroupWith';
  end;
{$endif}

