{ Parsed from CoreText.framework SFNTTypes.h }

{$ifndef __SFNTTYPES__}

{$if  not defined(TARGET_OS_WIN32)}

{$elseif  not (defined(__MACTYPES__))}
{$ifdef TYPES}
type
  Fixed = SInt32;
  FixedPtr = ^Fixed;
{$endif}

{$endif}

{$ifdef TYPES}
type
  sfntDirectoryEntry = record
    tableTag: FourCharCode;
    checkSum: UInt32;
    offset: UInt32;
    length: UInt32;
  end;
type
  sfntDirectoryEntryPtr = ^sfntDirectoryEntry;
type
  sfntDirectory = record
    format: FourCharCode;
    numOffsets: UInt16;
    searchRange: UInt16;
    entrySelector: UInt16;
    rangeShift: UInt16;
    table:array[0..0] of sfntDirectoryEntry;
  end;
type
  sfntDirectoryPtr = ^sfntDirectory;

const
  sizeof_sfntDirectory = 12;
const
  cmapFontTableTag = 'cmap';
const
  kFontUnicodePlatform = 0;
  kFontMacintoshPlatform = 1;
  kFontReservedPlatform = 2;
  kFontMicrosoftPlatform = 3;
  kFontCustomPlatform = 4;
const
  kFontUnicodeDefaultSemantics = 0;
  kFontUnicodeV1_1Semantics = 1;
  kFontISO10646_1993Semantics = 2;
  kFontUnicodeV2_0BMPOnlySemantics = 3;
  kFontUnicodeV2_0FullCoverageSemantics = 4;
  kFontUnicodeV4_0VariationSequenceSemantics = 5;
  kFontUnicode_FullRepertoire = 6;
const
  kFontRomanScript = 0;
  kFontJapaneseScript = 1;
  kFontTraditionalChineseScript = 2;
  kFontChineseScript = kFontTraditionalChineseScript;
  kFontKoreanScript = 3;
  kFontArabicScript = 4;
  kFontHebrewScript = 5;
  kFontGreekScript = 6;
  kFontCyrillicScript = 7;
  kFontRussian = kFontCyrillicScript;
  kFontRSymbolScript = 8;
  kFontDevanagariScript = 9;
  kFontGurmukhiScript = 10;
  kFontGujaratiScript = 11;
  kFontOriyaScript = 12;
  kFontBengaliScript = 13;
  kFontTamilScript = 14;
  kFontTeluguScript = 15;
  kFontKannadaScript = 16;
  kFontMalayalamScript = 17;
  kFontSinhaleseScript = 18;
  kFontBurmeseScript = 19;
  kFontKhmerScript = 20;
  kFontThaiScript = 21;
  kFontLaotianScript = 22;
  kFontGeorgianScript = 23;
  kFontArmenianScript = 24;
  kFontSimpleChineseScript = 25;
  kFontTibetanScript = 26;
  kFontMongolianScript = 27;
  kFontGeezScript = 28;
  kFontEthiopicScript = kFontGeezScript;
  kFontAmharicScript = kFontGeezScript;
  kFontSlavicScript = 29;
  kFontEastEuropeanRomanScript = kFontSlavicScript;
  kFontVietnameseScript = 30;
  kFontExtendedArabicScript = 31;
  kFontSindhiScript = kFontExtendedArabicScript;
  kFontUninterpretedScript = 32;
const
  kFontMicrosoftSymbolScript = 0;
  kFontMicrosoftStandardScript = 1;
  kFontMicrosoftUCS4Script = 10;
const
  kFontCustom8BitScript = 0;
  kFontCustom816BitScript = 1;
  kFontCustom16BitScript = 2;
