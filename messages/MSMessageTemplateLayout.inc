{ Parsed from Messages.framework MSMessageTemplateLayout.h }

{$ifdef TYPES}
type
  MSMessageTemplateLayoutPtr = ^MSMessageTemplateLayout;
{$endif}

{$ifdef CLASSES}

type
  MSMessageTemplateLayout = objcclass external (MSMessageLayout)
  public
    procedure setCaption(newValue: NSString); message 'setCaption:';
    function caption: NSString; message 'caption';
    procedure setSubcaption(newValue: NSString); message 'setSubcaption:';
    function subcaption: NSString; message 'subcaption';
    procedure setTrailingCaption(newValue: NSString); message 'setTrailingCaption:';
    function trailingCaption: NSString; message 'trailingCaption';
    procedure setTrailingSubcaption(newValue: NSString); message 'setTrailingSubcaption:';
    function trailingSubcaption: NSString; message 'trailingSubcaption';
    procedure setImage(newValue: UIImage); message 'setImage:';
    function image: UIImage; message 'image';
    procedure setMediaFileURL(newValue: NSURL); message 'setMediaFileURL:';
    function mediaFileURL: NSURL; message 'mediaFileURL';
    procedure setImageTitle(newValue: NSString); message 'setImageTitle:';
    function imageTitle: NSString; message 'imageTitle';
    procedure setImageSubtitle(newValue: NSString); message 'setImageSubtitle:';
    function imageSubtitle: NSString; message 'imageSubtitle';
  end;
{$endif}

