{ Parsed from MapKit.framework MKMapItem.h }

{$ifdef TYPES}
type
  MKMapItemPtr = ^MKMapItem;
{$endif}

{$ifdef CLASSES}

type
  MKMapItem = objcclass external (NSObject)
  public
    function placemark: MKPlacemark; message 'placemark';
    function isCurrentLocation: boolean; message 'isCurrentLocation';
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    procedure setPhoneNumber(newValue: NSString); message 'setPhoneNumber:';
    function phoneNumber: NSString; message 'phoneNumber';
    procedure setUrl(newValue: NSURL); message 'setUrl:';
    function url: NSURL; message 'url';
    procedure setTimeZone(newValue: NSTimeZone); message 'setTimeZone:';
    function timeZone: NSTimeZone; message 'timeZone';
    class function mapItemForCurrentLocation: MKMapItem; message 'mapItemForCurrentLocation';
    function initWithPlacemark (placemark_: MKPlacemark): instancetype; message 'initWithPlacemark:';
    function openInMapsWithLaunchOptions (launchOptions: nullable NSDictionaryPtr): boolean; message 'openInMapsWithLaunchOptions:';
    class function openMapsWithItems_launchOptions (mapItems: MKMapItem *ProtocolPtr; launchOptions: nullable NSDictionaryPtr): boolean; message 'openMapsWithItems:launchOptions:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  __TVOS_PROHIBITED: NSString *MKLaunchOptionsDirectionsModeKey { available in 10_9, 6_0 }; cvar; external;
  __WATCHOS_PROHIBITED: NSString *MKLaunchOptionsMapTypeKey __TVOS_PROHIBITED { available in 10_9, 6_0 }; cvar; external;
  __WATCHOS_PROHIBITED: NSString *MKLaunchOptionsShowsTrafficKey __TVOS_PROHIBITED { available in 10_9, 6_0 }; cvar; external;
  __TVOS_PROHIBITED: NSString *MKLaunchOptionsDirectionsModeDefault { available in 10_12, 10_0 }; cvar; external;
  __TVOS_PROHIBITED: NSString *MKLaunchOptionsDirectionsModeDriving { available in 10_9, 6_0 }; cvar; external;
  __TVOS_PROHIBITED: NSString *MKLaunchOptionsDirectionsModeWalking { available in 10_9, 6_0 }; cvar; external;
  __TVOS_PROHIBITED: NSString *MKLaunchOptionsDirectionsModeTransit { available in 10_11, 9_0 }; cvar; external;
  __TVOS_PROHIBITED: NSString *MKLaunchOptionsMapCenterKey { available in 10_9, 6_0 }; cvar; external;
  __TVOS_PROHIBITED: NSString *MKLaunchOptionsMapSpanKey { available in 10_9, 6_0 }; cvar; external;
  __TVOS_PROHIBITED: NSString *MKLaunchOptionsCameraKey { available in 10_10, 7_1 }; cvar; external;
{$endif}

