{ Parsed from CoreSpotlight.framework CSSearchableItemAttributeSet_Messaging.h }
{$ifdef EXTERNAL_SYMBOLS}
var
  CSMailboxInbox: NSString { available in 10_11, 9_0 }; cvar; external;
  CSMailboxDrafts: NSString { available in 10_11, 9_0 }; cvar; external;
  CSMailboxSent: NSString { available in 10_11, 9_0 }; cvar; external;
  CSMailboxJunk: NSString { available in 10_11, 9_0 }; cvar; external;
  CSMailboxTrash: NSString { available in 10_11, 9_0 }; cvar; external;
  CSMailboxArchive: NSString { available in 10_11, 9_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  CSMessaging = objccategory external (CSSearchableItemAttributeSet)
    procedure setAccountIdentifier(newValue: NSString); message 'setAccountIdentifier:';
    function accountIdentifier: NSString; message 'accountIdentifier';
    procedure setAccountHandles(newValue: NSString *ProtocolPtr); message 'setAccountHandles:';
    function accountHandles: NSString *ProtocolPtr; message 'accountHandles';
    procedure setHTMLContentData(newValue: NSData); message 'setHTMLContentData:';
    function HTMLContentData: NSData; message 'HTMLContentData';
    procedure setTextContent(newValue: NSString); message 'setTextContent:';
    function textContent: NSString; message 'textContent';
    procedure setAuthors(newValue: CSPerson *ProtocolPtr); message 'setAuthors:';
    function authors: CSPerson *ProtocolPtr; message 'authors';
    procedure setPrimaryRecipients(newValue: CSPerson *ProtocolPtr); message 'setPrimaryRecipients:';
    function primaryRecipients: CSPerson *ProtocolPtr; message 'primaryRecipients';
    procedure setAdditionalRecipients(newValue: CSPerson *ProtocolPtr); message 'setAdditionalRecipients:';
    function additionalRecipients: CSPerson *ProtocolPtr; message 'additionalRecipients';
    procedure setHiddenAdditionalRecipients(newValue: CSPerson *ProtocolPtr); message 'setHiddenAdditionalRecipients:';
    function hiddenAdditionalRecipients: CSPerson *ProtocolPtr; message 'hiddenAdditionalRecipients';
    procedure setEmailHeaders(newValue: NSDictionary); message 'setEmailHeaders:';
    function emailHeaders: NSDictionary; message 'emailHeaders';
    procedure setMailboxIdentifiers(newValue: NSString *ProtocolPtr); message 'setMailboxIdentifiers:';
    function mailboxIdentifiers: NSString *ProtocolPtr; message 'mailboxIdentifiers';
    procedure setAuthorNames(newValue: NSString *ProtocolPtr); message 'setAuthorNames:';
    function authorNames: NSString *ProtocolPtr; message 'authorNames';
    procedure setRecipientNames(newValue: NSString *ProtocolPtr); message 'setRecipientNames:';
    function recipientNames: NSString *ProtocolPtr; message 'recipientNames';
    procedure setAuthorEmailAddresses(newValue: NSString *ProtocolPtr); message 'setAuthorEmailAddresses:';
    function authorEmailAddresses: NSString *ProtocolPtr; message 'authorEmailAddresses';
    procedure setRecipientEmailAddresses(newValue: NSString *ProtocolPtr); message 'setRecipientEmailAddresses:';
    function recipientEmailAddresses: NSString *ProtocolPtr; message 'recipientEmailAddresses';
    procedure setAuthorAddresses(newValue: NSString *ProtocolPtr); message 'setAuthorAddresses:';
    function authorAddresses: NSString *ProtocolPtr; message 'authorAddresses';
    procedure setRecipientAddresses(newValue: NSString *ProtocolPtr); message 'setRecipientAddresses:';
    function recipientAddresses: NSString *ProtocolPtr; message 'recipientAddresses';
    procedure setPhoneNumbers(newValue: NSString *ProtocolPtr); message 'setPhoneNumbers:';
    function phoneNumbers: NSString *ProtocolPtr; message 'phoneNumbers';
    procedure setEmailAddresses(newValue: NSString *ProtocolPtr); message 'setEmailAddresses:';
    function emailAddresses: NSString *ProtocolPtr; message 'emailAddresses';
    procedure setInstantMessageAddresses(newValue: NSString *ProtocolPtr); message 'setInstantMessageAddresses:';
    function instantMessageAddresses: NSString *ProtocolPtr; message 'instantMessageAddresses';
    procedure setLikelyJunk(newValue: NSNumber); message 'setLikelyJunk:';
    function isLikelyJunk: NSNumber; message 'isLikelyJunk';
  end;
{$endif}

