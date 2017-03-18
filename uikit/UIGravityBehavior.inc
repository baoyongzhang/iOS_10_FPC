{ Parsed from UIKit.framework UIGravityBehavior.h }

{$ifdef TYPES}
type
  UIGravityBehaviorPtr = ^UIGravityBehavior;
{$endif}

{$ifdef CLASSES}

type
  UIGravityBehavior = objcclass external (UIDynamicBehavior)
  public
    function initWithItems (items: id <UIDynamicItemProtocol>Ptr): instancetype; message 'initWithItems:'; { NS_DESIGNATED_INITIALIZER }
    procedure addItem (item: UIDynamicItemProtocol); message 'addItem:';
    procedure removeItem (item: UIDynamicItemProtocol); message 'removeItem:';
    function items: UIDynamicItemProtocolProtocolPtr; message 'items';
    procedure setGravityDirection(newValue: CGVector); message 'setGravityDirection:';
    function gravityDirection: CGVector; message 'gravityDirection';
    procedure setAngle(newValue: CGFloat); message 'setAngle:';
    function angle: CGFloat; message 'angle';
    procedure setMagnitude(newValue: CGFloat); message 'setMagnitude:';
    function magnitude: CGFloat; message 'magnitude';
    procedure setAngle_magnitude (angle_: CGFloat; magnitude_: CGFloat); message 'setAngle:magnitude:';
  end;
{$endif}

