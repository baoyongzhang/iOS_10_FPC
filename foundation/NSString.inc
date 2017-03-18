{ Parsed from Foundation.framework NSString.h }

{ Types from NSStringExtensionMethods }
{$ifdef TYPES}

type
  NSStringEnumerationOptions = NSUInteger;
type
  NSStringEnumerationOptionsPtr = ^NSStringEnumerationOptions;

const
  NSStringEnumerationByLines = 0;
  NSStringEnumerationByParagraphs = 1;
  NSStringEnumerationByComposedCharacterSequences = 2;
  NSStringEnumerationByWords = 3;
  NSStringEnumerationBySentences = 4;
  NSStringEnumerationReverse = 1 shl 8;
  NSStringEnumerationSubstringNotRequired = 1 shl 9;
  NSStringEnumerationLocalized = 1 shl 10;



type
  NS_EXTENSIBLE_STRING_ENUM = NSString;
type
  NS_EXTENSIBLE_STRING_ENUMPtr = ^NS_EXTENSIBLE_STRING_ENUM;
{$endif}


{$ifdef TYPES}
type
  NSStringPtr = ^NSString;
  NSMutableStringPtr = ^NSMutableString;
  NSSimpleCStringPtr = ^NSSimpleCString;
  NSConstantStringPtr = ^NSConstantString;
{$endif}

{$ifdef TYPES}
type
  unichar = cushort;
  unicharPtr = ^unichar;
  NSStringCompareOptions = NSUInteger;
  NSStringCompareOptionsPtr = ^NSStringCompareOptions;

const
  NSCaseInsensitiveSearch = 1;
  NSLiteralSearch = 2;
  NSBackwardsSearch = 4;
  NSAnchoredSearch = 8;
  NSNumericSearch = 64;
  NSDiacriticInsensitiveSearch = 128 { available in 10_5, 2_0 };
  NSWidthInsensitiveSearch = 256 { available in 10_5, 2_0 };
  NSForcedOrderingSearch = 512 { available in 10_5, 2_0 };
  NSRegularExpressionSearch = 1024 { available in 10_7, 3_2 };

type
  NSStringEncoding = NSUInteger;
  NSStringEncodingPtr = ^NSStringEncoding;
  NSStringEncodingConversionOptions = NSUInteger;
  NSStringEncodingConversionOptionsPtr = ^NSStringEncodingConversionOptions;

const
  NSStringEncodingConversionAllowLossy = 1;
  NSStringEncodingConversionExternalRepresentation = 2;
{$endif}

{$ifdef CLASSES}

type
  NSString = objcclass external (NSObject, NSCopyingProtocol, NSMutableCopyingProtocol, NSSecureCodingProtocol)
  public
    function length: NSUInteger; message 'length';
    function characterAtIndex (index: NSUInteger): unichar; message 'characterAtIndex:';
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function mutableCopyWithZone (zone: nullable NSZonePtr): id; message 'mutableCopyWithZone:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;


