{ Parsed from UIKit.framework UIFontDescriptor.h }

{ Types from UIFontDescriptor }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  UIFontDescriptorPtr = ^UIFontDescriptor;
{$endif}

{$ifdef TYPES}
type
  UIFontDescriptorSymbolicTraits = cuint32;
  UIFontDescriptorSymbolicTraitsPtr = ^UIFontDescriptorSymbolicTraits;

const
  UIFontDescriptorTraitItalic = 1 shl 0;
  UIFontDescriptorTraitBold = 1 shl 1;
  UIFontDescriptorTraitExpanded = 1 shl 5;
  UIFontDescriptorTraitCondensed = 1 shl 6;
  UIFontDescriptorTraitMonoSpace = 1 shl 10;
  UIFontDescriptorTraitVertical = 1 shl 11;
  UIFontDescriptorTraitUIOptimized = 1 shl 12;
  UIFontDescriptorTraitTightLeading = 1 shl 15;
  UIFontDescriptorTraitLooseLeading = 1 shl 16;
  UIFontDescriptorClassMask = $F0000000;
  UIFontDescriptorClassUnknown = 0 shl 28;
  UIFontDescriptorClassOldStyleSerifs = 1 shl 28;
  UIFontDescriptorClassTransitionalSerifs = 2 shl 28;
  UIFontDescriptorClassModernSerifs = 3 shl 28;
  UIFontDescriptorClassClarendonSerifs = 4 shl 28;
  UIFontDescriptorClassSlabSerifs = 5 shl 28;
  UIFontDescriptorClassFreeformSerifs = 7 shl 28;
  UIFontDescriptorClassSansSerif = 8 shl 28;
  UIFontDescriptorClassOrnamentals = 9 shl 28;
  UIFontDescriptorClassScripts = 10 shl 28;
  UIFontDescriptorClassSymbolic = 12 shl 28;

type
  UIFontDescriptorClass = NSUInteger;
  UIFontDescriptorClassPtr = ^UIFontDescriptorClass;
{$endif}

{$if defined(UIKIT_STRING_ENUMS)}
{$ifdef TYPES}
type
  NS_EXTENSIBLE_STRING_ENUM = NSString *UIFontTextStyle;
  NS_EXTENSIBLE_STRING_ENUMPtr = ^NS_EXTENSIBLE_STRING_ENUM;
{$endif}

{$else}
{$ifdef TYPES}
type
  UIFontTextStyle = ^NSString;
{$endif}

{$endif}
{$ifdef CLASSES}

