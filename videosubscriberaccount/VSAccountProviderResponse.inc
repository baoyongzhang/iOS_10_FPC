{ Parsed from VideoSubscriberAccount.framework VSAccountProviderResponse.h }

{$ifdef TYPES}
type
  VSAccountProviderResponsePtr = ^VSAccountProviderResponse;
{$endif}

{$ifdef TYPES}
type
  NS_EXTENSIBLE_STRING_ENUM = NSString *VSAccountProviderAuthenticationScheme;
  NS_EXTENSIBLE_STRING_ENUMPtr = ^NS_EXTENSIBLE_STRING_ENUM;
{$endif}

{$ifdef CLASSES}

type
  VSAccountProviderResponse = objcclass external (NSObject)
  public
    function authenticationScheme: VSAccountProviderAuthenticationScheme; message 'authenticationScheme';
    function status: NSString; message 'status';
    function body: NSString; message 'body';
  end;
{$endif}

