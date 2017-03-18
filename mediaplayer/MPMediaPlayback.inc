{ Parsed from MediaPlayer.framework MPMediaPlayback.h }

{$ifdef TYPES}
type
  MPMediaPlaybackProtocolPtr = ^MPMediaPlaybackProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  MPMediaPlaybackProtocol = objcprotocol external name 'MPMediaPlayback'
    procedure prepareToPlay; message 'prepareToPlay';
    function isPreparedToPlay: boolean; message 'isPreparedToPlay';
    procedure play; message 'play';
    procedure pause; message 'pause';
    procedure stop; message 'stop';
    procedure setCurrentPlaybackTime(newValue: NSTimeInterval); message 'setCurrentPlaybackTime:';
    function currentPlaybackTime: NSTimeInterval; message 'currentPlaybackTime';
    procedure setCurrentPlaybackRate(newValue: single); message 'setCurrentPlaybackRate:';
    function currentPlaybackRate: single; message 'currentPlaybackRate';
    procedure beginSeekingForward; message 'beginSeekingForward';
    procedure beginSeekingBackward; message 'beginSeekingBackward';
    procedure endSeeking; message 'endSeeking';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  MPMediaPlaybackIsPreparedToPlayDidChangeNotification: __TVOS_PROHIBITED NSStringPtr deprecated 'in 3_2, 9_0'; cvar; external;
{$endif}

