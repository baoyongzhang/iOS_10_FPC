{ Parsed from GameplayKit.framework GKStrategist.h }

{$ifdef TYPES}
type
  GKStrategistProtocolPtr = ^GKStrategistProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  GKStrategistProtocol = objcprotocol external name 'GKStrategist' (NSObjectProtocol)
    procedure setGameModel(newValue: GKGameModelProtocol); message 'setGameModel:';
    function gameModel: GKGameModelProtocol; message 'gameModel';
    procedure setRandomSource(newValue: GKRandomProtocol); message 'setRandomSource:';
    function randomSource: GKRandomProtocol; message 'randomSource';
    function bestMoveForActivePlayer: nullable GKGameModelUpdateProtocol; message 'bestMoveForActivePlayer';
  end;
{$endif}

