{ Parsed from Intents.framework INSendMessageIntent.h }

{$ifdef TYPES}
type
  INSendMessageIntentPtr = ^INSendMessageIntent;
  INSendMessageIntentHandlingProtocolPtr = ^INSendMessageIntentHandlingProtocol;
{$endif}

{$ifdef CLASSES}

type
  INSendMessageIntent = objcclass external (INIntent)
  public
    function initWithRecipients_content_groupName_serviceName_sender (recipients: nullable INPerson *ProtocolPtr; content: nullable NSStringPtr; groupName: nullable NSStringPtr; serviceName: nullable NSStringPtr; sender: nullable INPersonPtr): instancetype; message 'initWithRecipients:content:groupName:serviceName:sender:'; { NS_DESIGNATED_INITIALIZER }
    function recipients: INPerson *ProtocolPtr; message 'recipients';
    function content: NSString; message 'content';
    function groupName: NSString; message 'groupName';
    function serviceName: NSString; message 'serviceName';
    function sender: INPerson; message 'sender';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  INSendMessageIntentHandlingProtocol = objcprotocol external name 'INSendMessageIntentHandling' (NSObjectProtocol)
  required
    procedure handleSendMessage_completion_sendMessage (intent: INSendMessageIntent; completion: OpaqueCBlock; completion3: id); message 'handleSendMessage:completion:sendMessage:';
  optional
    procedure confirmSendMessage_completion_sendMessage (intent: INSendMessageIntent; completion: OpaqueCBlock; completion3: id); message 'confirmSendMessage:completion:sendMessage:';
    procedure resolveRecipientsForSendMessage_withCompletion_forSendMessage (intent: INSendMessageIntent; completion: OpaqueCBlock; with_: id); message 'resolveRecipientsForSendMessage:withCompletion:forSendMessage:';
    procedure resolveContentForSendMessage_withCompletion_forSendMessage (intent: INSendMessageIntent; completion: OpaqueCBlock; with_: id); message 'resolveContentForSendMessage:withCompletion:forSendMessage:';
    procedure resolveGroupNameForSendMessage_withCompletion_forSendMessage (intent: INSendMessageIntent; completion: OpaqueCBlock; with_: id); message 'resolveGroupNameForSendMessage:withCompletion:forSendMessage:';
  end;
{$endif}

