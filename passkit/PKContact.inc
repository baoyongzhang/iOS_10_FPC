{ Parsed from PassKit.framework PKContact.h }

{$ifdef TYPES}
type
  PKContactPtr = ^PKContact;
{$endif}

{$ifdef CLASSES}

type
  PKContact = objcclass external (NSObject)
  public
    procedure setName(newValue: NSPersonNameComponents); message 'setName:';
    function name: NSPersonNameComponents; message 'name';
    procedure setPostalAddress(newValue: CNPostalAddress); message 'setPostalAddress:';
    function postalAddress: CNPostalAddress; message 'postalAddress';
    procedure setEmailAddress(newValue: NSString); message 'setEmailAddress:';
    function emailAddress: NSString; message 'emailAddress';
    procedure setPhoneNumber(newValue: CNPhoneNumber); message 'setPhoneNumber:';
    function phoneNumber: CNPhoneNumber; message 'phoneNumber';
    procedure setSupplementarySubLocality(newValue: NSString); message 'setSupplementarySubLocality:';
    function supplementarySubLocality: NSString; message 'supplementarySubLocality';
  end;
{$endif}

