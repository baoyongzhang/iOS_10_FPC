{ Parsed from CoreText.framework CTFontCollection.h }

{$ifndef __CTFONTCOLLECTION__}

{$if defined(TARGET_OS_IPHONE)}
{$ifdef TYPES}
type
  CTFontCollectionRef = OpaqueType;
{$endif}

{$else}
{$ifdef TYPES}
type
  CTFontCollectionRef = OpaqueType;
{$endif}

{$endif}

{$if defined(TARGET_OS_IPHONE)}
{$ifdef TYPES}
type
  CTMutableFontCollectionRef = OpaqueType;
{$endif}

{$else}
{$ifdef TYPES}
type
  CTMutableFontCollectionRef = OpaqueType;
{$endif}

{$endif}
{$ifdef TYPES}
type
  CTFontCollectionSortDescriptorsCallback = function (first: CTFontDescriptorRef; second: CTFontDescriptorRef; refCon: pointer): CFComparisonResult; cdecl;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCTFontCollectionRemoveDuplicatesOption: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontCollectionIncludeDisabledFontsOption: CFStringRef { available in 10_7 }; cvar; external;
  kCTFontCollectionDisallowAutoActivationOption: CFStringRef { available in 10_7 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  CTFontCollectionCopyOptions = cuint32;
  CTFontCollectionCopyOptionsPtr = ^CTFontCollectionCopyOptions;

const
  kCTFontCollectionCopyDefaultOptions = 0;
  kCTFontCollectionCopyUnique = 1 shl 0;
  kCTFontCollectionCopyStandardSort = 1 shl 1;
{$endif}

{$endif}
