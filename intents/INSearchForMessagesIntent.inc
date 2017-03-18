{ Parsed from Intents.framework INSearchForMessagesIntent.h }

{$ifdef TYPES}
type
  INSearchForMessagesIntentPtr = ^INSearchForMessagesIntent;
  INSearchForMessagesIntentHandlingProtocolPtr = ^INSearchForMessagesIntentHandlingProtocol;
{$endif}

{$ifdef CLASSES}

type
  INSearchForMessagesIntent = objcclass external (INIntent)
  public
    function initWithRecipients_senders_searchTerms_attributes_dateTimeRange_identifiers_notificationIdentifiers_groupNames (recipients: nullable INPerson *ProtocolPtr; senders: nullable INPerson *ProtocolPtr; searchTerms: nullable NSString *ProtocolPtr; attributes: INMessageAttributeOptions; dateTimeRange: nullable INDateComponentsRangePtr; identifiers: nullable NSString *ProtocolPtr; notificationIdentifiers: nullable NSString *ProtocolPtr; groupNames: nullable NSString *ProtocolPtr): instancetype; message 'initWithRecipients:senders:searchTerms:attributes:dateTimeRange:identifiers:notificationIdentifiers:groupNames:'; { NS_DESIGNATED_INITIALIZER }
    function recipients: INPerson *ProtocolPtr; message 'recipients';
    function recipientsOperator: INConditionalOperator; message 'recipientsOperator';
    function senders: INPerson *ProtocolPtr; message 'senders';
    function sendersOperator: INConditionalOperator; message 'sendersOperator';
    function searchTerms: NSString *ProtocolPtr; message 'searchTerms';
    function searchTermsOperator: INConditionalOperator; message 'searchTermsOperator';
    function attributes: INMessageAttributeOptions; message 'attributes';
    function dateTimeRange: INDateComponentsRange; message 'dateTimeRange';
    function identifiers: NSString *ProtocolPtr; message 'identifiers';
    function identifiersOperator: INConditionalOperator; message 'identifiersOperator';
    function notificationIdentifiers: NSString *ProtocolPtr; message 'notificationIdentifiers';
    function notificationIdentifiersOperator: INConditionalOperator; message 'notificationIdentifiersOperator';
    function groupNames: NSString *ProtocolPtr; message 'groupNames';
    function groupNamesOperator: INConditionalOperator; message 'groupNamesOperator';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  INSearchForMessagesIntentHandlingProtocol = objcprotocol external name 'INSearchForMessagesIntentHandling' (NSObjectProtocol)
  required
    procedure handleSearchForMessages_completion_searchForMessages (intent: INSearchForMessagesIntent; completion: OpaqueCBlock; completion3: id); message 'handleSearchForMessages:completion:searchForMessages:';
  optional
    procedure confirmSearchForMessages_completion_searchForMessages (intent: INSearchForMessagesIntent; completion: OpaqueCBlock; completion3: id); message 'confirmSearchForMessages:completion:searchForMessages:';
    procedure resolveRecipientsForSearchForMessages_withCompletion_forSearchForMessages (intent: INSearchForMessagesIntent; completion: OpaqueCBlock; with_: id); message 'resolveRecipientsForSearchForMessages:withCompletion:forSearchForMessages:';
    procedure resolveSendersForSearchForMessages_withCompletion_forSearchForMessages (intent: INSearchForMessagesIntent; completion: OpaqueCBlock; with_: id); message 'resolveSendersForSearchForMessages:withCompletion:forSearchForMessages:';
    procedure resolveAttributesForSearchForMessages_withCompletion_forSearchForMessages (intent: INSearchForMessagesIntent; completion: OpaqueCBlock; with_: id); message 'resolveAttributesForSearchForMessages:withCompletion:forSearchForMessages:';
    procedure resolveDateTimeRangeForSearchForMessages_withCompletion_forSearchForMessages (intent: INSearchForMessagesIntent; completion: OpaqueCBlock; with_: id); message 'resolveDateTimeRangeForSearchForMessages:withCompletion:forSearchForMessages:';
    procedure resolveGroupNamesForSearchForMessages_withCompletion_forSearchForMessages (intent: INSearchForMessagesIntent; completion: OpaqueCBlock; with_: id); message 'resolveGroupNamesForSearchForMessages:withCompletion:forSearchForMessages:';
  end;
{$endif}

