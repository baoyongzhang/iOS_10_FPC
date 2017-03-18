{ Parsed from MediaPlayer.framework MPContentItem.h }

{$ifdef TYPES}
type
  MPContentItemPtr = ^MPContentItem;
{$endif}

{$ifdef CLASSES}

type
  MPContentItem = objcclass external (NSObject)
  public
    function initWithIdentifier (identifier: NSString): instancetype; message 'initWithIdentifier:'; { NS_DESIGNATED_INITIALIZER }
    function identifier: NSString; message 'identifier';
    procedure setTitle(newValue: NSString); message 'setTitle:';
    function title: NSString; message 'title';
    procedure setSubtitle(newValue: NSString); message 'setSubtitle:';
    function subtitle: NSString; message 'subtitle';
    procedure setArtwork(newValue: MPMediaItemArtwork); message 'setArtwork:';
    function artwork: MPMediaItemArtwork; message 'artwork';
    procedure setPlaybackProgress(newValue: single); message 'setPlaybackProgress:';
    function playbackProgress: single; message 'playbackProgress';
    procedure setStreamingContent(newValue: boolean); message 'setStreamingContent:';
    function isStreamingContent: boolean; message 'isStreamingContent';
    procedure setExplicitContent(newValue: boolean); message 'setExplicitContent:';
    function isExplicitContent: boolean; message 'isExplicitContent';
    procedure setContainer(newValue: boolean); message 'setContainer:';
    function isContainer: boolean; message 'isContainer';
    procedure setPlayable(newValue: boolean); message 'setPlayable:';
    function isPlayable: boolean; message 'isPlayable';
  end;
{$endif}

