{ Parsed from CoreFoundation.framework CFString.h }
{$ifdef TYPES}
const
  __COREFOUNDATION_CFSTRING__ = 1;

type
  CFStringEncoding = UInt32;
  CFStringEncodingPtr = ^CFStringEncoding;

const
  kCFStringEncodingInvalidId = $ffffffff;

type
  CFStringBuiltInEncodings = CFStringEncoding;
  CFStringBuiltInEncodingsPtr = ^CFStringBuiltInEncodings;

const
  kCFStringEncodingMacRoman = 0;
  kCFStringEncodingWindowsLatin1 = $0500;
  kCFStringEncodingISOLatin1 = $0201;
  kCFStringEncodingNextStepLatin = $0B01;
  kCFStringEncodingASCII = $0600;
  kCFStringEncodingUnicode = $0100;
  kCFStringEncodingUTF8 = $08000100;
  kCFStringEncodingNonLossyASCII = $0BFF;
  kCFStringEncodingUTF16 = $0100;
  kCFStringEncodingUTF16BE = $10000100;
  kCFStringEncodingUTF16LE = $14000100;
  kCFStringEncodingUTF32 = $0c000100;
  kCFStringEncodingUTF32BE = $18000100;
  kCFStringEncodingUTF32LE = $1c000100;
{$endif}

{$ifdef FUNCTIONS}
function CFStringGetTypeID: CFTypeID; cdecl; external;
{$endif}

{$ifdef FUNCTIONS}
function CFStringCreateWithPascalString(alloc: CFAllocatorRef; pStr: ConstStr255Param; encoding: CFStringEncoding): CFStringRef; cdecl; external;
function CFStringCreateWithCString(alloc: CFAllocatorRef; cStr: PChar; encoding: CFStringEncoding): CFStringRef; cdecl; external;
function CFStringCreateWithBytes(alloc: CFAllocatorRef; bytes: pointer; numBytes: CFIndex; encoding: CFStringEncoding; isExternalRepresentation: Boolean): CFStringRef; cdecl; external;
function CFStringCreateWithCharacters(alloc: CFAllocatorRef; chars: UniCharPtr; numChars: CFIndex): CFStringRef; cdecl; external;
function CFStringCreateWithPascalStringNoCopy(alloc: CFAllocatorRef; pStr: ConstStr255Param; encoding: CFStringEncoding; contentsDeallocator: CFAllocatorRef): CFStringRef; cdecl; external;
function CFStringCreateWithCStringNoCopy(alloc: CFAllocatorRef; cStr: PChar; encoding: CFStringEncoding; contentsDeallocator: CFAllocatorRef): CFStringRef; cdecl; external;
function CFStringCreateWithBytesNoCopy(alloc: CFAllocatorRef; bytes: pointer; numBytes: CFIndex; encoding: CFStringEncoding; isExternalRepresentation: Boolean; contentsDeallocator: CFAllocatorRef): CFStringRef; cdecl; external;
function CFStringCreateWithCharactersNoCopy(alloc: CFAllocatorRef; chars: UniCharPtr; numChars: CFIndex; contentsDeallocator: CFAllocatorRef): CFStringRef; cdecl; external;
function CFStringCreateWithSubstring(alloc: CFAllocatorRef; str: CFStringRef; range: CFRange): CFStringRef; cdecl; external;
function CFStringCreateCopy(alloc: CFAllocatorRef; theString: CFStringRef): CFStringRef; cdecl; external;
function CFStringCreateWithFormat(alloc: CFAllocatorRef; formatOptions: CFDictionaryRef; format: CFStringRef): CFStringRef; varargs; cdecl; external;
function CFStringCreateWithFormatAndArguments(alloc: CFAllocatorRef; formatOptions: CFDictionaryRef; format: CFStringRef; arguments: va_list): CFStringRef; cdecl; external;
function CFStringCreateMutable(alloc: CFAllocatorRef; maxLength: CFIndex): CFMutableStringRef; cdecl; external;
function CFStringCreateMutableCopy(alloc: CFAllocatorRef; maxLength: CFIndex; theString: CFStringRef): CFMutableStringRef; cdecl; external;
function CFStringCreateMutableWithExternalCharactersNoCopy(alloc: CFAllocatorRef; chars: UniCharPtr; numChars: CFIndex; capacity: CFIndex; externalCharactersAllocator: CFAllocatorRef): CFMutableStringRef; cdecl; external;
function CFStringGetLength(theString: CFStringRef): CFIndex; cdecl; external;
function CFStringGetCharacterAtIndex(theString: CFStringRef; idx: CFIndex): UniChar; cdecl; external;
procedure CFStringGetCharacters(theString: CFStringRef; range: CFRange; buffer: UniCharPtr); cdecl; external;
function CFStringGetPascalString(theString: CFStringRef; buffer: StringPtr; bufferSize: CFIndex; encoding: CFStringEncoding): Boolean; cdecl; external;
function CFStringGetCString(theString: CFStringRef; buffer: PChar; bufferSize: CFIndex; encoding: CFStringEncoding): Boolean; cdecl; external;
function CFStringGetPascalStringPtr(theString: CFStringRef; encoding: CFStringEncoding): ConstStringPtr; cdecl; external;
function CFStringGetCStringPtr(theString: CFStringRef; encoding: CFStringEncoding): PChar; cdecl; external;
function CFStringGetCharactersPtr(theString: CFStringRef): UniCharPtr; cdecl; external;
function CFStringGetBytes(theString: CFStringRef; range: CFRange; encoding: CFStringEncoding; lossByte: UInt8; isExternalRepresentation: Boolean; buffer: pointer; maxBufLen: CFIndex; var usedBufLen: CFIndex): CFIndex; cdecl; external;
function CFStringCreateFromExternalRepresentation(alloc: CFAllocatorRef; data: CFDataRef; encoding: CFStringEncoding): CFStringRef; cdecl; external;
function CFStringCreateExternalRepresentation(alloc: CFAllocatorRef; theString: CFStringRef; encoding: CFStringEncoding; lossByte: UInt8): CFDataRef; cdecl; external;
function CFStringGetSmallestEncoding(theString: CFStringRef): CFStringEncoding; cdecl; external;
function CFStringGetFastestEncoding(theString: CFStringRef): CFStringEncoding; cdecl; external;
function CFStringGetSystemEncoding: CFStringEncoding; cdecl; external;
function CFStringGetMaximumSizeForEncoding(length: CFIndex; encoding: CFStringEncoding): CFIndex; cdecl; external;
function CFStringGetFileSystemRepresentation(string_: CFStringRef; buffer: PChar; maxBufLen: CFIndex): Boolean; cdecl; external;
function CFStringGetMaximumSizeOfFileSystemRepresentation(string_: CFStringRef): CFIndex; cdecl; external;
function CFStringCreateWithFileSystemRepresentation(alloc: CFAllocatorRef; buffer: PChar): CFStringRef; cdecl; external;
{$endif}

