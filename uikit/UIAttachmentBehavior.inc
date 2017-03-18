{ Parsed from UIKit.framework UIAttachmentBehavior.h }

{$ifdef TYPES}
type
  UIAttachmentBehaviorPtr = ^UIAttachmentBehavior;
{$endif}

{$ifdef TYPES}
type
  UIAttachmentBehaviorType = NSInteger;
  UIAttachmentBehaviorTypePtr = ^UIAttachmentBehaviorType;

const
  UIAttachmentBehaviorTypeItems = 0;
  UIAttachmentBehaviorTypeAnchor = 1;

type
  UIFloatRange = record
    minimum: CGFloat;
    maximum: CGFloat;
  end;
type
  UIFloatRangePtr = ^UIFloatRange;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  UIFloatRangeZero: UIFloatRange { available in 9_0 }; cvar; external;
  UIFloatRangeInfinite: UIFloatRange { available in 9_0 }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function UIFloatRangeIsInfinite(range: UIFloatRange): boolean; cdecl; external; { available in 9_0 }
function UIFloatRangeIsEqualToRange(range: UIFloatRange; otherRange: UIFloatRange): boolean; cdecl; external; { available in 9_0 }
{$endif}

{$ifdef CLASSES}

type
  UIAttachmentBehavior = objcclass external (UIDynamicBehavior)
  public
    function initWithItem_attachedToAnchor (item: UIDynamicItemProtocol; point: CGPoint): instancetype; message 'initWithItem:attachedToAnchor:';
    function initWithItem_offsetFromCenter_attachedToAnchor (item: UIDynamicItemProtocol; offset: UIOffset; point: CGPoint): instancetype; message 'initWithItem:offsetFromCenter:attachedToAnchor:'; { NS_DESIGNATED_INITIALIZER }
    function initWithItem_attachedToItem (item1: UIDynamicItemProtocol; item2: UIDynamicItemProtocol): instancetype; message 'initWithItem:attachedToItem:';
    function initWithItem_offsetFromCenter_attachedToItem_offsetFromCenter (item1: UIDynamicItemProtocol; offset1: UIOffset; item2: UIDynamicItemProtocol; offset2: UIOffset): instancetype; message 'initWithItem:offsetFromCenter:attachedToItem:offsetFromCenter:'; { NS_DESIGNATED_INITIALIZER }
    class function slidingAttachmentWithItem_attachedToItem_attachmentAnchor_axisOfTranslation (item1: UIDynamicItemProtocol; item2: UIDynamicItemProtocol; point: CGPoint; axis: CGVector): instancetype; message 'slidingAttachmentWithItem:attachedToItem:attachmentAnchor:axisOfTranslation:'; { available in 9_0 }
    class function slidingAttachmentWithItem_attachmentAnchor_axisOfTranslation (item: UIDynamicItemProtocol; point: CGPoint; axis: CGVector): instancetype; message 'slidingAttachmentWithItem:attachmentAnchor:axisOfTranslation:'; { available in 9_0 }
    class function limitAttachmentWithItem_offsetFromCenter_attachedToItem_offsetFromCenter (item1: UIDynamicItemProtocol; offset1: UIOffset; item2: UIDynamicItemProtocol; offset2: UIOffset): instancetype; message 'limitAttachmentWithItem:offsetFromCenter:attachedToItem:offsetFromCenter:'; { available in 9_0 }
    class function fixedAttachmentWithItem_attachedToItem_attachmentAnchor (item1: UIDynamicItemProtocol; item2: UIDynamicItemProtocol; point: CGPoint): instancetype; message 'fixedAttachmentWithItem:attachedToItem:attachmentAnchor:'; { available in 9_0 }
    class function pinAttachmentWithItem_attachedToItem_attachmentAnchor (item1: UIDynamicItemProtocol; item2: UIDynamicItemProtocol; point: CGPoint): instancetype; message 'pinAttachmentWithItem:attachedToItem:attachmentAnchor:'; { available in 9_0 }
    function items: UIDynamicItemProtocolProtocolPtr; message 'items';
    function attachedBehaviorType: UIAttachmentBehaviorType; message 'attachedBehaviorType';
    procedure setAnchorPoint(newValue: CGPoint); message 'setAnchorPoint:';
    function anchorPoint: CGPoint; message 'anchorPoint';
    procedure setLength(newValue: CGFloat); message 'setLength:';
    function length: CGFloat; message 'length';
    procedure setDamping(newValue: CGFloat); message 'setDamping:';
    function damping: CGFloat; message 'damping';
    procedure setFrequency(newValue: CGFloat); message 'setFrequency:';
    function frequency: CGFloat; message 'frequency';
    procedure setFrictionTorque(newValue: CGFloat); message 'setFrictionTorque:';
    function frictionTorque: CGFloat; message 'frictionTorque';
    procedure setAttachmentRange(newValue: UIFloatRange); message 'setAttachmentRange:';
    function attachmentRange: UIFloatRange; message 'attachmentRange';
  end;
{$endif}

