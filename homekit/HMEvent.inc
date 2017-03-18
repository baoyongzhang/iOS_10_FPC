{ Parsed from HomeKit.framework HMEvent.h }

{$ifdef TYPES}
type
  HMEventPtr = ^HMEvent;
{$endif}

{$ifdef CLASSES}

type
  HMEvent = objcclass external (NSObject)
  public
    function uniqueIdentifier: NSUUID; message 'uniqueIdentifier';
  end;
{$endif}

