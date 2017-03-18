{ Parsed from WatchKit.framework WKInterfaceActivityRing.h }

{$ifdef TYPES}
type
  WKInterfaceActivityRingPtr = ^WKInterfaceActivityRing;
{$endif}

{$ifdef CLASSES}

type
  WKInterfaceActivityRing = objcclass external (WKInterfaceObject)
  public
    procedure setActivitySummary_animated (activitySummary: nullable  HKActivitySummaryPtr; animated: boolean); message 'setActivitySummary:animated:';
  end;
{$endif}

