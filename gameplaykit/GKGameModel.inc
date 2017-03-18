{ Parsed from GameplayKit.framework GKGameModel.h }

{$ifdef TYPES}
type
  GKGameModelUpdateProtocolPtr = ^GKGameModelUpdateProtocol;
  GKGameModelPlayerProtocolPtr = ^GKGameModelPlayerProtocol;
  GKGameModelProtocolPtr = ^GKGameModelProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  GKGameModelUpdateProtocol = objcprotocol external name 'GKGameModelUpdate' (NSObjectProtocol)
    procedure setValue(newValue: NSInteger); message 'setValue:';
    function value: NSInteger; message 'value';
  end;

type
  GKGameModelPlayerProtocol = objcprotocol external name 'GKGameModelPlayer' (NSObjectProtocol)
    function playerId: NSInteger; message 'playerId';
  end;

type
  GKGameModelProtocol = objcprotocol external name 'GKGameModel' (NSObjectProtocol, NSCopyingProtocol)
    function players: GKGameModelPlayerProtocolProtocolPtr; message 'players';
    function activePlayer: GKGameModelPlayerProtocol; message 'activePlayer';
    procedure setGameModel (gameModel: GKGameModelProtocol); message 'setGameModel:';
    function gameModelUpdatesForPlayer (player: GKGameModelPlayerProtocol): nullable id<GKGameModelUpdateProtocol>Ptr; message 'gameModelUpdatesForPlayer:';
    procedure applyGameModelUpdate (gameModelUpdate: GKGameModelUpdateProtocol); message 'applyGameModelUpdate:';
  optional
    function scoreForPlayer (player: GKGameModelPlayerProtocol): NSInteger; message 'scoreForPlayer:';
    function isWinForPlayer (player: GKGameModelPlayerProtocol): boolean; message 'isWinForPlayer:';
    function isLossForPlayer (player: GKGameModelPlayerProtocol): boolean; message 'isLossForPlayer:';
    procedure unapplyGameModelUpdate (gameModelUpdate: GKGameModelUpdateProtocol); message 'unapplyGameModelUpdate:';
  end;
{$endif}

