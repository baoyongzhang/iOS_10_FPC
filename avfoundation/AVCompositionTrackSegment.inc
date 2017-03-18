{ Parsed from AVFoundation.framework AVCompositionTrackSegment.h }

{$ifdef TYPES}
type
  AVCompositionTrackSegmentPtr = ^AVCompositionTrackSegment;
{$endif}

{$ifdef CLASSES}

type
  AVCompositionTrackSegment = objcclass external (AVAssetTrackSegment)
  private
    _priv: AVCompositionTrackSegmentInternal;
  public
    class function compositionTrackSegmentWithURL_trackID_sourceTimeRange_targetTimeRange (URL: NSURL; trackID: CMPersistentTrackID; sourceTimeRange: CMTimeRange; targetTimeRange: CMTimeRange): instancetype; message 'compositionTrackSegmentWithURL:trackID:sourceTimeRange:targetTimeRange:';
    class function compositionTrackSegmentWithTimeRange (timeRange: CMTimeRange): instancetype; message 'compositionTrackSegmentWithTimeRange:';
    function initWithURL_trackID_sourceTimeRange_targetTimeRange (URL: NSURL; trackID: CMPersistentTrackID; sourceTimeRange: CMTimeRange; targetTimeRange: CMTimeRange): instancetype; message 'initWithURL:trackID:sourceTimeRange:targetTimeRange:'; { NS_DESIGNATED_INITIALIZER }
    function initWithTimeRange (timeRange: CMTimeRange): instancetype; message 'initWithTimeRange:'; { NS_DESIGNATED_INITIALIZER }
    function isEmpty: boolean; message 'isEmpty';
    function sourceURL: NSURL; message 'sourceURL';
    function sourceTrackID: CMPersistentTrackID; message 'sourceTrackID';
  end;
{$endif}

