{ Parsed from CallKit.framework CXSetHeldCallAction.h }

{$ifdef TYPES}
type
  CXSetHeldCallActionPtr = ^CXSetHeldCallAction;
{$endif}

{$ifdef CLASSES}

type
  CXSetHeldCallAction = objcclass external (CXCallAction)
  public
    function initWithCallUUID_onHold (callUUID_: NSUUID; onHold: boolean): instancetype; message 'initWithCallUUID:onHold:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCallUUID (callUUID_: NSUUID): instancetype; message 'initWithCallUUID:';
    procedure setOnHold(newValue: boolean); message 'setOnHold:';
    function isOnHold: boolean; message 'isOnHold';
  end;
{$endif}

