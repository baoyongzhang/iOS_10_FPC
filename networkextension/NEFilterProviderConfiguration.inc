{ Parsed from NetworkExtension.framework NEFilterProviderConfiguration.h }

{$ifdef TYPES}
type
  NEFilterProviderConfigurationPtr = ^NEFilterProviderConfiguration;
{$endif}

{$ifdef CLASSES}

type
  NEFilterProviderConfiguration = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    procedure setFilterBrowsers(newValue: boolean); message 'setFilterBrowsers:';
    function filterBrowsers: boolean; message 'filterBrowsers';
    procedure setFilterSockets(newValue: boolean); message 'setFilterSockets:';
    function filterSockets: boolean; message 'filterSockets';
    procedure setVendorConfiguration(newValue: NSDictionary); message 'setVendorConfiguration:';
    function vendorConfiguration: NSDictionary; message 'vendorConfiguration';
    procedure setServerAddress(newValue: NSString); message 'setServerAddress:';
    function serverAddress: NSString; message 'serverAddress';
    procedure setUsername(newValue: NSString); message 'setUsername:';
    function username: NSString; message 'username';
    procedure setOrganization(newValue: NSString); message 'setOrganization:';
    function organization: NSString; message 'organization';
    procedure setPasswordReference(newValue: NSData); message 'setPasswordReference:';
    function passwordReference: NSData; message 'passwordReference';
    procedure setIdentityReference(newValue: NSData); message 'setIdentityReference:';
    function identityReference: NSData; message 'identityReference';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

