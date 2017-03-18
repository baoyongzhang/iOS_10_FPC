{ Parsed from NetworkExtension.framework NWBonjourServiceEndpoint.h }

{$ifdef TYPES}
type
  NWBonjourServiceEndpointPtr = ^NWBonjourServiceEndpoint;
{$endif}

{$ifndef __NWBonjourServiceEndpoint_h_}
{$ifdef CLASSES}

type
  NWBonjourServiceEndpoint = objcclass external (NWEndpoint)
  public
    class function endpointWithName_type_domain (name: NSString; type_: NSString; domain: NSString): instancetype; message 'endpointWithName:type:domain:'; { available in 10_11, 9_0 }
    function name: NSString; message 'name';
    function type_: NSString; message 'type';
    function domain: NSString; message 'domain';
  end;
{$endif}

{$endif}
