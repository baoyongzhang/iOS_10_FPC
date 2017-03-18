{ Parsed from Foundation.framework NSPersonNameComponentsFormatter.h }

{$ifdef TYPES}
type
  NSPersonNameComponentsFormatterPtr = ^NSPersonNameComponentsFormatter;
{$endif}

{$ifdef TYPES}
type
  NSPersonNameComponentsFormatterStyle = NSInteger;
  NSPersonNameComponentsFormatterStylePtr = ^NSPersonNameComponentsFormatterStyle;

const
  NSPersonNameComponentsFormatterStyleDefault = 0;
  NSPersonNameComponentsFormatterStyleShort = 1;
  NSPersonNameComponentsFormatterStyleMedium = 2;
  NSPersonNameComponentsFormatterStyleLong = 3;
  NSPersonNameComponentsFormatterStyleAbbreviated = 4;

type
  NSPersonNameComponentsFormatterOptions = NSUInteger;
  NSPersonNameComponentsFormatterOptionsPtr = ^NSPersonNameComponentsFormatterOptions;

const
  NSPersonNameComponentsFormatterPhonetic = 1 shl 1;
{$endif}

{$ifdef CLASSES}

type
  NSPersonNameComponentsFormatter = objcclass external (NSFormatter)
  private
    _private: id;
  public
    procedure setStyle(newValue: NSPersonNameComponentsFormatterStyle); message 'setStyle:';
    function style: NSPersonNameComponentsFormatterStyle; message 'style';
    procedure setPhonetic(newValue: boolean); message 'setPhonetic:';
    function isPhonetic: boolean; message 'isPhonetic';
    class function localizedStringFromPersonNameComponents_style_options (components: NSPersonNameComponents; nameFormatStyle: NSPersonNameComponentsFormatterStyle; nameOptions: NSPersonNameComponentsFormatterOptions): NSString; message 'localizedStringFromPersonNameComponents:style:options:';
    function stringFromPersonNameComponents (components: NSPersonNameComponents): NSString; message 'stringFromPersonNameComponents:';
    function annotatedStringFromPersonNameComponents (components: NSPersonNameComponents): NSAttributedString; message 'annotatedStringFromPersonNameComponents:';
    function personNameComponentsFromString (string_: nonnull NSStringPtr): nullable NSPersonNameComponentsPtr; message 'personNameComponentsFromString:'; { available in macosx(10.12 }
    function getObjectValue_forString_errorDescription (obj: id _Nullable * _Nullable; string_: NSString; error: NSString * _Nullable * _Nullable): boolean; message 'getObjectValue:forString:errorDescription:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSPersonNameComponentKey: NSString { available in 10_11, 9_0 }; cvar; external;
  NSPersonNameComponentGivenName: NSString { available in 10_11, 9_0 }; cvar; external;
  NSPersonNameComponentFamilyName: NSString { available in 10_11, 9_0 }; cvar; external;
  NSPersonNameComponentMiddleName: NSString { available in 10_11, 9_0 }; cvar; external;
  NSPersonNameComponentPrefix: NSString { available in 10_11, 9_0 }; cvar; external;
  NSPersonNameComponentSuffix: NSString { available in 10_11, 9_0 }; cvar; external;
  NSPersonNameComponentNickname: NSString { available in 10_11, 9_0 }; cvar; external;
  NSPersonNameComponentDelimiter: NSString { available in 10_11, 9_0 }; cvar; external;
{$endif}

