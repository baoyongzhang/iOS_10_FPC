{$mode delphi}
{$modeswitch objectivec1}
{$modeswitch cvar}

unit DefinedClassesEventKitUI;
interface

type
  EKCalendarChooser = objcclass external;
  EKEventEditViewController = objcclass external;
  EKEventViewController = objcclass external;
  EKCalendarChooserDelegateProtocol = objcprotocol external name 'EKCalendarChooserDelegate';
  EKEventEditViewDelegateProtocol = objcprotocol external name 'EKEventEditViewDelegate';
  EKEventViewDelegateProtocol = objcprotocol external name 'EKEventViewDelegate';

type
  EKEvent = objcclass external;
  EKEventStore = objcclass external;

implementation
end.
