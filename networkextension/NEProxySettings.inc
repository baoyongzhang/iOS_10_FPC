{ Parsed from NetworkExtension.framework NEProxySettings.h }

{$ifdef TYPES}
type
  NEProxyServerPtr = ^NEProxyServer;
  NEProxySettingsPtr = ^NEProxySettings;
{$endif}

{$ifdef CLASSES}

type
  NEProxyServer = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function initWithAddress_port (address: NSString; port: NSInteger): instancetype; message 'initWithAddress:port:'; { available in 10_11, 9_0 }
    function address: NSString; message 'address';
    function port: NSInteger; message 'port';
    procedure setAuthenticationRequired(newValue: boolean); message 'setAuthenticationRequired:';
    function authenticationRequired: boolean; message 'authenticationRequired';
    procedure setUsername(newValue: NSString); message 'setUsername:';
    function username: NSString; message 'username';
    procedure setPassword(newValue: NSString); message 'setPassword:';
    function password: NSString; message 'password';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;

type
  NEProxySettings = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    procedure setAutoProxyConfigurationEnabled(newValue: boolean); message 'setAutoProxyConfigurationEnabled:';
    function autoProxyConfigurationEnabled: boolean; message 'autoProxyConfigurationEnabled';
    procedure setProxyAutoConfigurationURL(newValue: NSURL); message 'setProxyAutoConfigurationURL:';
    function proxyAutoConfigurationURL: NSURL; message 'proxyAutoConfigurationURL';
    procedure setProxyAutoConfigurationJavaScript(newValue: NSString); message 'setProxyAutoConfigurationJavaScript:';
    function proxyAutoConfigurationJavaScript: NSString; message 'proxyAutoConfigurationJavaScript';
    procedure setHTTPEnabled(newValue: boolean); message 'setHTTPEnabled:';
    function HTTPEnabled: boolean; message 'HTTPEnabled';
    procedure setHTTPServer(newValue: NEProxyServer); message 'setHTTPServer:';
    function HTTPServer: NEProxyServer; message 'HTTPServer';
    procedure setHTTPSEnabled(newValue: boolean); message 'setHTTPSEnabled:';
    function HTTPSEnabled: boolean; message 'HTTPSEnabled';
    procedure setHTTPSServer(newValue: NEProxyServer); message 'setHTTPSServer:';
    function HTTPSServer: NEProxyServer; message 'HTTPSServer';
    procedure setExcludeSimpleHostnames(newValue: boolean); message 'setExcludeSimpleHostnames:';
    function excludeSimpleHostnames: boolean; message 'excludeSimpleHostnames';
    procedure setExceptionList(newValue: NSString *ProtocolPtr); message 'setExceptionList:';
    function exceptionList: NSString *ProtocolPtr; message 'exceptionList';
    procedure setMatchDomains(newValue: NSString *ProtocolPtr); message 'setMatchDomains:';
    function matchDomains: NSString *ProtocolPtr; message 'matchDomains';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

