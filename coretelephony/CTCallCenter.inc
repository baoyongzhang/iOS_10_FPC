{ Parsed from CoreTelephony.framework CTCallCenter.h }

{$ifdef TYPES}
type
  CTCallCenterPtr = ^CTCallCenter;
{$endif}

{$ifdef CLASSES}

type
  CTCallCenter = objcclass external (NSObject)
  public
    function currentCalls: CTCall *ProtocolPtr; message 'currentCalls';
    procedure setCallEventHandler(newValue: OpaqueCBlock); message 'setCallEventHandler:';
    function callEventHandler: OpaqueCBlock; message 'callEventHandler';
  end;
{$endif}

