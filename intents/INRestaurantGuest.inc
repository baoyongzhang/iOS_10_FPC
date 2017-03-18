{ Parsed from Intents.framework INRestaurantGuest.h }

{$ifdef TYPES}
type
  INRestaurantGuestPtr = ^INRestaurantGuest;
{$endif}

{$ifdef CLASSES}

type
  INRestaurantGuest = objcclass external (INPerson)
  public
    function initWithNameComponents_phoneNumber_emailAddress (nameComponents_: nullable NSPersonNameComponentsPtr; phoneNumber: nullable NSStringPtr; emailAddress: nullable NSStringPtr): instancetype; message 'initWithNameComponents:phoneNumber:emailAddress:'; { NS_DESIGNATED_INITIALIZER }
    procedure setPhoneNumber(newValue: NSString); message 'setPhoneNumber:';
    function phoneNumber: NSString; message 'phoneNumber';
    procedure setEmailAddress(newValue: NSString); message 'setEmailAddress:';
    function emailAddress: NSString; message 'emailAddress';
  end;
{$endif}

