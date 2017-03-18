{ Parsed from Foundation.framework NSFormatter.h }

{$ifdef TYPES}
type
  NSFormatterPtr = ^NSFormatter;
{$endif}

{$ifdef TYPES}
type
  NSFormattingContext = NSInteger;
  NSFormattingContextPtr = ^NSFormattingContext;

const
  NSFormattingContextUnknown = 0;
  NSFormattingContextDynamic = 1;
  NSFormattingContextStandalone = 2;
  NSFormattingContextListItem = 3;
  NSFormattingContextBeginningOfSentence = 4;
  NSFormattingContextMiddleOfSentence = 5;

type
  NSFormattingUnitStyle = NSInteger;
  NSFormattingUnitStylePtr = ^NSFormattingUnitStyle;

const
  NSFormattingUnitStyleShort = 1;
  NSFormattingUnitStyleMedium = 2;
  NSFormattingUnitStyleLong = 3;
{$endif}

{$ifdef CLASSES}

type
  NSFormatter = objcclass external (NSObject, NSCopyingProtocol, NSCodingProtocol)
  public
    function stringForObjectValue (obj: nullable id): nullable NSStringPtr; message 'stringForObjectValue:';
    function attributedStringForObjectValue_withDefaultAttributes (obj: id; attrs: nullable NSDictionaryPtr): nullable NSAttributedStringPtr; message 'attributedStringForObjectValue:withDefaultAttributes:';
    function editingStringForObjectValue (obj: id): nullable NSStringPtr; message 'editingStringForObjectValue:';
    function getObjectValue_forString_errorDescription (obj: id _Nullable * _Nullable; string_: NSString; error: NSString * _Nullable * _Nullable): boolean; message 'getObjectValue:forString:errorDescription:';
    function isPartialStringValid_newEditingString_errorDescription (partialString: NSString; newString: NSString * _Nullable * _Nullable; error: NSString * _Nullable * _Nullable): boolean; message 'isPartialStringValid:newEditingString:errorDescription:';
    function isPartialStringValid_proposedSelectedRange_originalString_originalSelectedRange_errorDescription (partialStringPtr: NSString * _Nonnull * _Nonnull; proposedSelRangePtr: nullable NSRangePointer; origString: NSString; origSelRange: NSRange; error: NSString * _Nullable * _Nullable): boolean; message 'isPartialStringValid:proposedSelectedRange:originalString:originalSelectedRange:errorDescription:';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
  end;
{$endif}

