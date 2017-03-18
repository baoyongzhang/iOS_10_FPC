{ Parsed from Intents.framework INPreferences.h }

{$ifdef TYPES}
type
  INPreferencesPtr = ^INPreferences;
{$endif}

{$ifdef CLASSES}

type
  INPreferences = objcclass external (NSObject)
  public
    class function siriAuthorizationStatus: INSiriAuthorizationStatus; message 'siriAuthorizationStatus';
    class procedure requestSiriAuthorization (handler: OpaqueCBlock); message 'requestSiriAuthorization:';
    class function siriLanguageCode: NSString; message 'siriLanguageCode';
  end;
{$endif}

