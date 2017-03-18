{ Parsed from AVFoundation.framework AVComposition.h }

{$ifdef TYPES}
type
  AVCompositionPtr = ^AVComposition;
  AVMutableCompositionPtr = ^AVMutableComposition;
{$endif}

{$ifdef CLASSES}

type
  AVComposition = objcclass external (AVAsset, NSMutableCopyingProtocol)
  private
    _priv: AVCompositionInternal;
  public
    function tracks: AVCompositionTrack *ProtocolPtr; message 'tracks';
    function naturalSize: CGSize; message 'naturalSize';
    function URLAssetInitializationOptions: NSDictionary; message 'URLAssetInitializationOptions';

    { Adopted protocols }
    function mutableCopyWithZone (zone: nullable NSZonePtr): id; message 'mutableCopyWithZone:';
  end;


type
  AVCompositionTrackInspection = objccategory external (AVComposition)
    function trackWithTrackID (trackID: CMPersistentTrackID): nullable AVCompositionTrackPtr; message 'trackWithTrackID:';
    function tracksWithMediaType (mediaType: NSString): AVCompositionTrack *ProtocolPtr; message 'tracksWithMediaType:';
    function tracksWithMediaCharacteristic (mediaCharacteristic: NSString): AVCompositionTrack *ProtocolPtr; message 'tracksWithMediaCharacteristic:';
  end;


type
  AVMutableComposition = objcclass external (AVComposition)
  private
    _mutablePriv: AVMutableCompositionInternal;
  public
    function tracks: AVMutableCompositionTrack *ProtocolPtr; message 'tracks';
    procedure setNaturalSize(newValue: CGSize); message 'setNaturalSize:';
    function naturalSize: CGSize; message 'naturalSize';
    class function composition: instancetype; message 'composition';
    class function compositionWithURLAssetInitializationOptions (URLAssetInitializationOptions_: nullable NSDictionaryPtr): instancetype; message 'compositionWithURLAssetInitializationOptions:'; { available in 10_11, 9_0 }
  end;


type
  AVMutableCompositionCompositionLevelEditing = objccategory external (AVMutableComposition)
    function insertTimeRange_ofAsset_atTime_error (timeRange: CMTimeRange; asset: AVAsset; startTime: CMTime; outError: NSError * _Nullable * _Nullable): boolean; message 'insertTimeRange:ofAsset:atTime:error:';
    procedure insertEmptyTimeRange (timeRange: CMTimeRange); message 'insertEmptyTimeRange:';
    procedure removeTimeRange (timeRange: CMTimeRange); message 'removeTimeRange:';
    procedure scaleTimeRange_toDuration (timeRange: CMTimeRange; duration_: CMTime); message 'scaleTimeRange:toDuration:';
  end;

type
  AVMutableCompositionTrackLevelEditing = objccategory external (AVMutableComposition)
    function addMutableTrackWithMediaType_preferredTrackID (mediaType: NSString; preferredTrackID: CMPersistentTrackID): AVMutableCompositionTrack; message 'addMutableTrackWithMediaType:preferredTrackID:';
    procedure removeTrack (track: AVCompositionTrack); message 'removeTrack:';
    function mutableTrackCompatibleWithTrack (track: AVAssetTrack): nullable AVMutableCompositionTrackPtr; message 'mutableTrackCompatibleWithTrack:';
  end;

type
  AVMutableCompositionTrackInspection = objccategory external (AVMutableComposition)
    function trackWithTrackID (trackID: CMPersistentTrackID): nullable AVMutableCompositionTrackPtr; message 'trackWithTrackID:';
    function tracksWithMediaType (mediaType: NSString): AVMutableCompositionTrack *ProtocolPtr; message 'tracksWithMediaType:';
    function tracksWithMediaCharacteristic (mediaCharacteristic: NSString): AVMutableCompositionTrack *ProtocolPtr; message 'tracksWithMediaCharacteristic:';
  end;
{$endif}

