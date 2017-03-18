{ Parsed from GameKit.framework GKTurnBasedMatch.h }

{$ifdef TYPES}
type
  GKTurnBasedParticipantPtr = ^GKTurnBasedParticipant;
  GKTurnBasedMatchPtr = ^GKTurnBasedMatch;
  GKTurnBasedExchangePtr = ^GKTurnBasedExchange;
  GKTurnBasedEventHandlerPtr = ^GKTurnBasedEventHandler;
  GKTurnBasedEventListenerProtocolPtr = ^GKTurnBasedEventListenerProtocol;
  GKTurnBasedEventHandlerDelegateProtocolPtr = ^GKTurnBasedEventHandlerDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  GKTurnBasedMatchStatus = NSInteger;
  GKTurnBasedMatchStatusPtr = ^GKTurnBasedMatchStatus;

const
  GKTurnBasedMatchStatusUnknown = 0;
  GKTurnBasedMatchStatusOpen = 1;
  GKTurnBasedMatchStatusEnded = 2;
  GKTurnBasedMatchStatusMatching = 3;

type
  GKTurnBasedParticipantStatus = NSInteger;
  GKTurnBasedParticipantStatusPtr = ^GKTurnBasedParticipantStatus;

const
  GKTurnBasedParticipantStatusUnknown = 0;
  GKTurnBasedParticipantStatusInvited = 1;
  GKTurnBasedParticipantStatusDeclined = 2;
  GKTurnBasedParticipantStatusMatching = 3;
  GKTurnBasedParticipantStatusActive = 4;
  GKTurnBasedParticipantStatusDone = 5;

type
  GKTurnBasedMatchOutcome = NSInteger;
  GKTurnBasedMatchOutcomePtr = ^GKTurnBasedMatchOutcome;

const
  GKTurnBasedMatchOutcomeNone = 0;
  GKTurnBasedMatchOutcomeQuit = 1;
  GKTurnBasedMatchOutcomeWon = 2;
  GKTurnBasedMatchOutcomeLost = 3;
  GKTurnBasedMatchOutcomeTied = 4;
  GKTurnBasedMatchOutcomeTimeExpired = 5;
  GKTurnBasedMatchOutcomeFirst = 6;
  GKTurnBasedMatchOutcomeSecond = 7;
  GKTurnBasedMatchOutcomeThird = 8;
  GKTurnBasedMatchOutcomeFourth = 9;
  GKTurnBasedMatchOutcomeCustomRange = $00FF0000;
{$endif}

{$ifdef CLASSES}

