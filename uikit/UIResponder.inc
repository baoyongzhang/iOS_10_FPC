{ Parsed from UIKit.framework UIResponder.h }

{ Types from UIResponder }
{$ifdef TYPES}




{$endif}


{$ifdef TYPES}
type
  UIResponderPtr = ^UIResponder;
  UIKeyCommandPtr = ^UIKeyCommand;
  UIResponderStandardEditActionsProtocolPtr = ^UIResponderStandardEditActionsProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  UIResponderStandardEditActionsProtocol = objcprotocol external name 'UIResponderStandardEditActions' (NSObjectProtocol)
  optional
    procedure cut (sender: id); message 'cut:'; { available in 3_0 }
    procedure copy (sender: id); message 'copy:'; { available in 3_0 }
    procedure paste (sender: id); message 'paste:'; { available in 3_0 }
    procedure select (sender: id); message 'select:'; { available in 3_0 }
    procedure selectAll (sender: id); message 'selectAll:'; { available in 3_0 }
    procedure delete (sender: id); message 'delete:'; { available in 3_2 }
    procedure makeTextWritingDirectionLeftToRight (sender: id); message 'makeTextWritingDirectionLeftToRight:'; { available in 5_0 }
    procedure makeTextWritingDirectionRightToLeft (sender: id); message 'makeTextWritingDirectionRightToLeft:'; { available in 5_0 }
    procedure toggleBoldface (sender: id); message 'toggleBoldface:'; { available in 6_0 }
    procedure toggleItalics (sender: id); message 'toggleItalics:'; { available in 6_0 }
    procedure toggleUnderline (sender: id); message 'toggleUnderline:'; { available in 6_0 }
    procedure increaseSize (sender: id); message 'increaseSize:'; { available in 7_0 }
    procedure decreaseSize (sender: id); message 'decreaseSize:'; { available in 7_0 }
  end;
{$endif}

{$ifdef CLASSES}

type
  UIResponder = objcclass external (NSObject, UIResponderStandardEditActionsProtocol)
  public
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function nextResponder: UIResponder; message 'nextResponder';
    {$else}
    function nextResponder: UIResponderPtr; message 'nextResponder';
    {$endif}
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function canBecomeFirstResponder: boolean; message 'canBecomeFirstResponder';
    {$else}
    function canBecomeFirstResponder: boolean; message 'canBecomeFirstResponder';
    {$endif}
    function becomeFirstResponder: boolean; message 'becomeFirstResponder';
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function canResignFirstResponder: boolean; message 'canResignFirstResponder';
    {$else}
    function canResignFirstResponder: boolean; message 'canResignFirstResponder';
    {$endif}
    function resignFirstResponder: boolean; message 'resignFirstResponder';
    {$if defined(UIKIT_DEFINE_AS_PROPERTIES)}
    function isFirstResponder: boolean; message 'isFirstResponder';
    {$else}
    function isFirstResponder: boolean; message 'isFirstResponder';
    {$endif}
    procedure touchesBegan_withEvent (touches: UITouch; event: UIEventPtr); message 'touchesBegan:withEvent:';
    procedure touchesMoved_withEvent (touches: UITouch; event: UIEventPtr); message 'touchesMoved:withEvent:';
    procedure touchesEnded_withEvent (touches: UITouch; event: UIEventPtr); message 'touchesEnded:withEvent:';
    procedure touchesCancelled_withEvent (touches: UITouch; event: UIEventPtr); message 'touchesCancelled:withEvent:';
    procedure touchesEstimatedPropertiesUpdated (touches: UITouch); message 'touchesEstimatedPropertiesUpdated:'; { available in 9_1 }
    procedure pressesBegan_withEvent (presses: UIPress; event: UIPressesEventPtr); message 'pressesBegan:withEvent:'; { available in 9_0 }
    procedure pressesChanged_withEvent (presses: UIPress; event: UIPressesEventPtr); message 'pressesChanged:withEvent:'; { available in 9_0 }
    procedure pressesEnded_withEvent (presses: UIPress; event: UIPressesEventPtr); message 'pressesEnded:withEvent:'; { available in 9_0 }
    procedure pressesCancelled_withEvent (presses: UIPress; event: UIPressesEventPtr); message 'pressesCancelled:withEvent:'; { available in 9_0 }
    procedure motionBegan_withEvent (motion_: UIEventSubtype; event: UIEventPtr); message 'motionBegan:withEvent:'; { available in 3_0 }
    procedure motionEnded_withEvent (motion_: UIEventSubtype; event: UIEventPtr); message 'motionEnded:withEvent:'; { available in 3_0 }
    procedure motionCancelled_withEvent (motion_: UIEventSubtype; event: UIEventPtr); message 'motionCancelled:withEvent:'; { available in 3_0 }
    procedure remoteControlReceivedWithEvent (event: UIEventPtr); message 'remoteControlReceivedWithEvent:'; { available in 4_0 }
    function canPerformAction_withSender (action: SEL; sender: id): boolean; message 'canPerformAction:withSender:'; { available in 3_0 }
    function targetForAction_withSender (action: SEL; sender: id): id; message 'targetForAction:withSender:'; { available in 7_0 }
    function undoManager: NSUndoManager; message 'undoManager';

    { Adopted protocols }
    procedure copy (sender: id); message 'copy:'; { available in 3_0 }
    procedure cut (sender: id); message 'cut:'; { available in 3_0 }
    procedure decreaseSize (sender: id); message 'decreaseSize:'; { available in 7_0 }
    procedure delete (sender: id); message 'delete:'; { available in 3_2 }
    procedure increaseSize (sender: id); message 'increaseSize:'; { available in 7_0 }
    procedure makeTextWritingDirectionLeftToRight (sender: id); message 'makeTextWritingDirectionLeftToRight:'; { available in 5_0 }
    procedure makeTextWritingDirectionRightToLeft (sender: id); message 'makeTextWritingDirectionRightToLeft:'; { available in 5_0 }
    procedure paste (sender: id); message 'paste:'; { available in 3_0 }
    procedure select (sender: id); message 'select:'; { available in 3_0 }
    procedure selectAll (sender: id); message 'selectAll:'; { available in 3_0 }
    procedure toggleBoldface (sender: id); message 'toggleBoldface:'; { available in 6_0 }
    procedure toggleItalics (sender: id); message 'toggleItalics:'; { available in 6_0 }
    procedure toggleUnderline (sender: id); message 'toggleUnderline:'; { available in 6_0 }
  end;
{$endif}

