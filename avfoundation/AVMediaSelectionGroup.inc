{ Parsed from AVFoundation.framework AVMediaSelectionGroup.h }

{$ifdef TYPES}
type
  AVMediaSelectionGroupPtr = ^AVMediaSelectionGroup;
  AVMediaSelectionOptionPtr = ^AVMediaSelectionOption;
{$endif}

{$ifdef CLASSES}

type
  AVMediaSelectionGroup = objcclass external (NSObject, NSCopyingProtocol)
  private
    _mediaSelectionGroup: AVMediaSelectionGroupInternal;
  public
    function options: AVMediaSelectionOption *ProtocolPtr; message 'options';
    function defaultOption: AVMediaSelectionOption; message 'defaultOption';
    function allowsEmptySelection: boolean; message 'allowsEmptySelection';
    function mediaSelectionOptionWithPropertyList (plist: id): nullable AVMediaSelectionOptionPtr; message 'mediaSelectionOptionWithPropertyList:';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
  end;


type
  AVMediaSelectionOptionFiltering = objccategory external (AVMediaSelectionGroup)
    class function playableMediaSelectionOptionsFromArray (mediaSelectionOptions: AVMediaSelectionOption *ProtocolPtr): AVMediaSelectionOption *ProtocolPtr; message 'playableMediaSelectionOptionsFromArray:';
    class function mediaSelectionOptionsFromArray_filteredAndSortedAccordingToPreferredLanguages (mediaSelectionOptions: AVMediaSelectionOption *ProtocolPtr; preferredLanguages: NSString *ProtocolPtr): AVMediaSelectionOption *ProtocolPtr; message 'mediaSelectionOptionsFromArray:filteredAndSortedAccordingToPreferredLanguages:'; { available in 10_8, 6_0 }
    class function mediaSelectionOptionsFromArray_withLocale (mediaSelectionOptions: AVMediaSelectionOption *ProtocolPtr; locale: NSLocale): AVMediaSelectionOption *ProtocolPtr; message 'mediaSelectionOptionsFromArray:withLocale:';
    class function mediaSelectionOptionsFromArray_withMediaCharacteristics (mediaSelectionOptions: AVMediaSelectionOption *ProtocolPtr; mediaCharacteristics: NSString *ProtocolPtr): AVMediaSelectionOption *ProtocolPtr; message 'mediaSelectionOptionsFromArray:withMediaCharacteristics:';
    class function mediaSelectionOptionsFromArray_withoutMediaCharacteristics (mediaSelectionOptions: AVMediaSelectionOption *ProtocolPtr; mediaCharacteristics: NSString *ProtocolPtr): AVMediaSelectionOption *ProtocolPtr; message 'mediaSelectionOptionsFromArray:withoutMediaCharacteristics:';
  end;


type
  AVMediaSelectionOption = objcclass external (NSObject, NSCopyingProtocol)
  private
    _mediaSelectionOption: AVMediaSelectionOptionInternal;
  public
    function mediaType: NSString; message 'mediaType';
    function mediaSubTypes: NSNumber *ProtocolPtr; message 'mediaSubTypes';
    function hasMediaCharacteristic (mediaCharacteristic: NSString): boolean; message 'hasMediaCharacteristic:';
    function isPlayable: boolean; message 'isPlayable';
    function extendedLanguageTag: NSString; message 'extendedLanguageTag';
    function locale: NSLocale; message 'locale';
    function commonMetadata: AVMetadataItem *ProtocolPtr; message 'commonMetadata';
    function availableMetadataFormats: NSString *ProtocolPtr; message 'availableMetadataFormats';
    function metadataForFormat (format: NSString): AVMetadataItem *ProtocolPtr; message 'metadataForFormat:';
    function associatedMediaSelectionOptionInMediaSelectionGroup (mediaSelectionGroup: AVMediaSelectionGroup): nullable AVMediaSelectionOptionPtr; message 'associatedMediaSelectionOptionInMediaSelectionGroup:';
    function propertyList: id; message 'propertyList';
    function displayNameWithLocale (locale_: NSLocale): NSString; message 'displayNameWithLocale:'; { available in 10_9, 7_0 }
    function displayName: NSString; message 'displayName';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

