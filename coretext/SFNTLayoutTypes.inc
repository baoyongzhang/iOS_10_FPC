{ Parsed from CoreText.framework SFNTLayoutTypes.h }

{$ifndef __SFNTLAYOUTTYPES__}

{$if  not defined(TARGET_OS_WIN32)}

{$elseif  not (defined(__MACTYPES__))}
{$ifdef TYPES}
type
  Fixed = SInt32;
  FixedPtr = ^Fixed;
{$endif}

{$endif}

{$ifdef TYPES}
const
  kAllTypographicFeaturesType = 0;
  kLigaturesType = 1;
  kCursiveConnectionType = 2;
  kLetterCaseType = 3;
  kVerticalSubstitutionType = 4;
  kLinguisticRearrangementType = 5;
  kNumberSpacingType = 6;
  kSmartSwashType = 8;
  kDiacriticsType = 9;
  kVerticalPositionType = 10;
  kFractionsType = 11;
  kOverlappingCharactersType = 13;
  kTypographicExtrasType = 14;
  kMathematicalExtrasType = 15;
  kOrnamentSetsType = 16;
  kCharacterAlternativesType = 17;
  kDesignComplexityType = 18;
  kStyleOptionsType = 19;
  kCharacterShapeType = 20;
  kNumberCaseType = 21;
  kTextSpacingType = 22;
  kTransliterationType = 23;
  kAnnotationType = 24;
  kKanaSpacingType = 25;
  kIdeographicSpacingType = 26;
  kUnicodeDecompositionType = 27;
  kRubyKanaType = 28;
  kCJKSymbolAlternativesType = 29;
  kIdeographicAlternativesType = 30;
  kCJKVerticalRomanPlacementType = 31;
  kItalicCJKRomanType = 32;
  kCaseSensitiveLayoutType = 33;
  kAlternateKanaType = 34;
  kStylisticAlternativesType = 35;
  kContextualAlternatesType = 36;
  kLowerCaseType = 37;
  kUpperCaseType = 38;
  kLanguageTagType = 39;
  kCJKRomanSpacingType = 103;
  kLastFeatureType = -1;
const
  kAllTypeFeaturesOnSelector = 0;
  kAllTypeFeaturesOffSelector = 1;
const
  kRequiredLigaturesOnSelector = 0;
  kRequiredLigaturesOffSelector = 1;
  kCommonLigaturesOnSelector = 2;
  kCommonLigaturesOffSelector = 3;
  kRareLigaturesOnSelector = 4;
  kRareLigaturesOffSelector = 5;
  kLogosOnSelector = 6;
  kLogosOffSelector = 7;
  kRebusPicturesOnSelector = 8;
  kRebusPicturesOffSelector = 9;
  kDiphthongLigaturesOnSelector = 10;
  kDiphthongLigaturesOffSelector = 11;
  kSquaredLigaturesOnSelector = 12;
  kSquaredLigaturesOffSelector = 13;
  kAbbrevSquaredLigaturesOnSelector = 14;
  kAbbrevSquaredLigaturesOffSelector = 15;
  kSymbolLigaturesOnSelector = 16;
  kSymbolLigaturesOffSelector = 17;
  kContextualLigaturesOnSelector = 18;
  kContextualLigaturesOffSelector = 19;
  kHistoricalLigaturesOnSelector = 20;
  kHistoricalLigaturesOffSelector = 21;
const
  kUnconnectedSelector = 0;
  kPartiallyConnectedSelector = 1;
  kCursiveSelector = 2;
const
  kUpperAndLowerCaseSelector = 0;
  kAllCapsSelector = 1;
  kAllLowerCaseSelector = 2;
  kSmallCapsSelector = 3;
  kInitialCapsSelector = 4;
  kInitialCapsAndSmallCapsSelector = 5;
const
  kSubstituteVerticalFormsOnSelector = 0;
  kSubstituteVerticalFormsOffSelector = 1;
const
  kLinguisticRearrangementOnSelector = 0;
  kLinguisticRearrangementOffSelector = 1;
const
  kMonospacedNumbersSelector = 0;
  kProportionalNumbersSelector = 1;
  kThirdWidthNumbersSelector = 2;
  kQuarterWidthNumbersSelector = 3;
const
  kWordInitialSwashesOnSelector = 0;
  kWordInitialSwashesOffSelector = 1;
  kWordFinalSwashesOnSelector = 2;
  kWordFinalSwashesOffSelector = 3;
  kLineInitialSwashesOnSelector = 4;
  kLineInitialSwashesOffSelector = 5;
  kLineFinalSwashesOnSelector = 6;
  kLineFinalSwashesOffSelector = 7;
  kNonFinalSwashesOnSelector = 8;
  kNonFinalSwashesOffSelector = 9;
const
  kShowDiacriticsSelector = 0;
  kHideDiacriticsSelector = 1;
  kDecomposeDiacriticsSelector = 2;
const
  kNormalPositionSelector = 0;
  kSuperiorsSelector = 1;
  kInferiorsSelector = 2;
  kOrdinalsSelector = 3;
  kScientificInferiorsSelector = 4;
const
  kNoFractionsSelector = 0;
  kVerticalFractionsSelector = 1;
  kDiagonalFractionsSelector = 2;
const
  kPreventOverlapOnSelector = 0;
  kPreventOverlapOffSelector = 1;
const
  kHyphensToEmDashOnSelector = 0;
  kHyphensToEmDashOffSelector = 1;
  kHyphenToEnDashOnSelector = 2;
  kHyphenToEnDashOffSelector = 3;
  kSlashedZeroOnSelector = 4;
  kSlashedZeroOffSelector = 5;
  kFormInterrobangOnSelector = 6;
  kFormInterrobangOffSelector = 7;
  kSmartQuotesOnSelector = 8;
  kSmartQuotesOffSelector = 9;
  kPeriodsToEllipsisOnSelector = 10;
  kPeriodsToEllipsisOffSelector = 11;
const
  kHyphenToMinusOnSelector = 0;
  kHyphenToMinusOffSelector = 1;
  kAsteriskToMultiplyOnSelector = 2;
  kAsteriskToMultiplyOffSelector = 3;
  kSlashToDivideOnSelector = 4;
  kSlashToDivideOffSelector = 5;
  kInequalityLigaturesOnSelector = 6;
  kInequalityLigaturesOffSelector = 7;
  kExponentsOnSelector = 8;
  kExponentsOffSelector = 9;
  kMathematicalGreekOnSelector = 10;
  kMathematicalGreekOffSelector = 11;
