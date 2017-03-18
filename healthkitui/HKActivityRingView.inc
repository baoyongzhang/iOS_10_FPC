{ Parsed from HealthKitUI.framework HKActivityRingView.h }

{$ifdef TYPES}
type
  HKActivityRingViewPtr = ^HKActivityRingView;
{$endif}

{$ifdef CLASSES}

type
  HKActivityRingView = objcclass external (UIView)
  public
    procedure setActivitySummary(newValue: HKActivitySummary); message 'setActivitySummary:';
    function activitySummary: HKActivitySummary; message 'activitySummary';
    procedure setActivitySummary_animated (activitySummary_: nullable HKActivitySummaryPtr; animated: boolean); message 'setActivitySummary:animated:';
  end;
{$endif}

