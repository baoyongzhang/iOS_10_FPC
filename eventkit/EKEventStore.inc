{ Parsed from EventKit.framework EKEventStore.h }

{ Types from EKEventStore }
{$ifdef TYPES}

type
  EKEventStoreRequestAccessCompletionHandler = OpaqueCBlock;
{$endif}


{$ifdef TYPES}
type
  EKEventStorePtr = ^EKEventStore;
{$endif}

{$ifdef TYPES}
type
  EKSpan = NSInteger;
  EKSpanPtr = ^EKSpan;

const
  EKSpanThisEvent = 0;
  EKSpanFutureEvents = 1;

type
  EKEventSearchCallback = OpaqueCBlock;
{$endif}

{$ifdef CLASSES}

type
  EKEventStore = objcclass external (NSObject)
  public
    class function authorizationStatusForEntityType (entityType: EKEntityType): EKAuthorizationStatus; message 'authorizationStatusForEntityType:'; { available in 10_9, 6_0 }
    function initWithAccessToEntityTypes (entityTypes: EKEntityMask): id; message 'initWithAccessToEntityTypes:'; deprecated 'in 10_8, 10_9, NA, NA';
    function init: id; message 'init'; { available in 10_9, 4_0 }
    function initWithSources (sources: EKSource *ProtocolPtr): instancetype; message 'initWithSources:'; { available in 10_11, NA }
    procedure requestAccessToEntityType_completion (entityType: EKEntityType; completion: EKEventStoreRequestAccessCompletionHandler); message 'requestAccessToEntityType:completion:'; { available in 10_9, 6_0 }
    function eventStoreIdentifier: NSString; message 'eventStoreIdentifier';
    function delegateSources: EKSource *ProtocolPtr; message 'delegateSources';
    function sources: EKSource *ProtocolPtr; message 'sources';
    function sourceWithIdentifier (identifier: NSString): EKSource; message 'sourceWithIdentifier:'; { available in 10_8, 5_0 }
    function calendars: EKCalendar *ProtocolPtr; message 'calendars';
    function calendarsForEntityType (entityType: EKEntityType): EKCalendar *ProtocolPtr; message 'calendarsForEntityType:'; { available in 10_8, 6_0 }
    function defaultCalendarForNewEvents: EKCalendar; message 'defaultCalendarForNewEvents';
    function defaultCalendarForNewReminders: EKCalendar; message 'defaultCalendarForNewReminders'; { available in 10_8, 6_0 }
    function calendarWithIdentifier (identifier: NSString): nullable EKCalendarPtr; message 'calendarWithIdentifier:'; { available in 10_8, 5_0 }
    function saveCalendar_commit_error (calendar: EKCalendar; commit: boolean; error: NSErrorPtr): boolean; message 'saveCalendar:commit:error:'; { available in 10_8, 5_0 }
    function removeCalendar_commit_error (calendar: EKCalendar; commit: boolean; error: NSErrorPtr): boolean; message 'removeCalendar:commit:error:'; { available in 10_8, 5_0 }
    function calendarItemWithIdentifier (identifier: NSString): EKCalendarItem; message 'calendarItemWithIdentifier:'; { available in 10_8, 6_0 }
    function calendarItemsWithExternalIdentifier (externalIdentifier: NSString): EKCalendarItem *ProtocolPtr; message 'calendarItemsWithExternalIdentifier:'; { available in 10_8, 6_0 }
    function saveEvent_span_error (event: EKEvent; span: EKSpan; error: NSErrorPtr): boolean; message 'saveEvent:span:error:'; { available in NA, 4_0 }
    function removeEvent_span_error (event: EKEvent; span: EKSpan; error: NSErrorPtr): boolean; message 'removeEvent:span:error:'; { available in NA, 4_0 }
    function saveEvent_span_commit_error (event: EKEvent; span: EKSpan; commit: boolean; error: NSErrorPtr): boolean; message 'saveEvent:span:commit:error:'; { available in 10_8, 5_0 }
    function removeEvent_span_commit_error (event: EKEvent; span: EKSpan; commit: boolean; error: NSErrorPtr): boolean; message 'removeEvent:span:commit:error:'; { available in 10_8, 5_0 }
    function eventWithIdentifier (identifier: NSString): nullable EKEventPtr; message 'eventWithIdentifier:';
    function eventsMatchingPredicate (predicate: NSPredicate): EKEvent *ProtocolPtr; message 'eventsMatchingPredicate:';
    procedure enumerateEventsMatchingPredicate_usingBlock (predicate: NSPredicate; block: EKEventSearchCallback); message 'enumerateEventsMatchingPredicate:usingBlock:';
    function predicateForEventsWithStartDate_endDate_calendars (startDate: NSDate; endDate: NSDate; calendars_: nullable EKCalendar *ProtocolPtr): NSPredicate; message 'predicateForEventsWithStartDate:endDate:calendars:';
    function saveReminder_commit_error (reminder: EKReminder; commit: boolean; error: NSErrorPtr): boolean; message 'saveReminder:commit:error:'; { available in 10_8, 6_0 }
    function removeReminder_commit_error (reminder: EKReminder; commit: boolean; error: NSErrorPtr): boolean; message 'removeReminder:commit:error:'; { available in 10_8, 6_0 }
    function fetchRemindersMatchingPredicate_completion (predicate: NSPredicate; completion: OpaqueCBlock): id; message 'fetchRemindersMatchingPredicate:completion:'; { available in 10_8, 6_0 }
    procedure cancelFetchRequest (fetchIdentifier: id); message 'cancelFetchRequest:'; { available in 10_8, 6_0 }
    function predicateForRemindersInCalendars (calendars_: nullable EKCalendar *ProtocolPtr): NSPredicate; message 'predicateForRemindersInCalendars:'; { available in 10_8, 6_0 }
    function predicateForIncompleteRemindersWithDueDateStarting_ending_calendars (startDate: nullable NSDatePtr; endDate: nullable NSDatePtr; calendars_: nullable EKCalendar *ProtocolPtr): NSPredicate; message 'predicateForIncompleteRemindersWithDueDateStarting:ending:calendars:'; { available in 10_8, 6_0 }
    function predicateForCompletedRemindersWithCompletionDateStarting_ending_calendars (startDate: nullable NSDatePtr; endDate: nullable NSDatePtr; calendars_: nullable EKCalendar *ProtocolPtr): NSPredicate; message 'predicateForCompletedRemindersWithCompletionDateStarting:ending:calendars:'; { available in 10_8, 6_0 }
    function commit (error: NSErrorPtr): boolean; message 'commit:'; { available in 10_8, 5_0 }
    procedure reset; message 'reset'; { available in 10_8, 5_0 }
    procedure refreshSourcesIfNecessary                         __WATCHOS_PROHIBITED; message 'refreshSourcesIfNecessary                         __WATCHOS_PROHIBITED'; { available in 10_8, 5_0 }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  EKEventStoreChangedNotification: NSString { available in 10_8, 4_0 }; cvar; external;
{$endif}

