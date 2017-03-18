{ Parsed from AdSupport.framework ASIdentifierManager.h }

{$ifdef TYPES}
type
  ASIdentifierManagerPtr = ^ASIdentifierManager;
{$endif}

{$ifdef CLASSES}

type
  ASIdentifierManager = objcclass external (NSObject)
  public
    class function sharedManager: ASIdentifierManager; message 'sharedManager';
    function advertisingIdentifier: NSUUID; message 'advertisingIdentifier';
    function isAdvertisingTrackingEnabled: boolean; message 'isAdvertisingTrackingEnabled';
  end;
{$endif}

