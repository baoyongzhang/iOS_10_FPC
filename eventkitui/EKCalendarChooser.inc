{ Parsed from EventKitUI.framework EKCalendarChooser.h }

{$ifdef TYPES}
type
  EKCalendarChooserPtr = ^EKCalendarChooser;
  EKCalendarChooserDelegateProtocolPtr = ^EKCalendarChooserDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  EKCalendarChooserSelectionStyle = NSInteger;
  EKCalendarChooserSelectionStylePtr = ^EKCalendarChooserSelectionStyle;

const
  EKCalendarChooserSelectionStyleSingle = 0;
  EKCalendarChooserSelectionStyleMultiple = 1;

type
  EKCalendarChooserDisplayStyle = NSInteger;
  EKCalendarChooserDisplayStylePtr = ^EKCalendarChooserDisplayStyle;

const
  EKCalendarChooserDisplayAllCalendars = 0;
  EKCalendarChooserDisplayWritableCalendarsOnly = 1;
{$endif}

{$ifdef CLASSES}

type
  EKCalendarChooser = objcclass external (UIViewController)
  public
    function initWithSelectionStyle_displayStyle_eventStore (selectionStyle: EKCalendarChooserSelectionStyle; displayStyle: EKCalendarChooserDisplayStyle; eventStore: EKEventStore): id; message 'initWithSelectionStyle:displayStyle:eventStore:';
    function initWithSelectionStyle_displayStyle_entityType_eventStore (style: EKCalendarChooserSelectionStyle; displayStyle: EKCalendarChooserDisplayStyle; entityType: EKEntityType; eventStore: EKEventStore): id; message 'initWithSelectionStyle:displayStyle:entityType:eventStore:';
    function selectionStyle: EKCalendarChooserSelectionStyle; message 'selectionStyle';
    procedure setDelegate(newValue: EKCalendarChooserDelegateProtocol); message 'setDelegate:';
    function delegate: EKCalendarChooserDelegateProtocol; message 'delegate';
    procedure setShowsDoneButton(newValue: boolean); message 'setShowsDoneButton:';
    function showsDoneButton: boolean; message 'showsDoneButton';
    procedure setShowsCancelButton(newValue: boolean); message 'setShowsCancelButton:';
    function showsCancelButton: boolean; message 'showsCancelButton';
    procedure setSelectedCalendars(newValue: EKCalendar *ProtocolPtr); message 'setSelectedCalendars:';
    function selectedCalendars: EKCalendar *ProtocolPtr; message 'selectedCalendars';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  EKCalendarChooserDelegateProtocol = objcprotocol external name 'EKCalendarChooserDelegate' (NSObjectProtocol)
  optional
    procedure calendarChooserSelectionDidChange (calendarChooser: EKCalendarChooser); message 'calendarChooserSelectionDidChange:';
    procedure calendarChooserDidFinish (calendarChooser: EKCalendarChooser); message 'calendarChooserDidFinish:';
    procedure calendarChooserDidCancel (calendarChooser: EKCalendarChooser); message 'calendarChooserDidCancel:';
  end;
{$endif}

