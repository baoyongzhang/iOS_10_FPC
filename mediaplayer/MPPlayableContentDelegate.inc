{ Parsed from MediaPlayer.framework MPPlayableContentDelegate.h }

{$ifdef TYPES}
type
  MPPlayableContentDelegateProtocolPtr = ^MPPlayableContentDelegateProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  MPPlayableContentDelegateProtocol = objcprotocol external name 'MPPlayableContentDelegate' (NSObjectProtocol)
  optional
    procedure playableContentManager_initiatePlaybackOfContentItemAtIndexPath_completionHandler (contentManager: MPPlayableContentManager; indexPath: NSIndexPath; completionHandler: OpaqueCBlock); message 'playableContentManager:initiatePlaybackOfContentItemAtIndexPath:completionHandler:'; { available in 7.1, 10.12.2, 7.1 }
    procedure playableContentManager_initializePlaybackQueueWithCompletionHandler (contentManager: MPPlayableContentManager; completionHandler: OpaqueCBlock); message 'playableContentManager:initializePlaybackQueueWithCompletionHandler:'; { available in 9_0 }
    procedure playableContentManager_initializePlaybackQueueWithContentItems_completionHandler (contentManager: MPPlayableContentManager; contentItems: nullable NSArrayPtr; completionHandler: OpaqueCBlock); message 'playableContentManager:initializePlaybackQueueWithContentItems:completionHandler:'; { available in 9.3, 10.12.2, 9.3 }
    procedure playableContentManager_didUpdateContext (contentManager: MPPlayableContentManager; context: MPPlayableContentManagerContext); message 'playableContentManager:didUpdateContext:'; { available in 8.4, 10.12.2, 8.4 }
  end;
{$endif}