type
  UIFontDescriptor = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function init: instancetype; message 'init';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function postscriptName: NSString; message 'postscriptName';
    function pointSize: CGFloat; message 'pointSize';
    function matrix: CGAffineTransform; message 'matrix';
    function symbolicTraits: UIFontDescriptorSymbolicTraits; message 'symbolicTraits';
    function objectForKey (anAttribute: NSString): nullable id; message 'objectForKey:';
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function fontAttributes: NSDictionary; message 'fontAttributes';
    {$else}
    function fontAttributes: NSDictionary; message 'fontAttributes';
    {$endif}
    function matchingFontDescriptorsWithMandatoryKeys (mandatoryKeys: nullable NSString *ProtocolPtr): UIFontDescriptor *ProtocolPtr; message 'matchingFontDescriptorsWithMandatoryKeys:';
    class function fontDescriptorWithFontAttributes (attributes: NSDictionary): UIFontDescriptor; message 'fontDescriptorWithFontAttributes:';
    class function fontDescriptorWithName_size (fontName: NSString; size: CGFloat): UIFontDescriptor; message 'fontDescriptorWithName:size:';
    class function fontDescriptorWithName_matrix (fontName: NSString; matrix_: CGAffineTransform): UIFontDescriptor; message 'fontDescriptorWithName:matrix:';
    class function preferredFontDescriptorWithTextStyle (style: UIFontTextStyle): UIFontDescriptor; message 'preferredFontDescriptorWithTextStyle:';
    class function preferredFontDescriptorWithTextStyle_compatibleWithTraitCollection (style: UIFontTextStyle; traitCollection: nullable UITraitCollectionPtr): UIFontDescriptor; message 'preferredFontDescriptorWithTextStyle:compatibleWithTraitCollection:'; { available in 10_0 }
    function initWithFontAttributes (attributes: NSDictionary): instancetype; message 'initWithFontAttributes:'; { NS_DESIGNATED_INITIALIZER }
    function fontDescriptorByAddingAttributes (attributes: NSDictionary): UIFontDescriptor; message 'fontDescriptorByAddingAttributes:';
    function fontDescriptorWithSize (newPointSize: CGFloat): UIFontDescriptor; message 'fontDescriptorWithSize:';
    function fontDescriptorWithMatrix (matrix_: CGAffineTransform): UIFontDescriptor; message 'fontDescriptorWithMatrix:';
    function fontDescriptorWithFace (newFace: NSString): UIFontDescriptor; message 'fontDescriptorWithFace:';
    function fontDescriptorWithFamily (newFamily: NSString): UIFontDescriptor; message 'fontDescriptorWithFamily:';
    function fontDescriptorWithSymbolicTraits (symbolicTraits_: UIFontDescriptorSymbolicTraits): nullable UIFontDescriptorPtr; message 'fontDescriptorWithSymbolicTraits:';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  UIFontDescriptorFamilyAttribute: NSString { available in 7_0 }; cvar; external;
  UIFontDescriptorNameAttribute: NSString { available in 7_0 }; cvar; external;
  UIFontDescriptorFaceAttribute: NSString { available in 7_0 }; cvar; external;
  UIFontDescriptorSizeAttribute: NSString { available in 7_0 }; cvar; external;
  UIFontDescriptorVisibleNameAttribute: NSString { available in 7_0 }; cvar; external;
  UIFontDescriptorMatrixAttribute: NSString { available in 7_0 }; cvar; external;
  UIFontDescriptorCharacterSetAttribute: NSString { available in 7_0 }; cvar; external;
  UIFontDescriptorCascadeListAttribute: NSString { available in 7_0 }; cvar; external;
  UIFontDescriptorTraitsAttribute: NSString { available in 7_0 }; cvar; external;
  UIFontDescriptorFixedAdvanceAttribute: NSString { available in 7_0 }; cvar; external;
  UIFontDescriptorFeatureSettingsAttribute: NSString { available in 7_0 }; cvar; external;
  UIFontDescriptorTextStyleAttribute: NSString { available in 7_0 }; cvar; external;
  UIFontSymbolicTrait: NSString { available in 7_0 }; cvar; external;
  UIFontWeightTrait: NSString { available in 7_0 }; cvar; external;
  UIFontWidthTrait: NSString { available in 7_0 }; cvar; external;
  UIFontSlantTrait: NSString { available in 7_0 }; cvar; external;
  UIFontWeightUltraLight: CGFloat { available in 8_2 }; cvar; external;
  UIFontWeightThin: CGFloat { available in 8_2 }; cvar; external;
  UIFontWeightLight: CGFloat { available in 8_2 }; cvar; external;
  UIFontWeightRegular: CGFloat { available in 8_2 }; cvar; external;
  UIFontWeightMedium: CGFloat { available in 8_2 }; cvar; external;
  UIFontWeightSemibold: CGFloat { available in 8_2 }; cvar; external;
  UIFontWeightBold: CGFloat { available in 8_2 }; cvar; external;
  UIFontWeightHeavy: CGFloat { available in 8_2 }; cvar; external;
  UIFontWeightBlack: CGFloat { available in 8_2 }; cvar; external;
  UIFontFeatureTypeIdentifierKey: NSString { available in 7_0 }; cvar; external;
  UIFontFeatureSelectorIdentifierKey: NSString { available in 7_0 }; cvar; external;
  UIFontTextStyleTitle1: UIFontTextStyle { available in 9_0 }; cvar; external;
  UIFontTextStyleTitle2: UIFontTextStyle { available in 9_0 }; cvar; external;
  UIFontTextStyleTitle3: UIFontTextStyle { available in 9_0 }; cvar; external;
  UIFontTextStyleHeadline: UIFontTextStyle { available in 7_0 }; cvar; external;
  UIFontTextStyleSubheadline: UIFontTextStyle { available in 7_0 }; cvar; external;
  UIFontTextStyleBody: UIFontTextStyle { available in 7_0 }; cvar; external;
  UIFontTextStyleCallout: UIFontTextStyle { available in 9_0 }; cvar; external;
  UIFontTextStyleFootnote: UIFontTextStyle { available in 7_0 }; cvar; external;
  UIFontTextStyleCaption1: UIFontTextStyle { available in 7_0 }; cvar; external;
  UIFontTextStyleCaption2: UIFontTextStyle { available in 7_0 }; cvar; external;
{$endif}

