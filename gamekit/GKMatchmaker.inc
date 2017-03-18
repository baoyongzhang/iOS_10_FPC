{ Parsed from GameKit.framework GKMatchmaker.h }

{ Types from GKMatchRequest }
{$ifdef TYPES}

type
  GKMatchType = NSUInteger;
type
  GKMatchTypePtr = ^GKMatchType;

const
  GKMatchTypePeerToPeer = 0;
  GKMatchTypeHosted = 1;
  GKMatchTypeTurnBased = 2;
{$endif}


{$ifdef TYPES}
type
  GKMatchRequestPtr = ^GKMatchRequest;
  GKInvitePtr = ^GKInvite;
  GKMatchmakerPtr = ^GKMatchmaker;
  GKInviteEventListenerProtocolPtr = ^GKInviteEventListenerProtocol;
{$endif}

{$ifdef TYPES}
type
  GKInviteRecipientResponse = NSInteger;
  GKInviteRecipientResponsePtr = ^GKInviteRecipientResponse;

const
  GKInviteRecipientResponseAccepted = 0;
  GKInviteRecipientResponseDeclined = 1;
  GKInviteRecipientResponseFailed = 2;
  GKInviteRecipientResponseIncompatible = 3;
  GKInviteRecipientResponseUnableToConnect = 4;
  GKInviteRecipientResponseNoAnswer = 5;
  GKInviteeResponseAccepted = GKInviteRecipientResponseAccepted;
  GKInviteeResponseDeclined = GKInviteRecipientResponseDeclined;
  GKInviteeResponseFailed = GKInviteRecipientResponseFailed;
  GKInviteeResponseIncompatible = GKInviteRecipientResponseIncompatible;
  GKInviteeResponseUnableToConnect = GKInviteRecipientResponseUnableToConnect;
  GKInviteeResponseNoAnswer = GKInviteRecipientResponseNoAnswer;

type
  GKInviteeResponse = GKInviteRecipientResponse { available in 3_0 };
  GKInviteeResponsePtr = ^GKInviteeResponse { available in 3_0 };
{$endif}

{$ifdef CLASSES}

type
  GKMatchRequest = objcclass external (NSObject)
  public
    procedure setMinPlayers(newValue: NSUInteger); message 'setMinPlayers:';
    function minPlayers: NSUInteger; message 'minPlayers';
    procedure setMaxPlayers(newValue: NSUInteger); message 'setMaxPlayers:';
    function maxPlayers: NSUInteger; message 'maxPlayers';
    procedure setPlayerGroup(newValue: NSUInteger); message 'setPlayerGroup:';
    function playerGroup: NSUInteger; message 'playerGroup';
    procedure setPlayerAttributes(newValue: cuint32); message 'setPlayerAttributes:';
    function playerAttributes: cuint32; message 'playerAttributes';
    procedure setRecipients(newValue: GKPlayer *ProtocolPtr); message 'setRecipients:';
    function recipients: GKPlayer *ProtocolPtr; message 'recipients';
    procedure setPlayersToInvite(newValue: NSString *ProtocolPtr); message 'setPlayersToInvite:';
    function playersToInvite: NSString *ProtocolPtr; message 'playersToInvite';
    procedure setInviteMessage(newValue: NSString); message 'setInviteMessage:';
    function inviteMessage: NSString; message 'inviteMessage';
    procedure setDefaultNumberOfPlayers(newValue: NSUInteger); message 'setDefaultNumberOfPlayers:';
    function defaultNumberOfPlayers: NSUInteger; message 'defaultNumberOfPlayers';
    procedure setRecipientResponseHandler(newValue: OpaqueCBlock); message 'setRecipientResponseHandler:';
    function recipientResponseHandler: OpaqueCBlock; message 'recipientResponseHandler';
    procedure setInviteeResponseHandler(newValue: OpaqueCBlock); message 'setInviteeResponseHandler:';
    function inviteeResponseHandler: OpaqueCBlock; message 'inviteeResponseHandler';
    class function maxPlayersAllowedForMatchOfType (matchType: GKMatchType): NSUInteger; message 'maxPlayersAllowedForMatchOfType:'; { available in 10_9, 6_0 }
  end;

