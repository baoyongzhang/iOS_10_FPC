{ Parsed from WatchKit.framework WKAudioFileAsset.h }

{$ifdef TYPES}
type
  WKAudioFileAssetPtr = ^WKAudioFileAsset;
{$endif}

{$ifdef CLASSES}

type
  WKAudioFileAsset = objcclass external (NSObject)
  public
    function init: instancetype; message 'init';
    class function assetWithURL (URL: NSURL): instancetype; message 'assetWithURL:';
    class function assetWithURL_title_albumTitle_artist (URL: NSURL; title: nullable NSStringPtr; albumTitle: nullable NSStringPtr; artist: nullable NSStringPtr): instancetype; message 'assetWithURL:title:albumTitle:artist:';
    function URL: NSURL; message 'URL';
    function duration: NSTimeInterval; message 'duration';
    function title: NSString; message 'title';
    function albumTitle: NSString; message 'albumTitle';
    function artist: NSString; message 'artist';
  end;
{$endif}