const
  kNoOrnamentsSelector = 0;
  kDingbatsSelector = 1;
  kPiCharactersSelector = 2;
  kFleuronsSelector = 3;
  kDecorativeBordersSelector = 4;
  kInternationalSymbolsSelector = 5;
  kMathSymbolsSelector = 6;
const
  kNoAlternatesSelector = 0;
const
  kDesignLevel1Selector = 0;
  kDesignLevel2Selector = 1;
  kDesignLevel3Selector = 2;
  kDesignLevel4Selector = 3;
  kDesignLevel5Selector = 4;
const
  kNoStyleOptionsSelector = 0;
  kDisplayTextSelector = 1;
  kEngravedTextSelector = 2;
  kIlluminatedCapsSelector = 3;
  kTitlingCapsSelector = 4;
  kTallCapsSelector = 5;
const
  kTraditionalCharactersSelector = 0;
  kSimplifiedCharactersSelector = 1;
  kJIS1978CharactersSelector = 2;
  kJIS1983CharactersSelector = 3;
  kJIS1990CharactersSelector = 4;
  kTraditionalAltOneSelector = 5;
  kTraditionalAltTwoSelector = 6;
  kTraditionalAltThreeSelector = 7;
  kTraditionalAltFourSelector = 8;
  kTraditionalAltFiveSelector = 9;
  kExpertCharactersSelector = 10;
  kJIS2004CharactersSelector = 11;
  kHojoCharactersSelector = 12;
  kNLCCharactersSelector = 13;
  kTraditionalNamesCharactersSelector = 14;
const
  kLowerCaseNumbersSelector = 0;
  kUpperCaseNumbersSelector = 1;
const
  kProportionalTextSelector = 0;
  kMonospacedTextSelector = 1;
  kHalfWidthTextSelector = 2;
  kThirdWidthTextSelector = 3;
  kQuarterWidthTextSelector = 4;
  kAltProportionalTextSelector = 5;
  kAltHalfWidthTextSelector = 6;
const
  kNoTransliterationSelector = 0;
  kHanjaToHangulSelector = 1;
  kHiraganaToKatakanaSelector = 2;
  kKatakanaToHiraganaSelector = 3;
  kKanaToRomanizationSelector = 4;
  kRomanizationToHiraganaSelector = 5;
  kRomanizationToKatakanaSelector = 6;
  kHanjaToHangulAltOneSelector = 7;
  kHanjaToHangulAltTwoSelector = 8;
  kHanjaToHangulAltThreeSelector = 9;
const
  kNoAnnotationSelector = 0;
  kBoxAnnotationSelector = 1;
  kRoundedBoxAnnotationSelector = 2;
  kCircleAnnotationSelector = 3;
  kInvertedCircleAnnotationSelector = 4;
  kParenthesisAnnotationSelector = 5;
  kPeriodAnnotationSelector = 6;
  kRomanNumeralAnnotationSelector = 7;
  kDiamondAnnotationSelector = 8;
  kInvertedBoxAnnotationSelector = 9;
  kInvertedRoundedBoxAnnotationSelector = 10;
const
  kFullWidthKanaSelector = 0;
  kProportionalKanaSelector = 1;
const
  kFullWidthIdeographsSelector = 0;
  kProportionalIdeographsSelector = 1;
  kHalfWidthIdeographsSelector = 2;
const
  kCanonicalCompositionOnSelector = 0;
  kCanonicalCompositionOffSelector = 1;
  kCompatibilityCompositionOnSelector = 2;
  kCompatibilityCompositionOffSelector = 3;
  kTranscodingCompositionOnSelector = 4;
  kTranscodingCompositionOffSelector = 5;
const
  kNoRubyKanaSelector = 0;
  kRubyKanaSelector = 1;
  kRubyKanaOnSelector = 2;
  kRubyKanaOffSelector = 3;
const
  kNoCJKSymbolAlternativesSelector = 0;
  kCJKSymbolAltOneSelector = 1;
  kCJKSymbolAltTwoSelector = 2;
  kCJKSymbolAltThreeSelector = 3;
  kCJKSymbolAltFourSelector = 4;
  kCJKSymbolAltFiveSelector = 5;
const
  kNoIdeographicAlternativesSelector = 0;
  kIdeographicAltOneSelector = 1;
  kIdeographicAltTwoSelector = 2;
  kIdeographicAltThreeSelector = 3;
  kIdeographicAltFourSelector = 4;
  kIdeographicAltFiveSelector = 5;
const
  kCJKVerticalRomanCenteredSelector = 0;
  kCJKVerticalRomanHBaselineSelector = 1;
const
  kNoCJKItalicRomanSelector = 0;
  kCJKItalicRomanSelector = 1;
  kCJKItalicRomanOnSelector = 2;
  kCJKItalicRomanOffSelector = 3;
const
  kCaseSensitiveLayoutOnSelector = 0;
  kCaseSensitiveLayoutOffSelector = 1;
  kCaseSensitiveSpacingOnSelector = 2;
  kCaseSensitiveSpacingOffSelector = 3;
const
  kAlternateHorizKanaOnSelector = 0;
  kAlternateHorizKanaOffSelector = 1;
  kAlternateVertKanaOnSelector = 2;
  kAlternateVertKanaOffSelector = 3;
const
  kNoStylisticAlternatesSelector = 0;
  kStylisticAltOneOnSelector = 2;
  kStylisticAltOneOffSelector = 3;
  kStylisticAltTwoOnSelector = 4;
  kStylisticAltTwoOffSelector = 5;
  kStylisticAltThreeOnSelector = 6;
  kStylisticAltThreeOffSelector = 7;
  kStylisticAltFourOnSelector = 8;
  kStylisticAltFourOffSelector = 9;
  kStylisticAltFiveOnSelector = 10;
  kStylisticAltFiveOffSelector = 11;
  kStylisticAltSixOnSelector = 12;
  kStylisticAltSixOffSelector = 13;
  kStylisticAltSevenOnSelector = 14;
  kStylisticAltSevenOffSelector = 15;
  kStylisticAltEightOnSelector = 16;
  kStylisticAltEightOffSelector = 17;
  kStylisticAltNineOnSelector = 18;
  kStylisticAltNineOffSelector = 19;
  kStylisticAltTenOnSelector = 20;
  kStylisticAltTenOffSelector = 21;
  kStylisticAltElevenOnSelector = 22;
  kStylisticAltElevenOffSelector = 23;
  kStylisticAltTwelveOnSelector = 24;
  kStylisticAltTwelveOffSelector = 25;
  kStylisticAltThirteenOnSelector = 26;
  kStylisticAltThirteenOffSelector = 27;
  kStylisticAltFourteenOnSelector = 28;
  kStylisticAltFourteenOffSelector = 29;
  kStylisticAltFifteenOnSelector = 30;
  kStylisticAltFifteenOffSelector = 31;
  kStylisticAltSixteenOnSelector = 32;
  kStylisticAltSixteenOffSelector = 33;
  kStylisticAltSeventeenOnSelector = 34;
  kStylisticAltSeventeenOffSelector = 35;
  kStylisticAltEighteenOnSelector = 36;
  kStylisticAltEighteenOffSelector = 37;
  kStylisticAltNineteenOnSelector = 38;
  kStylisticAltNineteenOffSelector = 39;
  kStylisticAltTwentyOnSelector = 40;
  kStylisticAltTwentyOffSelector = 41;
