{ Parsed from EventKit.framework EKParticipant.h }

{ Types from EKParticipant }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  EKParticipantPtr = ^EKParticipant;
{$endif}

{$ifdef CLASSES}

type
  EKParticipant = objcclass external (EKObject, NSCopyingProtocol)
  private
  public
    function URL: NSURL; message 'URL';
    function name: NSString; message 'name';
    function participantStatus: EKParticipantStatus; message 'participantStatus';
    function participantRole: EKParticipantRole; message 'participantRole';
    function participantType: EKParticipantType; message 'participantType';
    function isCurrentUser: boolean; message 'isCurrentUser';
    function contactPredicate: NSPredicate; message 'contactPredicate';
    {$if defined(TARGET_OS_IPHONE)}
    {$if  not defined(TARGET_OS_WATCH)}
    function ABRecordWithAddressBook (addressBook: ABAddressBookRef): nullable ABRecordRef; message 'ABRecordWithAddressBook:'; deprecated 'in 4_0, 9_0, "Use contactPredicate instead"';
    {$endif}
    {$else}
    function ABPersonInAddressBook (addressBook: ABAddressBook): nullable ABPersonPtr; message 'ABPersonInAddressBook:'; deprecated 'in 10_8, 10_11, "Use contactPredicate instead"';
    {$endif}

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