{$ifdef TYPES}
type
  CFStringCompareFlags = CFOptionFlags;
  CFStringCompareFlagsPtr = ^CFStringCompareFlags;

const
  kCFCompareCaseInsensitive = 1;
  kCFCompareBackwards = 4;
  kCFCompareAnchored = 8;
  kCFCompareNonliteral = 16;
  kCFCompareLocalized = 32;
  kCFCompareNumerically = 64;
  kCFCompareDiacriticInsensitive = 128 { available in 10_5, 2_0 };
  kCFCompareWidthInsensitive = 256 { available in 10_5, 2_0 };
  kCFCompareForcedOrdering = 512 { available in 10_5, 2_0 };
{$endif}

{$ifdef FUNCTIONS}
function CFStringCompareWithOptionsAndLocale(theString1: CFStringRef; theString2: CFStringRef; rangeToCompare: CFRange; compareOptions: CFStringCompareFlags; locale: CFLocaleRef): CFComparisonResult; cdecl; external; { available in 10_5, 2_0 }
function CFStringCompareWithOptions(theString1: CFStringRef; theString2: CFStringRef; rangeToCompare: CFRange; compareOptions: CFStringCompareFlags): CFComparisonResult; cdecl; external;
function CFStringCompare(theString1: CFStringRef; theString2: CFStringRef; compareOptions: CFStringCompareFlags): CFComparisonResult; cdecl; external;
function CFStringFindWithOptionsAndLocale(theString: CFStringRef; stringToFind: CFStringRef; rangeToSearch: CFRange; searchOptions: CFStringCompareFlags; locale: CFLocaleRef; var result_: CFRange): Boolean; cdecl; external; { available in 10_5, 2_0 }
function CFStringFindWithOptions(theString: CFStringRef; stringToFind: CFStringRef; rangeToSearch: CFRange; searchOptions: CFStringCompareFlags; var result_: CFRange): Boolean; cdecl; external;
function CFStringCreateArrayWithFindResults(alloc: CFAllocatorRef; theString: CFStringRef; stringToFind: CFStringRef; rangeToSearch: CFRange; compareOptions: CFStringCompareFlags): CFArrayRef; cdecl; external;
function CFStringFind(theString: CFStringRef; stringToFind: CFStringRef; compareOptions: CFStringCompareFlags): CFRange; cdecl; external;
function CFStringHasPrefix(theString: CFStringRef; prefix: CFStringRef): Boolean; cdecl; external;
function CFStringHasSuffix(theString: CFStringRef; suffix: CFStringRef): Boolean; cdecl; external;
function CFStringGetRangeOfComposedCharactersAtIndex(theString: CFStringRef; theIndex: CFIndex): CFRange; cdecl; external;
function CFStringFindCharacterFromSet(theString: CFStringRef; theSet: CFCharacterSetRef; rangeToSearch: CFRange; searchOptions: CFStringCompareFlags; var result_: CFRange): Boolean; cdecl; external;
procedure CFStringGetLineBounds(theString: CFStringRef; range: CFRange; var lineBeginIndex: CFIndex; var lineEndIndex: CFIndex; var contentsEndIndex: CFIndex); cdecl; external;
procedure CFStringGetParagraphBounds(string_: CFStringRef; range: CFRange; var parBeginIndex: CFIndex; var parEndIndex: CFIndex; var contentsEndIndex: CFIndex); cdecl; external; { available in 10_5, 2_0 }
function CFStringGetHyphenationLocationBeforeIndex(string_: CFStringRef; location: CFIndex; limitRange: CFRange; options: CFOptionFlags; locale: CFLocaleRef; character: UTF32CharPtr): CFIndex; cdecl; external; { available in 10_7, 4_2 }
function CFStringIsHyphenationAvailableForLocale(locale: CFLocaleRef): Boolean; cdecl; external; { available in 10_7, 4_3 }
function CFStringCreateByCombiningStrings(alloc: CFAllocatorRef; theArray: CFArrayRef; separatorString: CFStringRef): CFStringRef; cdecl; external;
function CFStringCreateArrayBySeparatingStrings(alloc: CFAllocatorRef; theString: CFStringRef; separatorString: CFStringRef): CFArrayRef; cdecl; external;
function CFStringGetIntValue(str: CFStringRef): SInt32; cdecl; external;
function CFStringGetDoubleValue(str: CFStringRef): double; cdecl; external;
procedure CFStringAppend(theString: CFMutableStringRef; appendedString: CFStringRef); cdecl; external;
procedure CFStringAppendCharacters(theString: CFMutableStringRef; chars: UniCharPtr; numChars: CFIndex); cdecl; external;
procedure CFStringAppendPascalString(theString: CFMutableStringRef; pStr: ConstStr255Param; encoding: CFStringEncoding); cdecl; external;
procedure CFStringAppendCString(theString: CFMutableStringRef; cStr: PChar; encoding: CFStringEncoding); cdecl; external;
procedure CFStringAppendFormat(theString: CFMutableStringRef; formatOptions: CFDictionaryRef; format: CFStringRef); varargs; cdecl; external;
procedure CFStringAppendFormatAndArguments(theString: CFMutableStringRef; formatOptions: CFDictionaryRef; format: CFStringRef; arguments: va_list); cdecl; external;
procedure CFStringInsert(str: CFMutableStringRef; idx: CFIndex; insertedStr: CFStringRef); cdecl; external;
procedure CFStringDelete(theString: CFMutableStringRef; range: CFRange); cdecl; external;
procedure CFStringReplace(theString: CFMutableStringRef; range: CFRange; replacement: CFStringRef); cdecl; external;
procedure CFStringReplaceAll(theString: CFMutableStringRef; replacement: CFStringRef); cdecl; external;
function CFStringFindAndReplace(theString: CFMutableStringRef; stringToFind: CFStringRef; replacementString: CFStringRef; rangeToSearch: CFRange; compareOptions: CFStringCompareFlags): CFIndex; cdecl; external;
procedure CFStringSetExternalCharactersNoCopy(theString: CFMutableStringRef; chars: UniCharPtr; length: CFIndex; capacity: CFIndex); cdecl; external;
procedure CFStringPad(theString: CFMutableStringRef; padString: CFStringRef; length: CFIndex; indexIntoPad: CFIndex); cdecl; external;
procedure CFStringTrim(theString: CFMutableStringRef; trimString: CFStringRef); cdecl; external;
procedure CFStringTrimWhitespace(theString: CFMutableStringRef); cdecl; external;
procedure CFStringLowercase(theString: CFMutableStringRef; locale: CFLocaleRef); cdecl; external;
procedure CFStringUppercase(theString: CFMutableStringRef; locale: CFLocaleRef); cdecl; external;
procedure CFStringCapitalize(theString: CFMutableStringRef; locale: CFLocaleRef); cdecl; external;
{$endif}