const
  kContextualAlternatesOnSelector = 0;
  kContextualAlternatesOffSelector = 1;
  kSwashAlternatesOnSelector = 2;
  kSwashAlternatesOffSelector = 3;
  kContextualSwashAlternatesOnSelector = 4;
  kContextualSwashAlternatesOffSelector = 5;
const
  kDefaultLowerCaseSelector = 0;
  kLowerCaseSmallCapsSelector = 1;
  kLowerCasePetiteCapsSelector = 2;
const
  kDefaultUpperCaseSelector = 0;
  kUpperCaseSmallCapsSelector = 1;
  kUpperCasePetiteCapsSelector = 2;
const
  kHalfWidthCJKRomanSelector = 0;
  kProportionalCJKRomanSelector = 1;
  kDefaultCJKRomanSelector = 2;
  kFullWidthCJKRomanSelector = 3;
const
  kSFNTLookupSimpleArray = 0;
  kSFNTLookupSegmentSingle = 2;
  kSFNTLookupSegmentArray = 4;
  kSFNTLookupSingleTable = 6;
  kSFNTLookupTrimmedArray = 8;
  kSFNTLookupVector = 10;

type
  SFNTLookupTableFormat = UInt16;
  SFNTLookupTableFormatPtr = ^SFNTLookupTableFormat;
  SFNTLookupValue = UInt16;
  SFNTLookupValuePtr = ^SFNTLookupValue;
  SFNTLookupOffset = UInt16;
  SFNTLookupOffsetPtr = ^SFNTLookupOffset;
  SFNTLookupKind = UInt32;
  SFNTLookupKindPtr = ^SFNTLookupKind;

type
  SFNTLookupBinarySearchHeader = record
    unitSize: UInt16;
    nUnits: UInt16;
    searchRange: UInt16;
    entrySelector: UInt16;
    rangeShift: UInt16;
  end;
type
  SFNTLookupBinarySearchHeaderPtr = ^SFNTLookupBinarySearchHeader;
type
  SFNTLookupArrayHeader = record
    lookupValues:array[0..0] of SFNTLookupValue;
  end;
type
  SFNTLookupArrayHeaderPtr = ^SFNTLookupArrayHeader;
type
  SFNTLookupTrimmedArrayHeader = record
    firstGlyph: UInt16;
    count: UInt16;
    valueArray:array[0..0] of SFNTLookupValue;
  end;
type
  SFNTLookupTrimmedArrayHeaderPtr = ^SFNTLookupTrimmedArrayHeader;
type
  SFNTLookupVectorHeader = record
    valueSize: UInt16;
    firstGlyph: UInt16;
    count: UInt16;
    values:array[0..0] of UInt8;
  end;
type
  SFNTLookupVectorHeaderPtr = ^SFNTLookupVectorHeader;
type
  SFNTLookupSegment = record
    lastGlyph: UInt16;
    firstGlyph: UInt16;
    value:array[0..0] of UInt16;
  end;
type
  SFNTLookupSegmentPtr = ^SFNTLookupSegment;
type
  SFNTLookupSegmentHeader = record
    binSearch: SFNTLookupBinarySearchHeader;
    segments:array[0..0] of SFNTLookupSegment;
  end;
type
  SFNTLookupSegmentHeaderPtr = ^SFNTLookupSegmentHeader;
type
  SFNTLookupSingle = record
    glyph: UInt16;
    value:array[0..0] of UInt16;
  end;
type
  SFNTLookupSinglePtr = ^SFNTLookupSingle;
type
  SFNTLookupSingleHeader = record
    binSearch: SFNTLookupBinarySearchHeader;
    entries:array[0..0] of SFNTLookupSingle;
  end;
type
  SFNTLookupSingleHeaderPtr = ^SFNTLookupSingleHeader;
type
  SFNTLookupFormatSpecificHeader = record
    case longint of
      0: (theArray: SFNTLookupArrayHeader);
      1: (segment: SFNTLookupSegmentHeader);
      2: (single: SFNTLookupSingleHeader);
      3: (trimmedArray: SFNTLookupTrimmedArrayHeader);
      4: (vector: SFNTLookupVectorHeader);
  end;
type
  SFNTLookupFormatSpecificHeaderPtr = ^SFNTLookupFormatSpecificHeader;
type
  SFNTLookupTable = record
    format: SFNTLookupTableFormat;
    fsHeader: SFNTLookupFormatSpecificHeader;
  end;
type
  SFNTLookupTablePtr = ^SFNTLookupTable;

type
  SFNTLookupTableHandle = ^SFNTLookupTablePtr;

const
  kSTClassEndOfText = 0;
  kSTClassOutOfBounds = 1;
  kSTClassDeletedGlyph = 2;
  kSTClassEndOfLine = 3;
  kSTSetMark = $8000;
  kSTNoAdvance = $4000;
  kSTMarkEnd = $2000;
  kSTLigActionMask = $3FFF;
  kSTRearrVerbMask = $000F;

type
  STClass = UInt8;
  STClassPtr = ^STClass;
  STEntryIndex = UInt8;
  STEntryIndexPtr = ^STEntryIndex;

type
  STHeader = record
    filler: UInt8;
    nClasses: STClass;
    classTableOffset: UInt16;
    stateArrayOffset: UInt16;
    entryTableOffset: UInt16;
  end;
type
  STHeaderPtr = ^STHeader;
type
  STClassTable = record
    firstGlyph: UInt16;
    nGlyphs: UInt16;
    classes:array[0..0] of STClass;
  end;
