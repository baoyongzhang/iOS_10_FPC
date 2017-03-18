{ Parsed from VideoSubscriberAccount.framework VSAccountMetadataRequest.h }

{$ifdef TYPES}
type
  VSAccountMetadataRequestPtr = ^VSAccountMetadataRequest;
{$endif}

{$ifdef CLASSES}

type
  VSAccountMetadataRequest = objcclass external (NSObject)
  public
    procedure setChannelIdentifier(newValue: NSString); message 'setChannelIdentifier:';
    function channelIdentifier: NSString; message 'channelIdentifier';
    procedure setSupportedAccountProviderIdentifiers(newValue: NSString *ProtocolPtr); message 'setSupportedAccountProviderIdentifiers:';
    function supportedAccountProviderIdentifiers: NSString *ProtocolPtr; message 'supportedAccountProviderIdentifiers';
    procedure setVerificationToken(newValue: NSString); message 'setVerificationToken:';
    function verificationToken: NSString; message 'verificationToken';
    procedure setIncludeAccountProviderIdentifier(newValue: boolean); message 'setIncludeAccountProviderIdentifier:';
    function includeAccountProviderIdentifier: boolean; message 'includeAccountProviderIdentifier';
    procedure setIncludeAuthenticationExpirationDate(newValue: boolean); message 'setIncludeAuthenticationExpirationDate:';
    function includeAuthenticationExpirationDate: boolean; message 'includeAuthenticationExpirationDate';
    procedure setLocalizedVideoTitle(newValue: NSString); message 'setLocalizedVideoTitle:';
    function localizedVideoTitle: NSString; message 'localizedVideoTitle';
    procedure setInterruptionAllowed(newValue: boolean); message 'setInterruptionAllowed:';
    function isInterruptionAllowed: boolean; message 'isInterruptionAllowed';
    procedure setForceAuthentication(newValue: boolean); message 'setForceAuthentication:';
    function forceAuthentication: boolean; message 'forceAuthentication';
    procedure setAttributeNames(newValue: NSString *ProtocolPtr); message 'setAttributeNames:';
    function attributeNames: NSString *ProtocolPtr; message 'attributeNames';
    procedure setSupportedAuthenticationSchemes(newValue: VSAccountProviderAuthenticationSchemeProtocolPtr); message 'setSupportedAuthenticationSchemes:';
    function supportedAuthenticationSchemes: VSAccountProviderAuthenticationSchemeProtocolPtr; message 'supportedAuthenticationSchemes';
    procedure setTvos(10.1))(newValue: VSAccountProviderAuthenticationSchemeProtocolPtr); message 'setTvos(10.1)):';
    function tvos(10.1)): VSAccountProviderAuthenticationSchemeProtocolPtr; message 'tvos(10.1))';
  end;
{$endif}

