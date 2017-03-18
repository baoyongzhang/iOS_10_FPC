{ Parsed from AVFoundation.framework AVPlayerMediaSelectionCriteria.h }

{$ifdef TYPES}
type
  AVPlayerMediaSelectionCriteriaPtr = ^AVPlayerMediaSelectionCriteria;
{$endif}

{$ifdef CLASSES}

type
  AVPlayerMediaSelectionCriteria = objcclass external (NSObject)
  private
    _criteria: AVPlayerMediaSelectionCriteriaInternal;
  public
    function preferredLanguages: NSString *ProtocolPtr; message 'preferredLanguages';
    function preferredMediaCharacteristics: NSString *ProtocolPtr; message 'preferredMediaCharacteristics';
    function initWithPreferredLanguages_preferredMediaCharacteristics (preferredLanguages_: nullable NSString *ProtocolPtr; preferredMediaCharacteristics_: nullable NSString *ProtocolPtr): instancetype; message 'initWithPreferredLanguages:preferredMediaCharacteristics:';
  end;
{$endif}

