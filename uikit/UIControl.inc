{ Parsed from UIKit.framework UIControl.h }

{ Types from UIControl }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  UIControlPtr = ^UIControl;
{$endif}

{$ifdef TYPES}
type
  UIControlEvents = NSUInteger;
  UIControlEventsPtr = ^UIControlEvents;

const
  UIControlEventTouchDown = 1 shl 0;
  UIControlEventTouchDownRepeat = 1 shl 1;
  UIControlEventTouchDragInside = 1 shl 2;
  UIControlEventTouchDragOutside = 1 shl 3;
  UIControlEventTouchDragEnter = 1 shl 4;
  UIControlEventTouchDragExit = 1 shl 5;
  UIControlEventTouchUpInside = 1 shl 6;
  UIControlEventTouchUpOutside = 1 shl 7;
  UIControlEventTouchCancel = 1 shl 8;
  UIControlEventValueChanged = 1 shl 12;
  UIControlEventPrimaryActionTriggered = 1 shl 13 { available in 9_0 };
  UIControlEventEditingDidBegin = 1 shl 16;
  UIControlEventEditingChanged = 1 shl 17;
  UIControlEventEditingDidEnd = 1 shl 18;
  UIControlEventEditingDidEndOnExit = 1 shl 19;
  UIControlEventAllTouchEvents = $00000FFF;
  UIControlEventAllEditingEvents = $000F0000;
  UIControlEventApplicationReserved = $0F000000;
  UIControlEventSystemReserved = $F0000000;
  UIControlEventAllEvents = $FFFFFFFF;

type
  UIControlContentVerticalAlignment = NSInteger;
  UIControlContentVerticalAlignmentPtr = ^UIControlContentVerticalAlignment;

const
  UIControlContentVerticalAlignmentCenter = 0;
  UIControlContentVerticalAlignmentTop = 1;
  UIControlContentVerticalAlignmentBottom = 2;
  UIControlContentVerticalAlignmentFill = 3;

type
  UIControlContentHorizontalAlignment = NSInteger;
  UIControlContentHorizontalAlignmentPtr = ^UIControlContentHorizontalAlignment;

const
  UIControlContentHorizontalAlignmentCenter = 0;
  UIControlContentHorizontalAlignmentLeft = 1;
  UIControlContentHorizontalAlignmentRight = 2;
  UIControlContentHorizontalAlignmentFill = 3;

type
  UIControlState = NSUInteger;
  UIControlStatePtr = ^UIControlState;

const
  UIControlStateNormal = 0;
  UIControlStateHighlighted = 1 shl 0;
  UIControlStateDisabled = 1 shl 1;
  UIControlStateSelected = 1 shl 2;
  UIControlStateFocused = 1 shl 3 { available in 9_0 };
  UIControlStateApplication = $00FF0000;
  UIControlStateReserved = $FF000000;
{$endif}

{$ifdef CLASSES}

type
  UIControl = objcclass external (UIView)
  public
    procedure setEnabled(newValue: boolean); message 'setEnabled:';
    function isEnabled: boolean; message 'isEnabled';
    procedure setSelected(newValue: boolean); message 'setSelected:';
    function isSelected: boolean; message 'isSelected';
    procedure setHighlighted(newValue: boolean); message 'setHighlighted:';
    function isHighlighted: boolean; message 'isHighlighted';
    procedure setContentVerticalAlignment(newValue: UIControlContentVerticalAlignment); message 'setContentVerticalAlignment:';
    function contentVerticalAlignment: UIControlContentVerticalAlignment; message 'contentVerticalAlignment';
    procedure setContentHorizontalAlignment(newValue: UIControlContentHorizontalAlignment); message 'setContentHorizontalAlignment:';
    function contentHorizontalAlignment: UIControlContentHorizontalAlignment; message 'contentHorizontalAlignment';
    function state: UIControlState; message 'state';
    function isTracking: boolean; message 'isTracking';
    function isTouchInside: boolean; message 'isTouchInside';
    function beginTrackingWithTouch_withEvent (touch: UITouch; event: nullable UIEventPtr): boolean; message 'beginTrackingWithTouch:withEvent:';
    function continueTrackingWithTouch_withEvent (touch: UITouch; event: nullable UIEventPtr): boolean; message 'continueTrackingWithTouch:withEvent:';
    procedure endTrackingWithTouch_withEvent (touch: nullable UITouchPtr; event: nullable UIEventPtr); message 'endTrackingWithTouch:withEvent:';
    procedure cancelTrackingWithEvent (event: nullable UIEventPtr); message 'cancelTrackingWithEvent:';
    procedure addTarget_action_forControlEvents (target: nullable id; action: SEL; controlEvents: UIControlEvents); message 'addTarget:action:forControlEvents:';
    procedure removeTarget_action_forControlEvents (target: nullable id; action: nullable SEL; controlEvents: UIControlEvents); message 'removeTarget:action:forControlEvents:';
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function allTargets: NSSet; message 'allTargets';
    function allControlEvents: UIControlEvents; message 'allControlEvents';
    {$else}
    function allTargets: NSSet; message 'allTargets';
    function allControlEvents: UIControlEvents; message 'allControlEvents';
    {$endif}
    function actionsForTarget_forControlEvent (target: nullable id; controlEvent: UIControlEvents): nullable NSString *ProtocolPtr; message 'actionsForTarget:forControlEvent:';
    procedure sendAction_to_forEvent (action: SEL; target: nullable id; event: nullable UIEventPtr); message 'sendAction:to:forEvent:';
    procedure sendActionsForControlEvents (controlEvents: UIControlEvents); message 'sendActionsForControlEvents:';
  end;
{$endif}

