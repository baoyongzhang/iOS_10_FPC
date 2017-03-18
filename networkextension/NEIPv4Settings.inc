{ Parsed from NetworkExtension.framework NEIPv4Settings.h }

{$ifdef TYPES}
type
  NEIPv4SettingsPtr = ^NEIPv4Settings;
  NEIPv4RoutePtr = ^NEIPv4Route;
{$endif}

{$ifdef CLASSES}

type
  NEIPv4Settings = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function initWithAddresses_subnetMasks (addresses: NSString *ProtocolPtr; subnetMasks: NSString *ProtocolPtr): instancetype; message 'initWithAddresses:subnetMasks:'; { available in 10_11, 9_0 }
    function addresses: NSString *ProtocolPtr; message 'addresses';
    function subnetMasks: NSString *ProtocolPtr; message 'subnetMasks';
    procedure setIncludedRoutes(newValue: NEIPv4Route *ProtocolPtr); message 'setIncludedRoutes:';
    function includedRoutes: NEIPv4Route *ProtocolPtr; message 'includedRoutes';
    procedure setExcludedRoutes(newValue: NEIPv4Route *ProtocolPtr); message 'setExcludedRoutes:';
    function excludedRoutes: NEIPv4Route *ProtocolPtr; message 'excludedRoutes';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;

type
  NEIPv4Route = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function initWithDestinationAddress_subnetMask (address: NSString; subnetMask: NSString): instancetype; message 'initWithDestinationAddress:subnetMask:'; { available in 10_11, 9_0 }
    function destinationAddress: NSString; message 'destinationAddress';
    function destinationSubnetMask: NSString; message 'destinationSubnetMask';
    procedure setGatewayAddress(newValue: NSString); message 'setGatewayAddress:';
    function gatewayAddress: NSString; message 'gatewayAddress';
    class function defaultRoute: NEIPv4Route; message 'defaultRoute'; { available in 10_11, 9_0 }

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

