{ Parsed from NetworkExtension.framework NETunnelProvider.h }

{$ifdef TYPES}
type
  NETunnelProviderPtr = ^NETunnelProvider;
{$endif}

{$ifdef TYPES}
type
  NETunnelProviderError = NSInteger;
  NETunnelProviderErrorPtr = ^NETunnelProviderError;

const
  NETunnelProviderErrorNetworkSettingsInvalid = 1;
  NETunnelProviderErrorNetworkSettingsCanceled = 2;
  NETunnelProviderErrorNetworkSettingsFailed = 3;

type
  NETunnelProviderRoutingMethod = NSInteger;
  NETunnelProviderRoutingMethodPtr = ^NETunnelProviderRoutingMethod;

const
  NETunnelProviderRoutingMethodDestinationIP = 1;
  NETunnelProviderRoutingMethodSourceApplication = 2;
{$endif}

{$ifdef CLASSES}

type
  NETunnelProvider = objcclass external (NEProvider)
  public
    procedure handleAppMessage_completionHandler (messageData: NSData; completionHandler: OpaqueCBlock); message 'handleAppMessage:completionHandler:'; { available in 10_11, 9_0 }
    procedure setTunnelNetworkSettings_completionHandler (tunnelNetworkSettings: nullable NETunnelNetworkSettingsPtr; completionHandler: OpaqueCBlock); message 'setTunnelNetworkSettings:completionHandler:'; { available in 10_11, 9_0 }
    function protocolConfiguration: NEVPNProtocol; message 'protocolConfiguration';
    function appRules: NEAppRule *ProtocolPtr; message 'appRules';
    function routingMethod: NETunnelProviderRoutingMethod; message 'routingMethod';
    procedure setReasserting(newValue: boolean); message 'setReasserting:';
    function reasserting: boolean; message 'reasserting';
  end;
{$endif}

