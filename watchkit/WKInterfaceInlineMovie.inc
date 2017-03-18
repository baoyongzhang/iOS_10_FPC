{ Parsed from WatchKit.framework WKInterfaceInlineMovie.h }

{$ifdef TYPES}
type
  WKInterfaceInlineMoviePtr = ^WKInterfaceInlineMovie;
{$endif}

{$ifdef CLASSES}

type
  WKInterfaceInlineMovie = objcclass external (WKInterfaceObject)
  public
    procedure setMovieURL (URL: NSURL); message 'setMovieURL:';
    procedure setVideoGravity (videoGravity: WKVideoGravity); message 'setVideoGravity:';
    procedure setLoops (loops: boolean); message 'setLoops:';
    procedure setAutoplays (autoplays: boolean); message 'setAutoplays:';
    procedure setPosterImage (posterImage: nullable WKImagePtr); message 'setPosterImage:';
    procedure play; message 'play';
    procedure playFromBeginning; message 'playFromBeginning';
    procedure pause; message 'pause';
  end;
{$endif}

