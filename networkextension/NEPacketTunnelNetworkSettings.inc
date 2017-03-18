{ Parsed from NetworkExtension.framework NEPacketTunnelNetworkSettings.h }

{$ifdef TYPES}
type
  NEPacketTunnelNetworkSettingsPtr = ^NEPacketTunnelNetworkSettings;
{$endif}

{$ifdef CLASSES}

type
  NEPacketTunnelNetworkSettings = objcclass external (NETunnelNetworkSettings)
  public
    procedure setIPv4Settings(newValue: NEIPv4Settings); message 'setIPv4Settings:';
    function IPv4Settings: NEIPv4Settings; message 'IPv4Settings';
    procedure setIPv6Settings(newValue: NEIPv6Settings); message 'setIPv6Settings:';
    function IPv6Settings: NEIPv6Settings; message 'IPv6Settings';
    procedure setTunnelOverheadBytes(newValue: NSNumber); message 'setTunnelOverheadBytes:';
    function tunnelOverheadBytes: NSNumber; message 'tunnelOverheadBytes';
    procedure setMTU(newValue: NSNumber); message 'setMTU:';
    function MTU: NSNumber; message 'MTU';
  end;
{$endif}

