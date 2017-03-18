{ Parsed from CallKit.framework CXCall.h }

{$ifdef TYPES}
type
  CXCallPtr = ^CXCall;
{$endif}

{$ifdef CLASSES}

type
  CXCall = objcclass external (NSObject)
  public
    function UUID: NSUUID; message 'UUID';
    function isOutgoing: boolean; message 'isOutgoing';
    function isOnHold: boolean; message 'isOnHold';
    function hasConnected: boolean; message 'hasConnected';
    function hasEnded: boolean; message 'hasEnded';
    function init: instancetype; message 'init';
    function isEqualToCall (call: CXCall): boolean; message 'isEqualToCall:';
  end;
{$endif}

