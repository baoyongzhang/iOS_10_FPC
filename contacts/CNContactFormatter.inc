{ Parsed from Contacts.framework CNContactFormatter.h }

{$ifdef TYPES}
type
  CNContactFormatterPtr = ^CNContactFormatter;
{$endif}

{$ifdef TYPES}
type
  CNContactFormatterStyle = NSInteger;
  CNContactFormatterStylePtr = ^CNContactFormatterStyle;

const
  CNContactFormatterStyleFullName = 0;
  CNContactFormatterStylePhoneticFullName = 1;

type
  CNContactDisplayNameOrder = NSInteger;
  CNContactDisplayNameOrderPtr = ^CNContactDisplayNameOrder;

const
  CNContactDisplayNameOrderUserDefault = 0;
  CNContactDisplayNameOrderGivenNameFirst = 1;
  CNContactDisplayNameOrderFamilyNameFirst = 2;
{$endif}

{$ifdef CLASSES}

type
  CNContactFormatter = objcclass external (NSFormatter)
  public
    class function descriptorForRequiredKeysForStyle (style: CNContactFormatterStyle): CNKeyDescriptorProtocol; message 'descriptorForRequiredKeysForStyle:';
    class function stringFromContact_style (contact: CNContact; style: CNContactFormatterStyle): nullable NSStringPtr; message 'stringFromContact:style:';
    class function attributedStringFromContact_style_defaultAttributes (contact: CNContact; style: CNContactFormatterStyle; attributes: nullable NSDictionaryPtr): nullable NSAttributedStringPtr; message 'attributedStringFromContact:style:defaultAttributes:';
    class function nameOrderForContact (contact: CNContact): CNContactDisplayNameOrder; message 'nameOrderForContact:';
    class function delimiterForContact (contact: CNContact): NSString; message 'delimiterForContact:';
    procedure setStyle(newValue: CNContactFormatterStyle); message 'setStyle:';
    function style: CNContactFormatterStyle; message 'style';
    function stringFromContact (contact: CNContact): nullable NSStringPtr; message 'stringFromContact:';
    function attributedStringFromContact_defaultAttributes (contact: CNContact; attributes: nullable NSDictionaryPtr): nullable NSAttributedStringPtr; message 'attributedStringFromContact:defaultAttributes:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  CNContactPropertyAttribute: NSString; cvar; external;
{$endif}

