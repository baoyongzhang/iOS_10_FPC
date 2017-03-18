{ Parsed from UIKit.framework UIDynamicItemBehavior.h }

{$ifdef TYPES}
type
  UIDynamicItemBehaviorPtr = ^UIDynamicItemBehavior;
{$endif}

{$ifdef CLASSES}

type
  UIDynamicItemBehavior = objcclass external (UIDynamicBehavior)
  public
    function initWithItems (items: id <UIDynamicItemProtocol>Ptr): instancetype; message 'initWithItems:'; { NS_DESIGNATED_INITIALIZER }
    procedure addItem (item: UIDynamicItemProtocol); message 'addItem:';
    procedure removeItem (item: UIDynamicItemProtocol); message 'removeItem:';
    function items: UIDynamicItemProtocolProtocolPtr; message 'items';
    procedure setElasticity(newValue: CGFloat); message 'setElasticity:';
    function elasticity: CGFloat; message 'elasticity';
    procedure setFriction(newValue: CGFloat); message 'setFriction:';
    function friction: CGFloat; message 'friction';
    procedure setDensity(newValue: CGFloat); message 'setDensity:';
    function density: CGFloat; message 'density';
    procedure setResistance(newValue: CGFloat); message 'setResistance:';
    function resistance: CGFloat; message 'resistance';
    procedure setAngularResistance(newValue: CGFloat); message 'setAngularResistance:';
    function angularResistance: CGFloat; message 'angularResistance';
    procedure setCharge(newValue: CGFloat); message 'setCharge:';
    function charge: CGFloat; message 'charge';
    procedure setAnchored(newValue: boolean); message 'setAnchored:';
    function isAnchored: boolean; message 'isAnchored';
    procedure setAllowsRotation(newValue: boolean); message 'setAllowsRotation:';
    function allowsRotation: boolean; message 'allowsRotation';
    procedure addLinearVelocity_forItem (velocity: CGPoint; item: UIDynamicItemProtocol); message 'addLinearVelocity:forItem:';
    function linearVelocityForItem (item: UIDynamicItemProtocol): CGPoint; message 'linearVelocityForItem:';
    procedure addAngularVelocity_forItem (velocity: CGFloat; item: UIDynamicItemProtocol); message 'addAngularVelocity:forItem:';
    function angularVelocityForItem (item: UIDynamicItemProtocol): CGFloat; message 'angularVelocityForItem:';
  end;
{$endif}

