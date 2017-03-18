{ Parsed from AVFoundation.framework AVMetadataItem.h }

{$ifdef TYPES}
type
  AVMetadataItemPtr = ^AVMetadataItem;
  AVMutableMetadataItemPtr = ^AVMutableMetadataItem;
  AVMetadataItemValueRequestPtr = ^AVMetadataItemValueRequest;
  AVMetadataItemFilterPtr = ^AVMetadataItemFilter;
{$endif}

{$ifdef CLASSES}

type
  AVMetadataItem = objcclass external (NSObject, AVAsynchronousKeyValueLoadingProtocol, NSCopyingProtocol, NSMutableCopyingProtocol)
  private
    _priv: AVMetadataItemInternal;
  public
    function identifier: NSString; message 'identifier';
    function extendedLanguageTag: NSString; message 'extendedLanguageTag';
    function locale: NSLocale; message 'locale';
    function time: CMTime; message 'time';
    function duration: CMTime; message 'duration';
    function dataType: NSString; message 'dataType';
    function value: id; message 'value';
    function extraAttributes: NSDictionary; message 'extraAttributes';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure loadValuesAsynchronouslyForKeys_completionHandler (keys: NSString *ProtocolPtr; handler: OpaqueCBlock); message 'loadValuesAsynchronouslyForKeys:completionHandler:';
    function mutableCopyWithZone (zone: nullable NSZonePtr): id; message 'mutableCopyWithZone:';
    function statusOfValueForKey_error (key: NSString; outError: NSError * _Nullable * _Nullable): AVKeyValueStatus; message 'statusOfValueForKey:error:';
  end;


type
  AVMetadataItemDateRepresentation = objccategory external (AVMetadataItem)
    function startDate: NSDate; message 'startDate';
  end;

type
  AVMetadataItemTypeCoercion = objccategory external (AVMetadataItem)
    function stringValue: NSString; message 'stringValue';
    function numberValue: NSNumber; message 'numberValue';
    function dateValue: NSDate; message 'dateValue';
    function dataValue: NSData; message 'dataValue';
  end;

type
  AVAsynchronousKeyValueLoading = objccategory external (AVMetadataItem)
    function statusOfValueForKey_error (key: NSString; outError: NSError * _Nullable * _Nullable): AVKeyValueStatus; message 'statusOfValueForKey:error:'; { available in 10_7, 4_2 }
    procedure loadValuesAsynchronouslyForKeys_completionHandler (keys: NSString *ProtocolPtr; handler: OpaqueCBlock); message 'loadValuesAsynchronouslyForKeys:completionHandler:'; { available in 10_7, 4_2 }
  end;

type
  AVMetadataItemArrayFiltering = objccategory external (AVMetadataItem)
    class function metadataItemsFromArray_filteredAndSortedAccordingToPreferredLanguages (metadataItems: AVMetadataItem *ProtocolPtr; preferredLanguages: NSString *ProtocolPtr): AVMetadataItem *ProtocolPtr; message 'metadataItemsFromArray:filteredAndSortedAccordingToPreferredLanguages:'; { available in 10_8, 6_0 }
    class function metadataItemsFromArray_filteredByIdentifier (metadataItems: AVMetadataItem *ProtocolPtr; identifier_: NSString): AVMetadataItem *ProtocolPtr; message 'metadataItemsFromArray:filteredByIdentifier:'; { available in 10_10, 8_0 }
    class function metadataItemsFromArray_filteredByMetadataItemFilter (metadataItems: AVMetadataItem *ProtocolPtr; metadataItemFilter: AVMetadataItemFilter): AVMetadataItem *ProtocolPtr; message 'metadataItemsFromArray:filteredByMetadataItemFilter:'; { available in 10_9, 7_0 }
  end;