{$ifdef TYPES}
type
  CFStringNormalizationForm = CFIndex;
  CFStringNormalizationFormPtr = ^CFStringNormalizationForm;

const
  kCFStringNormalizationFormD = 0;
  kCFStringNormalizationFormKD = 1;
  kCFStringNormalizationFormC = 2;
  kCFStringNormalizationFormKC = 3;
{$endif}

{$ifdef FUNCTIONS}
procedure CFStringNormalize(theString: CFMutableStringRef; theForm: CFStringNormalizationForm); cdecl; external;
procedure CFStringFold(theString: CFMutableStringRef; theFlags: CFStringCompareFlags; theLocale: CFLocaleRef); cdecl; external; { available in 10_5, 2_0 }
function CFStringTransform(string_: CFMutableStringRef; var range: CFRange; transform: CFStringRef; reverse: Boolean): Boolean; cdecl; external;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCFStringTransformStripCombiningMarks: CFStringRef; cvar; external;
  kCFStringTransformToLatin: CFStringRef; cvar; external;
  kCFStringTransformFullwidthHalfwidth: CFStringRef; cvar; external;
  kCFStringTransformLatinKatakana: CFStringRef; cvar; external;
  kCFStringTransformLatinHiragana: CFStringRef; cvar; external;
  kCFStringTransformHiraganaKatakana: CFStringRef; cvar; external;
  kCFStringTransformMandarinLatin: CFStringRef; cvar; external;
  kCFStringTransformLatinHangul: CFStringRef; cvar; external;
  kCFStringTransformLatinArabic: CFStringRef; cvar; external;
  kCFStringTransformLatinHebrew: CFStringRef; cvar; external;
  kCFStringTransformLatinThai: CFStringRef; cvar; external;
  kCFStringTransformLatinCyrillic: CFStringRef; cvar; external;
  kCFStringTransformLatinGreek: CFStringRef; cvar; external;
  kCFStringTransformToXMLHex: CFStringRef; cvar; external;
  kCFStringTransformToUnicodeName: CFStringRef; cvar; external;
  kCFStringTransformStripDiacritics: CFStringRef { available in 10_5, 2_0 }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function CFStringIsEncodingAvailable(encoding: CFStringEncoding): Boolean; cdecl; external;
