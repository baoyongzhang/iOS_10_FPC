{ Parsed from NetworkExtension.framework NWTLSParameters.h }

{$ifdef TYPES}
type
  NWTLSParametersPtr = ^NWTLSParameters;
{$endif}

{$ifndef __NWTLSParameters_h_}
{$ifdef CLASSES}

type
  NWTLSParameters = objcclass external (NSObject)
  public
    procedure setTLSSessionID(newValue: NSData); message 'setTLSSessionID:';
    function TLSSessionID: NSData; message 'TLSSessionID';
    procedure setSSLCipherSuites(newValue: NSNumber *ProtocolPtr); message 'setSSLCipherSuites:';
    function SSLCipherSuites: NSNumber *ProtocolPtr; message 'SSLCipherSuites';
    procedure setMinimumSSLProtocolVersion(newValue: NSUInteger); message 'setMinimumSSLProtocolVersion:';
    function minimumSSLProtocolVersion: NSUInteger; message 'minimumSSLProtocolVersion';
    procedure setMaximumSSLProtocolVersion(newValue: NSUInteger); message 'setMaximumSSLProtocolVersion:';
    function maximumSSLProtocolVersion: NSUInteger; message 'maximumSSLProtocolVersion';
  end;
{$endif}

{$endif}
