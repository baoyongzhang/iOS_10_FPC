{ Parsed from Intents.framework INRideDriver_Deprecated.h }
{$ifdef CLASSES}

type
  INRideDriver_Deprecated = objccategory external name 'Deprecated' (INRideDriver)
    function initWithPersonHandle_nameComponents_displayName_image_rating_phoneNumber (personHandle_: INPersonHandle; nameComponents_: nullable NSPersonNameComponentsPtr; displayName_: nullable NSStringPtr; image_: nullable INImagePtr; rating_: nullable NSStringPtr; phoneNumber_: nullable NSStringPtr): instancetype; message 'initWithPersonHandle:nameComponents:displayName:image:rating:phoneNumber:'; deprecated 'in "Use the designated initializer instead", ios(10.0, 10.2';
    function initWithHandle_displayName_image_rating_phoneNumber (handle: NSString; displayName_: nullable NSStringPtr; image_: nullable INImagePtr; rating_: nullable NSStringPtr; phoneNumber_: nullable NSStringPtr): instancetype; message 'initWithHandle:displayName:image:rating:phoneNumber:'; deprecated 'in "Use the designated initializer instead", ios(10.0, 10.0';
    function initWithHandle_nameComponents_image_rating_phoneNumber (handle: NSString; nameComponents_: NSPersonNameComponents; image_: nullable INImagePtr; rating_: nullable NSStringPtr; phoneNumber_: nullable NSStringPtr): instancetype; message 'initWithHandle:nameComponents:image:rating:phoneNumber:'; deprecated 'in "Use the designated initializer instead", ios(10.0, 10.0';
  end;
{$endif}

