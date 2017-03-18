{ Parsed from NetworkExtension.framework NEIPv6Settings.h }

{$ifdef TYPES}
type
  NEIPv6SettingsPtr = ^NEIPv6Settings;
  NEIPv6RoutePtr = ^NEIPv6Route;
{$endif}

{$ifdef CLASSES}

type
  NEIPv6Settings = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function initWithAddresses_networkPrefixLengths (addresses: NSString *ProtocolPtr; networkPrefixLengths: NSNumber *ProtocolPtr): instancetype; message 'initWithAddresses:networkPrefixLengths:'; { available in 10_11, 9_0 }
    function addresses: NSString *ProtocolPtr; message 'addresses';
    function networkPrefixLengths: NSNumber *ProtocolPtr; message 'networkPrefixLengths';
    procedure setIncludedRoutes(newValue: NEIPv6Route *ProtocolPtr); message 'setIncludedRoutes:';
    function includedRoutes: NEIPv6Route *ProtocolPtr; message 'includedRoutes';
    procedure setExcludedRoutes(newValue: NEIPv6Route *ProtocolPtr); message 'setExcludedRoutes:';
    function excludedRoutes: NEIPv6Route *ProtocolPtr; message 'excludedRoutes';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;

type
  NEIPv6Route = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function initWithDestinationAddress_networkPrefixLength (address: NSString; networkPrefixLength: NSNumber): instancetype; message 'initWithDestinationAddress:networkPrefixLength:'; { available in 10_11, 9_0 }
    function destinationAddress: NSString; message 'destinationAddress';
    function destinationNetworkPrefixLength: NSNumber; message 'destinationNetworkPrefixLength';
    procedure setGatewayAddress(newValue: NSString); message 'setGatewayAddress:';
    function gatewayAddress: NSString; message 'gatewayAddress';
    class function defaultRoute: NEIPv6Route; message 'defaultRoute'; { available in 10_11, 9_0 }

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

