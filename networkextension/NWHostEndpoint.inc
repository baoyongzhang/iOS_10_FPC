{ Parsed from NetworkExtension.framework NWHostEndpoint.h }

{$ifdef TYPES}
type
  NWHostEndpointPtr = ^NWHostEndpoint;
{$endif}

{$ifndef __NWHostEndpoint_h_}
{$ifdef CLASSES}

type
  NWHostEndpoint = objcclass external (NWEndpoint)
  public
    class function endpointWithHostname_port (hostname: NSString; port: NSString): instancetype; message 'endpointWithHostname:port:'; { available in 10_11, 9_0 }
    function hostname: NSString; message 'hostname';
    function port: NSString; message 'port';
  end;
{$endif}

{$endif}
