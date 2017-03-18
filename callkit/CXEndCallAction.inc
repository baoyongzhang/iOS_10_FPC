{ Parsed from CallKit.framework CXEndCallAction.h }

{$ifdef TYPES}
type
  CXEndCallActionPtr = ^CXEndCallAction;
{$endif}

{$ifdef CLASSES}

type
  CXEndCallAction = objcclass external (CXCallAction)
  public
    procedure fulfillWithDateEnded (dateEnded: NSDate); message 'fulfillWithDateEnded:';
  end;
{$endif}

