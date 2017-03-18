{ Parsed from NetworkExtension.framework NEAppProxyProviderManager.h }

{$ifdef TYPES}
type
  NEAppProxyProviderManagerPtr = ^NEAppProxyProviderManager;
{$endif}

{$ifdef CLASSES}

type
  NEAppProxyProviderManager = objcclass external (NETunnelProviderManager)
  public
    class procedure loadAllFromPreferencesWithCompletionHandler (completionHandler: OpaqueCBlock); message 'loadAllFromPreferencesWithCompletionHandler:'; { available in 10_11, 9_0 }
  end;
{$endif}

