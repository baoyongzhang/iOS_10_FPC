{ Parsed from AVFoundation.framework AVAssetCache.h }

{$ifdef TYPES}
type
  AVAssetCachePtr = ^AVAssetCache;
{$endif}

{$ifdef CLASSES}

type
  AVAssetCache = objcclass external (NSObject)
  public
    function isPlayableOffline: boolean; message 'isPlayableOffline';
    function mediaSelectionOptionsInMediaSelectionGroup (mediaSelectionGroup: AVMediaSelectionGroup): AVMediaSelectionOption *ProtocolPtr; message 'mediaSelectionOptionsInMediaSelectionGroup:';
  end;
{$endif}

