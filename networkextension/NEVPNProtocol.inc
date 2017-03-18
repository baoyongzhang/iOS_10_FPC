{ Parsed from NetworkExtension.framework NEVPNProtocol.h }

{$ifdef TYPES}
type
  NEVPNProtocolPtr = ^NEVPNProtocol;
{$endif}

{$ifdef CLASSES}

type
  NEVPNProtocol = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    procedure setServerAddress(newValue: NSString); message 'setServerAddress:';
    function serverAddress: NSString; message 'serverAddress';
    procedure setUsername(newValue: NSString); message 'setUsername:';
    function username: NSString; message 'username';
    procedure setPasswordReference(newValue: NSData); message 'setPasswordReference:';
    function passwordReference: NSData; message 'passwordReference';
    procedure setIdentityReference(newValue: NSData); message 'setIdentityReference:';
    function identityReference: NSData; message 'identityReference';
    procedure setIdentityData(newValue: NSData); message 'setIdentityData:';
    function identityData: NSData; message 'identityData';
    procedure setIdentityDataPassword(newValue: NSString); message 'setIdentityDataPassword:';
    function identityDataPassword: NSString; message 'identityDataPassword';
    procedure setDisconnectOnSleep(newValue: boolean); message 'setDisconnectOnSleep:';
    function disconnectOnSleep: boolean; message 'disconnectOnSleep';
    procedure setProxySettings(newValue: NEProxySettings); message 'setProxySettings:';
    function proxySettings: NEProxySettings; message 'proxySettings';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

