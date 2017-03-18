{ Parsed from Foundation.framework NSAttributedString.h }

{ Types from NSExtendedAttributedString }
{$ifdef TYPES}

type
  NSAttributedStringEnumerationOptions = NSUInteger;
type
  NSAttributedStringEnumerationOptionsPtr = ^NSAttributedStringEnumerationOptions;

const
  NSAttributedStringEnumerationReverse = 1 shl 1;
  NSAttributedStringEnumerationLongestEffectiveRangeNotRequired = 1 shl 20;
{$endif}


{$ifdef TYPES}
type
  NSAttributedStringPtr = ^NSAttributedString;
  NSMutableAttributedStringPtr = ^NSMutableAttributedString;
{$endif}

{$ifdef CLASSES}

type
  NSAttributedString = objcclass external (NSObject, NSCopyingProtocol, NSMutableCopyingProtocol, NSSecureCodingProtocol)
  public
    function string_: NSString; message 'string';
    function attributesAtIndex_effectiveRange (location: NSUInteger; range: nullable NSRangePointer): NSDictionary; message 'attributesAtIndex:effectiveRange:';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function mutableCopyWithZone (zone: nullable NSZonePtr): id; message 'mutableCopyWithZone:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;


type
  NSExtendedAttributedString = objccategory external (NSAttributedString)
    function length: NSUInteger; message 'length';
    function attribute_atIndex_effectiveRange (attrName: NSString; location: NSUInteger; range: nullable NSRangePointer): nullable id; message 'attribute:atIndex:effectiveRange:';
    function attributedSubstringFromRange (range: NSRange): NSAttributedString; message 'attributedSubstringFromRange:';
    function attributesAtIndex_longestEffectiveRange_inRange (location: NSUInteger; range: nullable NSRangePointer; rangeLimit: NSRange): NSDictionary; message 'attributesAtIndex:longestEffectiveRange:inRange:';
    function attribute_atIndex_longestEffectiveRange_inRange (attrName: NSString; location: NSUInteger; range: nullable NSRangePointer; rangeLimit: NSRange): nullable id; message 'attribute:atIndex:longestEffectiveRange:inRange:';
    function isEqualToAttributedString (other: NSAttributedString): boolean; message 'isEqualToAttributedString:';
    function initWithString (str: NSString): instancetype; message 'initWithString:';
    function initWithString_attributes (str: NSString; attrs: nullable NSDictionaryPtr): instancetype; message 'initWithString:attributes:';
    function initWithAttributedString (attrStr: NSAttributedString): instancetype; message 'initWithAttributedString:';
    procedure enumerateAttributesInRange_options_usingBlock (enumerationRange: NSRange; opts: NSAttributedStringEnumerationOptions; block: void (NS_NOESCAPE ^)(NSDictionary *attrs, NSRange range, BOOL *stop)); message 'enumerateAttributesInRange:options:usingBlock:'; { available in 10_6, 4_0 }
    procedure enumerateAttribute_inRange_options_usingBlock (attrName: NSString; enumerationRange: NSRange; opts: NSAttributedStringEnumerationOptions; block: void (NS_NOESCAPE ^)(id _Nullable value, NSRange range, BOOL *stop)); message 'enumerateAttribute:inRange:options:usingBlock:'; { available in 10_6, 4_0 }
  end;


type
  NSMutableAttributedString = objcclass external (NSAttributedString)
  public
    procedure replaceCharactersInRange_withString (range: NSRange; str: NSString); message 'replaceCharactersInRange:withString:';
    procedure setAttributes_range (attrs: nullable NSDictionaryPtr; range: NSRange); message 'setAttributes:range:';
  end;


type
  NSExtendedMutableAttributedString = objccategory external (NSMutableAttributedString)
    function mutableString: NSMutableString; message 'mutableString';
    procedure addAttribute_value_range (name: NSString; value: id; range: NSRange); message 'addAttribute:value:range:';
    procedure addAttributes_range (attrs: NSDictionary; range: NSRange); message 'addAttributes:range:';
    procedure removeAttribute_range (name: NSString; range: NSRange); message 'removeAttribute:range:';
    procedure replaceCharactersInRange_withAttributedString (range: NSRange; attrString: NSAttributedString); message 'replaceCharactersInRange:withAttributedString:';
    procedure insertAttributedString_atIndex (attrString: NSAttributedString; loc: NSUInteger); message 'insertAttributedString:atIndex:';
    procedure appendAttributedString (attrString: NSAttributedString); message 'appendAttributedString:';
    procedure deleteCharactersInRange (range: NSRange); message 'deleteCharactersInRange:';
    procedure setAttributedString (attrString: NSAttributedString); message 'setAttributedString:';
    procedure beginEditing; message 'beginEditing';
    procedure endEditing; message 'endEditing';
  end;
{$endif}

