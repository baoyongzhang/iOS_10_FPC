{ Parsed from AVFoundation.framework AVPlayerLayer.h }

{$ifdef TYPES}
type
  AVPlayerLayerPtr = ^AVPlayerLayer;
{$endif}

{$ifdef CLASSES}

type
  AVPlayerLayer = objcclass external (CALayer)
  private
    _playerLayer: AVPlayerLayerInternal;
  public
    class function playerLayerWithPlayer (player: nullable AVPlayerPtr): AVPlayerLayer; message 'playerLayerWithPlayer:';
    procedure setPlayer(newValue: AVPlayer); message 'setPlayer:';
    function player: AVPlayer; message 'player';
    procedure setVideoGravity(newValue: NSString); message 'setVideoGravity:';
    function videoGravity: NSString; message 'videoGravity';
    function isReadyForDisplay: boolean; message 'isReadyForDisplay';
    function videoRect: CGRect; message 'videoRect';
    procedure setPixelBufferAttributes(newValue: NSDictionary); message 'setPixelBufferAttributes:';
    function pixelBufferAttributes: NSDictionary; message 'pixelBufferAttributes';
  end;
{$endif}

