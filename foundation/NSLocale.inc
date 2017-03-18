{ Parsed from Foundation.framework NSLocale.h }

{ Types from NSLocaleCreation }
{$ifdef TYPES}

{$endif}


{ Types from NSLocaleGeneralInfo }
{$ifdef TYPES}


type
  NSLocaleLanguageDirection = NSUInteger;
type
  NSLocaleLanguageDirectionPtr = ^NSLocaleLanguageDirection;

const
  NSLocaleLanguageDirectionUnknown = kCFLocaleLanguageDirectionUnknown;
  NSLocaleLanguageDirectionLeftToRight = kCFLocaleLanguageDirectionLeftToRight;
  NSLocaleLanguageDirectionRightToLeft = kCFLocaleLanguageDirectionRightToLeft;
  NSLocaleLanguageDirectionTopToBottom = kCFLocaleLanguageDirectionTopToBottom;
  NSLocaleLanguageDirectionBottomToTop = kCFLocaleLanguageDirectionBottomToTop;
{$endif}


{$ifdef TYPES}
type
  NSLocalePtr = ^NSLocale;
{$endif}

{$ifdef TYPES}
{$endif}

{$ifdef CLASSES}

type
  NSLocale = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function objectForKey (key: NSLocaleKey): nullable id; message 'objectForKey:';
    function displayNameForKey_value (key: NSLocaleKey; value: id): nullable NSStringPtr; message 'displayNameForKey:value:';
    function initWithLocaleIdentifier (string_: NSString): instancetype; message 'initWithLocaleIdentifier:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;


type
  NSExtendedLocale = objccategory external (NSLocale)
    function localeIdentifier: NSString; message 'localeIdentifier';
    function localizedStringForLocaleIdentifier (localeIdentifier_: NSString): NSString; message 'localizedStringForLocaleIdentifier:'; { available in macosx(10.12 }
    function languageCode: NSString ios(10.0), watchos(3.0),Ptr; message 'languageCode';
    function tvos(10.0)): NSString ios(10.0), watchos(3.0),Ptr; message 'tvos(10.0))';
    function localizedStringForLanguageCode (languageCode_: NSString): nullable NSStringPtr; message 'localizedStringForLanguageCode:'; { available in macosx(10.12 }
    function countryCode: NSString ios(10.0), watchos(3.0),Ptr; message 'countryCode';
    function tvos(10.0))_: NSString ios(10.0), watchos(3.0),Ptr; message 'tvos(10.0))';
    function localizedStringForCountryCode (countryCode_: NSString): nullable NSStringPtr; message 'localizedStringForCountryCode:'; { available in macosx(10.12 }
    function scriptCode: NSString ios(10.0), watchos(3.0),Ptr; message 'scriptCode';
    function tvos(10.0))__: NSString ios(10.0), watchos(3.0),Ptr; message 'tvos(10.0))';
    function localizedStringForScriptCode (scriptCode_: NSString): nullable NSStringPtr; message 'localizedStringForScriptCode:'; { available in macosx(10.12 }
    function variantCode: NSString ios(10.0), watchos(3.0),Ptr; message 'variantCode';
    function tvos(10.0))___: NSString ios(10.0), watchos(3.0),Ptr; message 'tvos(10.0))';
    function localizedStringForVariantCode (variantCode_: NSString): nullable NSStringPtr; message 'localizedStringForVariantCode:'; { available in macosx(10.12 }
    function exemplarCharacterSet: NSCharacterSet ios(10.0), watchos(3.0),Ptr; message 'exemplarCharacterSet';
    function tvos(10.0))____: NSCharacterSet ios(10.0), watchos(3.0),Ptr; message 'tvos(10.0))';
    function calendarIdentifier: NSString ios(10.0), watchos(3.0),Ptr; message 'calendarIdentifier';
    function tvos(10.0))_____: NSString ios(10.0), watchos(3.0),Ptr; message 'tvos(10.0))';
    function localizedStringForCalendarIdentifier (calendarIdentifier_: NSString): nullable NSStringPtr; message 'localizedStringForCalendarIdentifier:'; { available in macosx(10.12 }
    function collationIdentifier: NSString ios(10.0), watchos(3.0),Ptr; message 'collationIdentifier';
    function tvos(10.0))______: NSString ios(10.0), watchos(3.0),Ptr; message 'tvos(10.0))';
    function localizedStringForCollationIdentifier (collationIdentifier_: NSString): nullable NSStringPtr; message 'localizedStringForCollationIdentifier:'; { available in macosx(10.12 }
    function usesMetricSystem: BOOL ios(10.0), watchos(3.0),; message 'usesMetricSystem';
    function tvos(10.0))_______: BOOL ios(10.0), watchos(3.0),; message 'tvos(10.0))';
    function decimalSeparator: NSString ios(10.0), watchos(3.0),Ptr; message 'decimalSeparator';
    function tvos(10.0))________: NSString ios(10.0), watchos(3.0),Ptr; message 'tvos(10.0))';
    function groupingSeparator: NSString ios(10.0), watchos(3.0),Ptr; message 'groupingSeparator';
    function tvos(10.0))_________: NSString ios(10.0), watchos(3.0),Ptr; message 'tvos(10.0))';
    function currencySymbol: NSString ios(10.0), watchos(3.0),Ptr; message 'currencySymbol';
    function tvos(10.0))__________: NSString ios(10.0), watchos(3.0),Ptr; message 'tvos(10.0))';
    function currencyCode: NSString ios(10.0), watchos(3.0),Ptr; message 'currencyCode';
    function tvos(10.0))___________: NSString ios(10.0), watchos(3.0),Ptr; message 'tvos(10.0))';
    function localizedStringForCurrencyCode (currencyCode_: NSString): nullable NSStringPtr; message 'localizedStringForCurrencyCode:'; { available in macosx(10.12 }
    function collatorIdentifier: NSString ios(10.0), watchos(3.0),Ptr; message 'collatorIdentifier';
    function tvos(10.0))____________: NSString ios(10.0), watchos(3.0),Ptr; message 'tvos(10.0))';
    function localizedStringForCollatorIdentifier (collatorIdentifier_: NSString): nullable NSStringPtr; message 'localizedStringForCollatorIdentifier:'; { available in macosx(10.12 }
    function quotationBeginDelimiter: NSString ios(10.0), watchos(3.0),Ptr; message 'quotationBeginDelimiter';
    function tvos(10.0))_____________: NSString ios(10.0), watchos(3.0),Ptr; message 'tvos(10.0))';
    function quotationEndDelimiter: NSString ios(10.0), watchos(3.0),Ptr; message 'quotationEndDelimiter';
    function tvos(10.0))______________: NSString ios(10.0), watchos(3.0),Ptr; message 'tvos(10.0))';
    function alternateQuotationBeginDelimiter: NSString ios(10.0), watchos(3.0),Ptr; message 'alternateQuotationBeginDelimiter';
    function tvos(10.0))_______________: NSString ios(10.0), watchos(3.0),Ptr; message 'tvos(10.0))';
    function alternateQuotationEndDelimiter: NSString ios(10.0), watchos(3.0),Ptr; message 'alternateQuotationEndDelimiter';
    function tvos(10.0))________________: NSString ios(10.0), watchos(3.0),Ptr; message 'tvos(10.0))';
  end;

