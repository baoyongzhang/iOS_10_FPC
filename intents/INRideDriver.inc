{ Parsed from Intents.framework INRideDriver.h }

{$ifdef TYPES}
type
  INRideDriverPtr = ^INRideDriver;
{$endif}

{$ifdef CLASSES}

type
  INRideDriver = objcclass external (INPerson, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function rating: NSString; message 'rating';
    function phoneNumber: NSString; message 'phoneNumber';
    function initWithPhoneNumber_nameComponents_displayName_image_rating (phoneNumber_: NSString; nameComponents_: nullable NSPersonNameComponentsPtr; displayName_: nullable NSStringPtr; image_: nullable INImagePtr; rating_: nullable NSStringPtr): instancetype; message 'initWithPhoneNumber:nameComponents:displayName:image:rating:'; { available in ios(10.2 }
  end;
{$endif}

