{ Parsed from GameKit.framework GKGameSession.h }

{$ifdef TYPES}
type
  GKGameSessionPtr = ^GKGameSession;
{$endif}

{$ifdef TYPES}
type
  GKConnectionState = NSInteger;
  GKConnectionStatePtr = ^GKConnectionState;

const
  GKConnectionStateNotConnected = 0;
  GKConnectionStateConnected = 1;

type
  GKTransportType = NSInteger;
  GKTransportTypePtr = ^GKTransportType;

const
  GKTransportTypeUnreliable = 0;
  GKTransportTypeReliable = 1;
{$endif}

{$ifdef CLASSES}

type
  GKGameSession = objcclass external (NSObject)
  private
    _identifier: NSString;
    _title: NSString;
    _owner: GKCloudPlayer;
    _players: GKCloudPlayer *ProtocolPtr;
    _lastModifiedDate: NSDate;
    _lastModifiedPlayer: GKCloudPlayer;
    _serverChangeTag: NSString;
    _maxNumberOfConnectedPlayers: NSInteger;
    _playerStates: NSNumber *Protocol *>Ptr;
  public
    function identifier: NSString; message 'identifier';
    function title: NSString; message 'title';
    function owner: GKCloudPlayer; message 'owner';
    function players: GKCloudPlayer *ProtocolPtr; message 'players';
    function lastModifiedDate: NSDate; message 'lastModifiedDate';
    function lastModifiedPlayer: GKCloudPlayer; message 'lastModifiedPlayer';
    function maxNumberOfConnectedPlayers: NSInteger; message 'maxNumberOfConnectedPlayers';
    function badgedPlayers: GKCloudPlayer *ProtocolPtr; message 'badgedPlayers';
    class procedure createSessionInContainer_withTitle_maxConnectedPlayers_completionHandler (containerName: NSString * __nullable; title_: NSString; maxPlayers: NSInteger; completionHandler: OpaqueCBlock); message 'createSessionInContainer:withTitle:maxConnectedPlayers:completionHandler:';
    class procedure loadSessionsInContainer_completionHandler (containerName: NSString * __nullable; completionHandler: OpaqueCBlock); message 'loadSessionsInContainer:completionHandler:';
    class procedure loadSessionWithIdentifier_completionHandler (identifier_: NSString; completionHandler: OpaqueCBlock); message 'loadSessionWithIdentifier:completionHandler:';
    class procedure removeSessionWithIdentifier_completionHandler (identifier_: NSString; completionHandler: OpaqueCBlock); message 'removeSessionWithIdentifier:completionHandler:';
    procedure getShareURLWithCompletionHandler (completionHandler: OpaqueCBlock); message 'getShareURLWithCompletionHandler:';
    procedure loadDataWithCompletionHandler (completionHandler: OpaqueCBlock); message 'loadDataWithCompletionHandler:';
    procedure saveData_completionHandler (data: NSData; completionHandler: OpaqueCBlock); message 'saveData:completionHandler:';
    procedure setConnectionState_completionHandler (state: GKConnectionState; completionHandler: OpaqueCBlock); message 'setConnectionState:completionHandler:';
    function playersWithConnectionState (state: GKConnectionState): GKCloudPlayer *ProtocolPtr; message 'playersWithConnectionState:';
    procedure sendData_withTransportType_completionHandler (data: NSData; transport: GKTransportType; completionHandler: OpaqueCBlock); message 'sendData:withTransportType:completionHandler:';
    procedure sendMessageWithLocalizedFormatKey_arguments_data_toPlayers_badgePlayers_completionHandler (key: NSString; arguments: NSString *ProtocolPtr; data: NSData * __nullable; players_: GKCloudPlayer *ProtocolPtr; badgePlayers: boolean; completionHandler: OpaqueCBlock); message 'sendMessageWithLocalizedFormatKey:arguments:data:toPlayers:badgePlayers:completionHandler:';
    procedure clearBadgeForPlayers_completionHandler (players_: GKCloudPlayer *ProtocolPtr; completionHandler: OpaqueCBlock); message 'clearBadgeForPlayers:completionHandler:';
  end;
{$endif}

