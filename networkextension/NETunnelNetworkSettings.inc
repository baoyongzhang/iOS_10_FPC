{ Parsed from NetworkExtension.framework NETunnelNetworkSettings.h }

{$ifdef TYPES}
type
  NETunnelNetworkSettingsPtr = ^NETunnelNetworkSettings;
{$endif}

{$ifdef CLASSES}

type
  NETunnelNetworkSettings = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function initWithTunnelRemoteAddress (address: NSString): instancetype; message 'initWithTunnelRemoteAddress:'; { available in 10_11, 9_0 }
    function tunnelRemoteAddress: NSString; message 'tunnelRemoteAddress';
    procedure setDNSSettings(newValue: NEDNSSettings); message 'setDNSSettings:';
    function DNSSettings: NEDNSSettings; message 'DNSSettings';
    procedure setProxySettings(newValue: NEProxySettings); message 'setProxySettings:';
    function proxySettings: NEProxySettings; message 'proxySettings';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

