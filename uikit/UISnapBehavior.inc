{ Parsed from UIKit.framework UISnapBehavior.h }

{$ifdef TYPES}
type
  UISnapBehaviorPtr = ^UISnapBehavior;
{$endif}

{$ifdef CLASSES}

type
  UISnapBehavior = objcclass external (UIDynamicBehavior)
  public
    function initWithItem_snapToPoint (item: UIDynamicItemProtocol; point: CGPoint): instancetype; message 'initWithItem:snapToPoint:'; { NS_DESIGNATED_INITIALIZER }
    procedure setSnapPoint(newValue: CGPoint); message 'setSnapPoint:';
    function snapPoint: CGPoint; message 'snapPoint';
    procedure setDamping(newValue: CGFloat); message 'setDamping:';
    function damping: CGFloat; message 'damping';
  end;
{$endif}

