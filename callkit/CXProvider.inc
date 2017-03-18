{ Parsed from CallKit.framework CXProvider.h }

{$ifdef TYPES}
type
  CXProviderPtr = ^CXProvider;
  CXProviderDelegateProtocolPtr = ^CXProviderDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  CXCallEndedReason = NSInteger;
  CXCallEndedReasonPtr = ^CXCallEndedReason;

const
  CXCallEndedReasonFailed = 1;
  CXCallEndedReasonRemoteEnded = 2;
  CXCallEndedReasonUnanswered = 3;
  CXCallEndedReasonAnsweredElsewhere = 4;
  CXCallEndedReasonDeclinedElsewhere = 5;
{$endif}

{$ifdef PROTOCOLS}

type
  CXProviderDelegateProtocol = objcprotocol external name 'CXProviderDelegate' (NSObjectProtocol)
    procedure providerDidReset (provider: CXProvider); message 'providerDidReset:';
  optional
    procedure providerDidBegin (provider: CXProvider); message 'providerDidBegin:';
    function provider_executeTransaction (provider: CXProvider; transaction: CXTransaction): boolean; message 'provider:executeTransaction:';
    procedure provider_performStartCallAction (provider: CXProvider; action: CXStartCallAction); message 'provider:performStartCallAction:';
    procedure provider_performAnswerCallAction (provider: CXProvider; action: CXAnswerCallAction); message 'provider:performAnswerCallAction:';
    procedure provider_performEndCallAction (provider: CXProvider; action: CXEndCallAction); message 'provider:performEndCallAction:';
    procedure provider_performSetHeldCallAction (provider: CXProvider; action: CXSetHeldCallAction); message 'provider:performSetHeldCallAction:';
    procedure provider_performSetMutedCallAction (provider: CXProvider; action: CXSetMutedCallAction); message 'provider:performSetMutedCallAction:';
    procedure provider_performSetGroupCallAction (provider: CXProvider; action: CXSetGroupCallAction); message 'provider:performSetGroupCallAction:';
    procedure provider_performPlayDTMFCallAction (provider: CXProvider; action: CXPlayDTMFCallAction); message 'provider:performPlayDTMFCallAction:';
    procedure provider_timedOutPerformingAction (provider: CXProvider; action: CXAction); message 'provider:timedOutPerformingAction:';
    procedure provider_didActivateAudioSession (provider: CXProvider; audioSession: AVAudioSession); message 'provider:didActivateAudioSession:';
    procedure provider_didDeactivateAudioSession (provider: CXProvider; audioSession: AVAudioSession); message 'provider:didDeactivateAudioSession:';
  end;
{$endif}

{$ifdef CLASSES}

type
  CXProvider = objcclass external (NSObject)
  public
    function initWithConfiguration (configuration: CXProviderConfiguration): instancetype; message 'initWithConfiguration:'; { NS_DESIGNATED_INITIALIZER }
    function init: instancetype; message 'init';
    procedure setDelegate_queue (delegate: nullable CXProviderDelegateProtocol; queue: nullable dispatch_queue_t); message 'setDelegate:queue:';
    procedure reportNewIncomingCallWithUUID_update_completion (UUID: NSUUID; update: CXCallUpdate; completion: OpaqueCBlock); message 'reportNewIncomingCallWithUUID:update:completion:';
    procedure reportCallWithUUID_updated (UUID: NSUUID; update: CXCallUpdate); message 'reportCallWithUUID:updated:';
    procedure reportCallWithUUID_endedAtDate_reason (UUID: NSUUID; dateEnded: nullable NSDatePtr; endedReason: CXCallEndedReason); message 'reportCallWithUUID:endedAtDate:reason:';
    procedure reportOutgoingCallWithUUID_startedConnectingAtDate (UUID: NSUUID; dateStartedConnecting: nullable NSDatePtr); message 'reportOutgoingCallWithUUID:startedConnectingAtDate:';
    procedure reportOutgoingCallWithUUID_connectedAtDate (UUID: NSUUID; dateConnected: nullable NSDatePtr); message 'reportOutgoingCallWithUUID:connectedAtDate:';
    procedure setConfiguration(newValue: CXProviderConfiguration); message 'setConfiguration:';
    function configuration: CXProviderConfiguration; message 'configuration';
    procedure invalidate; message 'invalidate';
    function pendingTransactions: CXTransaction *ProtocolPtr; message 'pendingTransactions';
    function pendingCallActionsOfClass_withCallUUID (callActionClass: pobjc_class; callUUID: NSUUID): __kindof CXCallAction *ProtocolPtr; message 'pendingCallActionsOfClass:withCallUUID:';
  end;
{$endif}

