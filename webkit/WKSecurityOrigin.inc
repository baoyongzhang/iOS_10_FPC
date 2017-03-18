{ Parsed from WebKit.framework WKSecurityOrigin.h }

{$ifdef TYPES}
type
  WKSecurityOriginPtr = ^WKSecurityOrigin;
{$endif}

{$if defined(WK_API_ENABLED)}
{$ifdef CLASSES}

type
  WKSecurityOrigin = objcclass external (NSObject)
  public
    function init: instancetype; message 'init';
    function protocol: NSString; message 'protocol';
    function host: NSString; message 'host';
    function port: NSInteger; message 'port';
  end;
{$endif}

{$endif}
