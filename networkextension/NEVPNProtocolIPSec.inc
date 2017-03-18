{ Parsed from NetworkExtension.framework NEVPNProtocolIPSec.h }

{$ifdef TYPES}
type
  NEVPNProtocolIPSecPtr = ^NEVPNProtocolIPSec;
{$endif}

{$ifdef TYPES}
type
  NEVPNIKEAuthenticationMethod = NSInteger;
  NEVPNIKEAuthenticationMethodPtr = ^NEVPNIKEAuthenticationMethod;

const
  NEVPNIKEAuthenticationMethodNone = 0;
  NEVPNIKEAuthenticationMethodCertificate = 1;
  NEVPNIKEAuthenticationMethodSharedSecret = 2;
{$endif}

{$ifdef CLASSES}

type
  NEVPNProtocolIPSec = objcclass external (NEVPNProtocol)
  public
    procedure setAuthenticationMethod(newValue: NEVPNIKEAuthenticationMethod); message 'setAuthenticationMethod:';
    function authenticationMethod: NEVPNIKEAuthenticationMethod; message 'authenticationMethod';
    procedure setUseExtendedAuthentication(newValue: boolean); message 'setUseExtendedAuthentication:';
    function useExtendedAuthentication: boolean; message 'useExtendedAuthentication';
    procedure setSharedSecretReference(newValue: NSData); message 'setSharedSecretReference:';
    function sharedSecretReference: NSData; message 'sharedSecretReference';
    procedure setLocalIdentifier(newValue: NSString); message 'setLocalIdentifier:';
    function localIdentifier: NSString; message 'localIdentifier';
    procedure setRemoteIdentifier(newValue: NSString); message 'setRemoteIdentifier:';
    function remoteIdentifier: NSString; message 'remoteIdentifier';
  end;
{$endif}

