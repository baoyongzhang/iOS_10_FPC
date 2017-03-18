{ Parsed from Intents.framework INTermsAndConditions.h }

{$ifdef TYPES}
type
  INTermsAndConditionsPtr = ^INTermsAndConditions;
{$endif}

{$ifdef CLASSES}

type
  INTermsAndConditions = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function initWithLocalizedTermsAndConditionsText_privacyPolicyURL_termsAndConditionsURL (localizedTermsAndConditionsText: NSString; privacyPolicyURL: nullable NSURLPtr; termsAndConditionsURL: nullable NSURLPtr): instancetype; message 'initWithLocalizedTermsAndConditionsText:privacyPolicyURL:termsAndConditionsURL:'; { NS_DESIGNATED_INITIALIZER }
    function localizedTermsAndConditionsText: NSString; message 'localizedTermsAndConditionsText';
    function privacyPolicyURL: NSURL; message 'privacyPolicyURL';
    function termsAndConditionsURL: NSURL; message 'termsAndConditionsURL';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

