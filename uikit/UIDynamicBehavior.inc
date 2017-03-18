{ Parsed from UIKit.framework UIDynamicBehavior.h }

{$ifdef TYPES}
type
  UIDynamicItemGroupPtr = ^UIDynamicItemGroup;
  UIDynamicBehaviorPtr = ^UIDynamicBehavior;
  UIDynamicItemProtocolPtr = ^UIDynamicItemProtocol;
{$endif}

{$ifdef TYPES}
type
  UIDynamicItemCollisionBoundsType = NSUInteger;
  UIDynamicItemCollisionBoundsTypePtr = ^UIDynamicItemCollisionBoundsType;

const
  UIDynamicItemCollisionBoundsTypeRectangle = 0;
  UIDynamicItemCollisionBoundsTypeEllipse = 1;
  UIDynamicItemCollisionBoundsTypePath = 2;
{$endif}

{$ifdef PROTOCOLS}

type
  UIDynamicItemProtocol = objcprotocol external name 'UIDynamicItem' (NSObjectProtocol)
    procedure setCenter(newValue: CGPoint); message 'setCenter:';
    function center: CGPoint; message 'center';
    function bounds: CGRect; message 'bounds';
    procedure setTransform(newValue: CGAffineTransform); message 'setTransform:';
    function transform: CGAffineTransform; message 'transform';
  optional
    function collisionBoundsType: UIDynamicItemCollisionBoundsType; message 'collisionBoundsType';
    function collisionBoundingPath: UIBezierPath; message 'collisionBoundingPath';
  end;
{$endif}

{$ifdef CLASSES}

type
  UIDynamicItemGroup = objcclass external (NSObject, UIDynamicItemProtocol)
  public
    function initWithItems (items: id <UIDynamicItemProtocol>Ptr): instancetype; message 'initWithItems:';
    function items: UIDynamicItemProtocolProtocolPtr; message 'items';

    { Adopted protocols }
    function bounds: CGRect; message 'bounds';
    procedure setCenter(newValue: CGPoint); message 'setCenter:';
    function center: CGPoint; message 'center';
    function collisionBoundingPath: UIBezierPath; message 'collisionBoundingPath';
    function collisionBoundsType: UIDynamicItemCollisionBoundsType; message 'collisionBoundsType';
    procedure setTransform(newValue: CGAffineTransform); message 'setTransform:';
    function transform: CGAffineTransform; message 'transform';
  end;

type
  UIDynamicBehavior = objcclass external (NSObject)
  public
    procedure addChildBehavior (behavior: UIDynamicBehavior); message 'addChildBehavior:';
    procedure removeChildBehavior (behavior: UIDynamicBehavior); message 'removeChildBehavior:';
    function childBehaviors: __kindof UIDynamicBehavior *ProtocolPtr; message 'childBehaviors';
    procedure setAction(newValue: OpaqueCBlock); message 'setAction:';
    function action: OpaqueCBlock; message 'action';
    procedure willMoveToAnimator (dynamicAnimator: nullable UIDynamicAnimatorPtr); message 'willMoveToAnimator:';
    function dynamicAnimator: UIDynamicAnimator; message 'dynamicAnimator';
  end;
{$endif}

