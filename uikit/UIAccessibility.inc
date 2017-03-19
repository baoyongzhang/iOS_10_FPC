{ Parsed from UIKit.framework UIAccessibility.h }

{ Types from UIAccessibilityAction }
{$ifdef TYPES}

type
  UIAccessibilityScrollDirection = NSInteger;
type
  UIAccessibilityScrollDirectionPtr = ^UIAccessibilityScrollDirection;

const
  UIAccessibilityScrollDirectionRight = 1;
  UIAccessibilityScrollDirectionLeft = 2;
  UIAccessibilityScrollDirectionUp = 3;
  UIAccessibilityScrollDirectionDown = 4;
  UIAccessibilityScrollDirectionNext = 5 { available in 5_0 };
  UIAccessibilityScrollDirectionPrevious = 6 { available in 5_0 };
{$endif}


{$ifdef TYPES}
type
  UIAccessibilityReadingContentProtocolPtr = ^UIAccessibilityReadingContentProtocol;
{$endif}

{$ifdef CLASSES}

type
  UIAccessibility = objccategory external (NSObject)
    procedure setIsAccessibilityElement(newValue: boolean); message 'setIsAccessibilityElement:';
    function isAccessibilityElement: boolean; message 'isAccessibilityElement';
    procedure setAccessibilityLabel(newValue: NSString); message 'setAccessibilityLabel:';
    function accessibilityLabel: NSString; message 'accessibilityLabel';
    procedure setAccessibilityHint(newValue: NSString); message 'setAccessibilityHint:';
    function accessibilityHint: NSString; message 'accessibilityHint';
    procedure setAccessibilityValue(newValue: NSString); message 'setAccessibilityValue:';
    function accessibilityValue: NSString; message 'accessibilityValue';
    procedure setAccessibilityTraits(newValue: UIAccessibilityTraits); message 'setAccessibilityTraits:';
    function accessibilityTraits: UIAccessibilityTraits; message 'accessibilityTraits';
    procedure setAccessibilityFrame(newValue: CGRect); message 'setAccessibilityFrame:';
    function accessibilityFrame: CGRect; message 'accessibilityFrame';
    procedure setAccessibilityPath(newValue: UIBezierPath); message 'setAccessibilityPath:';
    function accessibilityPath: UIBezierPath; message 'accessibilityPath';
    procedure setAccessibilityActivationPoint(newValue: CGPoint); message 'setAccessibilityActivationPoint:';
    function accessibilityActivationPoint: CGPoint; message 'accessibilityActivationPoint';
    procedure setAccessibilityLanguage(newValue: NSString); message 'setAccessibilityLanguage:';
    function accessibilityLanguage: NSString; message 'accessibilityLanguage';
    procedure setAccessibilityElementsHidden(newValue: boolean); message 'setAccessibilityElementsHidden:';
    function accessibilityElementsHidden: boolean; message 'accessibilityElementsHidden';
    procedure setAccessibilityViewIsModal(newValue: boolean); message 'setAccessibilityViewIsModal:';
    function accessibilityViewIsModal: boolean; message 'accessibilityViewIsModal';
    procedure setShouldGroupAccessibilityChildren(newValue: boolean); message 'setShouldGroupAccessibilityChildren:';
    function shouldGroupAccessibilityChildren: boolean; message 'shouldGroupAccessibilityChildren';
    procedure setAccessibilityNavigationStyle(newValue: UIAccessibilityNavigationStyle); message 'setAccessibilityNavigationStyle:';
    function accessibilityNavigationStyle: UIAccessibilityNavigationStyle; message 'accessibilityNavigationStyle';
    procedure setAccessibilityHeaderElements(newValue: NSArray); message 'setAccessibilityHeaderElements:';
    function accessibilityHeaderElements: NSArray; message 'accessibilityHeaderElements';
  end;

type
  UIAccessibilityContainer = objccategory external (NSObject)
    function accessibilityElementCount: NSInteger; message 'accessibilityElementCount';
    function accessibilityElementAtIndex (index: NSInteger): nullable id; message 'accessibilityElementAtIndex:';
    function indexOfAccessibilityElement (element: id): NSInteger; message 'indexOfAccessibilityElement:';
    procedure setAccessibilityElements(newValue: NSArray); message 'setAccessibilityElements:';
    function accessibilityElements: NSArray; message 'accessibilityElements';
  end;

type
  UIAccessibilityFocus = objccategory external (NSObject)
    procedure accessibilityElementDidBecomeFocused; message 'accessibilityElementDidBecomeFocused'; { available in 4_0 }
    procedure accessibilityElementDidLoseFocus; message 'accessibilityElementDidLoseFocus'; { available in 4_0 }
    function accessibilityElementIsFocused: boolean; message 'accessibilityElementIsFocused'; { available in 4_0 }
    function accessibilityAssistiveTechnologyFocusedIdentifiers: nullable NSString *ProtocolPtr; message 'accessibilityAssistiveTechnologyFocusedIdentifiers'; { available in 9_0 }
  end;

