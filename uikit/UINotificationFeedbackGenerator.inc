{ Parsed from UIKit.framework UINotificationFeedbackGenerator.h }

{$ifdef TYPES}
type
  UINotificationFeedbackGeneratorPtr = ^UINotificationFeedbackGenerator;
{$endif}

{$ifdef TYPES}
type
  UINotificationFeedbackType = NSInteger;
  UINotificationFeedbackTypePtr = ^UINotificationFeedbackType;

const
  UINotificationFeedbackTypeSuccess = 0;
  UINotificationFeedbackTypeWarning = 1;
  UINotificationFeedbackTypeError = 2;
{$endif}

{$ifdef CLASSES}

type
  UINotificationFeedbackGenerator = objcclass external (UIFeedbackGenerator)
  public
    procedure notificationOccurred (notificationType: UINotificationFeedbackType); message 'notificationOccurred:';
  end;
{$endif}

