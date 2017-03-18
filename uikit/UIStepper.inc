{ Parsed from UIKit.framework UIStepper.h }

{$ifdef TYPES}
type
  UIStepperPtr = ^UIStepper;
{$endif}

{$ifdef CLASSES}

type
  UIStepper = objcclass external (UIControl)
  public
    procedure setContinuous(newValue: boolean); message 'setContinuous:';
    function isContinuous: boolean; message 'isContinuous';
    procedure setAutorepeat(newValue: boolean); message 'setAutorepeat:';
    function autorepeat: boolean; message 'autorepeat';
    procedure setWraps(newValue: boolean); message 'setWraps:';
    function wraps: boolean; message 'wraps';
    procedure setValue(newValue: double); message 'setValue:';
    function value: double; message 'value';
    procedure setMinimumValue(newValue: double); message 'setMinimumValue:';
    function minimumValue: double; message 'minimumValue';
    procedure setMaximumValue(newValue: double); message 'setMaximumValue:';
    function maximumValue: double; message 'maximumValue';
    procedure setStepValue(newValue: double); message 'setStepValue:';
    function stepValue: double; message 'stepValue';
    procedure setTintColor(newValue: UIColor); message 'setTintColor:';
    function tintColor: UIColor; message 'tintColor';
    procedure setBackgroundImage_forState (image: nullable UIImagePtr; state_: UIControlState); message 'setBackgroundImage:forState:'; { available in 6_0 }
    function backgroundImageForState (state_: UIControlState): nullable UIImagePtr; message 'backgroundImageForState:'; { available in 6_0 }
    procedure setDividerImage_forLeftSegmentState_rightSegmentState (image: nullable UIImagePtr; leftState: UIControlState; rightState: UIControlState); message 'setDividerImage:forLeftSegmentState:rightSegmentState:'; { available in 6_0 }
    function dividerImageForLeftSegmentState_rightSegmentState (state_: UIControlState; state2: UIControlState): nullable UIImagePtr; message 'dividerImageForLeftSegmentState:rightSegmentState:'; { available in 6_0 }
    procedure setIncrementImage_forState (image: nullable UIImagePtr; state_: UIControlState); message 'setIncrementImage:forState:'; { available in 6_0 }
    function incrementImageForState (state_: UIControlState): nullable UIImagePtr; message 'incrementImageForState:'; { available in 6_0 }
    procedure setDecrementImage_forState (image: nullable UIImagePtr; state_: UIControlState); message 'setDecrementImage:forState:'; { available in 6_0 }
    function decrementImageForState (state_: UIControlState): nullable UIImagePtr; message 'decrementImageForState:'; { available in 6_0 }
  end;
{$endif}

