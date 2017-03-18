{ Parsed from Messages.framework MSStickerView.h }

{$ifdef TYPES}
type
  MSStickerViewPtr = ^MSStickerView;
{$endif}

{$ifdef CLASSES}

type
  MSStickerView = objcclass external (UIView)
  public
    function initWithFrame_sticker (frame: CGRect; sticker: nullable MSStickerPtr): instancetype; message 'initWithFrame:sticker:';
    procedure setSticker(newValue: MSSticker); message 'setSticker:';
    function sticker: MSSticker; message 'sticker';
    function animationDuration: NSTimeInterval; message 'animationDuration';
    procedure startAnimating; message 'startAnimating';
    procedure stopAnimating; message 'stopAnimating';
    function isAnimating: boolean; message 'isAnimating';
  end;
{$endif}

