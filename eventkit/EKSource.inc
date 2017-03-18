{ Parsed from EventKit.framework EKSource.h }

{$ifdef TYPES}
type
  EKSourcePtr = ^EKSource;
{$endif}

{$ifdef CLASSES}

type
  EKSource = objcclass external (EKObject)
  public
    function sourceIdentifier: NSString; message 'sourceIdentifier';
    function sourceType: EKSourceType; message 'sourceType';
    function title: NSString; message 'title';
    function calendars: EKCalendar *ProtocolPtr; message 'calendars';
    function calendarsForEntityType (entityType: EKEntityType): EKCalendar *ProtocolPtr; message 'calendarsForEntityType:'; { available in 10_8, 6_0 }
  end;
{$endif}

