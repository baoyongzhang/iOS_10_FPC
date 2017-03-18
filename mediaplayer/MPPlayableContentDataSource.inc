{ Parsed from MediaPlayer.framework MPPlayableContentDataSource.h }

{$ifdef TYPES}
type
  MPPlayableContentDataSourceProtocolPtr = ^MPPlayableContentDataSourceProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  MPPlayableContentDataSourceProtocol = objcprotocol external name 'MPPlayableContentDataSource' (NSObjectProtocol)
  optional
    procedure beginLoadingChildItemsAtIndexPath_completionHandler (indexPath: NSIndexPath; completionHandler: OpaqueCBlock); message 'beginLoadingChildItemsAtIndexPath:completionHandler:';
    function childItemsDisplayPlaybackProgressAtIndexPath (indexPath: NSIndexPath): boolean; message 'childItemsDisplayPlaybackProgressAtIndexPath:';
    procedure contentItemForIdentifier_completionHandler (identifier: NSString; completionHandler: OpaqueCBlock); message 'contentItemForIdentifier:completionHandler:'; { available in 10.0, 10.12.2, 10.0 }
  required
    function numberOfChildItemsAtIndexPath (indexPath: NSIndexPath): NSInteger; message 'numberOfChildItemsAtIndexPath:';
    function contentItemAtIndexPath (indexPath: NSIndexPath): nullable MPContentItemPtr; message 'contentItemAtIndexPath:';
  end;
{$endif}

