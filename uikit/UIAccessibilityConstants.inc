{ Parsed from UIKit.framework UIAccessibilityConstants.h }
{$ifdef TYPES}
type
  UIAccessibilityTraits = cuint64;
  UIAccessibilityTraitsPtr = ^UIAccessibilityTraits;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  UIAccessibilityTraitNone: UIAccessibilityTraits; cvar; external;
  UIAccessibilityTraitButton: UIAccessibilityTraits; cvar; external;
  UIAccessibilityTraitLink: UIAccessibilityTraits; cvar; external;
  UIAccessibilityTraitHeader: UIAccessibilityTraits { available in 6_0 }; cvar; external;
  UIAccessibilityTraitSearchField: UIAccessibilityTraits; cvar; external;
  UIAccessibilityTraitImage: UIAccessibilityTraits; cvar; external;
  UIAccessibilityTraitSelected: UIAccessibilityTraits; cvar; external;
  UIAccessibilityTraitPlaysSound: UIAccessibilityTraits; cvar; external;
  UIAccessibilityTraitKeyboardKey: UIAccessibilityTraits; cvar; external;
  UIAccessibilityTraitStaticText: UIAccessibilityTraits; cvar; external;
  UIAccessibilityTraitSummaryElement: UIAccessibilityTraits; cvar; external;
  UIAccessibilityTraitNotEnabled: UIAccessibilityTraits; cvar; external;
  UIAccessibilityTraitUpdatesFrequently: UIAccessibilityTraits; cvar; external;
  UIAccessibilityTraitStartsMediaSession: UIAccessibilityTraits { available in 4_0 }; cvar; external;
  UIAccessibilityTraitAdjustable: UIAccessibilityTraits { available in 4_0 }; cvar; external;
  UIAccessibilityTraitAllowsDirectInteraction: UIAccessibilityTraits { available in 5_0 }; cvar; external;
  UIAccessibilityTraitCausesPageTurn: UIAccessibilityTraits { available in 5_0 }; cvar; external;
  UIAccessibilityTraitTabBar: UIAccessibilityTraits { available in 10_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  UIAccessibilityNotifications = cuint32;
  UIAccessibilityNotificationsPtr = ^UIAccessibilityNotifications;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  UIAccessibilityScreenChangedNotification: UIAccessibilityNotifications; cvar; external;
  UIAccessibilityLayoutChangedNotification: UIAccessibilityNotifications; cvar; external;
  UIAccessibilityAnnouncementNotification: UIAccessibilityNotifications { available in 4_0 }; cvar; external;
  UIAccessibilityAnnouncementDidFinishNotification: NSString { available in 6_0 }; cvar; external;
  UIAccessibilityAnnouncementKeyStringValue: NSString { available in 6_0 }; cvar; external;
  UIAccessibilityAnnouncementKeyWasSuccessful: NSString { available in 6_0 }; cvar; external;
  UIAccessibilityElementFocusedNotification: NSString { available in 9_0 }; cvar; external;
  UIAccessibilityFocusedElementKey: NSString { available in 9_0 }; cvar; external;
  UIAccessibilityUnfocusedElementKey: NSString { available in 9_0 }; cvar; external;
  UIAccessibilityAssistiveTechnologyKey: NSString { available in 9_0 }; cvar; external;
  UIAccessibilityPageScrolledNotification: UIAccessibilityNotifications { available in 4_2 }; cvar; external;
  UIAccessibilityPauseAssistiveTechnologyNotification: UIAccessibilityNotifications { available in 8_0 }; cvar; external;
  UIAccessibilityResumeAssistiveTechnologyNotification: UIAccessibilityNotifications { available in 8_0 }; cvar; external;
  UIAccessibilityNotificationSwitchControlIdentifier: NSString { available in 8_0 }; cvar; external;
  UIAccessibilityNotificationVoiceOverIdentifier: NSString { available in 9_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  UIAccessibilityNavigationStyle = NSInteger;
  UIAccessibilityNavigationStylePtr = ^UIAccessibilityNavigationStyle;

const
  UIAccessibilityNavigationStyleAutomatic = 0;
  UIAccessibilityNavigationStyleSeparate = 1;
  UIAccessibilityNavigationStyleCombined = 2;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  UIAccessibilitySpeechAttributePunctuation: NSString { available in 7_0 }; cvar; external;
  UIAccessibilitySpeechAttributeLanguage: NSString { available in 7_0 }; cvar; external;
  UIAccessibilitySpeechAttributePitch: NSString { available in 7_0 }; cvar; external;
{$endif}

