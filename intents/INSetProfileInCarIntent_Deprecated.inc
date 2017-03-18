{ Parsed from Intents.framework INSetProfileInCarIntent_Deprecated.h }

{$if ((defined(TARGET_OS_WATCH)) and not defined(TARGET_OS_WATCH))}
{$ifdef CLASSES}

type
  Deprecated = objccategory external (INSetProfileInCarIntent)
    function initWithProfileNumber_profileLabel_defaultProfile (profileNumber: nullable NSNumberPtr; profileLabel: nullable NSStringPtr; defaultProfile: nullable NSNumberPtr): instancetype; message 'initWithProfileNumber:profileLabel:defaultProfile:'; deprecated 'in "Use `-initWithProfileNumber:profileName:defaultProfile:` method instead.", ios(10.0, 10.2';
    function API_UNAVAILABLE(watchos): NSString *profileLabel ); message 'API_UNAVAILABLE(watchos)';
  end;
{$endif}

{$endif}
