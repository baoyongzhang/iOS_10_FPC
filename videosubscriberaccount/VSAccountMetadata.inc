{ Parsed from VideoSubscriberAccount.framework VSAccountMetadata.h }

{$ifdef TYPES}
type
  VSAccountMetadataPtr = ^VSAccountMetadata;
{$endif}

{$ifdef CLASSES}

type
  VSAccountMetadata = objcclass external (NSObject)
  public
    function accountProviderIdentifier: NSString; message 'accountProviderIdentifier';
    function authenticationExpirationDate: NSDate; message 'authenticationExpirationDate';
    function verificationData: NSData; message 'verificationData';
    function SAMLAttributeQueryResponse: NSString; message 'SAMLAttributeQueryResponse';
    function accountProviderResponse: VSAccountProviderResponse; message 'accountProviderResponse';
    function tvos(10.1)): VSAccountProviderResponse; message 'tvos(10.1))';
  end;
{$endif}