type
  STClassTablePtr = ^STClassTable;
type
  STEntryZero = record
    newState: UInt16;
    flags: UInt16;
  end;
type
  STEntryZeroPtr = ^STEntryZero;
type
  STEntryOne = record
    newState: UInt16;
    flags: UInt16;
    offset1: UInt16;
  end;
type
  STEntryOnePtr = ^STEntryOne;
type
  STEntryTwo = record
    newState: UInt16;
    flags: UInt16;
    offset1: UInt16;
    offset2: UInt16;
  end;
type
  STEntryTwoPtr = ^STEntryTwo;

const
  kSTXHasLigAction = $2000;

type
  STXClass = UInt16;
  STXClassPtr = ^STXClass;
  STXStateIndex = UInt16;
  STXStateIndexPtr = ^STXStateIndex;
  STXEntryIndex = UInt16;
  STXEntryIndexPtr = ^STXEntryIndex;

type
  STXHeader = record
    nClasses: UInt32;
    classTableOffset: UInt32;
    stateArrayOffset: UInt32;
    entryTableOffset: UInt32;
  end;
type
  STXHeaderPtr = ^STXHeader;

type
  STXClassTable = SFNTLookupTable;
  STXClassTablePtr = ^STXClassTable;

type
  STXEntryZero = record
    newState: STXStateIndex;
    flags: UInt16;
  end;
type
  STXEntryZeroPtr = ^STXEntryZero;
type
  STXEntryOne = record
    newState: STXStateIndex;
    flags: UInt16;
    index1: UInt16;
  end;
type
  STXEntryOnePtr = ^STXEntryOne;
type
  STXEntryTwo = record
    newState: STXStateIndex;
    flags: UInt16;
    index1: UInt16;
    index2: UInt16;
  end;
type
  STXEntryTwoPtr = ^STXEntryTwo;

const
  kSTKCrossStreamReset = $2000;
const
  kLCARTag = $6C636172;
  kLCARCurrentVersion = $00010000;
  kLCARLinearFormat = 0;
  kLCARCtlPointFormat = 1;

type
  LcarCaretClassEntry = record
    count: UInt16;
    partials:array[0..0] of UInt16;
  end;
type
  LcarCaretClassEntryPtr = ^LcarCaretClassEntry;
type
  LcarCaretTable = record
    version: Fixed;
    format: UInt16;
    lookup: SFNTLookupTable;
  end;
type
  LcarCaretTablePtr = ^LcarCaretTable;

const
  kJUSTTag = $6A757374;
  kJUSTCurrentVersion = $00010000;
  kJUSTStandardFormat = 0;
  kJUSTnoGlyphcode = $FFFF;
  kJUSTpcDecompositionAction = 0;
  kJUSTpcUnconditionalAddAction = 1;
  kJUSTpcConditionalAddAction = 2;
  kJUSTpcGlyphStretchAction = 3;
  kJUSTpcDuctilityAction = 4;
  kJUSTpcGlyphRepeatAddAction = 5;
const
  kJUSTKashidaPriority = 0;
  kJUSTSpacePriority = 1;
  kJUSTLetterPriority = 2;
  kJUSTNullPriority = 3;
  kJUSTPriorityCount = 4;
const
  kJUSTOverridePriority = $8000;
  kJUSTOverrideLimits = $4000;
  kJUSTOverrideUnlimited = $2000;
  kJUSTUnlimited = $1000;
  kJUSTPriorityMask = $0003;

type
  JustPCActionType = UInt16;
  JustPCActionTypePtr = ^JustPCActionType;
  JustificationFlags = UInt16;
  JustificationFlagsPtr = ^JustificationFlags;

type
  JustPCDecompositionAction = record
    lowerLimit: Fixed;
    upperLimit: Fixed;
    order: UInt16;
    count: UInt16;
    glyphs:array[0..0] of UInt16;
  end;
type
  JustPCDecompositionActionPtr = ^JustPCDecompositionAction;

type
  JustPCUnconditionalAddAction = UInt16;
  JustPCUnconditionalAddActionPtr = ^JustPCUnconditionalAddAction;

type
  JustPCConditionalAddAction = record
    substThreshold: Fixed;
    addGlyph: UInt16;
    substGlyph: UInt16;
  end;
type
  JustPCConditionalAddActionPtr = ^JustPCConditionalAddAction;
type
  JustPCDuctilityAction = record
    ductilityAxis: UInt32;
    minimumLimit: Fixed;
    noStretchValue: Fixed;
    maximumLimit: Fixed;
  end;
type
  JustPCDuctilityActionPtr = ^JustPCDuctilityAction;
type
  JustPCGlyphRepeatAddAction = record
    flags: UInt16;
    glyph: UInt16;
  end;
type
  JustPCGlyphRepeatAddActionPtr = ^JustPCGlyphRepeatAddAction;
type
  JustPCActionSubrecord = record
    theClass: UInt16;
    theType: JustPCActionType;
    length: UInt32;
    data: UInt32;
  end;
type
  JustPCActionSubrecordPtr = ^JustPCActionSubrecord;
type
  JustPCAction = record
    actionCount: UInt32;
    actions:array[0..0] of JustPCActionSubrecord;
  end;
type
  JustPCActionPtr = ^JustPCAction;
type
  JustWidthDeltaEntry = record
    justClass: UInt32;
    beforeGrowLimit: Fixed;
    beforeShrinkLimit: Fixed;
    afterGrowLimit: Fixed;
    afterShrinkLimit: Fixed;
    growFlags: JustificationFlags;
    shrinkFlags: JustificationFlags;
  end;
type
  JustWidthDeltaEntryPtr = ^JustWidthDeltaEntry;
type
  JustWidthDeltaGroup = record
    count: UInt32;
    entries:array[0..0] of JustWidthDeltaEntry;
  end;
type
  JustWidthDeltaGroupPtr = ^JustWidthDeltaGroup;
type
  JustPostcompTable = record
    lookupTable: SFNTLookupTable;
  end;
type
  JustPostcompTablePtr = ^JustPostcompTable;
type
  JustDirectionTable = record
    justClass: UInt16;
    widthDeltaClusters: UInt16;
    postcomp: UInt16;
    lookup: SFNTLookupTable;
  end;
type
  JustDirectionTablePtr = ^JustDirectionTable;
type
  JustTable = record
    version: Fixed;
    format: UInt16;
    horizHeaderOffset: UInt16;
    vertHeaderOffset: UInt16;
  end;
