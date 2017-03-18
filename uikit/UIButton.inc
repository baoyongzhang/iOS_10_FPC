{ Parsed from UIKit.framework UIButton.h }

{$ifdef TYPES}
type
  UIButtonPtr = ^UIButton;
{$endif}

{$ifdef TYPES}
type
  UIButtonType = NSInteger;
  UIButtonTypePtr = ^UIButtonType;

const
  UIButtonTypeCustom = 0;
  UIButtonTypeSystem = 1 { available in 7_0 };
  UIButtonTypeDetailDisclosure = 2;
  UIButtonTypeInfoLight = 3;
  UIButtonTypeInfoDark = 4;
  UIButtonTypeContactAdd = 5;
  UIButtonTypeRoundedRect = UIButtonTypeSystem;
{$endif}

{$ifdef CLASSES}

type
  UIButton = objcclass external (UIControl, NSCodingProtocol)
  public
    class function buttonWithType (buttonType: UIButtonType): instancetype; message 'buttonWithType:';
    procedure setContentEdgeInsets(newValue: UIEdgeInsets); message 'setContentEdgeInsets:';
    function contentEdgeInsets: UIEdgeInsets; message 'contentEdgeInsets';
    procedure setTitleEdgeInsets(newValue: UIEdgeInsets); message 'setTitleEdgeInsets:';
    function titleEdgeInsets: UIEdgeInsets; message 'titleEdgeInsets';
    procedure setReversesTitleShadowWhenHighlighted(newValue: boolean); message 'setReversesTitleShadowWhenHighlighted:';
    function reversesTitleShadowWhenHighlighted: boolean; message 'reversesTitleShadowWhenHighlighted';
    procedure setImageEdgeInsets(newValue: UIEdgeInsets); message 'setImageEdgeInsets:';
    function imageEdgeInsets: UIEdgeInsets; message 'imageEdgeInsets';
    procedure setAdjustsImageWhenHighlighted(newValue: boolean); message 'setAdjustsImageWhenHighlighted:';
    function adjustsImageWhenHighlighted: boolean; message 'adjustsImageWhenHighlighted';
    procedure setAdjustsImageWhenDisabled(newValue: boolean); message 'setAdjustsImageWhenDisabled:';
    function adjustsImageWhenDisabled: boolean; message 'adjustsImageWhenDisabled';
    procedure set__TVOS_PROHIBITED(newValue: BOOL showsTouchWhenHighlighted); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED_: BOOL showsTouchWhenHighlighted; message 'TVOS_PROHIBITED';
    procedure setTintColor(newValue: UIColor); message 'setTintColor:';
    function tintColor: UIColor; message 'tintColor';
    function buttonType: UIButtonType; message 'buttonType';
    procedure setTitle_forState (title: nullable NSStringPtr; state_: UIControlState); message 'setTitle:forState:';
    procedure setTitleColor_forState (color: nullable UIColorPtr; state_: UIControlState); message 'setTitleColor:forState:';
    procedure setTitleShadowColor_forState (color: nullable UIColorPtr; state_: UIControlState); message 'setTitleShadowColor:forState:';
    procedure setImage_forState (image: nullable UIImagePtr; state_: UIControlState); message 'setImage:forState:';
    procedure setBackgroundImage_forState (image: nullable UIImagePtr; state_: UIControlState); message 'setBackgroundImage:forState:';
    procedure setAttributedTitle_forState (title: nullable NSAttributedStringPtr; state_: UIControlState); message 'setAttributedTitle:forState:'; { available in 6_0 }
    function titleForState (state_: UIControlState): nullable NSStringPtr; message 'titleForState:';
    function titleColorForState (state_: UIControlState): nullable UIColorPtr; message 'titleColorForState:';
    function titleShadowColorForState (state_: UIControlState): nullable UIColorPtr; message 'titleShadowColorForState:';
    function imageForState (state_: UIControlState): nullable UIImagePtr; message 'imageForState:';
    function backgroundImageForState (state_: UIControlState): nullable UIImagePtr; message 'backgroundImageForState:';
    function attributedTitleForState (state_: UIControlState): nullable NSAttributedStringPtr; message 'attributedTitleForState:'; { available in 6_0 }
    function currentTitle: NSString; message 'currentTitle';
    function currentTitleColor: UIColor; message 'currentTitleColor';
    function currentTitleShadowColor: UIColor; message 'currentTitleShadowColor';
    function currentImage: UIImage; message 'currentImage';
    function currentBackgroundImage: UIImage; message 'currentBackgroundImage';
    function currentAttributedTitle: NSAttributedString; message 'currentAttributedTitle';
    function titleLabel: UILabel; message 'titleLabel';
    function imageView: UIImageView; message 'imageView';
    function backgroundRectForBounds (bounds: CGRect): CGRect; message 'backgroundRectForBounds:';
    function contentRectForBounds (bounds: CGRect): CGRect; message 'contentRectForBounds:';
    function titleRectForContentRect (contentRect: CGRect): CGRect; message 'titleRectForContentRect:';
    function imageRectForContentRect (contentRect: CGRect): CGRect; message 'imageRectForContentRect:';
  end;


type
  UIButtonDeprecated = objccategory external (UIButton)
    procedure set__TVOS_PROHIBITED(newValue: UIFont *font); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED_: UIFont *font; message 'TVOS_PROHIBITED';
    procedure set__TVOS_PROHIBITED_(newValue: NSLineBreakMode lineBreakMode); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED_: NSLineBreakMode lineBreakMode; message 'TVOS_PROHIBITED';
    procedure set__TVOS_PROHIBITED__(newValue: CGSize titleShadowOffset); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED__: CGSize titleShadowOffset; message 'TVOS_PROHIBITED';
  end;
{$endif}

