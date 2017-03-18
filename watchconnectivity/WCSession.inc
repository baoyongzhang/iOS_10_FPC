{ Parsed from WatchConnectivity.framework WCSession.h }

{$ifdef TYPES}
type
  WCSessionPtr = ^WCSession;
  WCSessionDelegateProtocolPtr = ^WCSessionDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  WCSessionActivationState = NSInteger;
  WCSessionActivationStatePtr = ^WCSessionActivationState;

const
  WCSessionActivationStateNotActivated = 0;
  WCSessionActivationStateInactive = 1;
  WCSessionActivationStateActivated = 2;
{$endif}

{$ifdef CLASSES}

type
  WCSession = objcclass external (NSObject)
  public
    class function isSupported: boolean; message 'isSupported';
    class function defaultSession: WCSession; message 'defaultSession';
    function init: instancetype; message 'init';
    procedure setDelegate(newValue: WCSessionDelegateProtocol); message 'setDelegate:';
    function delegate: WCSessionDelegateProtocol; message 'delegate';
    procedure activateSession; message 'activateSession';
    function activationState: WCSessionActivationState; message 'activationState';
    function hasContentPending: boolean; message 'hasContentPending';
    function isPaired: BOOL paired; message 'isPaired';
    function isWatchAppInstalled: BOOL watchAppInstalled; message 'isWatchAppInstalled';
    function isComplicationEnabled: BOOL complicationEnabled; message 'isComplicationEnabled';
    function __WATCHOS_UNAVAILABLE_: NSUInteger remainingComplicationUserInfoTransfers; message 'WATCHOS_UNAVAILABLE';
    function __WATCHOS_UNAVAILABLE_: NSURL *watchDirectoryURL; message 'WATCHOS_UNAVAILABLE';
    function isReachable: boolean; message 'isReachable';
    function __IOS_UNAVAILABLE_: BOOL iOSDeviceNeedsUnlockAfterRebootForReachability; message 'IOS_UNAVAILABLE';
    procedure sendMessage_replyHandler_errorHandler (message_: NSDictionary; replyHandler: OpaqueCBlock; errorHandler: OpaqueCBlock); message 'sendMessage:replyHandler:errorHandler:';
    procedure sendMessageData_replyHandler_errorHandler (data: NSData; replyHandler: OpaqueCBlock; errorHandler: OpaqueCBlock); message 'sendMessageData:replyHandler:errorHandler:';
    function applicationContext: NSDictionary; message 'applicationContext';
    function updateApplicationContext_error (applicationContext_: NSDictionary; error: NSErrorPtr): boolean; message 'updateApplicationContext:error:';
    function receivedApplicationContext: NSDictionary; message 'receivedApplicationContext';
    function transferUserInfo (userInfo: NSDictionary): WCSessionUserInfoTransfer; message 'transferUserInfo:';
    function transferCurrentComplicationUserInfo (userInfo: NSDictionary): WCSessionUserInfoTransfer; message 'transferCurrentComplicationUserInfo:';
    function outstandingUserInfoTransfers: WCSessionUserInfoTransfer *ProtocolPtr; message 'outstandingUserInfoTransfers';
    function transferFile_metadata (file_: NSURL; metadata: nullable NSDictionaryPtr): WCSessionFileTransfer; message 'transferFile:metadata:';
    function outstandingFileTransfers: WCSessionFileTransfer *ProtocolPtr; message 'outstandingFileTransfers';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  WCSessionDelegateProtocol = objcprotocol external name 'WCSessionDelegate' (NSObjectProtocol)
    procedure session_activationDidCompleteWithState_error (session: WCSession; activationState: WCSessionActivationState; error: nullable NSErrorPtr); message 'session:activationDidCompleteWithState:error:'; { available in 9.3 }
    procedure sessionDidBecomeInactive (session: WCSession); message 'sessionDidBecomeInactive:'; { available in 9.3 }
    procedure sessionDidDeactivate (session: WCSession); message 'sessionDidDeactivate:'; { available in 9.3 }
  optional
    procedure sessionWatchStateDidChange (session: WCSession); message 'sessionWatchStateDidChange:';
    procedure sessionReachabilityDidChange (session: WCSession); message 'sessionReachabilityDidChange:';
    procedure session_didReceiveMessage (session: WCSession; message_: NSDictionary); message 'session:didReceiveMessage:';
    procedure session_didReceiveMessage_replyHandler (session: WCSession; message_: NSDictionary; replyHandler: OpaqueCBlock); message 'session:didReceiveMessage:replyHandler:';
    procedure session_didReceiveMessageData (session: WCSession; messageData: NSData); message 'session:didReceiveMessageData:';
    procedure session_didReceiveMessageData_replyHandler (session: WCSession; messageData: NSData; replyHandler: OpaqueCBlock); message 'session:didReceiveMessageData:replyHandler:';
    procedure session_didReceiveApplicationContext (session: WCSession; applicationContext: NSDictionary); message 'session:didReceiveApplicationContext:';
    procedure session_didFinishUserInfoTransfer_error (session: WCSession * __nonnull; userInfoTransfer: WCSessionUserInfoTransfer; error: nullable NSErrorPtr); message 'session:didFinishUserInfoTransfer:error:';
    procedure session_didReceiveUserInfo (session: WCSession; userInfo: NSDictionary); message 'session:didReceiveUserInfo:';
    procedure session_didFinishFileTransfer_error (session: WCSession; fileTransfer: WCSessionFileTransfer; error: nullable NSErrorPtr); message 'session:didFinishFileTransfer:error:';
    procedure session_didReceiveFile (session: WCSession; file_: WCSessionFile); message 'session:didReceiveFile:';
  end;
{$endif}