const
  kFontEnglishLanguage = 0;
  kFontFrenchLanguage = 1;
  kFontGermanLanguage = 2;
  kFontItalianLanguage = 3;
  kFontDutchLanguage = 4;
  kFontSwedishLanguage = 5;
  kFontSpanishLanguage = 6;
  kFontDanishLanguage = 7;
  kFontPortugueseLanguage = 8;
  kFontNorwegianLanguage = 9;
  kFontHebrewLanguage = 10;
  kFontJapaneseLanguage = 11;
  kFontArabicLanguage = 12;
  kFontFinnishLanguage = 13;
  kFontGreekLanguage = 14;
  kFontIcelandicLanguage = 15;
  kFontMalteseLanguage = 16;
  kFontTurkishLanguage = 17;
  kFontCroatianLanguage = 18;
  kFontTradChineseLanguage = 19;
  kFontUrduLanguage = 20;
  kFontHindiLanguage = 21;
  kFontThaiLanguage = 22;
  kFontKoreanLanguage = 23;
  kFontLithuanianLanguage = 24;
  kFontPolishLanguage = 25;
  kFontHungarianLanguage = 26;
  kFontEstonianLanguage = 27;
  kFontLettishLanguage = 28;
  kFontLatvianLanguage = kFontLettishLanguage;
  kFontSaamiskLanguage = 29;
  kFontLappishLanguage = kFontSaamiskLanguage;
  kFontFaeroeseLanguage = 30;
  kFontFarsiLanguage = 31;
  kFontPersianLanguage = kFontFarsiLanguage;
  kFontRussianLanguage = 32;
  kFontSimpChineseLanguage = 33;
  kFontFlemishLanguage = 34;
  kFontIrishLanguage = 35;
  kFontAlbanianLanguage = 36;
  kFontRomanianLanguage = 37;
  kFontCzechLanguage = 38;
  kFontSlovakLanguage = 39;
  kFontSlovenianLanguage = 40;
  kFontYiddishLanguage = 41;
  kFontSerbianLanguage = 42;
  kFontMacedonianLanguage = 43;
  kFontBulgarianLanguage = 44;
  kFontUkrainianLanguage = 45;
  kFontByelorussianLanguage = 46;
  kFontUzbekLanguage = 47;
  kFontKazakhLanguage = 48;
  kFontAzerbaijaniLanguage = 49;
  kFontAzerbaijanArLanguage = 50;
  kFontArmenianLanguage = 51;
  kFontGeorgianLanguage = 52;
  kFontMoldavianLanguage = 53;
  kFontKirghizLanguage = 54;
  kFontTajikiLanguage = 55;
  kFontTurkmenLanguage = 56;
  kFontMongolianLanguage = 57;
  kFontMongolianCyrLanguage = 58;
  kFontPashtoLanguage = 59;
  kFontKurdishLanguage = 60;
  kFontKashmiriLanguage = 61;
  kFontSindhiLanguage = 62;
  kFontTibetanLanguage = 63;
  kFontNepaliLanguage = 64;
  kFontSanskritLanguage = 65;
  kFontMarathiLanguage = 66;
  kFontBengaliLanguage = 67;
  kFontAssameseLanguage = 68;
  kFontGujaratiLanguage = 69;
  kFontPunjabiLanguage = 70;
  kFontOriyaLanguage = 71;
  kFontMalayalamLanguage = 72;
  kFontKannadaLanguage = 73;
  kFontTamilLanguage = 74;
  kFontTeluguLanguage = 75;
  kFontSinhaleseLanguage = 76;
  kFontBurmeseLanguage = 77;
  kFontKhmerLanguage = 78;
  kFontLaoLanguage = 79;
  kFontVietnameseLanguage = 80;
  kFontIndonesianLanguage = 81;
  kFontTagalogLanguage = 82;
  kFontMalayRomanLanguage = 83;
  kFontMalayArabicLanguage = 84;
  kFontAmharicLanguage = 85;
  kFontTigrinyaLanguage = 86;
  kFontGallaLanguage = 87;
  kFontOromoLanguage = kFontGallaLanguage;
  kFontSomaliLanguage = 88;
  kFontSwahiliLanguage = 89;
  kFontRuandaLanguage = 90;
  kFontRundiLanguage = 91;
  kFontChewaLanguage = 92;
  kFontMalagasyLanguage = 93;
  kFontEsperantoLanguage = 94;
  kFontWelshLanguage = 128;
  kFontBasqueLanguage = 129;
  kFontCatalanLanguage = 130;
  kFontLatinLanguage = 131;
  kFontQuechuaLanguage = 132;
  kFontGuaraniLanguage = 133;
  kFontAymaraLanguage = 134;
  kFontTatarLanguage = 135;
  kFontUighurLanguage = 136;
  kFontDzongkhaLanguage = 137;
  kFontJavaneseRomLanguage = 138;
  kFontSundaneseRomLanguage = 139;
const
  kFontNoPlatformCode = not(0);
  kFontNoScriptCode = not(0);
  kFontNoLanguageCode = not(0);

type
  sfntCMapSubHeader = record
    format: UInt16;
    length: UInt16;
    languageID: UInt16;
  end;
type
  sfntCMapSubHeaderPtr = ^sfntCMapSubHeader;

const
  sizeof_sfntCMapSubHeader = 6;

type
  sfntCMapExtendedSubHeader = record
    format: UInt16;
    reserved: UInt16;
    length: UInt32;
    language: UInt32;
  end;
type
  sfntCMapExtendedSubHeaderPtr = ^sfntCMapExtendedSubHeader;

const
  sizeof_sfntCMapExtendedSubHeader = 12;

type
  sfntCMapEncoding = record
    platformID: UInt16;
    scriptID: UInt16;
    offset: UInt32;
  end;
type
  sfntCMapEncodingPtr = ^sfntCMapEncoding;

const
  sizeof_sfntCMapEncoding = 8;

type
  sfntCMapHeader = record
    version: UInt16;
    numTables: UInt16;
    encoding:array[0..0] of sfntCMapEncoding;
  end;
type
  sfntCMapHeaderPtr = ^sfntCMapHeader;

const
  sizeof_sfntCMapHeader = 4;
const
  nameFontTableTag = 'name';
