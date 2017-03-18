{ Parsed from UIKit.framework UITapGestureRecognizer.h }

{$ifdef TYPES}
type
  UITapGestureRecognizerPtr = ^UITapGestureRecognizer;
{$endif}

{$ifdef CLASSES}

type
  UITapGestureRecognizer = objcclass external (UIGestureRecognizer)
  public
    procedure setNumberOfTapsRequired(newValue: NSUInteger); message 'setNumberOfTapsRequired:';
    function numberOfTapsRequired: NSUInteger; message 'numberOfTapsRequired';
    procedure set__TVOS_PROHIBITED(newValue: NSUInteger numberOfTouchesRequired); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED_: NSUInteger numberOfTouchesRequired; message 'TVOS_PROHIBITED';
  end;
{$endif}

