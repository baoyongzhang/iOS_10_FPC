{ Parsed from EventKitUI.framework EKEventEditViewController.h }

{$ifdef TYPES}
type
  EKEventEditViewControllerPtr = ^EKEventEditViewController;
  EKEventEditViewDelegateProtocolPtr = ^EKEventEditViewDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  EKEventEditViewAction = NSInteger;
  EKEventEditViewActionPtr = ^EKEventEditViewAction;

const
  EKEventEditViewActionCanceled = 0;
  EKEventEditViewActionSaved = 1;
  EKEventEditViewActionDeleted = 2;
  EKEventEditViewActionCancelled = EKEventEditViewActionCanceled;
{$endif}

{$ifdef CLASSES}

type
  EKEventEditViewController = objcclass external (UINavigationController)
  public
    procedure setEditViewDelegate(newValue: EKEventEditViewDelegateProtocol); message 'setEditViewDelegate:';
    function editViewDelegate: EKEventEditViewDelegateProtocol; message 'editViewDelegate';
    procedure setEventStore(newValue: EKEventStore); message 'setEventStore:';
    function eventStore: EKEventStore; message 'eventStore';
    procedure setEvent(newValue: EKEvent); message 'setEvent:';
    function event: EKEvent; message 'event';
    procedure cancelEditing; message 'cancelEditing';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  EKEventEditViewDelegateProtocol = objcprotocol external name 'EKEventEditViewDelegate' (NSObjectProtocol)
  required
    procedure eventEditViewController_didCompleteWithAction (controller: EKEventEditViewController; action: EKEventEditViewAction); message 'eventEditViewController:didCompleteWithAction:';
  optional
    function eventEditViewControllerDefaultCalendarForNewEvents (controller: EKEventEditViewController): EKCalendar; message 'eventEditViewControllerDefaultCalendarForNewEvents:';
  end;
{$endif}

