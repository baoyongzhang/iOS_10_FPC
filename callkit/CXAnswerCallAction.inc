{ Parsed from CallKit.framework CXAnswerCallAction.h }

{$ifdef TYPES}
type
  CXAnswerCallActionPtr = ^CXAnswerCallAction;
{$endif}

{$ifdef CLASSES}

type
  CXAnswerCallAction = objcclass external (CXCallAction)
  public
    procedure fulfillWithDateConnected (dateConnected: NSDate); message 'fulfillWithDateConnected:';
  end;
{$endif}

