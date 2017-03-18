{ Parsed from UIKit.framework UIStoryboardPopoverSegue.h }

{$ifdef TYPES}
type
  UIStoryboardPopoverSeguePtr = ^UIStoryboardPopoverSegue;
{$endif}

{$ifdef CLASSES}

type
  UIStoryboardPopoverSegue = objcclass external (UIStoryboardSegue)
  private
  public
    function popoverController: UIPopoverController; message 'popoverController';
  end;
{$endif}

