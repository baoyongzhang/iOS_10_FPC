{ Parsed from WatchKit.framework WKInterfaceImage.h }

{$ifdef TYPES}
type
  WKInterfaceImagePtr = ^WKInterfaceImage;
  WKImageAnimatableProtocolPtr = ^WKImageAnimatableProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  WKImageAnimatableProtocol = objcprotocol external name 'WKImageAnimatable' (NSObjectProtocol)
    procedure startAnimating; message 'startAnimating';
    procedure startAnimatingWithImagesInRange_duration_repeatCount (imageRange: NSRange; duration: NSTimeInterval; repeatCount: NSInteger); message 'startAnimatingWithImagesInRange:duration:repeatCount:';
    procedure stopAnimating; message 'stopAnimating';
  end;
{$endif}

{$ifdef CLASSES}

type
  WKInterfaceImage = objcclass external (WKInterfaceObject, WKImageAnimatableProtocol)
  public
    procedure setImage (image: nullable UIImagePtr); message 'setImage:';
    procedure setImageData (imageData: nullable NSDataPtr); message 'setImageData:';
    procedure setImageNamed (imageName: nullable NSStringPtr); message 'setImageNamed:';
    procedure setTintColor (tintColor: nullable UIColorPtr); message 'setTintColor:';

    { Adopted protocols }
    procedure startAnimating; message 'startAnimating';
    procedure startAnimatingWithImagesInRange_duration_repeatCount (imageRange: NSRange; duration: NSTimeInterval; repeatCount: NSInteger); message 'startAnimatingWithImagesInRange:duration:repeatCount:';
    procedure stopAnimating; message 'stopAnimating';
  end;
{$endif}

