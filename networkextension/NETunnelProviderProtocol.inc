{ Parsed from NetworkExtension.framework NETunnelProviderProtocol.h }

{$ifdef TYPES}
type
  NETunnelProviderProtocolPtr = ^NETunnelProviderProtocol;
{$endif}

{$ifdef CLASSES}

type
  NETunnelProviderProtocol = objcclass external (NEVPNProtocol)
  public
    procedure setProviderConfiguration(newValue: NSDictionary); message 'setProviderConfiguration:';
    function providerConfiguration: NSDictionary; message 'providerConfiguration';
    procedure setProviderBundleIdentifier(newValue: NSString); message 'setProviderBundleIdentifier:';
    function providerBundleIdentifier: NSString; message 'providerBundleIdentifier';
  end;
{$endif}