type
  JustTablePtr = ^JustTable;

const
  kOPBDTag = $6F706264;
  kOPBDCurrentVersion = $00010000;
  kOPBDDistanceFormat = 0;
  kOPBDControlPointFormat = 1;

type
  OpbdTableFormat = UInt16;
  OpbdTableFormatPtr = ^OpbdTableFormat;

type
  OpbdSideValues = record
    leftSideShift: SInt16;
    topSideShift: SInt16;
    rightSideShift: SInt16;
    bottomSideShift: SInt16;
  end;
type
  OpbdSideValuesPtr = ^OpbdSideValues;
type
  OpbdTable = record
    version: Fixed;
    format: OpbdTableFormat;
    lookupTable: SFNTLookupTable;
  end;
type
  OpbdTablePtr = ^OpbdTable;

const
  kMORTTag = $6D6F7274;
  kMORTCurrentVersion = $00010000;
  kMORTCoverVertical = $8000;
  kMORTCoverDescending = $4000;
  kMORTCoverIgnoreVertical = $2000;
  kMORTCoverTypeMask = $000F;
  kMORTRearrangementType = 0;
  kMORTContextualType = 1;
  kMORTLigatureType = 2;
  kMORTSwashType = 4;
  kMORTInsertionType = 5;
  kMORTLigLastAction = $80000000;
  kMORTLigStoreLigature = $40000000;
  kMORTLigFormOffsetMask = $3FFFFFFF;
  kMORTLigFormOffsetShift = 2;
  kMORTraNoAction = 0;
  kMORTraxA = 1;
  kMORTraDx = 2;
  kMORTraDxA = 3;
  kMORTraxAB = 4;
  kMORTraxBA = 5;
  kMORTraCDx = 6;
  kMORTraDCx = 7;
  kMORTraCDxA = 8;
  kMORTraDCxA = 9;
  kMORTraDxAB = 10;
  kMORTraDxBA = 11;
  kMORTraCDxAB = 12;
  kMORTraCDxBA = 13;
  kMORTraDCxAB = 14;
  kMORTraDCxBA = 15;
  kMORTDoInsertionsBefore = $80;
  kMORTIsSplitVowelPiece = $40;
  kMORTInsertionsCountMask = $3F;
  kMORTCurrInsertKashidaLike = $2000;
  kMORTMarkInsertKashidaLike = $1000;
  kMORTCurrInsertBefore = $0800;
  kMORTMarkInsertBefore = $0400;
  kMORTMarkJustTableCountMask = $3F80;
  kMORTMarkJustTableCountShift = 7;
  kMORTCurrJustTableCountMask = $007F;
  kMORTCurrJustTableCountShift = 0;
  kMORTCurrInsertCountMask = $03E0;
  kMORTCurrInsertCountShift = 5;
  kMORTMarkInsertCountMask = $001F;
  kMORTMarkInsertCountShift = 0;

type
  MortSubtableMaskFlags = UInt32;
  MortSubtableMaskFlagsPtr = ^MortSubtableMaskFlags;
  MortLigatureActionEntry = UInt32;
  MortLigatureActionEntryPtr = ^MortLigatureActionEntry;

type
  MortRearrangementSubtable = record
    header: STHeader;
  end;
type
  MortRearrangementSubtablePtr = ^MortRearrangementSubtable;
type
  MortContextualSubtable = record
    header: STHeader;
    substitutionTableOffset: UInt16;
  end;
type
  MortContextualSubtablePtr = ^MortContextualSubtable;
type
  MortLigatureSubtable = record
    header: STHeader;
    ligatureActionTableOffset: UInt16;
    componentTableOffset: UInt16;
    ligatureTableOffset: UInt16;
  end;
type
  MortLigatureSubtablePtr = ^MortLigatureSubtable;
type
  MortSwashSubtable = record
    lookup: SFNTLookupTable;
  end;
type
  MortSwashSubtablePtr = ^MortSwashSubtable;
type
  MortInsertionSubtable = record
    header: STHeader;
  end;
type
  MortInsertionSubtablePtr = ^MortInsertionSubtable;
type
  MortSpecificSubtable = record
    case longint of
      0: (rearrangement: MortRearrangementSubtable);
      1: (contextual: MortContextualSubtable);
      2: (ligature: MortLigatureSubtable);
      3: (swash: MortSwashSubtable);
      4: (insertion: MortInsertionSubtable);
  end;
type
  MortSpecificSubtablePtr = ^MortSpecificSubtable;
type
  MortSubtable = record
    length: UInt16;
    coverage: UInt16;
    flags: MortSubtableMaskFlags;
    u: MortSpecificSubtable;
  end;
type
  MortSubtablePtr = ^MortSubtable;
type
  MortFeatureEntry = record
    featureType: UInt16;
    featureSelector: UInt16;
    enableFlags: MortSubtableMaskFlags;
    disableFlags: MortSubtableMaskFlags;
  end;
type
  MortFeatureEntryPtr = ^MortFeatureEntry;
type
  MortChain = record
    defaultFlags: MortSubtableMaskFlags;
    length: UInt32;
    nFeatures: UInt16;
    nSubtables: UInt16;
    featureEntries:array[0..0] of MortFeatureEntry;
  end;
type
  MortChainPtr = ^MortChain;
type
  MortTable = record
    version: Fixed;
    nChains: UInt32;
    chains:array[0..0] of MortChain;
  end;
type
  MortTablePtr = ^MortTable;

const
  kMORXTag = $6D6F7278;
  kMORXCurrentVersion = $00020000;
  kMORXCoverVertical = $80000000;
  kMORXCoverDescending = $40000000;
  kMORXCoverIgnoreVertical = $20000000;
  kMORXCoverLogicalOrder = $10000000;
  kMORXCoverTypeMask = $000000FF;

type
  MorxRearrangementSubtable = record
    header: STXHeader;
  end;
type
  MorxRearrangementSubtablePtr = ^MorxRearrangementSubtable;
type
  MorxContextualSubtable = record
    header: STXHeader;
    substitutionTableOffset: UInt32;
  end;
type
  MorxContextualSubtablePtr = ^MorxContextualSubtable;
type
  MorxLigatureSubtable = record
    header: STXHeader;
    ligatureActionTableOffset: UInt32;
    componentTableOffset: UInt32;
    ligatureTableOffset: UInt32;
  end;
type
  MorxLigatureSubtablePtr = ^MorxLigatureSubtable;
type
  MorxInsertionSubtable = record
    header: STXHeader;
    insertionGlyphTableOffset: UInt32;
  end;
