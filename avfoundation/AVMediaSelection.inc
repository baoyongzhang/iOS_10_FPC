{ Parsed from AVFoundation.framework AVMediaSelection.h }

{$ifdef TYPES}
type
  AVMediaSelectionPtr = ^AVMediaSelection;
  AVMutableMediaSelectionPtr = ^AVMutableMediaSelection;
{$endif}

{$ifdef CLASSES}

type
  AVMediaSelection = objcclass external (NSObject, NSCopyingProtocol, NSMutableCopyingProtocol)
  private
    _mediaSelection: AVMediaSelectionInternal;
  public
    function asset: AVAsset; message 'asset';
    function selectedMediaOptionInMediaSelectionGroup (mediaSelectionGroup: AVMediaSelectionGroup): nullable AVMediaSelectionOptionPtr; message 'selectedMediaOptionInMediaSelectionGroup:';
    function mediaSelectionCriteriaCanBeAppliedAutomaticallyToMediaSelectionGroup (mediaSelectionGroup: AVMediaSelectionGroup): boolean; message 'mediaSelectionCriteriaCanBeAppliedAutomaticallyToMediaSelectionGroup:';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    function mutableCopyWithZone (zone: nullable NSZonePtr): id; message 'mutableCopyWithZone:';
  end;

type
  AVMutableMediaSelection = objcclass external (AVMediaSelection)
  public
    procedure selectMediaOption_inMediaSelectionGroup (mediaSelectionOption: nullable AVMediaSelectionOptionPtr; mediaSelectionGroup: AVMediaSelectionGroup); message 'selectMediaOption:inMediaSelectionGroup:';
  end;
{$endif}

