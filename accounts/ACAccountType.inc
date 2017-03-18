{ Parsed from Accounts.framework ACAccountType.h }

{$ifdef TYPES}
type
  ACAccountTypePtr = ^ACAccountType;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  ACAccountTypeIdentifierTwitter: NSString { available in NA, 5_0 }; cvar; external;
  ACAccountTypeIdentifierFacebook: NSString { available in NA, 6_0 }; cvar; external;
  ACAccountTypeIdentifierSinaWeibo: NSString { available in NA, 6_0 }; cvar; external;
  ACAccountTypeIdentifierTencentWeibo: NSString { available in NA, 7_0 }; cvar; external;
  ACAccountTypeIdentifierLinkedIn: NSString { available in NA, NA }; cvar; external;
  ACFacebookAppIdKey: NSString { available in NA, 6_0 }; cvar; external;
  ACFacebookPermissionsKey: NSString { available in NA, 6_0 }; cvar; external;
  ACFacebookAudienceKey: NSString { available in NA, 6_0 }; cvar; external;
  ACFacebookAudienceEveryone: NSString { available in NA, 6_0 }; cvar; external;
  ACFacebookAudienceFriends: NSString { available in NA, 6_0 }; cvar; external;
  ACFacebookAudienceOnlyMe: NSString { available in NA, 6_0 }; cvar; external;
  ACLinkedInAppIdKey: NSString { available in NA, NA }; cvar; external;
  ACLinkedInPermissionsKey: NSString { available in NA, NA }; cvar; external;
  ACTencentWeiboAppIdKey: NSString { available in NA, 7_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  ACAccountType = objcclass external (NSObject)
  public
    function accountTypeDescription: NSString; message 'accountTypeDescription';
    function identifier: NSString; message 'identifier';
    function accessGranted: boolean; message 'accessGranted';
  end;
{$endif}

