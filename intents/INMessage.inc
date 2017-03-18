{ Parsed from Intents.framework INMessage.h }

{$ifdef TYPES}
type
  INMessagePtr = ^INMessage;
{$endif}

{$ifdef CLASSES}

type
  INMessage = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function init: id; message 'init';
    function initWithIdentifier_content_dateSent_sender_recipients (identifier: NSString; content: nullable NSStringPtr; dateSent: nullable NSDatePtr; sender: nullable INPersonPtr; recipients: nullable INPerson *ProtocolPtr): instancetype; message 'initWithIdentifier:content:dateSent:sender:recipients:'; { NS_DESIGNATED_INITIALIZER }
    function identifier: NSString; message 'identifier';
    function content: NSString; message 'content';
    function dateSent: NSDate; message 'dateSent';
    function sender: INPerson; message 'sender';
    function recipients: INPerson *ProtocolPtr; message 'recipients';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

