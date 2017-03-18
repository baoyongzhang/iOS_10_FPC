{ Parsed from NetworkExtension.framework NEVPNManager.h }

{ Types from NEVPNManager }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  NEVPNManagerPtr = ^NEVPNManager;
{$endif}

{$ifdef TYPES}
type
  NEVPNError = NSInteger;
  NEVPNErrorPtr = ^NEVPNError;

const
  NEVPNErrorConfigurationInvalid = 1;
  NEVPNErrorConfigurationDisabled = 2;
  NEVPNErrorConnectionFailed = 3;
  NEVPNErrorConfigurationStale = 4;
  NEVPNErrorConfigurationReadWriteFailed = 5;
  NEVPNErrorConfigurationUnknown = 6;
{$endif}

{$ifdef CLASSES}

type
  NEVPNManager = objcclass external (NSObject)
  public
    class function sharedManager: NEVPNManager; message 'sharedManager'; { available in 10_11, 8_0 }
    procedure loadFromPreferencesWithCompletionHandler (completionHandler: OpaqueCBlock); message 'loadFromPreferencesWithCompletionHandler:'; { available in 10_11, 8_0 }
    procedure removeFromPreferencesWithCompletionHandler (completionHandler: OpaqueCBlock); message 'removeFromPreferencesWithCompletionHandler:'; { available in 10_11, 8_0 }
    procedure saveToPreferencesWithCompletionHandler (completionHandler: OpaqueCBlock); message 'saveToPreferencesWithCompletionHandler:'; { available in 10_11, 8_0 }
    {$if  not defined(TARGET_OS_IPHONE) and not defined(TARGET_IPHONE_SIMULATOR)}
    procedure setAuthorization (authorization: AuthorizationRef); message 'setAuthorization:'; { available in 10_11, NA }
    {$endif}
    procedure setOnDemandRules(newValue: NEOnDemandRule *ProtocolPtr); message 'setOnDemandRules:';
    function onDemandRules: NEOnDemandRule *ProtocolPtr; message 'onDemandRules';
    procedure setOnDemandEnabled(newValue: boolean); message 'setOnDemandEnabled:';
    function isOnDemandEnabled: boolean; message 'isOnDemandEnabled';
    procedure setLocalizedDescription(newValue: NSString); message 'setLocalizedDescription:';
    function localizedDescription: NSString; message 'localizedDescription';
    procedure setProtocol(newValue: NEVPNProtocol); message 'setProtocol:';
    function protocol: NEVPNProtocol; message 'protocol';
    procedure setProtocolConfiguration(newValue: NEVPNProtocol); message 'setProtocolConfiguration:';
    function protocolConfiguration: NEVPNProtocol; message 'protocolConfiguration';
    function connection: NEVPNConnection; message 'connection';
    procedure setEnabled(newValue: boolean); message 'setEnabled:';
    function isEnabled: boolean; message 'isEnabled';
  end;
{$endif}

