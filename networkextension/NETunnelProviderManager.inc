{ Parsed from NetworkExtension.framework NETunnelProviderManager.h }

{$ifdef TYPES}
type
  NETunnelProviderManagerPtr = ^NETunnelProviderManager;
{$endif}

{$ifdef CLASSES}

type
  NETunnelProviderManager = objcclass external (NEVPNManager)
  public
    class procedure loadAllFromPreferencesWithCompletionHandler (completionHandler: OpaqueCBlock); message 'loadAllFromPreferencesWithCompletionHandler:'; { available in 10_11, 9_0 }
    function copyAppRules: nullable NEAppRule *ProtocolPtr; message 'copyAppRules'; { available in 10_11, 9_0 }
    function routingMethod: NETunnelProviderRoutingMethod; message 'routingMethod';
  end;
{$endif}

