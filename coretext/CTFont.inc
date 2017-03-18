{ Parsed from CoreText.framework CTFont.h }

{$ifndef __CTFONT__}

{$if defined(TARGET_OS_IPHONE)}
{$ifdef TYPES}
type
  CTFontRef = OpaqueType;
{$endif}

{$else}
{$ifdef TYPES}
type
  CTFontRef = OpaqueType;
{$endif}

{$endif}
{$ifdef EXTERNAL_SYMBOLS}
var
  kCTFontCopyrightNameKey: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontFamilyNameKey: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontSubFamilyNameKey: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontStyleNameKey: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontUniqueNameKey: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontFullNameKey: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontVersionNameKey: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontPostScriptNameKey: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontTrademarkNameKey: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontManufacturerNameKey: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontDesignerNameKey: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontDescriptionNameKey: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontVendorURLNameKey: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontDesignerURLNameKey: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontLicenseNameKey: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontLicenseURLNameKey: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontSampleTextNameKey: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontPostScriptCIDNameKey: CFStringRef { available in 10_5, 3_2 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  CTFontOptions = CFOptionFlags;
  CTFontOptionsPtr = ^CTFontOptions;

const
  kCTFontOptionsDefault = 0;
  kCTFontOptionsPreventAutoActivation = 1 shl 0;
  kCTFontOptionsPreferSystemFont = 1 shl 2;

type
  CTFontUIFontType = cuint32;
  CTFontUIFontTypePtr = ^CTFontUIFontType;

const
  kCTFontUIFontNone = -1 { available in 10_8, 6_0 };
  kCTFontUIFontUser = 0 { available in 10_8, 6_0 };
  kCTFontUIFontUserFixedPitch = 1 { available in 10_8, 6_0 };
  kCTFontUIFontSystem = 2 { available in 10_8, 6_0 };
  kCTFontUIFontEmphasizedSystem = 3 { available in 10_8, 6_0 };
  kCTFontUIFontSmallSystem = 4 { available in 10_8, 6_0 };
  kCTFontUIFontSmallEmphasizedSystem = 5 { available in 10_8, 6_0 };
  kCTFontUIFontMiniSystem = 6 { available in 10_8, 6_0 };
  kCTFontUIFontMiniEmphasizedSystem = 7 { available in 10_8, 6_0 };
  kCTFontUIFontViews = 8 { available in 10_8, 6_0 };
  kCTFontUIFontApplication = 9 { available in 10_8, 6_0 };
  kCTFontUIFontLabel = 10 { available in 10_8, 6_0 };
  kCTFontUIFontMenuTitle = 11 { available in 10_8, 6_0 };
  kCTFontUIFontMenuItem = 12 { available in 10_8, 6_0 };
  kCTFontUIFontMenuItemMark = 13 { available in 10_8, 6_0 };
  kCTFontUIFontMenuItemCmdKey = 14 { available in 10_8, 6_0 };
  kCTFontUIFontWindowTitle = 15 { available in 10_8, 6_0 };
  kCTFontUIFontPushButton = 16 { available in 10_8, 6_0 };
  kCTFontUIFontUtilityWindowTitle = 17 { available in 10_8, 6_0 };
  kCTFontUIFontAlertHeader = 18 { available in 10_8, 6_0 };
  kCTFontUIFontSystemDetail = 19 { available in 10_8, 6_0 };
  kCTFontUIFontEmphasizedSystemDetail = 20 { available in 10_8, 6_0 };
  kCTFontUIFontToolbar = 21 { available in 10_8, 6_0 };
  kCTFontUIFontSmallToolbar = 22 { available in 10_8, 6_0 };
  kCTFontUIFontMessage = 23 { available in 10_8, 6_0 };
  kCTFontUIFontPalette = 24 { available in 10_8, 6_0 };
  kCTFontUIFontToolTip = 25 { available in 10_8, 6_0 };
  kCTFontUIFontControlContent = 26 { available in 10_8, 6_0 };
  kCTFontNoFontType = kCTFontUIFontNone deprecated 'in 10_5, 10_11, 3_2, 9_0';
  kCTFontUserFontType = kCTFontUIFontUser deprecated 'in 10_5, 10_11, 3_2, 9_0';
  kCTFontUserFixedPitchFontType = kCTFontUIFontUserFixedPitch deprecated 'in 10_5, 10_11, 3_2, 9_0';
  kCTFontSystemFontType = kCTFontUIFontSystem deprecated 'in 10_5, 10_11, 3_2, 9_0';
  kCTFontEmphasizedSystemFontType = kCTFontUIFontEmphasizedSystem deprecated 'in 10_5, 10_11, 3_2, 9_0';
  kCTFontSmallSystemFontType = kCTFontUIFontSmallSystem deprecated 'in 10_5, 10_11, 3_2, 9_0';
  kCTFontSmallEmphasizedSystemFontType = kCTFontUIFontSmallEmphasizedSystem deprecated 'in 10_5, 10_11, 3_2, 9_0';
  kCTFontMiniSystemFontType = kCTFontUIFontMiniSystem deprecated 'in 10_5, 10_11, 3_2, 9_0';
  kCTFontMiniEmphasizedSystemFontType = kCTFontUIFontMiniEmphasizedSystem deprecated 'in 10_5, 10_11, 3_2, 9_0';
  kCTFontViewsFontType = kCTFontUIFontViews deprecated 'in 10_5, 10_11, 3_2, 9_0';
  kCTFontApplicationFontType = kCTFontUIFontApplication deprecated 'in 10_5, 10_11, 3_2, 9_0';
  kCTFontLabelFontType = kCTFontUIFontLabel deprecated 'in 10_5, 10_11, 3_2, 9_0';
  kCTFontMenuTitleFontType = kCTFontUIFontMenuTitle deprecated 'in 10_5, 10_11, 3_2, 9_0';
  kCTFontMenuItemFontType = kCTFontUIFontMenuItem deprecated 'in 10_5, 10_11, 3_2, 9_0';
  kCTFontMenuItemMarkFontType = kCTFontUIFontMenuItemMark deprecated 'in 10_5, 10_11, 3_2, 9_0';
  kCTFontMenuItemCmdKeyFontType = kCTFontUIFontMenuItemCmdKey deprecated 'in 10_5, 10_11, 3_2, 9_0';
  kCTFontWindowTitleFontType = kCTFontUIFontWindowTitle deprecated 'in 10_5, 10_11, 3_2, 9_0';
  kCTFontPushButtonFontType = kCTFontUIFontPushButton deprecated 'in 10_5, 10_11, 3_2, 9_0';
  kCTFontUtilityWindowTitleFontType = kCTFontUIFontUtilityWindowTitle deprecated 'in 10_5, 10_11, 3_2, 9_0';
  kCTFontAlertHeaderFontType = kCTFontUIFontAlertHeader deprecated 'in 10_5, 10_11, 3_2, 9_0';
  kCTFontSystemDetailFontType = kCTFontUIFontSystemDetail deprecated 'in 10_5, 10_11, 3_2, 9_0';
  kCTFontEmphasizedSystemDetailFontType = kCTFontUIFontEmphasizedSystemDetail deprecated 'in 10_5, 10_11, 3_2, 9_0';
  kCTFontToolbarFontType = kCTFontUIFontToolbar deprecated 'in 10_5, 10_11, 3_2, 9_0';
  kCTFontSmallToolbarFontType = kCTFontUIFontSmallToolbar deprecated 'in 10_5, 10_11, 3_2, 9_0';
  kCTFontMessageFontType = kCTFontUIFontMessage deprecated 'in 10_5, 10_11, 3_2, 9_0';
  kCTFontPaletteFontType = kCTFontUIFontPalette deprecated 'in 10_5, 10_11, 3_2, 9_0';
  kCTFontToolTipFontType = kCTFontUIFontToolTip deprecated 'in 10_5, 10_11, 3_2, 9_0';
  kCTFontControlContentFontType = kCTFontUIFontControlContent deprecated 'in 10_5, 10_11, 3_2, 9_0';
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCTFontVariationAxisIdentifierKey: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontVariationAxisMinimumValueKey: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontVariationAxisMaximumValueKey: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontVariationAxisDefaultValueKey: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontVariationAxisNameKey: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontOpenTypeFeatureTag: CFStringRef { available in 10_10, 8_0 }; cvar; external;
  kCTFontOpenTypeFeatureValue: CFStringRef { available in 10_10, 8_0 }; cvar; external;
  kCTFontFeatureTypeIdentifierKey: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontFeatureTypeNameKey: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontFeatureTypeExclusiveKey: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontFeatureTypeSelectorsKey: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontFeatureSelectorIdentifierKey: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontFeatureSelectorNameKey: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontFeatureSelectorDefaultKey: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontFeatureSelectorSettingKey: CFStringRef { available in 10_5, 3_2 }; cvar; external;
{$endif}

{$ifndef ATSFONTREF_DEFINED}
{$ifdef TYPES}
type
  ATSFontRef = UInt32;
  ATSFontRefPtr = ^ATSFontRef;

const
  ATSFONTREF_DEFINED = 1;
{$endif}

{$endif}
{$ifdef TYPES}
const
  kCTFontTableBASE = 'BASE';
  kCTFontTableCFF = 'CFF ';
  kCTFontTableDSIG = 'DSIG';
  kCTFontTableEBDT = 'EBDT';
  kCTFontTableEBLC = 'EBLC';
  kCTFontTableEBSC = 'EBSC';
  kCTFontTableGDEF = 'GDEF';
  kCTFontTableGPOS = 'GPOS';
  kCTFontTableGSUB = 'GSUB';
  kCTFontTableJSTF = 'JSTF';
  kCTFontTableLTSH = 'LTSH';
  kCTFontTableMATH = 'MATH';
  kCTFontTableOS2 = 'OS/2';
  kCTFontTablePCLT = 'PCLT';
  kCTFontTableVDMX = 'VDMX';
  kCTFontTableVORG = 'VORG';
  kCTFontTableZapf = 'Zapf';
  kCTFontTableAcnt = 'acnt';
  kCTFontTableAnkr = 'ankr';
  kCTFontTableAvar = 'avar';
  kCTFontTableBdat = 'bdat';
  kCTFontTableBhed = 'bhed';
  kCTFontTableBloc = 'bloc';
  kCTFontTableBsln = 'bsln';
  kCTFontTableCmap = 'cmap';
  kCTFontTableCvar = 'cvar';
  kCTFontTableCvt = 'cvt ';
  kCTFontTableFdsc = 'fdsc';
  kCTFontTableFeat = 'feat';
  kCTFontTableFmtx = 'fmtx';
  kCTFontTableFpgm = 'fpgm';
  kCTFontTableFvar = 'fvar';
  kCTFontTableGasp = 'gasp';
  kCTFontTableGlyf = 'glyf';
  kCTFontTableGvar = 'gvar';
  kCTFontTableHdmx = 'hdmx';
  kCTFontTableHead = 'head';
  kCTFontTableHhea = 'hhea';
  kCTFontTableHmtx = 'hmtx';
  kCTFontTableHsty = 'hsty';
  kCTFontTableJust = 'just';
  kCTFontTableKern = 'kern';
  kCTFontTableKerx = 'kerx';
  kCTFontTableLcar = 'lcar';
  kCTFontTableLtag = 'ltag';
  kCTFontTableLoca = 'loca';
  kCTFontTableMaxp = 'maxp';
  kCTFontTableMort = 'mort';
  kCTFontTableMorx = 'morx';
  kCTFontTableName = 'name';
  kCTFontTableOpbd = 'opbd';
  kCTFontTablePost = 'post';
  kCTFontTablePrep = 'prep';
  kCTFontTableProp = 'prop';
  kCTFontTableSbit = 'sbit';
  kCTFontTableSbix = 'sbix';
  kCTFontTableTrak = 'trak';
  kCTFontTableVhea = 'vhea';
  kCTFontTableVmtx = 'vmtx';

type
  CTFontTableTag = FourCharCode;
  CTFontTableTagPtr = ^CTFontTableTag;
  CTFontTableOptions = cuint32;
  CTFontTableOptionsPtr = ^CTFontTableOptions;

const
  kCTFontTableOptionNoOptions = 0 { available in 10_5, 3_2 };
  kCTFontTableOptionExcludeSynthetic = 1 shl 0 deprecated 'in 10_5, 10_8, 3_2, 6_0';
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCTBaselineClassRoman: CFStringRef { available in 10_8, 6_0 }; cvar; external;
  kCTBaselineClassIdeographicCentered: CFStringRef { available in 10_8, 6_0 }; cvar; external;
  kCTBaselineClassIdeographicLow: CFStringRef { available in 10_8, 6_0 }; cvar; external;
  kCTBaselineClassIdeographicHigh: CFStringRef { available in 10_8, 6_0 }; cvar; external;
  kCTBaselineClassHanging: CFStringRef { available in 10_8, 6_0 }; cvar; external;
  kCTBaselineClassMath: CFStringRef { available in 10_8, 6_0 }; cvar; external;
  kCTBaselineReferenceFont: CFStringRef { available in 10_8, 6_0 }; cvar; external;
  kCTBaselineOriginalFont: CFStringRef { available in 10_8, 6_0 }; cvar; external;
{$endif}

{$endif}
