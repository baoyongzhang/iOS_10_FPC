{ Parsed from HomeKit.framework HMAction.h }

{$ifdef TYPES}
type
  HMActionPtr = ^HMAction;
{$endif}

{$ifdef CLASSES}

type
  HMAction = objcclass external (NSObject)
  public
    function uniqueIdentifier: NSUUID; message 'uniqueIdentifier';
  end;
{$endif}

