{ Parsed from AVFoundation.framework AVTextStyleRule.h }

{$ifdef TYPES}
type
  AVTextStyleRulePtr = ^AVTextStyleRule;
{$endif}

{$ifdef CLASSES}

type
  AVTextStyleRule = objcclass external (NSObject, NSCopyingProtocol)
  private
    _textStyleRule: AVTextStyleRuleInternal;
  public
    class function propertyListForTextStyleRules (textStyleRules: AVTextStyleRule *ProtocolPtr): id; message 'propertyListForTextStyleRules:';
    class function textStyleRulesFromPropertyList (plist: id): nullable AVTextStyleRule *ProtocolPtr; message 'textStyleRulesFromPropertyList:';
    class function textStyleRuleWithTextMarkupAttributes (textMarkupAttributes: NSDictionary): nullable AVTextStyleRulePtr; message 'textStyleRuleWithTextMarkupAttributes:';
    class function textStyleRuleWithTextMarkupAttributes_textSelector (textMarkupAttributes: NSDictionary; textSelector: nullable NSStringPtr): nullable AVTextStyleRulePtr; message 'textStyleRuleWithTextMarkupAttributes:textSelector:';
    function initWithTextMarkupAttributes (textMarkupAttributes: NSDictionary): nullable instancetype; message 'initWithTextMarkupAttributes:';
    function initWithTextMarkupAttributes_textSelector (textMarkupAttributes: NSDictionary; textSelector: nullable NSStringPtr): nullable instancetype; message 'initWithTextMarkupAttributes:textSelector:'; { NS_DESIGNATED_INITIALIZER }
    function textMarkupAttributes: NSDictionary; message 'textMarkupAttributes';
    function textSelector: NSString; message 'textSelector';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

