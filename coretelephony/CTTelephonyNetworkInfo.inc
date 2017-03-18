{ Parsed from CoreTelephony.framework CTTelephonyNetworkInfo.h }

{$ifdef TYPES}
type
  CTTelephonyNetworkInfoPtr = ^CTTelephonyNetworkInfo;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  CTRadioAccessTechnologyDidChangeNotification: NSString { available starting in __MAC_NA,__IPHONE_7_0 }; cvar; external;
  CTRadioAccessTechnologyGPRS: NSString { available starting in __MAC_NA,__IPHONE_7_0 }; cvar; external;
  CTRadioAccessTechnologyEdge: NSString { available starting in __MAC_NA,__IPHONE_7_0 }; cvar; external;
  CTRadioAccessTechnologyWCDMA: NSString { available starting in __MAC_NA,__IPHONE_7_0 }; cvar; external;
  CTRadioAccessTechnologyHSDPA: NSString { available starting in __MAC_NA,__IPHONE_7_0 }; cvar; external;
  CTRadioAccessTechnologyHSUPA: NSString { available starting in __MAC_NA,__IPHONE_7_0 }; cvar; external;
  CTRadioAccessTechnologyCDMA1x: NSString { available starting in __MAC_NA,__IPHONE_7_0 }; cvar; external;
  CTRadioAccessTechnologyCDMAEVDORev0: NSString { available starting in __MAC_NA,__IPHONE_7_0 }; cvar; external;
  CTRadioAccessTechnologyCDMAEVDORevA: NSString { available starting in __MAC_NA,__IPHONE_7_0 }; cvar; external;
  CTRadioAccessTechnologyCDMAEVDORevB: NSString { available starting in __MAC_NA,__IPHONE_7_0 }; cvar; external;
  CTRadioAccessTechnologyeHRPD: NSString { available starting in __MAC_NA,__IPHONE_7_0 }; cvar; external;
  CTRadioAccessTechnologyLTE: NSString { available starting in __MAC_NA,__IPHONE_7_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  CTTelephonyNetworkInfo = objcclass external (NSObject)
  public
    function subscriberCellularProvider: CTCarrier; message 'subscriberCellularProvider';
    procedure setSubscriberCellularProviderDidUpdateNotifier(newValue: OpaqueCBlock); message 'setSubscriberCellularProviderDidUpdateNotifier:';
    function subscriberCellularProviderDidUpdateNotifier: OpaqueCBlock; message 'subscriberCellularProviderDidUpdateNotifier';
    function currentRadioAccessTechnology: NSString; message 'currentRadioAccessTechnology';
  end;
{$endif}

