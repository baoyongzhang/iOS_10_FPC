{ Parsed from Messages.framework MSConversation.h }

{$ifdef TYPES}
type
  MSConversationPtr = ^MSConversation;
{$endif}

{$ifdef CLASSES}

type
  MSConversation = objcclass external (NSObject)
  public
    function localParticipantIdentifier: NSUUID; message 'localParticipantIdentifier';
    function remoteParticipantIdentifiers: NSUUID *ProtocolPtr; message 'remoteParticipantIdentifiers';
    function selectedMessage: MSMessage; message 'selectedMessage';
    procedure insertMessage_completionHandler (message_: MSMessage; completionHandler: OpaqueCBlock); message 'insertMessage:completionHandler:';
    procedure insertSticker_completionHandler (sticker: MSSticker; completionHandler: OpaqueCBlock); message 'insertSticker:completionHandler:';
    procedure insertText_completionHandler (text: NSString; completionHandler: OpaqueCBlock); message 'insertText:completionHandler:';
    procedure insertAttachment_withAlternateFilename_completionHandler (URL: NSURL; filename: nullable NSStringPtr; completionHandler: OpaqueCBlock); message 'insertAttachment:withAlternateFilename:completionHandler:';
  end;
{$endif}

