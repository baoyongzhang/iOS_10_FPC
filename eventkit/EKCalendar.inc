{ Parsed from EventKit.framework EKCalendar.h }

{ Types from EKCalendar }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  EKCalendarPtr = ^EKCalendar;
{$endif}

{$ifdef CLASSES}

type
  EKCalendar = objcclass external (EKObject)
  public
    class function calendarWithEventStore (eventStore: EKEventStore): EKCalendar; message 'calendarWithEventStore:'; deprecated 'in NA, NA, 4_0, 6_0';
    class function calendarForEntityType_eventStore (entityType: EKEntityType; eventStore: EKEventStore): EKCalendar; message 'calendarForEntityType:eventStore:'; { available in 10_8, 6_0 }
    procedure setSource(newValue: EKSource); message 'setSource:';
    function source: EKSource; message 'source';
    function calendarIdentifier: NSString; message 'calendarIdentifier';
    procedure setTitle(newValue: NSString); message 'setTitle:';
    function title: NSString; message 'title';
    function type_: EKCalendarType; message 'type';
    function allowsContentModifications: boolean; message 'allowsContentModifications';
    function isSubscribed: boolean; message 'isSubscribed';
    function isImmutable: boolean; message 'isImmutable';
    {$if defined(TARGET_OS_IPHONE)}
    procedure setCGColor(newValue: CGColorRef); message 'setCGColor:';
    function CGColor: CGColorRef; message 'CGColor';
    {$else}
    procedure setColor(newValue: NSColor); message 'setColor:';
    function color: NSColor; message 'color';
    {$endif}
    function supportedEventAvailabilities: EKCalendarEventAvailabilityMask; message 'supportedEventAvailabilities';
    function allowedEntityTypes: EKEntityMask; message 'allowedEntityTypes';
  end;
{$endif}

