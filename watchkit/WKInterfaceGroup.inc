{ Parsed from WatchKit.framework WKInterfaceGroup.h }

{$ifdef TYPES}
type
  WKInterfaceGroupPtr = ^WKInterfaceGroup;
{$endif}

{$ifdef CLASSES}

type
  WKInterfaceGroup = objcclass external (WKInterfaceObject, WKImageAnimatableProtocol)
  public
    procedure setCornerRadius (cornerRadius: CGFloat); message 'setCornerRadius:';
    procedure setContentInset (contentInset: UIEdgeInsets); message 'setContentInset:'; { available in 2.0 }
    procedure setBackgroundColor (color: nullable UIColorPtr); message 'setBackgroundColor:';
    procedure setBackgroundImage (image: nullable UIImagePtr); message 'setBackgroundImage:';
    procedure setBackgroundImageData (imageData: nullable NSDataPtr); message 'setBackgroundImageData:';
    procedure setBackgroundImageNamed (imageName: nullable NSStringPtr); message 'setBackgroundImageNamed:';

    { Adopted protocols }
    procedure startAnimating; message 'startAnimating';
    procedure startAnimatingWithImagesInRange_duration_repeatCount (imageRange: NSRange; duration: NSTimeInterval; repeatCount: NSInteger); message 'startAnimatingWithImagesInRange:duration:repeatCount:';
    procedure stopAnimating; message 'stopAnimating';
  end;
{$endif}

