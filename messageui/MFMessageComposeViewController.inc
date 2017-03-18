{ Parsed from MessageUI.framework MFMessageComposeViewController.h }

{$ifdef TYPES}
type
  MFMessageComposeViewControllerPtr = ^MFMessageComposeViewController;
  MFMessageComposeViewControllerDelegateProtocolPtr = ^MFMessageComposeViewControllerDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  MessageComposeResult = NSInteger;
  MessageComposeResultPtr = ^MessageComposeResult;

const
  MessageComposeResultCancelled = 0;
  MessageComposeResultSent = 1;
  MessageComposeResultFailed = 2;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  MFMessageComposeViewControllerAttachmentURL: NSString; cvar; external;
  MFMessageComposeViewControllerAttachmentAlternateFilename: NSString; cvar; external;
  MFMessageComposeViewControllerTextMessageAvailabilityDidChangeNotification: NSString { available starting in __MAC_NA,__IPHONE_5_0 }; cvar; external;
  MFMessageComposeViewControllerTextMessageAvailabilityKey: NSString { available starting in __MAC_NA,__IPHONE_5_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  MFMessageComposeViewController = objcclass external (UINavigationController)
  private
  public
    class function canSendText: boolean; message 'canSendText'; { available starting in __MAC_NA,__IPHONE_4_0 }
    class function canSendSubject: boolean; message 'canSendSubject'; { available starting in __MAC_NA,__IPHONE_7_0 }
    class function canSendAttachments: boolean; message 'canSendAttachments'; { available starting in __MAC_NA,__IPHONE_7_0 }
    class function isSupportedAttachmentUTI (uti: NSString): boolean; message 'isSupportedAttachmentUTI:'; { available starting in __MAC_NA,__IPHONE_7_0 }
    procedure setMessageComposeDelegate(newValue: MFMessageComposeViewControllerDelegateProtocol); message 'setMessageComposeDelegate:';
    function messageComposeDelegate: MFMessageComposeViewControllerDelegateProtocol; message 'messageComposeDelegate';
    procedure disableUserAttachments; message 'disableUserAttachments'; { available starting in __MAC_NA,__IPHONE_7_0 }
    procedure setRecipients(newValue: NSString *ProtocolPtr); message 'setRecipients:';
    function recipients: NSString *ProtocolPtr; message 'recipients';
    procedure setBody(newValue: NSString); message 'setBody:';
    function body: NSString; message 'body';
    procedure setSubject(newValue: NSString); message 'setSubject:';
    function subject: NSString; message 'subject';
    function attachments: NSDictionary *ProtocolPtr; message 'attachments';
    procedure setMessage(newValue: MSMessage); message 'setMessage:';
    function message_: MSMessage; message 'message';
    function addAttachmentURL_withAlternateFilename (attachmentURL: NSURL; alternateFilename: nullable NSStringPtr): boolean; message 'addAttachmentURL:withAlternateFilename:'; { available starting in __MAC_NA,__IPHONE_7_0 }
    function addAttachmentData_typeIdentifier_filename (attachmentData: NSData; uti: NSString; filename: NSString): boolean; message 'addAttachmentData:typeIdentifier:filename:'; { available starting in __MAC_NA,__IPHONE_7_0 }
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  MFMessageComposeViewControllerDelegateProtocol = objcprotocol external name 'MFMessageComposeViewControllerDelegate' (NSObjectProtocol)
  required
    procedure messageComposeViewController_didFinishWithResult (controller: MFMessageComposeViewController; result_: MessageComposeResult); message 'messageComposeViewController:didFinishWithResult:';
  end;
{$endif}

