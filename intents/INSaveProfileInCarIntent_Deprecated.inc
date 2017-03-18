{ Parsed from Intents.framework INSaveProfileInCarIntent_Deprecated.h }

{$if ((defined(TARGET_OS_WATCH)) and not defined(TARGET_OS_WATCH))}
{$ifdef CLASSES}

type
  INSaveProfileInCarIntent_Deprecated = objccategory external name 'Deprecated' (INSaveProfileInCarIntent)
    function initWithProfileNumber_profileLabel (profileNumber: nullable NSNumberPtr; profileLabel: nullable NSStringPtr): instancetype; message 'initWithProfileNumber:profileLabel:'; deprecated 'in "Use `-initWithProfileNumber:profileName:` method instead.", ios(10.0, 10.2';
    function API_UNAVAILABLE(watchos): NSString *profileLabel ); message 'API_UNAVAILABLE(watchos)';
  end;
{$endif}

{$endif}
