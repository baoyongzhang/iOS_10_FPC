{ Parsed from UIKit.framework UILabel.h }

{$ifdef TYPES}
type
  UILabelPtr = ^UILabel;
{$endif}

{$ifdef CLASSES}

type
  UILabel = objcclass external (UIView, NSCodingProtocol, UIContentSizeCategoryAdjustingProtocol)
  public
    procedure setText(newValue: NSString); message 'setText:';
    function text: NSString; message 'text';
    procedure setFont(newValue: UIFont); message 'setFont:';
    function font: UIFont; message 'font';
    procedure setTextColor(newValue: UIColor); message 'setTextColor:';
    function textColor: UIColor; message 'textColor';
    procedure setShadowColor(newValue: UIColor); message 'setShadowColor:';
    function shadowColor: UIColor; message 'shadowColor';
    procedure setShadowOffset(newValue: CGSize); message 'setShadowOffset:';
    function shadowOffset: CGSize; message 'shadowOffset';
    procedure setTextAlignment(newValue: NSTextAlignment); message 'setTextAlignment:';
    function textAlignment: NSTextAlignment; message 'textAlignment';
    procedure setLineBreakMode(newValue: NSLineBreakMode); message 'setLineBreakMode:';
    function lineBreakMode: NSLineBreakMode; message 'lineBreakMode';
    procedure setAttributedText(newValue: NSAttributedString); message 'setAttributedText:';
    function attributedText: NSAttributedString; message 'attributedText';
    procedure setHighlightedTextColor(newValue: UIColor); message 'setHighlightedTextColor:';
    function highlightedTextColor: UIColor; message 'highlightedTextColor';
    procedure setHighlighted(newValue: boolean); message 'setHighlighted:';
    function isHighlighted: boolean; message 'isHighlighted';
    procedure setUserInteractionEnabled(newValue: boolean); message 'setUserInteractionEnabled:';
    function isUserInteractionEnabled: boolean; message 'isUserInteractionEnabled';
    procedure setEnabled(newValue: boolean); message 'setEnabled:';
    function isEnabled: boolean; message 'isEnabled';
    procedure setNumberOfLines(newValue: NSInteger); message 'setNumberOfLines:';
    function numberOfLines: NSInteger; message 'numberOfLines';
    procedure setAdjustsFontSizeToFitWidth(newValue: boolean); message 'setAdjustsFontSizeToFitWidth:';
    function adjustsFontSizeToFitWidth: boolean; message 'adjustsFontSizeToFitWidth';
    procedure setBaselineAdjustment(newValue: UIBaselineAdjustment); message 'setBaselineAdjustment:';
    function baselineAdjustment: UIBaselineAdjustment; message 'baselineAdjustment';
    procedure setMinimumScaleFactor(newValue: CGFloat); message 'setMinimumScaleFactor:';
    function minimumScaleFactor: CGFloat; message 'minimumScaleFactor';
    procedure setAllowsDefaultTighteningForTruncation(newValue: boolean); message 'setAllowsDefaultTighteningForTruncation:';
    function allowsDefaultTighteningForTruncation: boolean; message 'allowsDefaultTighteningForTruncation';
    function textRectForBounds_limitedToNumberOfLines (bounds: CGRect; numberOfLines_: NSInteger): CGRect; message 'textRectForBounds:limitedToNumberOfLines:';
    procedure drawTextInRect (rect: CGRect); message 'drawTextInRect:';
    procedure setPreferredMaxLayoutWidth(newValue: CGFloat); message 'setPreferredMaxLayoutWidth:';
    function preferredMaxLayoutWidth: CGFloat; message 'preferredMaxLayoutWidth';
    procedure set__TVOS_PROHIBITED(newValue: CGFloat minimumFontSize); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED_: CGFloat minimumFontSize; message 'TVOS_PROHIBITED';
    procedure set__TVOS_PROHIBITED_(newValue: BOOL adjustsLetterSpacingToFitWidth); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED_: BOOL adjustsLetterSpacingToFitWidth; message 'TVOS_PROHIBITED';

    { Adopted protocols }
    procedure setAdjustsFontForContentSizeCategory(newValue: boolean); message 'setAdjustsFontForContentSizeCategory:';
    function adjustsFontForContentSizeCategory: boolean; message 'adjustsFontForContentSizeCategory';
  end;
{$endif}

