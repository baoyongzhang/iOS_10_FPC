{ Parsed from MediaPlayer.framework MPPlayableContentManagerContext.h }

{$ifdef TYPES}
type
  MPPlayableContentManagerContextPtr = ^MPPlayableContentManagerContext;
{$endif}

{$ifdef CLASSES}

type
  MPPlayableContentManagerContext = objcclass external (NSObject)
  public
    function enforcedContentItemsCount: NSInteger; message 'enforcedContentItemsCount';
    function enforcedContentTreeDepth: NSInteger; message 'enforcedContentTreeDepth';
    function contentLimitsEnforced: boolean; message 'contentLimitsEnforced';
    function contentLimitsEnabled: boolean; message 'contentLimitsEnabled';
    function endpointAvailable: boolean; message 'endpointAvailable';
  end;
{$endif}

