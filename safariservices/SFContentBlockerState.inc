{ Parsed from SafariServices.framework SFContentBlockerState.h }

{$ifdef TYPES}
type
  SFContentBlockerStatePtr = ^SFContentBlockerState;
{$endif}

{$ifdef CLASSES}

type
  SFContentBlockerState = objcclass external (NSObject)
  public
    function isEnabled: boolean; message 'isEnabled';
  end;
{$endif}

