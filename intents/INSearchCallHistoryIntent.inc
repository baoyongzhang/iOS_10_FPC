{ Parsed from Intents.framework INSearchCallHistoryIntent.h }

{$ifdef TYPES}
type
  INSearchCallHistoryIntentPtr = ^INSearchCallHistoryIntent;
  INSearchCallHistoryIntentHandlingProtocolPtr = ^INSearchCallHistoryIntentHandlingProtocol;
{$endif}

{$ifdef CLASSES}

type
  INSearchCallHistoryIntent = objcclass external (INIntent)
  public
    function initWithCallType_dateCreated_recipient_callCapabilities (callType: INCallRecordType; dateCreated: nullable INDateComponentsRangePtr; recipient: nullable INPersonPtr; callCapabilities: INCallCapabilityOptions): instancetype; message 'initWithCallType:dateCreated:recipient:callCapabilities:'; { NS_DESIGNATED_INITIALIZER }
    function callType: INCallRecordType; message 'callType';
    function dateCreated: INDateComponentsRange; message 'dateCreated';
    function recipient: INPerson; message 'recipient';
    function callCapabilities: INCallCapabilityOptions; message 'callCapabilities';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  INSearchCallHistoryIntentHandlingProtocol = objcprotocol external name 'INSearchCallHistoryIntentHandling' (NSObjectProtocol)
  required
    procedure handleSearchCallHistory_completion_searchCallHistory (intent: INSearchCallHistoryIntent; completion: OpaqueCBlock; completion3: id); message 'handleSearchCallHistory:completion:searchCallHistory:';
  optional
    procedure confirmSearchCallHistory_completion_searchCallHistory (intent: INSearchCallHistoryIntent; completion: OpaqueCBlock; completion3: id); message 'confirmSearchCallHistory:completion:searchCallHistory:';
    procedure resolveCallTypeForSearchCallHistory_withCompletion_forSearchCallHistory (intent: INSearchCallHistoryIntent; completion: OpaqueCBlock; with_: id); message 'resolveCallTypeForSearchCallHistory:withCompletion:forSearchCallHistory:';
    procedure resolveDateCreatedForSearchCallHistory_withCompletion_forSearchCallHistory (intent: INSearchCallHistoryIntent; completion: OpaqueCBlock; with_: id); message 'resolveDateCreatedForSearchCallHistory:withCompletion:forSearchCallHistory:';
    procedure resolveRecipientForSearchCallHistory_withCompletion_forSearchCallHistory (intent: INSearchCallHistoryIntent; completion: OpaqueCBlock; with_: id); message 'resolveRecipientForSearchCallHistory:withCompletion:forSearchCallHistory:';
  end;
{$endif}