type
  NSLocaleCreation = objccategory external (NSLocale)
    {$if defined(FOUNDATION_SWIFT_SDK_EPOCH_AT_LEAST)}
    function autoupdatingCurrentLocale: NSLocale; message 'autoupdatingCurrentLocale';
    function currentLocale: NSLocale; message 'currentLocale';
    function systemLocale: NSLocale; message 'systemLocale';
    {$endif}
    class function localeWithLocaleIdentifier (ident: NSString): instancetype; message 'localeWithLocaleIdentifier:'; { available in 10_6, 4_0 }
    function init: instancetype; message 'init';
  end;

type
  NSLocaleGeneralInfo = objccategory external (NSLocale)
    {$if defined(FOUNDATION_SWIFT_SDK_EPOCH_AT_LEAST)}
    function availableLocaleIdentifiers: NSString *ProtocolPtr; message 'availableLocaleIdentifiers';
    function ISOLanguageCodes: NSString *ProtocolPtr; message 'ISOLanguageCodes';
    function ISOCountryCodes: NSString *ProtocolPtr; message 'ISOCountryCodes';
    function ISOCurrencyCodes: NSString *ProtocolPtr; message 'ISOCurrencyCodes';
    function commonISOCurrencyCodes: NSString *ProtocolPtr; message 'commonISOCurrencyCodes';
    function preferredLanguages: NSString *ProtocolPtr; message 'preferredLanguages';
    {$endif}
    class function componentsFromLocaleIdentifier (string_: NSString): NSDictionary; message 'componentsFromLocaleIdentifier:';
    class function localeIdentifierFromComponents (dict: NSDictionary): NSString; message 'localeIdentifierFromComponents:';
    class function canonicalLocaleIdentifierFromString (string_: NSString): NSString; message 'canonicalLocaleIdentifierFromString:';
    class function canonicalLanguageIdentifierFromString (string_: NSString): NSString; message 'canonicalLanguageIdentifierFromString:';
    class function localeIdentifierFromWindowsLocaleCode (lcid: cuint32): nullable NSStringPtr; message 'localeIdentifierFromWindowsLocaleCode:'; { available in 10_6, 4_0 }
    class function windowsLocaleCodeFromLocaleIdentifier (localeIdentifier: NSString): cuint32; message 'windowsLocaleCodeFromLocaleIdentifier:'; { available in 10_6, 4_0 }
    class function characterDirectionForLanguage (isoLangCode: NSString): NSLocaleLanguageDirection; message 'characterDirectionForLanguage:'; { available in 10_6, 4_0 }
    class function lineDirectionForLanguage (isoLangCode: NSString): NSLocaleLanguageDirection; message 'lineDirectionForLanguage:'; { available in 10_6, 4_0 }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSCurrentLocaleDidChangeNotification: NSNotificationName { available in 10_5, 2_0 }; cvar; external;
  NSLocaleIdentifier: NSLocaleKey; cvar; external;
  NSLocaleLanguageCode: NSLocaleKey; cvar; external;
  NSLocaleCountryCode: NSLocaleKey; cvar; external;
  NSLocaleScriptCode: NSLocaleKey; cvar; external;
  NSLocaleVariantCode: NSLocaleKey; cvar; external;
  NSLocaleExemplarCharacterSet: NSLocaleKey; cvar; external;
  NSLocaleCalendar: NSLocaleKey; cvar; external;
  NSLocaleCollationIdentifier: NSLocaleKey; cvar; external;
  NSLocaleUsesMetricSystem: NSLocaleKey; cvar; external;
  NSLocaleMeasurementSystem: NSLocaleKey; cvar; external;
  NSLocaleDecimalSeparator: NSLocaleKey; cvar; external;
  NSLocaleGroupingSeparator: NSLocaleKey; cvar; external;
  NSLocaleCurrencySymbol: NSLocaleKey; cvar; external;
  NSLocaleCurrencyCode: NSLocaleKey; cvar; external;
  NSLocaleCollatorIdentifier: NSLocaleKey { available in 10_6, 4_0 }; cvar; external;
  NSLocaleQuotationBeginDelimiterKey: NSLocaleKey { available in 10_6, 4_0 }; cvar; external;
  NSLocaleQuotationEndDelimiterKey: NSLocaleKey { available in 10_6, 4_0 }; cvar; external;
  NSLocaleAlternateQuotationBeginDelimiterKey: NSLocaleKey { available in 10_6, 4_0 }; cvar; external;
  NSLocaleAlternateQuotationEndDelimiterKey: NSLocaleKey { available in 10_6, 4_0 }; cvar; external;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSGregorianCalendar: NSString deprecated 'in 10_4, 10_10, 2_0, 8_0, "Use NSCalendarIdentifierGregorian instead"'; cvar; external;
  NSBuddhistCalendar: NSString deprecated 'in 10_4, 10_10, 2_0, 8_0, "Use NSCalendarIdentifierBuddhist instead"'; cvar; external;
  NSChineseCalendar: NSString deprecated 'in 10_4, 10_10, 2_0, 8_0, "Use NSCalendarIdentifierChinese instead"'; cvar; external;
  NSHebrewCalendar: NSString deprecated 'in 10_4, 10_10, 2_0, 8_0, "Use NSCalendarIdentifierHebrew instead"'; cvar; external;
  NSIslamicCalendar: NSString deprecated 'in 10_4, 10_10, 2_0, 8_0, "Use NSCalendarIdentifierIslamic instead"'; cvar; external;
  NSIslamicCivilCalendar: NSString deprecated 'in 10_4, 10_10, 2_0, 8_0, "Use NSCalendarIdentifierIslamicCivil instead"'; cvar; external;
  NSJapaneseCalendar: NSString deprecated 'in 10_4, 10_10, 2_0, 8_0, "Use NSCalendarIdentifierJapanese instead"'; cvar; external;
  NSRepublicOfChinaCalendar: NSString deprecated 'in 10_6, 10_10, 4_0, 8_0, "Use NSCalendarIdentifierRepublicOfChina instead"'; cvar; external;
  NSPersianCalendar: NSString deprecated 'in 10_6, 10_10, 4_0, 8_0, "Use NSCalendarIdentifierPersian instead"'; cvar; external;
  NSIndianCalendar: NSString deprecated 'in 10_6, 10_10, 4_0, 8_0, "Use NSCalendarIdentifierIndian instead"'; cvar; external;
  NSISO8601Calendar: NSString deprecated 'in 10_6, 10_10, 4_0, 8_0, "Use NSCalendarIdentifierISO8601 instead"'; cvar; external;
{$endif}