type
  MorxInsertionSubtablePtr = ^MorxInsertionSubtable;
type
  MorxSpecificSubtable = record
    case longint of
      0: (rearrangement: MorxRearrangementSubtable);
      1: (contextual: MorxContextualSubtable);
      2: (ligature: MorxLigatureSubtable);
      3: (swash: MortSwashSubtable);
      4: (insertion: MorxInsertionSubtable);
  end;
type
  MorxSpecificSubtablePtr = ^MorxSpecificSubtable;
type
  MorxSubtable = record
    length: UInt32;
    coverage: UInt32;
    flags: MortSubtableMaskFlags;
    u: MorxSpecificSubtable;
  end;
type
  MorxSubtablePtr = ^MorxSubtable;
type
  MorxChain = record
    defaultFlags: MortSubtableMaskFlags;
    length: UInt32;
    nFeatures: UInt32;
    nSubtables: UInt32;
    featureEntries:array[0..0] of MortFeatureEntry;
  end;
type
  MorxChainPtr = ^MorxChain;
type
  MorxTable = record
    version: Fixed;
    nChains: UInt32;
    chains:array[0..0] of MorxChain;
  end;
type
  MorxTablePtr = ^MorxTable;

const
  kPROPTag = $70726F70;
  kPROPCurrentVersion = $00030000;
  kPROPPairOffsetShift = 8;
  kPROPPairOffsetSign = 7;
  kPROPIsFloaterMask = $8000;
  kPROPCanHangLTMask = $4000;
  kPROPCanHangRBMask = $2000;
  kPROPUseRLPairMask = $1000;
  kPROPPairOffsetMask = $0F00;
  kPROPRightConnectMask = $0080;
  kPROPZeroReserved = $0060;
  kPROPDirectionMask = $001F;
const
  kPROPLDirectionClass = 0;
  kPROPRDirectionClass = 1;
  kPROPALDirectionClass = 2;
  kPROPENDirectionClass = 3;
  kPROPESDirectionClass = 4;
  kPROPETDirectionClass = 5;
  kPROPANDirectionClass = 6;
  kPROPCSDirectionClass = 7;
  kPROPPSDirectionClass = 8;
  kPROPSDirectionClass = 9;
  kPROPWSDirectionClass = 10;
  kPROPONDirectionClass = 11;
  kPROPSENDirectionClass = 12;
  kPROPLREDirectionClass = 13;
  kPROPLRODirectionClass = 14;
  kPROPRLEDirectionClass = 15;
  kPROPRLODirectionClass = 16;
  kPROPPDFDirectionClass = 17;
  kPROPNSMDirectionClass = 18;
  kPROPBNDirectionClass = 19;
  kPROPNumDirectionClasses = 20;

type
  PropCharProperties = UInt16;
  PropCharPropertiesPtr = ^PropCharProperties;

type
  PropTable = record
    version: Fixed;
    format: UInt16;
    defaultProps: PropCharProperties;
    lookup: SFNTLookupTable;
  end;
type
  PropTablePtr = ^PropTable;
type
  PropLookupSegment = record
    lastGlyph: UInt16;
    firstGlyph: UInt16;
    value: UInt16;
  end;
type
  PropLookupSegmentPtr = ^PropLookupSegment;
type
  PropLookupSingle = record
    glyph: UInt16;
    props: PropCharProperties;
  end;
type
  PropLookupSinglePtr = ^PropLookupSingle;

const
  kTRAKTag = $7472616B;
  kTRAKCurrentVersion = $00010000;
  kTRAKUniformFormat = 0;

type
  TrakValue = SInt16;
  TrakValuePtr = ^TrakValue;

type
  TrakTableEntry = record
    track: Fixed;
    nameTableIndex: UInt16;
    sizesOffset: UInt16;
  end;
type
  TrakTableEntryPtr = ^TrakTableEntry;
type
  TrakTableData = record
    nTracks: UInt16;
    nSizes: UInt16;
    sizeTableOffset: UInt32;
    trakTable:array[0..0] of TrakTableEntry;
  end;
type
  TrakTableDataPtr = ^TrakTableData;
type
  TrakTable = record
    version: Fixed;
    format: UInt16;
    horizOffset: UInt16;
    vertOffset: UInt16;
  end;
type
  TrakTablePtr = ^TrakTable;

const
  kKERNTag = $6B65726E;
  kKERNCurrentVersion = $00010000;
  kKERNVertical = $8000;
  kKERNResetCrossStream = $8000;
  kKERNCrossStream = $4000;
  kKERNVariation = $2000;
  kKERNUnusedBits = $1F00;
  kKERNFormatMask = $00FF;
const
  kKERNOrderedList = 0;
  kKERNStateTable = 1;
  kKERNSimpleArray = 2;
  kKERNIndexArray = 3;
const
  kKERNLineStart = $00000001;
  kKERNLineEndKerning = $00000002;
  kKERNNoCrossKerning = $00000004;
  kKERNNotesRequested = $00000008;
  kKERNNoStakeNote = 1;
  kKERNCrossStreamResetNote = 2;
  kKERNNotApplied = $00000001;

type
  KernTableFormat = UInt8;
  KernTableFormatPtr = ^KernTableFormat;
  KernSubtableInfo = UInt16;
  KernSubtableInfoPtr = ^KernSubtableInfo;
  KernKerningValue = SInt16;
  KernKerningValuePtr = ^KernKerningValue;
  KernArrayOffset = UInt16;
  KernArrayOffsetPtr = ^KernArrayOffset;

type
  KernVersion0Header = record
    version: UInt16;
    nTables: UInt16;
    firstSubtable:array[0..0] of UInt16;
  end;
type
  KernVersion0HeaderPtr = ^KernVersion0Header;
type
  KernTableHeader = record
    version: Fixed;
    nTables: SInt32;
    firstSubtable:array[0..0] of UInt16;
  end;
type
  KernTableHeaderPtr = ^KernTableHeader;

type
  KernTableHeaderHandle = ^KernTableHeaderPtr;

type
  KernKerningPair = record
    left: UInt16;
    right: UInt16;
  end;
type
  KernKerningPairPtr = ^KernKerningPair;
type
  KernOrderedListEntry = record
    pair: KernKerningPair;
    value: KernKerningValue;
  end;
type
  KernOrderedListEntryPtr = ^KernOrderedListEntry;