type
  NSStringExtensionMethods = objccategory external (NSString)
    function substringFromIndex (from: NSUInteger): NSString; message 'substringFromIndex:';
    function substringToIndex (to_: NSUInteger): NSString; message 'substringToIndex:';
    function substringWithRange (range: NSRange): NSString; message 'substringWithRange:';
    procedure getCharacters_range (buffer: unicharPtr; range: NSRange); message 'getCharacters:range:';
    function compare (string_: NSString): NSComparisonResult; message 'compare:';
    function compare_options (string_: NSString; mask: NSStringCompareOptions): NSComparisonResult; message 'compare:options:';
    function compare_options_range (string_: NSString; mask: NSStringCompareOptions; rangeOfReceiverToCompare: NSRange): NSComparisonResult; message 'compare:options:range:';
    function compare_options_range_locale (string_: NSString; mask: NSStringCompareOptions; rangeOfReceiverToCompare: NSRange; locale: nullable id): NSComparisonResult; message 'compare:options:range:locale:';
    function caseInsensitiveCompare (string_: NSString): NSComparisonResult; message 'caseInsensitiveCompare:';
    function localizedCompare (string_: NSString): NSComparisonResult; message 'localizedCompare:';
    function localizedCaseInsensitiveCompare (string_: NSString): NSComparisonResult; message 'localizedCaseInsensitiveCompare:';
    function localizedStandardCompare (string_: NSString): NSComparisonResult; message 'localizedStandardCompare:'; { available in 10_6, 4_0 }
    function isEqualToString (aString: NSString): boolean; message 'isEqualToString:';
    function hasPrefix (str: NSString): boolean; message 'hasPrefix:';
    function hasSuffix (str: NSString): boolean; message 'hasSuffix:';
    function commonPrefixWithString_options (str: NSString; mask: NSStringCompareOptions): NSString; message 'commonPrefixWithString:options:';
    function containsString (str: NSString): boolean; message 'containsString:'; { available in 10_10, 8_0 }
    function localizedCaseInsensitiveContainsString (str: NSString): boolean; message 'localizedCaseInsensitiveContainsString:'; { available in 10_10, 8_0 }
    function localizedStandardContainsString (str: NSString): boolean; message 'localizedStandardContainsString:'; { available in 10_11, 9_0 }
    function localizedStandardRangeOfString (str: NSString): NSRange; message 'localizedStandardRangeOfString:'; { available in 10_11, 9_0 }
    function rangeOfString (searchString: NSString): NSRange; message 'rangeOfString:';
    function rangeOfString_options (searchString: NSString; mask: NSStringCompareOptions): NSRange; message 'rangeOfString:options:';
    function rangeOfString_options_range (searchString: NSString; mask: NSStringCompareOptions; rangeOfReceiverToSearch: NSRange): NSRange; message 'rangeOfString:options:range:';
    function rangeOfString_options_range_locale (searchString: NSString; mask: NSStringCompareOptions; rangeOfReceiverToSearch: NSRange; locale: nullable NSLocalePtr): NSRange; message 'rangeOfString:options:range:locale:'; { available in 10_5, 2_0 }
    function rangeOfCharacterFromSet (searchSet: NSCharacterSet): NSRange; message 'rangeOfCharacterFromSet:';
    function rangeOfCharacterFromSet_options (searchSet: NSCharacterSet; mask: NSStringCompareOptions): NSRange; message 'rangeOfCharacterFromSet:options:';
    function rangeOfCharacterFromSet_options_range (searchSet: NSCharacterSet; mask: NSStringCompareOptions; rangeOfReceiverToSearch: NSRange): NSRange; message 'rangeOfCharacterFromSet:options:range:';
    function rangeOfComposedCharacterSequenceAtIndex (index: NSUInteger): NSRange; message 'rangeOfComposedCharacterSequenceAtIndex:';
    function rangeOfComposedCharacterSequencesForRange (range: NSRange): NSRange; message 'rangeOfComposedCharacterSequencesForRange:'; { available in 10_5, 2_0 }
    function stringByAppendingString (aString: NSString): NSString; message 'stringByAppendingString:';
    function stringByAppendingFormat (format: NSString): NSString; varargs; message 'stringByAppendingFormat:';
    function doubleValue: double; message 'doubleValue';
    function floatValue: single; message 'floatValue';
    function intValue: cint; message 'intValue';
    function integerValue: NSInteger; message 'integerValue';
    function longLongValue: clonglong; message 'longLongValue';
    function boolValue: boolean; message 'boolValue';
    function uppercaseString: NSString; message 'uppercaseString';
    function lowercaseString: NSString; message 'lowercaseString';
    function capitalizedString: NSString; message 'capitalizedString';
    function localizedUppercaseString: NSString; message 'localizedUppercaseString';
    function localizedLowercaseString: NSString; message 'localizedLowercaseString';
    function localizedCapitalizedString: NSString; message 'localizedCapitalizedString';
    function uppercaseStringWithLocale (locale: nullable NSLocalePtr): NSString; message 'uppercaseStringWithLocale:'; { available in 10_8, 6_0 }
    function lowercaseStringWithLocale (locale: nullable NSLocalePtr): NSString; message 'lowercaseStringWithLocale:'; { available in 10_8, 6_0 }
    function capitalizedStringWithLocale (locale: nullable NSLocalePtr): NSString; message 'capitalizedStringWithLocale:'; { available in 10_8, 6_0 }
    procedure getLineStart_end_contentsEnd_forRange (startPtr: nullable NSUIntegerPtr; lineEndPtr: nullable NSUIntegerPtr; contentsEndPtr: nullable NSUIntegerPtr; range: NSRange); message 'getLineStart:end:contentsEnd:forRange:';
    function lineRangeForRange (range: NSRange): NSRange; message 'lineRangeForRange:';
    procedure getParagraphStart_end_contentsEnd_forRange (startPtr: nullable NSUIntegerPtr; parEndPtr: nullable NSUIntegerPtr; contentsEndPtr: nullable NSUIntegerPtr; range: NSRange); message 'getParagraphStart:end:contentsEnd:forRange:';
    function paragraphRangeForRange (range: NSRange): NSRange; message 'paragraphRangeForRange:';
    procedure enumerateSubstringsInRange_options_usingBlock (range: NSRange; opts: NSStringEnumerationOptions; block: OpaqueCBlock); message 'enumerateSubstringsInRange:options:usingBlock:'; { available in 10_6, 4_0 }
    procedure enumerateLinesUsingBlock (block: OpaqueCBlock); message 'enumerateLinesUsingBlock:'; { available in 10_6, 4_0 }
    function UTF8String: PChar; message 'UTF8String';
    function fastestEncoding: NSStringEncoding; message 'fastestEncoding';
    function smallestEncoding: NSStringEncoding; message 'smallestEncoding';
    function dataUsingEncoding_allowLossyConversion (encoding: NSStringEncoding; lossy: boolean): nullable NSDataPtr; message 'dataUsingEncoding:allowLossyConversion:';
    function dataUsingEncoding (encoding: NSStringEncoding): nullable NSDataPtr; message 'dataUsingEncoding:';
    function canBeConvertedToEncoding (encoding: NSStringEncoding): boolean; message 'canBeConvertedToEncoding:';
    function cStringUsingEncoding (encoding: NSStringEncoding): nullable  charPtr; message 'cStringUsingEncoding:';
    function getCString_maxLength_encoding (buffer: PChar; maxBufferCount: NSUInteger; encoding: NSStringEncoding): boolean; message 'getCString:maxLength:encoding:';
    function getBytes_maxLength_usedLength_encoding_options_range_remainingRange (buffer: nullable voidPtr; maxBufferCount: NSUInteger; usedBufferCount: nullable NSUIntegerPtr; encoding: NSStringEncoding; options: NSStringEncodingConversionOptions; range: NSRange; leftover: nullable NSRangePointer): boolean; message 'getBytes:maxLength:usedLength:encoding:options:range:remainingRange:';
    function maximumLengthOfBytesUsingEncoding (enc: NSStringEncoding): NSUInteger; message 'maximumLengthOfBytesUsingEncoding:';
    function lengthOfBytesUsingEncoding (enc: NSStringEncoding): NSUInteger; message 'lengthOfBytesUsingEncoding:';
    {$if defined(FOUNDATION_SWIFT_SDK_EPOCH_AT_LEAST)}
    function availableStringEncodings: NSStringEncodingPtr; message 'availableStringEncodings';
    {$endif}
    class function localizedNameOfStringEncoding (encoding: NSStringEncoding): NSString; message 'localizedNameOfStringEncoding:';
    {$if defined(FOUNDATION_SWIFT_SDK_EPOCH_AT_LEAST)}
    function defaultCStringEncoding: NSStringEncoding; message 'defaultCStringEncoding';
    {$endif}
    function decomposedStringWithCanonicalMapping: NSString; message 'decomposedStringWithCanonicalMapping';
    function precomposedStringWithCanonicalMapping: NSString; message 'precomposedStringWithCanonicalMapping';
    function decomposedStringWithCompatibilityMapping: NSString; message 'decomposedStringWithCompatibilityMapping';
    function precomposedStringWithCompatibilityMapping: NSString; message 'precomposedStringWithCompatibilityMapping';
    function componentsSeparatedByString (separator: NSString): NSString *ProtocolPtr; message 'componentsSeparatedByString:';
    function componentsSeparatedByCharactersInSet (separator: NSCharacterSet): NSString *ProtocolPtr; message 'componentsSeparatedByCharactersInSet:'; { available in 10_5, 2_0 }
    function stringByTrimmingCharactersInSet (set_: NSCharacterSet): NSString; message 'stringByTrimmingCharactersInSet:';
    function stringByPaddingToLength_withString_startingAtIndex (newLength: NSUInteger; padString: NSString; padIndex: NSUInteger): NSString; message 'stringByPaddingToLength:withString:startingAtIndex:';
    function stringByFoldingWithOptions_locale (options: NSStringCompareOptions; locale: nullable NSLocalePtr): NSString; message 'stringByFoldingWithOptions:locale:'; { available in 10_5, 2_0 }
    function stringByReplacingOccurrencesOfString_withString_options_range (target: NSString; replacement: NSString; options: NSStringCompareOptions; searchRange: NSRange): NSString; message 'stringByReplacingOccurrencesOfString:withString:options:range:'; { available in 10_5, 2_0 }
    function stringByReplacingOccurrencesOfString_withString (target: NSString; replacement: NSString): NSString; message 'stringByReplacingOccurrencesOfString:withString:'; { available in 10_5, 2_0 }
    function stringByReplacingCharactersInRange_withString (range: NSRange; replacement: NSString): NSString; message 'stringByReplacingCharactersInRange:withString:'; { available in 10_5, 2_0 }
    function stringByApplyingTransform_reverse (transform: NSStringTransform; reverse: boolean): nullable NSStringPtr; message 'stringByApplyingTransform:reverse:'; { available in 10_11, 9_0 }
    function writeToURL_atomically_encoding_error (url: NSURL; useAuxiliaryFile: boolean; enc: NSStringEncoding; error: NSErrorPtr): boolean; message 'writeToURL:atomically:encoding:error:';
    function writeToFile_atomically_encoding_error (path: NSString; useAuxiliaryFile: boolean; enc: NSStringEncoding; error: NSErrorPtr): boolean; message 'writeToFile:atomically:encoding:error:';
    function description: NSString; message 'description';
    function hash: NSUInteger; message 'hash';
    function initWithCharactersNoCopy_length_freeWhenDone (characters: unicharPtr; length_: NSUInteger; freeBuffer: boolean): instancetype; message 'initWithCharactersNoCopy:length:freeWhenDone:';
    function initWithCharacters_length (characters: unicharPtr; length_: NSUInteger): instancetype; message 'initWithCharacters:length:';
    function initWithUTF8String (nullTerminatedCString: PChar): nullable instancetype; message 'initWithUTF8String:';
    function initWithString (aString: NSString): instancetype; message 'initWithString:';
    function initWithFormat (format: NSString): instancetype; varargs; message 'initWithFormat:';
    function initWithFormat_arguments (format: NSString; argList: va_list): instancetype; message 'initWithFormat:arguments:';
    function initWithFormat_locale (format: NSString; locale: nullable id): instancetype; varargs; message 'initWithFormat:locale:';
    function initWithFormat_locale_arguments (format: NSString; locale: nullable id; argList: va_list): instancetype; message 'initWithFormat:locale:arguments:';
    function initWithData_encoding (data: NSData; encoding: NSStringEncoding): nullable instancetype; message 'initWithData:encoding:';
    function initWithBytes_length_encoding (bytes: pointer; len: NSUInteger; encoding: NSStringEncoding): nullable instancetype; message 'initWithBytes:length:encoding:';
    function initWithBytesNoCopy_length_encoding_freeWhenDone (bytes: pointer; len: NSUInteger; encoding: NSStringEncoding; freeBuffer: boolean): nullable instancetype; message 'initWithBytesNoCopy:length:encoding:freeWhenDone:';
    class function string_: instancetype; message 'string';
    class function stringWithString (string__: NSString): instancetype; message 'stringWithString:';
    class function stringWithCharacters_length (characters: unicharPtr; length_: NSUInteger): instancetype; message 'stringWithCharacters:length:';
    class function stringWithUTF8String (nullTerminatedCString: PChar): nullable instancetype; message 'stringWithUTF8String:';
    class function stringWithFormat (format: NSString): instancetype; varargs; message 'stringWithFormat:';
    class function localizedStringWithFormat (format: NSString): instancetype; varargs; message 'localizedStringWithFormat:';
    function initWithCString_encoding (nullTerminatedCString: PChar; encoding: NSStringEncoding): nullable instancetype; message 'initWithCString:encoding:';
    class function stringWithCString_encoding (cString: PChar; enc: NSStringEncoding): nullable instancetype; message 'stringWithCString:encoding:';
    function initWithContentsOfURL_encoding_error (url: NSURL; enc: NSStringEncoding; error: NSErrorPtr): nullable instancetype; message 'initWithContentsOfURL:encoding:error:';
    function initWithContentsOfFile_encoding_error (path: NSString; enc: NSStringEncoding; error: NSErrorPtr): nullable instancetype; message 'initWithContentsOfFile:encoding:error:';
    class function stringWithContentsOfURL_encoding_error (url: NSURL; enc: NSStringEncoding; error: NSErrorPtr): nullable instancetype; message 'stringWithContentsOfURL:encoding:error:';
    class function stringWithContentsOfFile_encoding_error (path: NSString; enc: NSStringEncoding; error: NSErrorPtr): nullable instancetype; message 'stringWithContentsOfFile:encoding:error:';
    function initWithContentsOfURL_usedEncoding_error (url: NSURL; enc: nullable NSStringEncodingPtr; error: NSErrorPtr): nullable instancetype; message 'initWithContentsOfURL:usedEncoding:error:';
    function initWithContentsOfFile_usedEncoding_error (path: NSString; enc: nullable NSStringEncodingPtr; error: NSErrorPtr): nullable instancetype; message 'initWithContentsOfFile:usedEncoding:error:';
    class function stringWithContentsOfURL_usedEncoding_error (url: NSURL; enc: nullable NSStringEncodingPtr; error: NSErrorPtr): nullable instancetype; message 'stringWithContentsOfURL:usedEncoding:error:';
    class function stringWithContentsOfFile_usedEncoding_error (path: NSString; enc: nullable NSStringEncodingPtr; error: NSErrorPtr): nullable instancetype; message 'stringWithContentsOfFile:usedEncoding:error:';
  end;
{$endif}