function CFStringGetListOfAvailableEncodings: CFStringEncodingPtr; cdecl; external;
function CFStringGetNameOfEncoding(encoding: CFStringEncoding): CFStringRef; cdecl; external;
function CFStringConvertEncodingToNSStringEncoding(encoding: CFStringEncoding): culong; cdecl; external;
function CFStringConvertNSStringEncodingToEncoding(encoding: culong): CFStringEncoding; cdecl; external;
function CFStringConvertEncodingToWindowsCodepage(encoding: CFStringEncoding): UInt32; cdecl; external;
function CFStringConvertWindowsCodepageToEncoding(codepage: UInt32): CFStringEncoding; cdecl; external;
function CFStringConvertIANACharSetNameToEncoding(theString: CFStringRef): CFStringEncoding; cdecl; external;
function CFStringConvertEncodingToIANACharSetName(encoding: CFStringEncoding): CFStringRef; cdecl; external;
function CFStringGetMostCompatibleMacStringEncoding(encoding: CFStringEncoding): CFStringEncoding; cdecl; external;
{$endif}

{$ifdef TYPES}
const
  __kCFStringInlineBufferLength = 64;

type
  CFStringInlineBuffer = record
    buffer:array[0..(__kCFStringInlineBufferLength)-1] of UniChar;
    theString: CFStringRef;
    directUniCharBuffer: UniCharPtr;
    directCStringBuffer: PChar;
    rangeToBuffer: CFRange;
    bufferedRangeStart: CFIndex;
    bufferedRangeEnd: CFIndex;
  end;
type
  CFStringInlineBufferPtr = ^CFStringInlineBuffer;
{$endif}

{$if (defined(CF_INLINE))}

{$else}
{$ifdef FUNCTIONS}
procedure CFShow(obj: CFTypeRef); cdecl; external;
procedure CFShowStr(str: CFStringRef); cdecl; external;
function __CFStringMakeConstantString(cStr: PChar): CFStringRef; cdecl; external;
{$endif}

{$endif}