type
  GKInvite = objcclass external (NSObject)
  public
    function sender: GKPlayer; message 'sender';
    function inviter: NSString; message 'inviter';
    function isHosted: boolean; message 'isHosted';
    function playerGroup: NSUInteger; message 'playerGroup';
    function playerAttributes: cuint32; message 'playerAttributes';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  GKInviteEventListenerProtocol = objcprotocol external name 'GKInviteEventListener'
  optional
    procedure player_didAcceptInvite (player: GKPlayer; invite: GKInvite); message 'player:didAcceptInvite:'; { available in 10_10, 7_0 }
    procedure player_didRequestMatchWithRecipients (player: GKPlayer; recipientPlayers: GKPlayer *ProtocolPtr); message 'player:didRequestMatchWithRecipients:'; { available in 10_10, 8_0 }
    procedure player_didRequestMatchWithPlayers (player: GKPlayer; playerIDsToInvite: NSString *ProtocolPtr); message 'player:didRequestMatchWithPlayers:'; deprecated 'in 7_0, 8_0, "use player:didRequestMatchWithRecipients:"';
  end;
{$endif}

{$ifdef CLASSES}

type
  GKMatchmaker = objcclass external (NSObject)
  public
    class function sharedMatchmaker: GKMatchmaker; message 'sharedMatchmaker';
    procedure matchForInvite_completionHandler (invite: GKInvite; completionHandler: void(^__nullable)(GKMatch * __nullable match, NSError * __nullable error)); message 'matchForInvite:completionHandler:'; { available in 10_9, 6_0 }
    procedure findMatchForRequest_withCompletionHandler (request: GKMatchRequest; completionHandler: void(^__nullable)(GKMatch * __nullable match, NSError * __nullable error)); message 'findMatchForRequest:withCompletionHandler:';
    procedure findPlayersForHostedRequest_withCompletionHandler (request: GKMatchRequest; completionHandler: void(^__nullable)(GKPlayer *Protocol * __nullable players, NSError * __nullable error)); message 'findPlayersForHostedRequest:withCompletionHandler:'; { available in 10_10, 8_0 }
    procedure addPlayersToMatch_matchRequest_completionHandler (match: GKMatch; matchRequest: GKMatchRequest; completionHandler: void (^__nullable)(NSError * __nullable error)); message 'addPlayersToMatch:matchRequest:completionHandler:';
    procedure cancel; message 'cancel';
    procedure cancelPendingInviteToPlayer (player: GKPlayer); message 'cancelPendingInviteToPlayer:'; { available in 10_10, 8_0 }
    procedure finishMatchmakingForMatch (match: GKMatch); message 'finishMatchmakingForMatch:'; { available in 10_9, 6_0 }
    procedure queryPlayerGroupActivity_withCompletionHandler (playerGroup: NSUInteger; completionHandler: void(^__nullable)(NSInteger activity, NSError * __nullable error)); message 'queryPlayerGroupActivity:withCompletionHandler:';
    procedure queryActivityWithCompletionHandler (completionHandler: void(^__nullable)(NSInteger activity, NSError * __nullable error)); message 'queryActivityWithCompletionHandler:';
    procedure startBrowsingForNearbyPlayersWithHandler (reachableHandler: void(^__nullable)(GKPlayer *player, BOOL reachable)); message 'startBrowsingForNearbyPlayersWithHandler:'; { available in 10_10, 8_0 }
    procedure stopBrowsingForNearbyPlayers; message 'stopBrowsingForNearbyPlayers'; { available in 10_9, 6_0 }
  end;


type
  GKDeprecated = objccategory external (GKMatchmaker)
    procedure setInviteHandler(newValue: OpaqueCBlock); message 'setInviteHandler:';
    function inviteHandler: OpaqueCBlock; message 'inviteHandler';
    procedure startBrowsingForNearbyPlayersWithReachableHandler (reachableHandler: void(^__nullable)(NSString *playerID, BOOL reachable)); message 'startBrowsingForNearbyPlayersWithReachableHandler:'; deprecated 'in 10_9, 10_10, 6_0, 8_0';
    procedure cancelInviteToPlayer (playerID: NSString); message 'cancelInviteToPlayer:'; deprecated 'in 10_9, 10_10, 6_0, 8_0, "use cancelPendingInviteToPlayer:"';
    procedure findPlayersForHostedMatchRequest_withCompletionHandler (request: GKMatchRequest; completionHandler: void(^__nullable)(NSString *Protocol * __nullable playerIDs, NSError * __nullable error)); message 'findPlayersForHostedMatchRequest:withCompletionHandler:'; deprecated 'in 10_8, 10_10, 4_1, 8_0, "use findPlayersForHostedRequest:"';
  end;
{$endif}

