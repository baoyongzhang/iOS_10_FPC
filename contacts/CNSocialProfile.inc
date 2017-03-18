{ Parsed from Contacts.framework CNSocialProfile.h }

{$ifdef TYPES}
type
  CNSocialProfilePtr = ^CNSocialProfile;
{$endif}

{$ifdef CLASSES}

type
  CNSocialProfile = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function urlString: NSString; message 'urlString';
    function username: NSString; message 'username';
    function userIdentifier: NSString; message 'userIdentifier';
    function service: NSString; message 'service';
    function initWithUrlString_username_userIdentifier_service (urlString_: nullable NSStringPtr; username_: nullable NSStringPtr; userIdentifier_: nullable NSStringPtr; service_: nullable NSStringPtr): instancetype; message 'initWithUrlString:username:userIdentifier:service:';
    class function localizedStringForKey (key: NSString): NSString; message 'localizedStringForKey:';
    class function localizedStringForService (service_: NSString): NSString; message 'localizedStringForService:';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  CNSocialProfileURLStringKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNSocialProfileUsernameKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNSocialProfileUserIdentifierKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNSocialProfileServiceKey: NSString { available in 10_11, 9_0 }; cvar; external;
  CNSocialProfileServiceFacebook: NSString { available in 10_11, 9_0 }; cvar; external;
  CNSocialProfileServiceFlickr: NSString { available in 10_11, 9_0 }; cvar; external;
  CNSocialProfileServiceLinkedIn: NSString { available in 10_11, 9_0 }; cvar; external;
  CNSocialProfileServiceMySpace: NSString { available in 10_11, 9_0 }; cvar; external;
  CNSocialProfileServiceSinaWeibo: NSString { available in 10_11, 9_0 }; cvar; external;
  CNSocialProfileServiceTencentWeibo: NSString { available in 10_11, 9_0 }; cvar; external;
  CNSocialProfileServiceTwitter: NSString { available in 10_11, 9_0 }; cvar; external;
  CNSocialProfileServiceYelp: NSString { available in 10_11, 9_0 }; cvar; external;
  CNSocialProfileServiceGameCenter: NSString { available in 10_11, 9_0 }; cvar; external;
{$endif}