type
  KernOrderedListHeader = record
    nPairs: UInt16;
    searchRange: UInt16;
    entrySelector: UInt16;
    rangeShift: UInt16;
    table:array[0..0] of UInt16;
  end;
type
  KernOrderedListHeaderPtr = ^KernOrderedListHeader;
type
  KernStateHeader = record
    header: STHeader;
    valueTable: UInt16;
    firstTable:array[0..0] of UInt8;
  end;
type
  KernStateHeaderPtr = ^KernStateHeader;
type
  KernStateEntry = record
    newState: UInt16;
    flags: UInt16;
  end;
type
  KernStateEntryPtr = ^KernStateEntry;
type
  KernOffsetTable = record
    firstGlyph: UInt16;
    nGlyphs: UInt16;
    offsetTable:array[0..0] of KernArrayOffset;
  end;
type
  KernOffsetTablePtr = ^KernOffsetTable;
type
  KernSimpleArrayHeader = record
    rowWidth: UInt16;
    leftOffsetTable: UInt16;
    rightOffsetTable: UInt16;
    theArray: KernArrayOffset;
    firstTable:array[0..0] of UInt16;
  end;
type
  KernSimpleArrayHeaderPtr = ^KernSimpleArrayHeader;
type
  KernIndexArrayHeader = record
    glyphCount: UInt16;
    kernValueCount: UInt8;
    leftClassCount: UInt8;
    rightClassCount: UInt8;
    flags: UInt8;
    kernValue:array[0..0] of SInt16;
    leftClass:array[0..0] of UInt8;
    rightClass:array[0..0] of UInt8;
    kernIndex:array[0..0] of UInt8;
  end;
type
  KernIndexArrayHeaderPtr = ^KernIndexArrayHeader;
type
  KernFormatSpecificHeader = record
    case longint of
      0: (orderedList: KernOrderedListHeader);
      1: (stateTable: KernStateHeader);
      2: (simpleArray: KernSimpleArrayHeader);
      3: (indexArray: KernIndexArrayHeader);
  end;
type
  KernFormatSpecificHeaderPtr = ^KernFormatSpecificHeader;
type
  KernVersion0SubtableHeader = record
    version: UInt16;
    length: UInt16;
    stInfo: KernSubtableInfo;
    fsHeader: KernFormatSpecificHeader;
  end;
type
  KernVersion0SubtableHeaderPtr = ^KernVersion0SubtableHeader;
type
  KernSubtableHeader = record
    length: SInt32;
    stInfo: KernSubtableInfo;
    tupleIndex: SInt16;
    fsHeader: KernFormatSpecificHeader;
  end;
type
  KernSubtableHeaderPtr = ^KernSubtableHeader;

const
  kKERXTag = $6B657278;
  kKERXCurrentVersion = $00020000;
  kKERXVertical = $80000000;
  kKERXResetCrossStream = $8000;
  kKERXCrossStream = $40000000;
  kKERXVariation = $20000000;
  kKERXDescending = $10000000;
  kKERXUnusedBits = $0FFFFF00;
  kKERXFormatMask = $000000FF;
const
  kKERXOrderedList = 0;
  kKERXStateTable = 1;
  kKERXSimpleArray = 2;
  kKERXControlPoint = 4;
  kKERXIndexArray = 6;
const
  kKERXLineStart = $00000001;
  kKERXLineEndKerning = $00000002;
  kKERXNoCrossKerning = $00000004;
  kKERXNotesRequested = $00000008;
  kKERXNoStakeNote = 1;
  kKERXCrossStreamResetNote = 2;
  kKERXNotApplied = $00000001;
const
  kKERXActionTypeMask = 3 shl 30;
  kKERXActionTypeControlPoints = 0 shl 30;
  kKERXActionTypeAnchorPoints = 1 shl 30;
  kKERXActionTypeCoordinates = 2 shl 30;
  kKERXUnusedFlags = $3F000000;
  kKERXActionOffsetMask = $00FFFFFF;
const
  kKERXValuesAreLong = $00000001;

type
  KerxSubtableCoverage = UInt32;
  KerxSubtableCoveragePtr = ^KerxSubtableCoverage;
  KerxArrayOffset = UInt32;
  KerxArrayOffsetPtr = ^KerxArrayOffset;

type
  KerxTableHeader = record
    version: Fixed;
    nTables: UInt32;
    firstSubtable:array[0..0] of UInt32;
  end;
type
  KerxTableHeaderPtr = ^KerxTableHeader;

type
  KerxTableHeaderHandle = ^KerxTableHeaderPtr;

type
  KerxKerningPair = record
    left: UInt16;
    right: UInt16;
  end;
type
  KerxKerningPairPtr = ^KerxKerningPair;
type
  KerxOrderedListEntry = record
    pair: KerxKerningPair;
    value: KernKerningValue;
  end;
type
  KerxOrderedListEntryPtr = ^KerxOrderedListEntry;
type
  KerxOrderedListHeader = record
    nPairs: UInt32;
    searchRange: UInt32;
    entrySelector: UInt32;
    rangeShift: UInt32;
    table:array[0..0] of UInt32;
  end;
type
  KerxOrderedListHeaderPtr = ^KerxOrderedListHeader;
type
  KerxStateHeader = record
    header: STXHeader;
    valueTable: UInt32;
    firstTable:array[0..0] of UInt8;
  end;
type
  KerxStateHeaderPtr = ^KerxStateHeader;
type
  KerxStateEntry = record
    newState: UInt16;
    flags: UInt16;
    valueIndex: UInt16;
  end;
type
  KerxStateEntryPtr = ^KerxStateEntry;
type
  KerxControlPointHeader = record
    header: STXHeader;
    flags: UInt32;
    firstTable:array[0..0] of UInt8;
  end;
type
  KerxControlPointHeaderPtr = ^KerxControlPointHeader;
type
  KerxControlPointEntry = record
    newState: UInt16;
    flags: UInt16;
    actionIndex: UInt16;
  end;
type
  KerxControlPointEntryPtr = ^KerxControlPointEntry;
type
  KerxControlPointAction = record
    markControlPoint: UInt16;
    currControlPoint: UInt16;
  end;
type
  KerxControlPointActionPtr = ^KerxControlPointAction;
type
  KerxAnchorPointAction = record
    markAnchorPoint: UInt16;
    currAnchorPoint: UInt16;
  end;
type
  KerxAnchorPointActionPtr = ^KerxAnchorPointAction;
type
  KerxCoordinateAction = record
    markX: UInt16;
    markY: UInt16;
    currX: UInt16;
    currY: UInt16;
  end;
