{ Parsed from CallKit.framework CXCallAction.h }

{$ifdef TYPES}
type
  CXCallActionPtr = ^CXCallAction;
{$endif}

{$ifdef CLASSES}

type
  CXCallAction = objcclass external (CXAction)
  public
    function callUUID: NSUUID; message 'callUUID';
    function initWithCallUUID (callUUID_: NSUUID): instancetype; message 'initWithCallUUID:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function init: instancetype; message 'init';
  end;
{$endif}

