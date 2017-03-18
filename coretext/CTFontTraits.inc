{ Parsed from CoreText.framework CTFontTraits.h }

{$ifndef __CTFONTTRAITS__}
{$ifdef EXTERNAL_SYMBOLS}
var
  kCTFontSymbolicTrait: _C_BEGIN CF_ASSUME_NONNULL_BEGIN CT_EXPORT CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontWeightTrait: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontWidthTrait: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontSlantTrait: CFStringRef { available in 10_5, 3_2 }; cvar; external;
{$endif}

{$ifdef TYPES}
const
  kCTFontClassMaskShift = 28;

type
  CTFontSymbolicTraits = cuint32;
  CTFontSymbolicTraitsPtr = ^CTFontSymbolicTraits;

const
  kCTFontTraitItalic = 1 shl 0;
  kCTFontTraitBold = 1 shl 1;
  kCTFontTraitExpanded = 1 shl 5;
  kCTFontTraitCondensed = 1 shl 6;
  kCTFontTraitMonoSpace = 1 shl 10;
  kCTFontTraitVertical = 1 shl 11;
  kCTFontTraitUIOptimized = 1 shl 12;
  kCTFontTraitColorGlyphs = 1 shl 13;
  kCTFontTraitComposite = 1 shl 14;
  kCTFontTraitClassMask = 15 shl kCTFontClassMaskShift;
  kCTFontItalicTrait = kCTFontTraitItalic;
  kCTFontBoldTrait = kCTFontTraitBold;
  kCTFontExpandedTrait = kCTFontTraitExpanded;
  kCTFontCondensedTrait = kCTFontTraitCondensed;
  kCTFontMonoSpaceTrait = kCTFontTraitMonoSpace;
  kCTFontVerticalTrait = kCTFontTraitVertical;
  kCTFontUIOptimizedTrait = kCTFontTraitUIOptimized;
  kCTFontColorGlyphsTrait = kCTFontTraitColorGlyphs;
  kCTFontCompositeTrait = kCTFontTraitComposite;
  kCTFontClassMaskTrait = kCTFontTraitClassMask;

type
  CTFontStylisticClass = cuint32;
  CTFontStylisticClassPtr = ^CTFontStylisticClass;

const
  kCTFontClassUnknown = 0 shl kCTFontClassMaskShift;
  kCTFontClassOldStyleSerifs = 1 shl kCTFontClassMaskShift;
  kCTFontClassTransitionalSerifs = 2 shl kCTFontClassMaskShift;
  kCTFontClassModernSerifs = 3 shl kCTFontClassMaskShift;
  kCTFontClassClarendonSerifs = 4 shl kCTFontClassMaskShift;
  kCTFontClassSlabSerifs = 5 shl kCTFontClassMaskShift;
  kCTFontClassFreeformSerifs = 7 shl kCTFontClassMaskShift;
  kCTFontClassSansSerif = 8 shl kCTFontClassMaskShift;
  kCTFontClassOrnamentals = 9 shl kCTFontClassMaskShift;
  kCTFontClassScripts = 10 shl kCTFontClassMaskShift;
  kCTFontClassSymbolic = 12 shl kCTFontClassMaskShift;
  kCTFontUnknownClass = kCTFontClassUnknown;
  kCTFontOldStyleSerifsClass = kCTFontClassOldStyleSerifs;
  kCTFontTransitionalSerifsClass = kCTFontClassTransitionalSerifs;
  kCTFontModernSerifsClass = kCTFontClassModernSerifs;
  kCTFontClarendonSerifsClass = kCTFontClassClarendonSerifs;
  kCTFontSlabSerifsClass = kCTFontClassSlabSerifs;
  kCTFontFreeformSerifsClass = kCTFontClassFreeformSerifs;
  kCTFontSansSerifClass = kCTFontClassSansSerif;
  kCTFontOrnamentalsClass = kCTFontClassOrnamentals;
  kCTFontScriptsClass = kCTFontClassScripts;
  kCTFontSymbolicClass = kCTFontClassSymbolic;
{$endif}

{$endif}
