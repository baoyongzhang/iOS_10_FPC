{ Parsed from NetworkExtension.framework NEFilterManager.h }

{$ifdef TYPES}
type
  NEFilterManagerPtr = ^NEFilterManager;
{$endif}

{$ifdef TYPES}
type
  NEFilterManagerError = NSInteger;
  NEFilterManagerErrorPtr = ^NEFilterManagerError;

const
  NEFilterManagerErrorConfigurationInvalid = 1;
  NEFilterManagerErrorConfigurationDisabled = 2;
  NEFilterManagerErrorConfigurationStale = 3;
  NEFilterManagerErrorConfigurationCannotBeRemoved = 4;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NEFilterErrorDomain: NSString { available in 10_11, 8_0 }; cvar; external;
  NEFilterConfigurationDidChangeNotification: NSString { available in 10_11, 8_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NEFilterManager = objcclass external (NSObject)
  public
    class function sharedManager: NEFilterManager; message 'sharedManager'; { available in 10_11, 8_0 }
    procedure loadFromPreferencesWithCompletionHandler (completionHandler: OpaqueCBlock); message 'loadFromPreferencesWithCompletionHandler:'; { available in 10_11, 8_0 }
    procedure removeFromPreferencesWithCompletionHandler (completionHandler: OpaqueCBlock); message 'removeFromPreferencesWithCompletionHandler:'; { available in 10_11, 8_0 }
    procedure saveToPreferencesWithCompletionHandler (completionHandler: OpaqueCBlock); message 'saveToPreferencesWithCompletionHandler:'; { available in 10_11, 8_0 }
    procedure setLocalizedDescription(newValue: NSString); message 'setLocalizedDescription:';
    function localizedDescription: NSString; message 'localizedDescription';
    procedure setProviderConfiguration(newValue: NEFilterProviderConfiguration); message 'setProviderConfiguration:';
    function providerConfiguration: NEFilterProviderConfiguration; message 'providerConfiguration';
    procedure setEnabled(newValue: boolean); message 'setEnabled:';
    function isEnabled: boolean; message 'isEnabled';
  end;
{$endif}

