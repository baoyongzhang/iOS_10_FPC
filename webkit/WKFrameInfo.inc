{ Parsed from WebKit.framework WKFrameInfo.h }

{$ifdef TYPES}
type
  WKFrameInfoPtr = ^WKFrameInfo;
{$endif}

{$if defined(WK_API_ENABLED)}
{$ifdef CLASSES}

type
  WKFrameInfo = objcclass external (NSObject, NSCopyingProtocol)
  public
    function isMainFrame: boolean; message 'isMainFrame';
    function request: NSURLRequest; message 'request';
    function securityOrigin: WKSecurityOrigin; message 'securityOrigin';
    function ios(9.0)): WKSecurityOrigin; message 'ios(9.0))';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

{$endif}
