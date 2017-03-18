{ Parsed from Contacts.framework CNLabeledValue.h }

{$ifdef TYPES}
type
  CNLabeledValuePtr = ^CNLabeledValue;
{$endif}

{$ifdef CLASSES}

type
  CNLabeledValue = objcclass external (NSObject, ValueType : id <NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function identifier: NSString; message 'identifier';
    function label_: NSString; message 'label';
    function value: ValueType; message 'value';
    class function labeledValueWithLabel_value (label_: nullable NSStringPtr; value_: ValueType): instancetype; message 'labeledValueWithLabel:value:';
    function initWithLabel_value (label_: nullable NSStringPtr; value_: ValueType): instancetype; message 'initWithLabel:value:';
    function labeledValueBySettingLabel (label_: nullable NSStringPtr): instancetype; message 'labeledValueBySettingLabel:';
    function labeledValueBySettingValue (value_: ValueType): instancetype; message 'labeledValueBySettingValue:';
    function labeledValueBySettingLabel_value (label_: nullable NSStringPtr; value_: ValueType): instancetype; message 'labeledValueBySettingLabel:value:';
    class function localizedStringForLabel (label_: NSString): NSString; message 'localizedStringForLabel:';

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  CNLabelHome: NSString { available in 10_11, 9_0 }; cvar; external;
  CNLabelWork: NSString { available in 10_11, 9_0 }; cvar; external;
  CNLabelOther: NSString { available in 10_11, 9_0 }; cvar; external;
  CNLabelEmailiCloud: NSString { available in 10_11, 9_0 }; cvar; external;
  CNLabelURLAddressHomePage: NSString { available in 10_11, 9_0 }; cvar; external;
  CNLabelDateAnniversary: NSString { available in 10_11, 9_0 }; cvar; external;
{$endif}