{$ifdef TYPES}
type
  NS_STRING_ENUM = NSString;
  NS_STRING_ENUMPtr = ^NS_STRING_ENUM;
{$endif}

{$ifdef CLASSES}

type
  NSStringEncodingDetection = objccategory external (NSString)
    class function stringEncodingForData_encodingOptions_convertedString_usedLossyConversion (data: NSData; opts: nullable NSDictionaryPtr; string_: NSString * _Nullable * _Nullable; usedLossyConversion: nullable BOOLPtr): NSStringEncoding; message 'stringEncodingForData:encodingOptions:convertedString:usedLossyConversion:'; { available in 10_10, 8_0 }
  end;


type
  NSMutableString = objcclass external (NSString)
  public
    procedure replaceCharactersInRange_withString (range: NSRange; aString: NSString); message 'replaceCharactersInRange:withString:';
  end;


type
  NSMutableStringExtensionMethods = objccategory external (NSMutableString)
    procedure insertString_atIndex (aString: NSString; loc: NSUInteger); message 'insertString:atIndex:';
    procedure deleteCharactersInRange (range: NSRange); message 'deleteCharactersInRange:';
    procedure appendString (aString: NSString); message 'appendString:';
    procedure appendFormat (format: NSString); varargs; message 'appendFormat:';
    procedure setString (aString: NSString); message 'setString:';
    function replaceOccurrencesOfString_withString_options_range (target: NSString; replacement: NSString; options: NSStringCompareOptions; searchRange: NSRange): NSUInteger; message 'replaceOccurrencesOfString:withString:options:range:';
    function applyTransform_reverse_range_updatedRange (transform: NSString; reverse: boolean; range: NSRange; resultingRange: nullable NSRangePointer): boolean; message 'applyTransform:reverse:range:updatedRange:'; { available in 10_11, 9_0 }
    function initWithCapacity (capacity: NSUInteger): NSMutableString; message 'initWithCapacity:';
    class function stringWithCapacity (capacity: NSUInteger): NSMutableString; message 'stringWithCapacity:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSCharacterConversionException: NSExceptionName; cvar; external;
  NSParseErrorException: NSExceptionName; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSExtendedStringPropertyListParsing = objccategory external (NSString)
    function propertyList: id; message 'propertyList';
    function propertyListFromStringsFileFormat: nullable NSDictionaryPtr; message 'propertyListFromStringsFileFormat';
  end;