type
  UIAccessibilityAction = objccategory external (NSObject)
    function accessibilityActivate: boolean; message 'accessibilityActivate'; { available in 7_0 }
    procedure accessibilityIncrement; message 'accessibilityIncrement'; { available in 4_0 }
    procedure accessibilityDecrement; message 'accessibilityDecrement'; { available in 4_0 }
    function accessibilityScroll (direction: UIAccessibilityScrollDirection): boolean; message 'accessibilityScroll:'; { available in 4_2 }
    function accessibilityPerformEscape: boolean; message 'accessibilityPerformEscape'; { available in 5_0 }
    function accessibilityPerformMagicTap: boolean; message 'accessibilityPerformMagicTap'; { available in 6_0 }
    procedure setAccessibilityCustomActions(newValue: UIAccessibilityCustomAction *ProtocolPtr); message 'setAccessibilityCustomActions:';
    function accessibilityCustomActions: UIAccessibilityCustomAction *ProtocolPtr; message 'accessibilityCustomActions';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  UIAccessibilityReadingContentProtocol = objcprotocol external name 'UIAccessibilityReadingContent'
  required
    function accessibilityLineNumberForPoint (point: CGPoint): NSInteger; message 'accessibilityLineNumberForPoint:'; { available in 5_0 }
    function accessibilityContentForLineNumber (lineNumber: NSInteger): NSStringPtr; message 'accessibilityContentForLineNumber:'; { available in 5_0 }
    function accessibilityFrameForLineNumber (lineNumber: NSInteger): CGRect; message 'accessibilityFrameForLineNumber:'; { available in 5_0 }
    function accessibilityPageContent: NSStringPtr; message 'accessibilityPageContent'; { available in 5_0 }
  end;
{$endif}

{$ifdef FUNCTIONS}
procedure UIAccessibilityPostNotification(notification: UIAccessibilityNotifications; argument: __nullable id); cdecl; external;
function UIAccessibilityIsVoiceOverRunning: boolean; cdecl; external; { available in 4_0 }
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  UIAccessibilityVoiceOverStatusChanged: NSString { available in 4_0 }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function UIAccessibilityIsMonoAudioEnabled: boolean; cdecl; external; { available in 5_0 }
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  UIAccessibilityMonoAudioStatusDidChangeNotification: NSString { available in 5_0 }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function UIAccessibilityIsClosedCaptioningEnabled: boolean; cdecl; external; { available in 5_0 }
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  UIAccessibilityClosedCaptioningStatusDidChangeNotification: NSString { available in 5_0 }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function UIAccessibilityIsInvertColorsEnabled: boolean; cdecl; external; { available in 6_0 }
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  UIAccessibilityInvertColorsStatusDidChangeNotification: NSString { available in 6_0 }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function UIAccessibilityIsGuidedAccessEnabled: boolean; cdecl; external; { available in 6_0 }
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  UIAccessibilityGuidedAccessStatusDidChangeNotification: NSString { available in 6_0 }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function UIAccessibilityIsBoldTextEnabled: boolean; cdecl; external; { available in 8_0 }
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  UIAccessibilityBoldTextStatusDidChangeNotification: NSString { available in 8_0 }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function UIAccessibilityIsGrayscaleEnabled: boolean; cdecl; external; { available in 8_0 }
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  UIAccessibilityGrayscaleStatusDidChangeNotification: NSString { available in 8_0 }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function UIAccessibilityIsReduceTransparencyEnabled: boolean; cdecl; external; { available in 8_0 }
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  UIAccessibilityReduceTransparencyStatusDidChangeNotification: NSString { available in 8_0 }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function UIAccessibilityIsReduceMotionEnabled: boolean; cdecl; external; { available in 8_0 }
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  UIAccessibilityReduceMotionStatusDidChangeNotification: NSString { available in 8_0 }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function UIAccessibilityDarkerSystemColorsEnabled: boolean; cdecl; external; { available in 8_0 }
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  UIAccessibilityDarkerSystemColorsStatusDidChangeNotification: NSString { available in 8_0 }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function UIAccessibilityIsSwitchControlRunning: boolean; cdecl; external; { available in 8_0 }
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  UIAccessibilitySwitchControlStatusDidChangeNotification: NSString { available in 8_0 }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function UIAccessibilityIsSpeakSelectionEnabled: boolean; cdecl; external; { available in 8_0 }
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  UIAccessibilitySpeakSelectionStatusDidChangeNotification: NSString { available in 8_0 }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function UIAccessibilityIsSpeakScreenEnabled: boolean; cdecl; external; { available in 8_0 }
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  UIAccessibilitySpeakScreenStatusDidChangeNotification: NSString { available in 8_0 }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function UIAccessibilityIsShakeToUndoEnabled: boolean; cdecl; external; { available in 9_0 }
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  UIAccessibilityShakeToUndoDidChangeNotification: NSString { available in 9_0 }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function UIAccessibilityIsAssistiveTouchRunning: boolean; cdecl; external; { available in 10_0 }
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  UIAccessibilityAssistiveTouchStatusDidChangeNotification: NSString { available in 10_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  UIAccessibilityHearingDeviceEar = NSUInteger;
  UIAccessibilityHearingDeviceEarPtr = ^UIAccessibilityHearingDeviceEar;

const
  UIAccessibilityHearingDeviceEarNone = 0;
  UIAccessibilityHearingDeviceEarLeft = 1 shl 1;
  UIAccessibilityHearingDeviceEarRight = 1 shl 2;
  UIAccessibilityHearingDeviceEarBoth = UIAccessibilityHearingDeviceEarLeft + UIAccessibilityHearingDeviceEarRight;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  __TVOS_PROHIBITED: NSString *UIAccessibilityHearingDevicePairedEarDidChangeNotification { available in 10_0 }; cvar; external;
{$endif}

