{ Parsed from Intents.framework INPerson_Deprecated.h }
{$ifdef CLASSES}

type
  INPerson_Deprecated = objccategory external name 'Deprecated' (INPerson)
    function handle: NSString; message 'handle';
    function 12: NSString; message '12';

    function 10.12)): NSString; message '10.12))';
    function initWithHandle_nameComponents_contactIdentifier (handle_: NSString; nameComponents_: NSPersonNameComponents; contactIdentifier_: nullable NSStringPtr): instancetype; message 'initWithHandle:nameComponents:contactIdentifier:'; deprecated 'in "Use the designated initializer instead", ios(10.0, 10.0';
    function initWithHandle_displayName_contactIdentifier (handle_: NSString; displayName_: nullable NSStringPtr; contactIdentifier_: nullable NSStringPtr): instancetype; message 'initWithHandle:displayName:contactIdentifier:'; deprecated 'in "Use the designated initializer instead", ios(10.0, 10.0';
    function initWithHandle_nameComponents_displayName_image_contactIdentifier (handle_: NSString; nameComponents_: nullable NSPersonNameComponentsPtr; displayName_: nullable NSStringPtr; image_: nullable INImagePtr; contactIdentifier_: nullable NSStringPtr): instancetype; message 'initWithHandle:nameComponents:displayName:image:contactIdentifier:'; deprecated 'in "Use the designated initializer instead", ios(10.0, 10.0';
  end;
{$endif}

