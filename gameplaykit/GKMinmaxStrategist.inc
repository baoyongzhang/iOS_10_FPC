{ Parsed from GameplayKit.framework GKMinmaxStrategist.h }

{$ifdef TYPES}
type
  GKMinmaxStrategistPtr = ^GKMinmaxStrategist;
{$endif}

{$ifdef CLASSES}

type
  GKMinmaxStrategist = objcclass external (NSObject, GKStrategistProtocol)
  public
    procedure setMaxLookAheadDepth(newValue: NSInteger); message 'setMaxLookAheadDepth:';
    function maxLookAheadDepth: NSInteger; message 'maxLookAheadDepth';
    function bestMoveForPlayer (player: GKGameModelPlayerProtocol): nullable GKGameModelUpdateProtocol; message 'bestMoveForPlayer:';
    function randomMoveForPlayer_fromNumberOfBestMoves (player: GKGameModelPlayerProtocol; numMovesToConsider: NSInteger): nullable GKGameModelUpdateProtocol; message 'randomMoveForPlayer:fromNumberOfBestMoves:';

    { Adopted protocols }
    function bestMoveForActivePlayer: nullable GKGameModelUpdateProtocol; message 'bestMoveForActivePlayer';
    procedure setGameModel(newValue: GKGameModelProtocol); message 'setGameModel:';
    function gameModel: GKGameModelProtocol; message 'gameModel';
    procedure setRandomSource(newValue: GKRandomProtocol); message 'setRandomSource:';
    function randomSource: GKRandomProtocol; message 'randomSource';
  end;
{$endif}

