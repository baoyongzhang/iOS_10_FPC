{ Parsed from UIKit.framework UIImageView.h }

{ Types from UIImageView }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  UIImageViewPtr = ^UIImageView;
{$endif}

{$ifdef CLASSES}

type
  UIImageView = objcclass external (UIView)
  public
    function initWithImage (image: nullable UIImagePtr): instancetype; message 'initWithImage:';
    function initWithImage_highlightedImage (image: nullable UIImagePtr; highlightedImage: nullable UIImagePtr): instancetype; message 'initWithImage:highlightedImage:'; { available in 3_0 }
    procedure setImage(newValue: UIImage); message 'setImage:';
    function image: UIImage; message 'image';
    procedure setHighlightedImage(newValue: UIImage); message 'setHighlightedImage:';
    function highlightedImage: UIImage; message 'highlightedImage';
    procedure setUserInteractionEnabled(newValue: boolean); message 'setUserInteractionEnabled:';
    function isUserInteractionEnabled: boolean; message 'isUserInteractionEnabled';
    procedure setHighlighted(newValue: boolean); message 'setHighlighted:';
    function isHighlighted: boolean; message 'isHighlighted';
    procedure setAnimationImages(newValue: UIImage *ProtocolPtr); message 'setAnimationImages:';
    function animationImages: UIImage *ProtocolPtr; message 'animationImages';
    procedure setHighlightedAnimationImages(newValue: UIImage *ProtocolPtr); message 'setHighlightedAnimationImages:';
    function highlightedAnimationImages: UIImage *ProtocolPtr; message 'highlightedAnimationImages';
    procedure setAnimationDuration(newValue: NSTimeInterval); message 'setAnimationDuration:';
    function animationDuration: NSTimeInterval; message 'animationDuration';
    procedure setAnimationRepeatCount(newValue: NSInteger); message 'setAnimationRepeatCount:';
    function animationRepeatCount: NSInteger; message 'animationRepeatCount';
    procedure setTintColor(newValue: UIColor); message 'setTintColor:';
    function tintColor: UIColor; message 'tintColor';
    procedure startAnimating; message 'startAnimating';
    procedure stopAnimating; message 'stopAnimating';
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function isAnimating: boolean; message 'isAnimating';
    {$else}
    function isAnimating: boolean; message 'isAnimating';
    {$endif}
    procedure setAdjustsImageWhenAncestorFocused(newValue: boolean); message 'setAdjustsImageWhenAncestorFocused:';
    function adjustsImageWhenAncestorFocused: boolean; message 'adjustsImageWhenAncestorFocused';
    function focusedFrameGuide: UILayoutGuide; message 'focusedFrameGuide';
  end;
{$endif}

