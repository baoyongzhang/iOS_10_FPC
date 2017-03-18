{ Parsed from Messages.framework MSMessagesAppViewController.h }

{$ifdef TYPES}
type
  MSMessagesAppViewControllerPtr = ^MSMessagesAppViewController;
{$endif}

{$ifdef TYPES}
type
  MSMessagesAppPresentationStyle = NSUInteger;
  MSMessagesAppPresentationStylePtr = ^MSMessagesAppPresentationStyle;

const
  MSMessagesAppPresentationStyleCompact = 0;
  MSMessagesAppPresentationStyleExpanded = 1;
{$endif}

{$ifdef CLASSES}

type
  MSMessagesAppViewController = objcclass external (UIViewController)
  public
    function activeConversation: MSConversation; message 'activeConversation';
    function presentationStyle: MSMessagesAppPresentationStyle; message 'presentationStyle';
    procedure requestPresentationStyle (presentationStyle_: MSMessagesAppPresentationStyle); message 'requestPresentationStyle:';
    procedure dismiss; message 'dismiss';
    procedure willBecomeActiveWithConversation (conversation: MSConversation); message 'willBecomeActiveWithConversation:';
    procedure didBecomeActiveWithConversation (conversation: MSConversation); message 'didBecomeActiveWithConversation:';
    procedure willResignActiveWithConversation (conversation: MSConversation); message 'willResignActiveWithConversation:';
    procedure didResignActiveWithConversation (conversation: MSConversation); message 'didResignActiveWithConversation:';
    procedure willSelectMessage_conversation (message_: MSMessage; conversation: MSConversation); message 'willSelectMessage:conversation:';
    procedure didSelectMessage_conversation (message_: MSMessage; conversation: MSConversation); message 'didSelectMessage:conversation:';
    procedure didReceiveMessage_conversation (message_: MSMessage; conversation: MSConversation); message 'didReceiveMessage:conversation:';
    procedure didStartSendingMessage_conversation (message_: MSMessage; conversation: MSConversation); message 'didStartSendingMessage:conversation:';
    procedure didCancelSendingMessage_conversation (message_: MSMessage; conversation: MSConversation); message 'didCancelSendingMessage:conversation:';
    procedure willTransitionToPresentationStyle (presentationStyle_: MSMessagesAppPresentationStyle); message 'willTransitionToPresentationStyle:';
    procedure didTransitionToPresentationStyle (presentationStyle_: MSMessagesAppPresentationStyle); message 'didTransitionToPresentationStyle:';
  end;
{$endif}

