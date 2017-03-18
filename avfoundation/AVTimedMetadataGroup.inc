{ Parsed from AVFoundation.framework AVTimedMetadataGroup.h }

{$ifdef TYPES}
type
  AVMetadataGroupPtr = ^AVMetadataGroup;
  AVTimedMetadataGroupPtr = ^AVTimedMetadataGroup;
  AVMutableTimedMetadataGroupPtr = ^AVMutableTimedMetadataGroup;
  AVDateRangeMetadataGroupPtr = ^AVDateRangeMetadataGroup;
  AVMutableDateRangeMetadataGroupPtr = ^AVMutableDateRangeMetadataGroup;
{$endif}

{$ifdef CLASSES}

type
  AVMetadataGroup = objcclass external (NSObject)
  public
    function items: AVMetadataItem *ProtocolPtr; message 'items';
  end;


type
  AVMetadataGroupIdentification = objccategory external (AVMetadataGroup)
    function classifyingLabel: NSString; message 'classifyingLabel';
    function uniqueID: NSString; message 'uniqueID';
  end;


type
  AVTimedMetadataGroup = objcclass external (AVMetadataGroup, NSCopyingProtocol, NSMutableCopyingProtocol)
  private
    _priv: AVTimedMetadataGroupInternal;
  public
    function initWithItems_timeRange (items_: AVMetadataItem *ProtocolPtr; timeRange: CMTimeRange): instancetype; message 'initWithItems:timeRange:';
    function initWithSampleBuffer (sampleBuffer: CMSampleBufferRef): nullable instancetype; message 'initWithSampleBuffer:'; { available in 10_10, 8_0 }
    function timeRange: CMTimeRange; message 'timeRange';
    function items: AVMetadataItem *ProtocolPtr; message 'items';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    function mutableCopyWithZone (zone: nullable NSZonePtr): id; message 'mutableCopyWithZone:';
  end;


type
  AVTimedMetadataGroupSerializationSupport = objccategory external (AVTimedMetadataGroup)
    function copyFormatDescription                          CF_RETURNS_RETAINED: nullable CMMetadataFormatDescriptionRef; message 'copyFormatDescription                          CF_RETURNS_RETAINED'; { available in 10_10, 8_0 }
  end;


type
  AVMutableTimedMetadataGroup = objcclass external (AVTimedMetadataGroup)
  private
    _mutablePriv: AVTimedMetadataGroupInternal;
  public
    procedure setTimeRange(newValue: CMTimeRange); message 'setTimeRange:';
    function timeRange: CMTimeRange; message 'timeRange';
    procedure setItems(newValue: AVMetadataItem *ProtocolPtr); message 'setItems:';
    function items: AVMetadataItem *ProtocolPtr; message 'items';
  end;

type
  AVDateRangeMetadataGroup = objcclass external (AVMetadataGroup, NSCopyingProtocol, NSMutableCopyingProtocol)
  private
    _priv: AVDateRangeMetadataGroupInternal;
  public
    function initWithItems_startDate_endDate (items_: AVMetadataItem *ProtocolPtr; startDate: NSDate; endDate: nullable NSDatePtr): instancetype; message 'initWithItems:startDate:endDate:';
    function startDate: NSDate; message 'startDate';
    function endDate: NSDate; message 'endDate';
    function items: AVMetadataItem *ProtocolPtr; message 'items';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    function mutableCopyWithZone (zone: nullable NSZonePtr): id; message 'mutableCopyWithZone:';
  end;

type
  AVMutableDateRangeMetadataGroup = objcclass external (AVDateRangeMetadataGroup)
  private
    _mutablePriv: AVDateRangeMetadataGroupInternal;
  public
    procedure setStartDate(newValue: NSDate); message 'setStartDate:';
    function startDate: NSDate; message 'startDate';
    procedure setEndDate(newValue: NSDate); message 'setEndDate:';
    function endDate: NSDate; message 'endDate';
    procedure setItems(newValue: AVMetadataItem *ProtocolPtr); message 'setItems:';
    function items: AVMetadataItem *ProtocolPtr; message 'items';
  end;
{$endif}