type
  GKTurnBasedParticipant = objcclass external (NSObject)
  public
    function player: GKPlayer; message 'player';
    function lastTurnDate: NSDate; message 'lastTurnDate';
    function status: GKTurnBasedParticipantStatus; message 'status';
    procedure setMatchOutcome(newValue: GKTurnBasedMatchOutcome); message 'setMatchOutcome:';
    function matchOutcome: GKTurnBasedMatchOutcome; message 'matchOutcome';
    function timeoutDate: NSDate; message 'timeoutDate';
    function playerID: NSString; message 'playerID';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  GKTurnBasedEventListenerProtocol = objcprotocol external name 'GKTurnBasedEventListener'
  optional
    procedure player_didRequestMatchWithOtherPlayers (player: GKPlayer; playersToInvite: GKPlayer *ProtocolPtr); message 'player:didRequestMatchWithOtherPlayers:'; { available in 10_10, 8_0 }
    procedure player_receivedTurnEventForMatch_didBecomeActive (player: GKPlayer; match: GKTurnBasedMatch; didBecomeActive: boolean); message 'player:receivedTurnEventForMatch:didBecomeActive:'; { available in 10_10, 7_0 }
    procedure player_matchEnded (player: GKPlayer; match: GKTurnBasedMatch); message 'player:matchEnded:';
    procedure player_receivedExchangeRequest_forMatch (player: GKPlayer; exchange: GKTurnBasedExchange; match: GKTurnBasedMatch); message 'player:receivedExchangeRequest:forMatch:'; { available in 10_10, 7_0 }
    procedure player_receivedExchangeCancellation_forMatch (player: GKPlayer; exchange: GKTurnBasedExchange; match: GKTurnBasedMatch); message 'player:receivedExchangeCancellation:forMatch:'; { available in 10_10, 7_0 }
    procedure player_receivedExchangeReplies_forCompletedExchange_forMatch (player: GKPlayer; replies: GKTurnBasedExchangeReply *ProtocolPtr; exchange: GKTurnBasedExchange; match: GKTurnBasedMatch); message 'player:receivedExchangeReplies:forCompletedExchange:forMatch:'; { available in 10_10, 7_0 }
    procedure player_wantsToQuitMatch (player: GKPlayer; match: GKTurnBasedMatch); message 'player:wantsToQuitMatch:'; { available in 10_11, 9_0 }
    procedure player_didRequestMatchWithPlayers (player: GKPlayer; playerIDsToInvite: NSString *ProtocolPtr); message 'player:didRequestMatchWithPlayers:'; deprecated 'in 7_0, 8_0, "use didRequestMatchWithOtherPlayers"';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  GKTurnTimeoutDefault: NSTimeInterval { available in 10_9, 6_0 }; cvar; external;
  GKTurnTimeoutNone: NSTimeInterval { available in 10_9, 6_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  GKTurnBasedMatch = objcclass external (NSObject)
  public
    function matchID: NSString; message 'matchID';
    function creationDate: NSDate; message 'creationDate';
    function participants: GKTurnBasedParticipant *ProtocolPtr; message 'participants';
    function status: GKTurnBasedMatchStatus; message 'status';
    function currentParticipant: GKTurnBasedParticipant; message 'currentParticipant';
    function matchData: NSData; message 'matchData';
    procedure setLocalizableMessageWithKey_arguments (key: NSString; arguments: nullable NSString *ProtocolPtr); message 'setLocalizableMessageWithKey:arguments:'; { available in 10_10, 7_0 }
    procedure setMessage(newValue: NSString); message 'setMessage:';
    function message_: NSString; message 'message';
    function matchDataMaximumSize: NSUInteger; message 'matchDataMaximumSize';
    function exchanges: GKTurnBasedExchange *ProtocolPtr; message 'exchanges';
    function activeExchanges: GKTurnBasedExchange *ProtocolPtr; message 'activeExchanges';
    function completedExchanges: GKTurnBasedExchange *ProtocolPtr; message 'completedExchanges';
    function exchangeDataMaximumSize: NSUInteger; message 'exchangeDataMaximumSize';
    function exchangeMaxInitiatedExchangesPerPlayer: NSUInteger; message 'exchangeMaxInitiatedExchangesPerPlayer';
    class procedure findMatchForRequest_withCompletionHandler (request: GKMatchRequest; completionHandler: OpaqueCBlock); message 'findMatchForRequest:withCompletionHandler:';
    class procedure loadMatchesWithCompletionHandler (completionHandler: void(^__nullable)(GKTurnBasedMatch *Protocol * __nullable matches, NSError * __nullable error)); message 'loadMatchesWithCompletionHandler:';
    class procedure loadMatchWithID_withCompletionHandler (matchID_: NSString; completionHandler: void(^__nullable)(GKTurnBasedMatch * __nullable match, NSError * __nullable error)); message 'loadMatchWithID:withCompletionHandler:'; { available in 10_8, 5_0 }
    procedure rematchWithCompletionHandler (completionHandler: void(^__nullable)(GKTurnBasedMatch * __nullable match, NSError * __nullable error)); message 'rematchWithCompletionHandler:'; { available in 10_9, 6_0 }
    procedure acceptInviteWithCompletionHandler (completionHandler: void(^__nullable)(GKTurnBasedMatch * __nullable match, NSError * __nullable error)); message 'acceptInviteWithCompletionHandler:'; { available in 10_8, 5_0 }
    procedure declineInviteWithCompletionHandler (completionHandler: void(^__nullable)(NSError * __nullable error)); message 'declineInviteWithCompletionHandler:'; { available in 10_8, 5_0 }
    procedure removeWithCompletionHandler (completionHandler: void(^__nullable)(NSError * __nullable error)); message 'removeWithCompletionHandler:';
    procedure loadMatchDataWithCompletionHandler (completionHandler: void(^__nullable)(NSData * __nullable matchData, NSError * __nullable error)); message 'loadMatchDataWithCompletionHandler:';
    procedure endTurnWithNextParticipants_turnTimeout_matchData_completionHandler (nextParticipants: GKTurnBasedParticipant *ProtocolPtr; timeout: NSTimeInterval; matchData_: NSData; completionHandler: void(^__nullable)(NSError * __nullable error)); message 'endTurnWithNextParticipants:turnTimeout:matchData:completionHandler:'; { available in 10_9, 6_0 }
    procedure participantQuitInTurnWithOutcome_nextParticipants_turnTimeout_matchData_completionHandler (matchOutcome: GKTurnBasedMatchOutcome; nextParticipants: GKTurnBasedParticipant *ProtocolPtr; timeout: NSTimeInterval; matchData_: NSData; completionHandler: void(^__nullable)(NSError * __nullable error)); message 'participantQuitInTurnWithOutcome:nextParticipants:turnTimeout:matchData:completionHandler:'; { available in 10_9, 6_0 }
    procedure participantQuitOutOfTurnWithOutcome_withCompletionHandler (matchOutcome: GKTurnBasedMatchOutcome; completionHandler: void(^__nullable)(NSError * __nullable error)); message 'participantQuitOutOfTurnWithOutcome:withCompletionHandler:';
    procedure endMatchInTurnWithMatchData_completionHandler (matchData_: NSData; completionHandler: void(^__nullable)(NSError * __nullable error)); message 'endMatchInTurnWithMatchData:completionHandler:';
    procedure endMatchInTurnWithMatchData_scores_achievements_completionHandler (matchData_: NSData; scores: nullable GKScore *ProtocolPtr; achievements: nullable GKAchievement *ProtocolPtr; completionHandler: void(^__nullable)(NSError * __nullable error)); message 'endMatchInTurnWithMatchData:scores:achievements:completionHandler:'; { available in 10_10, 7_0 }
    procedure saveCurrentTurnWithMatchData_completionHandler (matchData_: NSData; completionHandler: void(^__nullable)(NSError * __nullable error)); message 'saveCurrentTurnWithMatchData:completionHandler:'; { available in 10_8, 6_0 }
    procedure saveMergedMatchData_withResolvedExchanges_completionHandler (matchData_: NSData; exchanges_: GKTurnBasedExchange *ProtocolPtr; completionHandler: void(^__nullable)(NSError * __nullable error)); message 'saveMergedMatchData:withResolvedExchanges:completionHandler:'; { available in 10_10, 7_0 }
    procedure sendExchangeToParticipants_data_localizableMessageKey_arguments_timeout_completionHandler (participants_: GKTurnBasedParticipant *ProtocolPtr; data: NSData; key: NSString; arguments: NSString *ProtocolPtr; timeout: NSTimeInterval; completionHandler: void(^__nullable)(GKTurnBasedExchange *exchange, NSError *error)); message 'sendExchangeToParticipants:data:localizableMessageKey:arguments:timeout:completionHandler:'; { available in 10_10, 7_0 }
    procedure sendReminderToParticipants_localizableMessageKey_arguments_completionHandler (participants_: GKTurnBasedParticipant *ProtocolPtr; key: NSString; arguments: NSString *ProtocolPtr; completionHandler: void(^__nullable)(NSError * __nullable error)); message 'sendReminderToParticipants:localizableMessageKey:arguments:completionHandler:'; { available in 10_10, 7_0 }
    procedure endTurnWithNextParticipant_matchData_completionHandler (nextParticipant: GKTurnBasedParticipant; matchData_: NSData; completionHandler: void(^__nullable)(NSError * __nullable error)); message 'endTurnWithNextParticipant:matchData:completionHandler:'; deprecated 'in 10_8, 10_9, 5_0, 6_0, "Use endTurnWithNextParticipants:... instead"';
    procedure participantQuitInTurnWithOutcome_nextParticipant_matchData_completionHandler (matchOutcome: GKTurnBasedMatchOutcome; nextParticipant: GKTurnBasedParticipant; matchData_: NSData; completionHandler: void(^__nullable)(NSError * __nullable error)); message 'participantQuitInTurnWithOutcome:nextParticipant:matchData:completionHandler:'; deprecated 'in 10_8, 10_9, 5_0, 6_0, "Use participantQuitInTurnWithOutcome:nextParticipants:turnTimeout:... instead"';
  end;
{$endif}

{$ifdef TYPES}
type
  GKTurnBasedExchangeStatus = cint8;
  GKTurnBasedExchangeStatusPtr = ^GKTurnBasedExchangeStatus;

const
  GKTurnBasedExchangeStatusUnknown = 0;
  GKTurnBasedExchangeStatusActive = 1;
  GKTurnBasedExchangeStatusComplete = 2;
  GKTurnBasedExchangeStatusResolved = 3;
  GKTurnBasedExchangeStatusCanceled = 4;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  GKExchangeTimeoutDefault: NSTimeInterval { available in 10_10, 7_0 }; cvar; external;
  GKExchangeTimeoutNone: NSTimeInterval { available in 10_10, 7_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  GKTurnBasedExchange = objcclass external (NSObject)
  public
    function exchangeID: NSString; message 'exchangeID';
    function sender: GKTurnBasedParticipant; message 'sender';
    function recipients: GKTurnBasedParticipant *ProtocolPtr; message 'recipients';
    function status: GKTurnBasedExchangeStatus; message 'status';
    function message_: NSString; message 'message';
    function data: NSData; message 'data';
    function sendDate: NSDate; message 'sendDate';
    function timeoutDate: NSDate; message 'timeoutDate';
    function completionDate: NSDate; message 'completionDate';
    function replies: GKTurnBasedExchangeReply *ProtocolPtr; message 'replies';
    procedure cancelWithLocalizableMessageKey_arguments_completionHandler (key: NSString; arguments: NSString *ProtocolPtr; completionHandler: void(^__nullable)(NSError * __nullable error)); message 'cancelWithLocalizableMessageKey:arguments:completionHandler:'; { available in 10_10, 7_0 }
    procedure replyWithLocalizableMessageKey_arguments_data_completionHandler (key: NSString; arguments: NSString *ProtocolPtr; data_: NSData; completionHandler: void(^__nullable)(NSError * __nullable error)); message 'replyWithLocalizableMessageKey:arguments:data:completionHandler:'; { available in 10_10, 7_0 }
    function recipient: GKTurnBasedParticipant; message 'recipient';
    function message_: NSString; message 'message';
    function data_: NSData; message 'data';
    function replyDate: NSDate; message 'replyDate';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  GKTurnBasedEventHandlerDelegateProtocol = objcprotocol external name 'GKTurnBasedEventHandlerDelegate'
    procedure handleInviteFromGameCenter (playersToInvite: NSString *ProtocolPtr); message 'handleInviteFromGameCenter:'; deprecated 'in 10_8, 10_10, 5_0, 7_0';
    procedure handleTurnEventForMatch_didBecomeActive (match: GKTurnBasedMatch; didBecomeActive: boolean); message 'handleTurnEventForMatch:didBecomeActive:'; deprecated 'in 10_9, 10_10, 6_0, 7_0';
  optional
    procedure handleTurnEventForMatch (match: GKTurnBasedMatch); message 'handleTurnEventForMatch:'; deprecated 'in 10_8, 10_9, 5_0, 7_0';
    procedure handleMatchEnded (match: GKTurnBasedMatch); message 'handleMatchEnded:'; deprecated 'in 10_8, 10_10, 6_0, 7_0';
  end;
{$endif}

{$ifdef CLASSES}

type
  GKTurnBasedEventHandler = objcclass external (NSObject)
  public
    class function sharedTurnBasedEventHandler: GKTurnBasedEventHandler; message 'sharedTurnBasedEventHandler'; deprecated 'in 10_8, 10_10, 5_0, 7_0';
    procedure setDelegate(newValue: GKTurnBasedEventHandlerDelegateProtocol); message 'setDelegate:';
    function delegate: GKTurnBasedEventHandlerDelegateProtocol; message 'delegate';
  end;
{$endif}