type
  KerxCoordinateActionPtr = ^KerxCoordinateAction;
type
  KerxSimpleArrayHeader = record
    rowWidth: UInt32;
    leftOffsetTable: UInt32;
    rightOffsetTable: UInt32;
    theArray: KerxArrayOffset;
    firstTable:array[0..0] of UInt32;
  end;
type
  KerxSimpleArrayHeaderPtr = ^KerxSimpleArrayHeader;
type
  KerxIndexArrayHeader = record
    flags: UInt32;
    rowCount: UInt16;
    columnCount: UInt16;
    rowIndexTableOffset: UInt32;
    columnIndexTableOffset: UInt32;
    kerningArrayOffset: UInt32;
    kerningVectorOffset: UInt32;
  end;
type
  KerxIndexArrayHeaderPtr = ^KerxIndexArrayHeader;
type
  KerxFormatSpecificHeader = record
    case longint of
      0: (orderedList: KerxOrderedListHeader);
      1: (stateTable: KerxStateHeader);
      2: (simpleArray: KerxSimpleArrayHeader);
      3: (indexArray: KerxIndexArrayHeader);
      4: (controlPoint: KerxControlPointHeader);
  end;
type
  KerxFormatSpecificHeaderPtr = ^KerxFormatSpecificHeader;
type
  KerxSubtableHeader = record
    length: UInt32;
    stInfo: KerxSubtableCoverage;
    tupleCount: UInt32;
    fsHeader: KerxFormatSpecificHeader;
  end;
type
  KerxSubtableHeaderPtr = ^KerxSubtableHeader;

const
  kBSLNTag = $62736C6E;
  kBSLNCurrentVersion = $00010000;
  kBSLNDistanceFormatNoMap = 0;
  kBSLNDistanceFormatWithMap = 1;
  kBSLNControlPointFormatNoMap = 2;
  kBSLNControlPointFormatWithMap = 3;
const
  kBSLNRomanBaseline = 0;
  kBSLNIdeographicCenterBaseline = 1;
  kBSLNIdeographicLowBaseline = 2;
  kBSLNHangingBaseline = 3;
  kBSLNMathBaseline = 4;
  kBSLNIdeographicHighBaseline = 5;
  kBSLNLastBaseline = 31;
  kBSLNNumBaselineClasses = kBSLNLastBaseline + 1;
  kBSLNNoBaseline = 255;
  kBSLNNoBaselineOverride = 255;

type
  BslnBaselineClass = UInt32;
  BslnBaselineClassPtr = ^BslnBaselineClass;
  BslnBaselineRecord = array[0..31] of Fixed;
  BslnBaselineRecordPtr = ^BslnBaselineRecord;

type
  BslnFormat0Part = record
    deltas:array[0..31] of SInt16;
  end;
type
  BslnFormat0PartPtr = ^BslnFormat0Part;
type
  BslnFormat1Part = record
    deltas:array[0..31] of SInt16;
    mappingData: SFNTLookupTable;
  end;
type
  BslnFormat1PartPtr = ^BslnFormat1Part;
type
  BslnFormat2Part = record
    stdGlyph: UInt16;
    ctlPoints:array[0..31] of SInt16;
  end;
type
  BslnFormat2PartPtr = ^BslnFormat2Part;
type
  BslnFormat3Part = record
    stdGlyph: UInt16;
    ctlPoints:array[0..31] of SInt16;
    mappingData: SFNTLookupTable;
  end;
type
  BslnFormat3PartPtr = ^BslnFormat3Part;
type
  BslnFormatUnion = record
    case longint of
      0: (fmt0Part: BslnFormat0Part);
      1: (fmt1Part: BslnFormat1Part);
      2: (fmt2Part: BslnFormat2Part);
      3: (fmt3Part: BslnFormat3Part);
  end;
type
  BslnFormatUnionPtr = ^BslnFormatUnion;

type
  BslnTableFormat = UInt16;
  BslnTableFormatPtr = ^BslnTableFormat;

type
  BslnTable = record
    version: Fixed;
    format: BslnTableFormat;
    defaultBaseline: UInt16;
    parts: BslnFormatUnion;
  end;
type
  BslnTablePtr = ^BslnTable;
type
  ALMXHeader = record
    Version: Fixed;
    Flags: UInt16;
    NMasters: UInt16;
    FirstGlyph: UInt16;
    LastGlyph: UInt16;
    lookup: SFNTLookupTable;
  end;
type
  ALMXHeaderPtr = ^ALMXHeader;
type
  ALMXGlyphEntry = record
    GlyphIndexOffset: SInt16;
    HorizontalAdvance: SInt16;
    XOffsetToHOrigin: SInt16;
    VerticalAdvance: SInt16;
    YOffsetToVOrigin: SInt16;
  end;
type
  ALMXGlyphEntryPtr = ^ALMXGlyphEntry;
type
  ROTAHeader = record
    Version: Fixed;
    Flags: UInt16;
    NMasters: UInt16;
    FirstGlyph: UInt16;
    LastGlyph: UInt16;
    lookup: SFNTLookupTable;
  end;
type
  ROTAHeaderPtr = ^ROTAHeader;
type
  ROTAGlyphEntry = record
    GlyphIndexOffset: SInt16;
    HBaselineOffset: SInt16;
    VBaselineOffset: SInt16;
  end;
type
  ROTAGlyphEntryPtr = ^ROTAGlyphEntry;

const
  kANKRCurrentVersion = 0;

type
  AnchorPoint = record
    x: SInt16;
    y: SInt16;
  end;
type
  AnchorPointPtr = ^AnchorPoint;
type
  AnchorPointTable = record
    nPoints: UInt32;
    points:array[0..0] of AnchorPoint;
  end;
type
  AnchorPointTablePtr = ^AnchorPointTable;
type
  AnkrTable = record
    version: UInt16;
    flags: UInt16;
    lookupTableOffset: UInt32;
    anchorPointTableOffset: UInt32;
  end;
type
  AnkrTablePtr = ^AnkrTable;

const
  kLTAGCurrentVersion = 1;

type
  LtagStringRange = record
    offset: UInt16;
    length: UInt16;
  end;
type
  LtagStringRangePtr = ^LtagStringRange;
type
  LtagTable = record
    version: UInt32;
    flags: UInt32;
    numTags: UInt32;
    tagRange:array[0..0] of LtagStringRange;
  end;
type
  LtagTablePtr = ^LtagTable;
{$endif}

{$endif}
