{ Parsed from UIKit.framework UIScreenMode.h }

{$ifdef TYPES}
type
  UIScreenModePtr = ^UIScreenMode;
{$endif}

{$ifdef CLASSES}

type
  UIScreenMode = objcclass external (NSObject)
  public
    function size: CGSize; message 'size';
    function pixelAspectRatio: CGFloat; message 'pixelAspectRatio';
  end;
{$endif}

