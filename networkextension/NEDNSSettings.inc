{ Parsed from NetworkExtension.framework NEDNSSettings.h }

{$ifdef TYPES}
type
  NEDNSSettingsPtr = ^NEDNSSettings;
{$endif}

{$ifdef CLASSES}

type
  NEDNSSettings = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function initWithServers (servers: NSString *ProtocolPtr): instancetype; message 'initWithServers:'; { available in 10_11, 9_0 }
    function servers: NSString *ProtocolPtr; message 'servers';
    procedure setSearchDomains(newValue: NSString *ProtocolPtr); message 'setSearchDomains:';
    function searchDomains: NSString *ProtocolPtr; message 'searchDomains';
    procedure setDomainName(newValue: NSString); message 'setDomainName:';
    function domainName: NSString; message 'domainName';
    procedure setMatchDomains(newValue: NSString *ProtocolPtr); message 'setMatchDomains:';
    function matchDomains: NSString *ProtocolPtr; message 'matchDomains';
    procedure setMatchDomainsNoSearch(newValue: boolean); message 'setMatchDomainsNoSearch:';
    function matchDomainsNoSearch: boolean; message 'matchDomainsNoSearch';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

