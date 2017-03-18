{ Parsed from WatchKit.framework WKInterfaceMovie.h }

{$ifdef TYPES}
type
  WKInterfaceMoviePtr = ^WKInterfaceMovie;
{$endif}

{$ifdef CLASSES}

type
  WKInterfaceMovie = objcclass external (WKInterfaceObject)
  public
    procedure setMovieURL (URL: NSURL); message 'setMovieURL:';
    procedure setVideoGravity (videoGravity: WKVideoGravity); message 'setVideoGravity:';
    procedure setLoops (loops: boolean); message 'setLoops:';
    procedure setPosterImage (posterImage: nullable WKImagePtr); message 'setPosterImage:';
  end;
{$endif}

