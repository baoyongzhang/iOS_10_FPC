{ Parsed from UIKit.framework NSAttributedString.h }
{$ifdef EXTERNAL_SYMBOLS}
var
  NSFontAttributeName: NSString { available in 10_0, 6_0 }; cvar; external;
  NSParagraphStyleAttributeName: NSString { available in 10_0, 6_0 }; cvar; external;
  NSForegroundColorAttributeName: NSString { available in 10_0, 6_0 }; cvar; external;
  NSBackgroundColorAttributeName: NSString { available in 10_0, 6_0 }; cvar; external;
  NSLigatureAttributeName: NSString { available in 10_0, 6_0 }; cvar; external;
  NSKernAttributeName: NSString { available in 10_0, 6_0 }; cvar; external;
  NSStrikethroughStyleAttributeName: NSString { available in 10_0, 6_0 }; cvar; external;
  NSUnderlineStyleAttributeName: NSString { available in 10_0, 6_0 }; cvar; external;
  NSStrokeColorAttributeName: NSString { available in 10_0, 6_0 }; cvar; external;
  NSStrokeWidthAttributeName: NSString { available in 10_0, 6_0 }; cvar; external;
  NSShadowAttributeName: NSString { available in 10_0, 6_0 }; cvar; external;
  NSTextEffectAttributeName: NSString { available in 10_10, 7_0 }; cvar; external;
  NSAttachmentAttributeName: NSString { available in 10_0, 7_0 }; cvar; external;
  NSLinkAttributeName: NSString { available in 10_0, 7_0 }; cvar; external;
  NSBaselineOffsetAttributeName: NSString { available in 10_0, 7_0 }; cvar; external;
  NSUnderlineColorAttributeName: NSString { available in 10_0, 7_0 }; cvar; external;
  NSStrikethroughColorAttributeName: NSString { available in 10_0, 7_0 }; cvar; external;
  NSObliquenessAttributeName: NSString { available in 10_0, 7_0 }; cvar; external;
  NSExpansionAttributeName: NSString { available in 10_0, 7_0 }; cvar; external;
  NSWritingDirectionAttributeName: NSString { available in 10_6, 7_0 }; cvar; external;
  NSVerticalGlyphFormAttributeName: NSString { available in 10_7, 6_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSUnderlineStyle = NSInteger;
  NSUnderlineStylePtr = ^NSUnderlineStyle;

const
  NSUnderlineStyleNone = $00;
  NSUnderlineStyleSingle = $01;
  NSUnderlineStyleThick = $02 { available in 10_0, 7_0 };
  NSUnderlineStyleDouble = $09 { available in 10_0, 7_0 };
  NSUnderlinePatternSolid = $0000 { available in 10_0, 7_0 };
  NSUnderlinePatternDot = $0100 { available in 10_0, 7_0 };
  NSUnderlinePatternDash = $0200 { available in 10_0, 7_0 };
  NSUnderlinePatternDashDot = $0300 { available in 10_0, 7_0 };
  NSUnderlinePatternDashDotDot = $0400 { available in 10_0, 7_0 };
  NSUnderlineByWord = $8000 { available in 10_0, 7_0 };

type
  NSWritingDirectionFormatType = NSInteger;
  NSWritingDirectionFormatTypePtr = ^NSWritingDirectionFormatType;

const
  NSWritingDirectionEmbedding = 0 shl 1;
  NSWritingDirectionOverride = 1 shl 1;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSTextEffectLetterpressStyle: NSString { available in 10_10, 7_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSAttributedStringAttributeFixing = objccategory external (NSMutableAttributedString)
    procedure fixAttributesInRange (range: NSRange); message 'fixAttributesInRange:'; { available in 10_0, 7_0 }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSPlainTextDocumentType: NSString { available in 10_0, 7_0 }; cvar; external;
  NSRTFTextDocumentType: NSString { available in 10_0, 7_0 }; cvar; external;
  NSRTFDTextDocumentType: NSString { available in 10_0, 7_0 }; cvar; external;
  NSHTMLTextDocumentType: NSString { available in 10_0, 7_0 }; cvar; external;
  NSTextLayoutSectionOrientation: NSString { available in 10_7, 7_0 }; cvar; external;
  NSTextLayoutSectionRange: NSString { available in 10_7, 7_0 }; cvar; external;
  NSDocumentTypeDocumentAttribute: NSString { available in 10_0, 7_0 }; cvar; external;
  NSCharacterEncodingDocumentAttribute: NSString { available in 10_0, 7_0 }; cvar; external;
  NSDefaultAttributesDocumentAttribute: NSString { available in 10_11, 7_0 }; cvar; external;
  NSPaperSizeDocumentAttribute: NSString { available in 10_0, 7_0 }; cvar; external;
  NSPaperMarginDocumentAttribute: NSString { available in 7_0 }; cvar; external;
  NSViewSizeDocumentAttribute: NSString { available in 10_0, 7_0 }; cvar; external;
  NSViewZoomDocumentAttribute: NSString { available in 10_0, 7_0 }; cvar; external;
  NSViewModeDocumentAttribute: NSString { available in 10_0, 7_0 }; cvar; external;
  NSReadOnlyDocumentAttribute: NSString { available in 10_0, 7_0 }; cvar; external;
  NSBackgroundColorDocumentAttribute: NSString { available in 10_0, 7_0 }; cvar; external;
  NSHyphenationFactorDocumentAttribute: NSString { available in 10_0, 7_0 }; cvar; external;
  NSDefaultTabIntervalDocumentAttribute: NSString { available in 10_0, 7_0 }; cvar; external;
  NSTextLayoutSectionsAttribute: NSString { available in 10_7, 7_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSAttributedStringDocumentFormats = objccategory external (NSAttributedString)
    function initWithURL_options_documentAttributes_error (url: NSURL; options: NSDictionary; dict: NSDictionary * __nullable * __nullable; error: NSErrorPtr): nullable instancetype; message 'initWithURL:options:documentAttributes:error:'; { available in 10_4, 9_0 }
    function initWithData_options_documentAttributes_error (data: NSData; options: NSDictionary; dict: NSDictionary * __nullable * __nullable; error: NSErrorPtr): nullable instancetype; message 'initWithData:options:documentAttributes:error:'; { available in 10_0, 7_0 }
    function dataFromRange_documentAttributes_error (range: NSRange; dict: NSDictionary; error: NSErrorPtr): nullable NSDataPtr; message 'dataFromRange:documentAttributes:error:'; { available in 10_0, 7_0 }
    function fileWrapperFromRange_documentAttributes_error (range: NSRange; dict: NSDictionary; error: NSErrorPtr): nullable NSFileWrapperPtr; message 'fileWrapperFromRange:documentAttributes:error:'; { available in 10_0, 7_0 }
  end;

type
  NSMutableAttributedStringDocumentFormats = objccategory external (NSMutableAttributedString)
    function readFromURL_options_documentAttributes_error (url: NSURL; opts: NSDictionary; dict: NSDictionary * __nullable * __nullable; error: NSErrorPtr): boolean; message 'readFromURL:options:documentAttributes:error:'; { available in 10_11, 9_0 }
    function readFromData_options_documentAttributes_error (data: NSData; opts: NSDictionary; dict: NSDictionary * __nullable * __nullable; error: NSErrorPtr): boolean; message 'readFromData:options:documentAttributes:error:'; { available in 10_0, 7_0 }
  end;

type
  NSAttributedStringKitAdditions = objccategory external (NSAttributedString)
    function containsAttachmentsInRange (range: NSRange): boolean; message 'containsAttachmentsInRange:'; { available in 10_11, 9_0 }
  end;
{$endif}

{$ifdef TYPES}
type
  NSTextWritingDirection = NSInteger;
  NSTextWritingDirectionPtr = ^NSTextWritingDirection;

const
  NSTextWritingDirectionEmbedding = 0 shl 1;
  NSTextWritingDirectionOverride = 1 shl 1;
{$endif}

{$ifdef CLASSES}

type
  NSAttributedString_NSDeprecatedKitAdditions = objccategory external name 'NSDeprecatedKitAdditions' (NSAttributedString)
    function initWithFileURL_options_documentAttributes_error (url: NSURL; options: NSDictionary; dict: NSDictionary* __nullable * __nullable; error: NSErrorPtr): nullable instancetype; message 'initWithFileURL:options:documentAttributes:error:'; deprecated 'in 7_0, 9_0, "Use -initWithURL:options:documentAttributes:error: instead"';
  end;

type
  NSDeprecatedKitAdditions = objccategory external (NSMutableAttributedString)
    function readFromFileURL_options_documentAttributes_error (url: NSURL; opts: NSDictionary; dict: NSDictionary* __nullable * __nullable; error: NSErrorPtr): boolean; message 'readFromFileURL:options:documentAttributes:error:'; deprecated 'in 7_0, 9_0, "Use -readFromURL:options:documentAttributes:error: instead"';
  end;
{$endif}