type
  NSStringDeprecated = objccategory external (NSString)
    function cString: nullable  charPtr; message 'cString'; deprecated 'in 10_0, 10_4, 2_0, 2_0';
    function lossyCString: nullable  charPtr; message 'lossyCString'; deprecated 'in 10_0, 10_4, 2_0, 2_0';
    function cStringLength: NSUInteger; message 'cStringLength'; deprecated 'in 10_0, 10_4, 2_0, 2_0';
    procedure getCString (bytes: PChar); message 'getCString:'; deprecated 'in 10_0, 10_4, 2_0, 2_0';
    procedure getCString_maxLength (bytes: PChar; maxLength: NSUInteger); message 'getCString:maxLength:'; deprecated 'in 10_0, 10_4, 2_0, 2_0';
    procedure getCString_maxLength_range_remainingRange (bytes: PChar; maxLength: NSUInteger; aRange: NSRange; leftoverRange: nullable NSRangePointer); message 'getCString:maxLength:range:remainingRange:'; deprecated 'in 10_0, 10_4, 2_0, 2_0';
    function writeToFile_atomically (path: NSString; useAuxiliaryFile: boolean): boolean; message 'writeToFile:atomically:'; deprecated 'in 10_0, 10_4, 2_0, 2_0';
    function writeToURL_atomically (url: NSURL; atomically: boolean): boolean; message 'writeToURL:atomically:'; deprecated 'in 10_0, 10_4, 2_0, 2_0';
    function initWithContentsOfFile (path: NSString): nullable id; message 'initWithContentsOfFile:'; deprecated 'in 10_0, 10_4, 2_0, 2_0';
    function initWithContentsOfURL (url: NSURL): nullable id; message 'initWithContentsOfURL:'; deprecated 'in 10_0, 10_4, 2_0, 2_0';
    class function stringWithContentsOfFile (path: NSString): nullable id; message 'stringWithContentsOfFile:'; deprecated 'in 10_0, 10_4, 2_0, 2_0';
    class function stringWithContentsOfURL (url: NSURL): nullable id; message 'stringWithContentsOfURL:'; deprecated 'in 10_0, 10_4, 2_0, 2_0';
    function initWithCStringNoCopy_length_freeWhenDone (bytes: PChar; length_: NSUInteger; freeBuffer: boolean): nullable id; message 'initWithCStringNoCopy:length:freeWhenDone:'; deprecated 'in 10_0, 10_4, 2_0, 2_0';
    function initWithCString_length (bytes: PChar; length_: NSUInteger): nullable id; message 'initWithCString:length:'; deprecated 'in 10_0, 10_4, 2_0, 2_0';
    function initWithCString (bytes: PChar): nullable id; message 'initWithCString:'; deprecated 'in 10_0, 10_4, 2_0, 2_0';
    class function stringWithCString_length (bytes: PChar; length_: NSUInteger): nullable id; message 'stringWithCString:length:'; deprecated 'in 10_0, 10_4, 2_0, 2_0';
    class function stringWithCString (bytes: PChar): nullable id; message 'stringWithCString:'; deprecated 'in 10_0, 10_4, 2_0, 2_0';
    procedure getCharacters (buffer: unicharPtr); message 'getCharacters:';
  end;
{$endif}

{$ifdef TYPES}
const
  NS_UNICHAR_IS_EIGHT_BIT = 0;
{$endif}

{$ifdef CLASSES}

type
  NSSimpleCString = objcclass external (NSString)
  private
    bytes: PChar;
    numBytes: cint;
    {$if defined(__LP64__)}
    _unused: cint;
    {$endif}
  end;

type
  NSConstantString = objcclass external (NSSimpleCString)
  end;
{$endif}

{$if defined(__LP64__)}

{$else}
{$ifdef EXTERNAL_SYMBOLS}
var
  _NSConstantStringClassReference: pointer; cvar; external;
{$endif}

{$endif}
