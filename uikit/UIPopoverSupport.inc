{ Parsed from UIKit.framework UIPopoverSupport.h }
{$ifdef TYPES}
type
  UIPopoverArrowDirection = NSUInteger;
  UIPopoverArrowDirectionPtr = ^UIPopoverArrowDirection;

const
  UIPopoverArrowDirectionUp = 1 shl 0;
  UIPopoverArrowDirectionDown = 1 shl 1;
  UIPopoverArrowDirectionLeft = 1 shl 2;
  UIPopoverArrowDirectionRight = 1 shl 3;
  UIPopoverArrowDirectionAny = UIPopoverArrowDirectionUp + UIPopoverArrowDirectionDown + UIPopoverArrowDirectionLeft + UIPopoverArrowDirectionRight;
  UIPopoverArrowDirectionUnknown = ULONG_MAX;
{$endif}

{$ifdef CLASSES}

type
  UIViewController_UIPopoverController = objccategory external name 'UIPopoverController' (UIViewController)
    procedure setModalInPopover(newValue: boolean); message 'setModalInPopover:';
    function isModalInPopover: boolean; message 'isModalInPopover';
    procedure set__TVOS_PROHIBITED(newValue: CGSize contentSizeForViewInPopover); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED_: CGSize contentSizeForViewInPopover; message 'TVOS_PROHIBITED';
  end;
{$endif}

