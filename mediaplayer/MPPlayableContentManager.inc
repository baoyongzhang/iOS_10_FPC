{ Parsed from MediaPlayer.framework MPPlayableContentManager.h }

{$ifdef TYPES}
type
  MPPlayableContentManagerPtr = ^MPPlayableContentManager;
{$endif}

{$ifdef CLASSES}

type
  MPPlayableContentManager = objcclass external (NSObject)
  public
    procedure setDataSource(newValue: MPPlayableContentDataSourceProtocol); message 'setDataSource:';
    function dataSource: MPPlayableContentDataSourceProtocol; message 'dataSource';
    procedure setDelegate(newValue: MPPlayableContentDelegateProtocol); message 'setDelegate:';
    function delegate: MPPlayableContentDelegateProtocol; message 'delegate';
    function context: MPPlayableContentManagerContext; message 'context';
    procedure setNowPlayingIdentifiers(newValue: NSString *ProtocolPtr); message 'setNowPlayingIdentifiers:';
    function nowPlayingIdentifiers: NSString *ProtocolPtr; message 'nowPlayingIdentifiers';
    class function sharedContentManager: instancetype; message 'sharedContentManager';
    procedure reloadData; message 'reloadData';
    procedure beginUpdates; message 'beginUpdates';
    procedure endUpdates; message 'endUpdates';
  end;
{$endif}