type
  AVMetadataItemKeyAndKeyspace = objccategory external (AVMetadataItem)
    class function identifierForKey_keySpace (key: id; keySpace: NSString): nullable NSStringPtr; message 'identifierForKey:keySpace:'; { available in 10_10, 8_0 }
    class function keySpaceForIdentifier (identifier_: NSString): nullable NSStringPtr; message 'keySpaceForIdentifier:'; { available in 10_10, 8_0 }
    class function keyForIdentifier (identifier_: NSString): nullable id; message 'keyForIdentifier:'; { available in 10_10, 8_0 }
    function key: id; message 'key';
    function commonKey: NSString; message 'commonKey';
    function keySpace: NSString; message 'keySpace';
  end;


type
  AVMutableMetadataItem = objcclass external (AVMetadataItem)
  private
    _mutablePriv: AVMutableMetadataItemInternal;
  public
    procedure setIdentifier(newValue: NSString); message 'setIdentifier:';
    function identifier: NSString; message 'identifier';
    procedure setExtendedLanguageTag(newValue: NSString); message 'setExtendedLanguageTag:';
    function extendedLanguageTag: NSString; message 'extendedLanguageTag';
    procedure setLocale(newValue: NSLocale); message 'setLocale:';
    function locale: NSLocale; message 'locale';
    procedure setTime(newValue: CMTime); message 'setTime:';
    function time: CMTime; message 'time';
    procedure setDuration(newValue: CMTime); message 'setDuration:';
    function duration: CMTime; message 'duration';
    procedure setDataType(newValue: NSString); message 'setDataType:';
    function dataType: NSString; message 'dataType';
    procedure setValue(newValue: id); message 'setValue:';
    function value: id; message 'value';
    procedure setExtraAttributes(newValue: NSDictionary); message 'setExtraAttributes:';
    function extraAttributes: NSDictionary; message 'extraAttributes';
    class function metadataItem: AVMutableMetadataItem; message 'metadataItem';
  end;


type
  AVMutableMetadataItemDateRepresentation = objccategory external (AVMutableMetadataItem)
    procedure setStartDate(newValue: NSDate); message 'setStartDate:';
    function startDate: NSDate; message 'startDate';
  end;

type
  AVMutableMetadataItemKeyAndKeyspace = objccategory external (AVMutableMetadataItem)
    procedure setKeySpace(newValue: NSString); message 'setKeySpace:';
    function keySpace: NSString; message 'keySpace';
    procedure setKey(newValue: id); message 'setKey:';
    function key: id; message 'key';
  end;

type
  AVMetadataItemLazyValueLoading = objccategory external (AVMetadataItem)
    class function metadataItemWithPropertiesOfMetadataItem_valueLoadingHandler (metadataItem: AVMetadataItem; handler: OpaqueCBlock): AVMetadataItem; message 'metadataItemWithPropertiesOfMetadataItem:valueLoadingHandler:'; { available in 10_11, 9_0 }
  end;


type
  AVMetadataItemValueRequest = objcclass external (NSObject)
  private
    _valueRequest: AVMetadataItemValueRequestInternal;
  public
    function metadataItem: AVMetadataItem; message 'metadataItem';
    procedure respondWithValue (value: id); message 'respondWithValue:';
    procedure respondWithError (error: NSError); message 'respondWithError:';
  end;

type
  AVMetadataItemFilter = objcclass external (NSObject)
  private
    _itemFilterInternal: AVMetadataItemFilterInternal;
  public
    class function metadataItemFilterForSharing: AVMetadataItemFilter; message 'metadataItemFilterForSharing';
  end;


type
  AVMetadataItemArrayFilteringDeprecable = objccategory external (AVMetadataItem)
    class function metadataItemsFromArray_withLocale (metadataItems: AVMetadataItem *ProtocolPtr; locale_: NSLocale): AVMetadataItem *ProtocolPtr; message 'metadataItemsFromArray:withLocale:';
    class function metadataItemsFromArray_withKey_keySpace (metadataItems: AVMetadataItem *ProtocolPtr; key: nullable id; keySpace: nullable NSStringPtr): AVMetadataItem *ProtocolPtr; message 'metadataItemsFromArray:withKey:keySpace:';
  end;
{$endif}

