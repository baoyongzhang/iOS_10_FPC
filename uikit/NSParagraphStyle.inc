{ Parsed from UIKit.framework NSParagraphStyle.h }

{ Types from NSParagraphStyle }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  NSTextTabPtr = ^NSTextTab;
  NSParagraphStylePtr = ^NSParagraphStyle;
  NSMutableParagraphStylePtr = ^NSMutableParagraphStyle;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSTabColumnTerminatorsAttributeName: NSString { available in 10_0, 7_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSTextTab = objcclass external (NSObject, NSCopyingProtocol, NSCodingProtocol, NSSecureCodingProtocol)
  public
    class function columnTerminatorsForLocale (aLocale: nullable NSLocalePtr): NSCharacterSet; message 'columnTerminatorsForLocale:'; { available in 10_11, 7_0 }
    function initWithTextAlignment_location_options (alignment: NSTextAlignment; loc: CGFloat; options: NSDictionary): instancetype; message 'initWithTextAlignment:location:options:'; { NS_DESIGNATED_INITIALIZER }
    function alignment: NSTextAlignment; message 'alignment';
    function location: CGFloat; message 'location';
    function options: NSDictionary; message 'options';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef TYPES}
type
  NSLineBreakMode = NSInteger;
  NSLineBreakModePtr = ^NSLineBreakMode;

const
  NSLineBreakByWordWrapping = 0;
  NSLineBreakByCharWrapping = 1;
  NSLineBreakByClipping = 2;
  NSLineBreakByTruncatingHead = 3;
  NSLineBreakByTruncatingTail = 4;
  NSLineBreakByTruncatingMiddle = 5;
{$endif}

{$ifdef CLASSES}

type
  NSParagraphStyle = objcclass external (NSObject, NSCopyingProtocol, NSMutableCopyingProtocol, NSSecureCodingProtocol)
  public
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function defaultParagraphStyle: NSParagraphStyle; message 'defaultParagraphStyle';
    {$else}
    class function defaultParagraphStyle: NSParagraphStyle; message 'defaultParagraphStyle';
    {$endif}
    class function defaultWritingDirectionForLanguage (languageName: nullable NSStringPtr): NSWritingDirection; message 'defaultWritingDirectionForLanguage:';
    function lineSpacing: CGFloat; message 'lineSpacing';
    function paragraphSpacing: CGFloat; message 'paragraphSpacing';
    function alignment: NSTextAlignment; message 'alignment';
    function headIndent: CGFloat; message 'headIndent';
    function tailIndent: CGFloat; message 'tailIndent';
    function firstLineHeadIndent: CGFloat; message 'firstLineHeadIndent';
    function minimumLineHeight: CGFloat; message 'minimumLineHeight';
    function maximumLineHeight: CGFloat; message 'maximumLineHeight';
    function lineBreakMode: NSLineBreakMode; message 'lineBreakMode';
    function baseWritingDirection: NSWritingDirection; message 'baseWritingDirection';
    function lineHeightMultiple: CGFloat; message 'lineHeightMultiple';
    function paragraphSpacingBefore: CGFloat; message 'paragraphSpacingBefore';
    function hyphenationFactor: single; message 'hyphenationFactor';
    function tabStops: NSTextTab *ProtocolPtr; message 'tabStops';
    function defaultTabInterval: CGFloat; message 'defaultTabInterval';
    function allowsDefaultTighteningForTruncation: boolean; message 'allowsDefaultTighteningForTruncation';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function mutableCopyWithZone (zone: nullable NSZonePtr): id; message 'mutableCopyWithZone:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;

type
  NSMutableParagraphStyle = objcclass external (NSParagraphStyle)
  public
    procedure setLineSpacing(newValue: CGFloat); message 'setLineSpacing:';
    function lineSpacing: CGFloat; message 'lineSpacing';
    procedure setParagraphSpacing(newValue: CGFloat); message 'setParagraphSpacing:';
    function paragraphSpacing: CGFloat; message 'paragraphSpacing';
    procedure setAlignment(newValue: NSTextAlignment); message 'setAlignment:';
    function alignment: NSTextAlignment; message 'alignment';
    procedure setFirstLineHeadIndent(newValue: CGFloat); message 'setFirstLineHeadIndent:';
    function firstLineHeadIndent: CGFloat; message 'firstLineHeadIndent';
    procedure setHeadIndent(newValue: CGFloat); message 'setHeadIndent:';
    function headIndent: CGFloat; message 'headIndent';
    procedure setTailIndent(newValue: CGFloat); message 'setTailIndent:';
    function tailIndent: CGFloat; message 'tailIndent';
    procedure setLineBreakMode(newValue: NSLineBreakMode); message 'setLineBreakMode:';
    function lineBreakMode: NSLineBreakMode; message 'lineBreakMode';
    procedure setMinimumLineHeight(newValue: CGFloat); message 'setMinimumLineHeight:';
    function minimumLineHeight: CGFloat; message 'minimumLineHeight';
    procedure setMaximumLineHeight(newValue: CGFloat); message 'setMaximumLineHeight:';
    function maximumLineHeight: CGFloat; message 'maximumLineHeight';
    procedure setBaseWritingDirection(newValue: NSWritingDirection); message 'setBaseWritingDirection:';
    function baseWritingDirection: NSWritingDirection; message 'baseWritingDirection';
    procedure setLineHeightMultiple(newValue: CGFloat); message 'setLineHeightMultiple:';
    function lineHeightMultiple: CGFloat; message 'lineHeightMultiple';
    procedure setParagraphSpacingBefore(newValue: CGFloat); message 'setParagraphSpacingBefore:';
    function paragraphSpacingBefore: CGFloat; message 'paragraphSpacingBefore';
    procedure setHyphenationFactor(newValue: single); message 'setHyphenationFactor:';
    function hyphenationFactor: single; message 'hyphenationFactor';
    procedure setTabStops(newValue: NSTextTab *ProtocolPtr); message 'setTabStops:';
    function tabStops: NSTextTab *ProtocolPtr; message 'tabStops';
    procedure setDefaultTabInterval(newValue: CGFloat); message 'setDefaultTabInterval:';
    function defaultTabInterval: CGFloat; message 'defaultTabInterval';
    procedure setAllowsDefaultTighteningForTruncation(newValue: boolean); message 'setAllowsDefaultTighteningForTruncation:';
    function allowsDefaultTighteningForTruncation: boolean; message 'allowsDefaultTighteningForTruncation';
    procedure addTabStop (anObject: NSTextTab); message 'addTabStop:'; { available in 10_0, 9_0 }
    procedure removeTabStop (anObject: NSTextTab); message 'removeTabStop:'; { available in 10_0, 9_0 }
    procedure setParagraphStyle (obj: NSParagraphStyle); message 'setParagraphStyle:'; { available in 10_0, 9_0 }
  end;
{$endif}

