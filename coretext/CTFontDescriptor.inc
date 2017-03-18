{ Parsed from CoreText.framework CTFontDescriptor.h }

{$ifndef __CTFONTDESCRIPTOR__}

{$if defined(TARGET_OS_IPHONE)}
{$ifdef TYPES}
type
  CTFontDescriptorRef = OpaqueType;
{$endif}

{$else}
{$ifdef TYPES}
type
  CTFontDescriptorRef = OpaqueType;
{$endif}

{$endif}
{$ifdef EXTERNAL_SYMBOLS}
var
  kCTFontURLAttribute: CFStringRef { available in 10_6, 3_2 }; cvar; external;
  kCTFontNameAttribute: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontDisplayNameAttribute: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontFamilyNameAttribute: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontStyleNameAttribute: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontTraitsAttribute: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontVariationAttribute: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontSizeAttribute: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontMatrixAttribute: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontCascadeListAttribute: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontCharacterSetAttribute: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontLanguagesAttribute: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontBaselineAdjustAttribute: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontMacintoshEncodingsAttribute: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontFeaturesAttribute: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontFeatureSettingsAttribute: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontFixedAdvanceAttribute: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontOrientationAttribute: CFStringRef { available in 10_5, 3_2 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  CTFontOrientation = cuint32;
  CTFontOrientationPtr = ^CTFontOrientation;

const
  kCTFontOrientationDefault = 0 { available in 10_8, 6_0 };
  kCTFontOrientationHorizontal = 1 { available in 10_8, 6_0 };
  kCTFontOrientationVertical = 2 { available in 10_8, 6_0 };
  kCTFontDefaultOrientation = kCTFontOrientationDefault deprecated 'in 10_5, 10_11, 3_2, 9_0';
  kCTFontHorizontalOrientation = kCTFontOrientationHorizontal deprecated 'in 10_5, 10_11, 3_2, 9_0';
  kCTFontVerticalOrientation = kCTFontOrientationVertical deprecated 'in 10_5, 10_11, 3_2, 9_0';
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCTFontFormatAttribute: CFStringRef { available in 10_6, 3_2 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  CTFontFormat = cuint32;
  CTFontFormatPtr = ^CTFontFormat;

const
  kCTFontFormatUnrecognized = 0;
  kCTFontFormatOpenTypePostScript = 1;
  kCTFontFormatOpenTypeTrueType = 2;
  kCTFontFormatTrueType = 3;
  kCTFontFormatPostScript = 4;
  kCTFontFormatBitmap = 5;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCTFontRegistrationScopeAttribute: CFStringRef { available in 10_6, 3_2 }; cvar; external;
  kCTFontPriorityAttribute: CFStringRef { available in 10_6, 3_2 }; cvar; external;
{$endif}

{$ifdef TYPES}
const
  kCTFontPrioritySystem = 10000;
  kCTFontPriorityNetwork = 20000;
  kCTFontPriorityComputer = 30000;
  kCTFontPriorityUser = 40000;
  kCTFontPriorityDynamic = 50000;
  kCTFontPriorityProcess = 60000;

type
  CTFontPriority = cuint32;
  CTFontPriorityPtr = ^CTFontPriority;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCTFontEnabledAttribute: CFStringRef { available in 10_6, 3_2 }; cvar; external;
  kCTFontDownloadableAttribute: CFStringRef { available in 10_8, 6_0 }; cvar; external;
  kCTFontDownloadedAttribute: CFStringRef { available in 10_12, 7_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  CTFontDescriptorMatchingState = cuint32;
  CTFontDescriptorMatchingStatePtr = ^CTFontDescriptorMatchingState;

const
  kCTFontDescriptorMatchingDidBegin = 0;
  kCTFontDescriptorMatchingDidFinish = 1;
  kCTFontDescriptorMatchingWillBeginQuerying = 2;
  kCTFontDescriptorMatchingStalled = 3;
  kCTFontDescriptorMatchingWillBeginDownloading = 4;
  kCTFontDescriptorMatchingDownloading = 5;
  kCTFontDescriptorMatchingDidFinishDownloading = 6;
  kCTFontDescriptorMatchingDidMatch = 7;
  kCTFontDescriptorMatchingDidFailWithError = 8;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCTFontDescriptorMatchingSourceDescriptor: CFStringRef { available in 10_8, 6_0 }; cvar; external;
  kCTFontDescriptorMatchingDescriptors: CFStringRef { available in 10_8, 6_0 }; cvar; external;
  kCTFontDescriptorMatchingResult: CFStringRef { available in 10_8, 6_0 }; cvar; external;
  kCTFontDescriptorMatchingPercentage: CFStringRef { available in 10_8, 6_0 }; cvar; external;
  kCTFontDescriptorMatchingCurrentAssetSize: CFStringRef { available in 10_8, 6_0 }; cvar; external;
  kCTFontDescriptorMatchingTotalDownloadedSize: CFStringRef { available in 10_8, 6_0 }; cvar; external;
  kCTFontDescriptorMatchingTotalAssetSize: CFStringRef { available in 10_8, 6_0 }; cvar; external;
  kCTFontDescriptorMatchingError: CFStringRef { available in 10_8, 6_0 }; cvar; external;
{$endif}

{$if (defined(__BLOCKS__))}
{$ifdef TYPES}
type
  CTFontDescriptorProgressHandler = OpaqueCBlock;
{$endif}

{$endif}
{$endif}