const
  kFontCopyrightName = 0;
  kFontFamilyName = 1;
  kFontStyleName = 2;
  kFontUniqueName = 3;
  kFontFullName = 4;
  kFontVersionName = 5;
  kFontPostscriptName = 6;
  kFontTrademarkName = 7;
  kFontManufacturerName = 8;
  kFontDesignerName = 9;
  kFontDescriptionName = 10;
  kFontVendorURLName = 11;
  kFontDesignerURLName = 12;
  kFontLicenseDescriptionName = 13;
  kFontLicenseInfoURLName = 14;
  kFontPreferredFamilyName = 16;
  kFontPreferredSubfamilyName = 17;
  kFontMacCompatibleFullName = 18;
  kFontSampleTextName = 19;
  kFontPostScriptCIDName = 20;
  kFontLastReservedName = 255;
const
  kFontNoNameCode = not(0);

type
  sfntNameRecord = record
    platformID: UInt16;
    scriptID: UInt16;
    languageID: UInt16;
    nameID: UInt16;
    length: UInt16;
    offset: UInt16;
  end;
type
  sfntNameRecordPtr = ^sfntNameRecord;

const
  sizeof_sfntNameRecord = 12;

type
  sfntNameHeader = record
    format: UInt16;
    count: UInt16;
    stringOffset: UInt16;
    rec:array[0..0] of sfntNameRecord;
  end;
type
  sfntNameHeaderPtr = ^sfntNameHeader;

const
  sizeof_sfntNameHeader = 6;
const
  variationFontTableTag = 'fvar';

type
  sfntVariationAxis = record
    axisTag: FourCharCode;
    minValue: Fixed;
    defaultValue: Fixed;
    maxValue: Fixed;
    flags: SInt16;
    nameID: SInt16;
  end;
type
  sfntVariationAxisPtr = ^sfntVariationAxis;

const
  sizeof_sfntVariationAxis = 20;

type
  sfntInstance = record
    nameID: SInt16;
    flags: SInt16;
    coord:array[0..0] of Fixed;
  end;
type
  sfntInstancePtr = ^sfntInstance;

const
  sizeof_sfntInstance = 4;

type
  sfntVariationHeader = record
    version: Fixed;
    offsetToData: UInt16;
    countSizePairs: UInt16;
    axisCount: UInt16;
    axisSize: UInt16;
    instanceCount: UInt16;
    instanceSize: UInt16;
    axis:array[0..0] of sfntVariationAxis;
    instance:array[0..0] of sfntInstance;
  end;
type
  sfntVariationHeaderPtr = ^sfntVariationHeader;

const
  sizeof_sfntVariationHeader = 16;
const
  descriptorFontTableTag = 'fdsc';

type
  sfntFontDescriptor = record
    name: FourCharCode;
    value: Fixed;
  end;
type
  sfntFontDescriptorPtr = ^sfntFontDescriptor;
type
  sfntDescriptorHeader = record
    version: Fixed;
    descriptorCount: SInt32;
    descriptor:array[0..0] of sfntFontDescriptor;
  end;
type
  sfntDescriptorHeaderPtr = ^sfntDescriptorHeader;

const
  sizeof_sfntDescriptorHeader = 8;
const
  featureFontTableTag = 'feat';

type
  sfntFeatureName = record
    featureType: UInt16;
    settingCount: UInt16;
    offsetToSettings: SInt32;
    featureFlags: UInt16;
    nameID: SInt16;
  end;
type
  sfntFeatureNamePtr = ^sfntFeatureName;
type
  sfntFontFeatureSetting = record
    setting: UInt16;
    nameID: SInt16;
  end;
type
  sfntFontFeatureSettingPtr = ^sfntFontFeatureSetting;
type
  sfntFontRunFeature = record
    featureType: UInt16;
    setting: UInt16;
  end;
type
  sfntFontRunFeaturePtr = ^sfntFontRunFeature;
type
  sfntFeatureHeader = record
    version: SInt32;
    featureNameCount: UInt16;
    featureSetCount: UInt16;
    reserved: SInt32;
    names:array[0..0] of sfntFeatureName;
    settings:array[0..0] of sfntFontFeatureSetting;
    runs:array[0..0] of sfntFontRunFeature;
  end;
type
  sfntFeatureHeaderPtr = ^sfntFeatureHeader;

const
  os2FontTableTag = 'OS/2';
const
  nonGlyphID = 65535;

type
  FontNameCode = UInt32;
  FontNameCodePtr = ^FontNameCode;
  FontPlatformCode = UInt32;
  FontPlatformCodePtr = ^FontPlatformCode;
  FontScriptCode = UInt32;
  FontScriptCodePtr = ^FontScriptCode;
  FontLanguageCode = UInt32;
  FontLanguageCodePtr = ^FontLanguageCode;

type
  FontVariation = record
    name: FourCharCode;
    value: Fixed;
  end;
type
  FontVariationPtr = ^FontVariation;
{$endif}

{$endif}
