{ Parsed from Foundation.framework NSURLResponse.h }

{$ifdef TYPES}
type
  NSURLResponsePtr = ^NSURLResponse;
  NSHTTPURLResponsePtr = ^NSHTTPURLResponse;
{$endif}

{$ifdef CLASSES}

type
  NSURLResponse = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  private
    _internal: NSURLResponseInternal;
  public
    function initWithURL_MIMEType_expectedContentLength_textEncodingName (URL: NSURL; MIMEType: nullable NSStringPtr; length: NSInteger; name: nullable NSStringPtr): instancetype; message 'initWithURL:MIMEType:expectedContentLength:textEncodingName:'; { NS_DESIGNATED_INITIALIZER }
    function URL: NSURL; message 'URL';
    function MIMEType: NSString; message 'MIMEType';
    function expectedContentLength: clonglong; message 'expectedContentLength';
    function textEncodingName: NSString; message 'textEncodingName';
    function suggestedFilename: NSString; message 'suggestedFilename';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;

type
  NSHTTPURLResponse = objcclass external (NSURLResponse)
  private
    _httpInternal: NSHTTPURLResponseInternal;
  public
    function initWithURL_statusCode_HTTPVersion_headerFields (url_: NSURL; statusCode: NSInteger; HTTPVersion: nullable NSStringPtr; headerFields: nullable NSDictionaryPtr): nullable instancetype; message 'initWithURL:statusCode:HTTPVersion:headerFields:'; { available in 10_7, 5_0 }
    function statusCode: NSInteger; message 'statusCode';
    function allHeaderFields: NSDictionary; message 'allHeaderFields';
    class function localizedStringForStatusCode (statusCode_: NSInteger): NSString; message 'localizedStringForStatusCode:';
  end;
{$endif}

