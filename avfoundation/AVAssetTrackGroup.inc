{ Parsed from AVFoundation.framework AVAssetTrackGroup.h }

{$ifdef TYPES}
type
  AVAssetTrackGroupPtr = ^AVAssetTrackGroup;
{$endif}

{$ifdef CLASSES}

type
  AVAssetTrackGroup = objcclass external (NSObject, NSCopyingProtocol)
  private
    _assetTrackGroup: AVAssetTrackGroupInternal;
  public
    function trackIDs: NSNumber *ProtocolPtr; message 'trackIDs';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