{$ifdef TYPES}
type
  UIKeyModifierFlags = NSInteger;
  UIKeyModifierFlagsPtr = ^UIKeyModifierFlags;

const
  UIKeyModifierAlphaShift = 1 shl 16;
  UIKeyModifierShift = 1 shl 17;
  UIKeyModifierControl = 1 shl 18;
  UIKeyModifierAlternate = 1 shl 19;
  UIKeyModifierCommand = 1 shl 20;
  UIKeyModifierNumericPad = 1 shl 21;
{$endif}

{$ifdef CLASSES}

type
  UIKeyCommand = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (aDecoder: NSCoder): instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function input: NSString; message 'input';
    function modifierFlags: UIKeyModifierFlags; message 'modifierFlags';
    procedure setDiscoverabilityTitle(newValue: NSString); message 'setDiscoverabilityTitle:';
    function discoverabilityTitle: NSString; message 'discoverabilityTitle';
    class function keyCommandWithInput_modifierFlags_action (input_: NSString; modifierFlags_: UIKeyModifierFlags; action: SEL): UIKeyCommand; message 'keyCommandWithInput:modifierFlags:action:';
    class function keyCommandWithInput_modifierFlags_action_discoverabilityTitle (input_: NSString; modifierFlags_: UIKeyModifierFlags; action: SEL; discoverabilityTitle_: NSString): UIKeyCommand; message 'keyCommandWithInput:modifierFlags:action:discoverabilityTitle:'; { available in 9_0 }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;


type
  UIResponderKeyCommands = objccategory external (UIResponder)
    function keyCommands: UIKeyCommand *ProtocolPtr; message 'keyCommands';
  end;

type
  UIResponderInputViewAdditions = objccategory external (UIResponder)
    function inputView: __kindof UIViewPtr; message 'inputView';
    function inputAccessoryView: __kindof UIViewPtr; message 'inputAccessoryView';
    function __WATCHOS_PROHIBITED_: UITextInputAssistantItem *inputAssistantItem __TVOS_PROHIBITED; message 'WATCHOS_PROHIBITED';
    function inputViewController: UIInputViewController; message 'inputViewController';
    function inputAccessoryViewController: UIInputViewController; message 'inputAccessoryViewController';
    function textInputMode: UITextInputMode; message 'textInputMode';
    function textInputContextIdentifier: NSString; message 'textInputContextIdentifier';
    class procedure clearTextInputContextIdentifier (identifier: NSString); message 'clearTextInputContextIdentifier:'; { available in 7_0 }
    procedure reloadInputViews; message 'reloadInputViews'; { available in 3_2 }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  UIKeyInputUpArrow: NSString { available in 7_0 }; cvar; external;
  UIKeyInputDownArrow: NSString { available in 7_0 }; cvar; external;
  UIKeyInputLeftArrow: NSString { available in 7_0 }; cvar; external;
  UIKeyInputRightArrow: NSString { available in 7_0 }; cvar; external;
  UIKeyInputEscape: NSString { available in 7_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  UIResponder_ActivityContinuation = objccategory external name 'ActivityContinuation' (UIResponder)
    procedure setUserActivity(newValue: NSUserActivity); message 'setUserActivity:';
    function userActivity: NSUserActivity; message 'userActivity';
    procedure updateUserActivityState (activity: NSUserActivity); message 'updateUserActivityState:'; { available in 8_0 }
    procedure restoreUserActivityState (activity: NSUserActivity); message 'restoreUserActivityState:'; { available in 8_0 }
  end;
{$endif}

