{ Parsed from SystemConfiguration.framework SCNetworkConfiguration.h }

{$ifndef _SCNETWORKCONFIGURATION_H}

{$ifdef USE_SYSTEMCONFIGURATION_PRIVATE_HEADERS}

{$else}
{$ifdef TYPES}
type
  SCNetworkInterfaceRef = OpaqueType;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kSCNetworkInterfaceType6to4: CFStringRef { available starting in __MAC_10_4,__IPHONE_NA }; cvar; external;
  kSCNetworkInterfaceTypeBluetooth: CFStringRef { available starting in __MAC_10_4,__IPHONE_NA }; cvar; external;
  kSCNetworkInterfaceTypeBond: CFStringRef { available starting in __MAC_10_4,__IPHONE_NA }; cvar; external;
  kSCNetworkInterfaceTypeEthernet: CFStringRef { available starting in __MAC_10_4,__IPHONE_NA }; cvar; external;
  kSCNetworkInterfaceTypeFireWire: CFStringRef { available starting in __MAC_10_4,__IPHONE_NA }; cvar; external;
  kSCNetworkInterfaceTypeIEEE80211: CFStringRef { available starting in __MAC_10_4,__IPHONE_NA }; cvar; external;
  kSCNetworkInterfaceTypeIPSec: CFStringRef { available starting in __MAC_10_5,__IPHONE_NA }; cvar; external;
  kSCNetworkInterfaceTypeIrDA: CFStringRef { available starting in __MAC_10_4,__IPHONE_NA }; cvar; external;
  kSCNetworkInterfaceTypeL2TP: CFStringRef { available starting in __MAC_10_4,__IPHONE_NA }; cvar; external;
  kSCNetworkInterfaceTypeModem: CFStringRef { available starting in __MAC_10_4,__IPHONE_NA }; cvar; external;
  kSCNetworkInterfaceTypePPP: CFStringRef { available starting in __MAC_10_4,__IPHONE_NA }; cvar; external;
  kSCNetworkInterfaceTypePPTP: CFStringRef deprecated 'in __MAC_10_4,__MAC_10_12,__IPHONE_NA,__IPHONE_NA'; cvar; external;
  kSCNetworkInterfaceTypeSerial: CFStringRef { available starting in __MAC_10_4,__IPHONE_NA }; cvar; external;
  kSCNetworkInterfaceTypeVLAN: CFStringRef { available starting in __MAC_10_4,__IPHONE_NA }; cvar; external;
  kSCNetworkInterfaceTypeWWAN: CFStringRef { available starting in __MAC_10_5,__IPHONE_NA }; cvar; external;
  kSCNetworkInterfaceTypeIPv4: CFStringRef { available starting in __MAC_10_4,__IPHONE_NA }; cvar; external;
  kSCNetworkInterfaceIPv4: SCNetworkInterfaceRef { available starting in __MAC_10_4,__IPHONE_NA }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  SCBondInterfaceRef = SCNetworkInterfaceRef;
  SCBondInterfaceRefPtr = ^SCBondInterfaceRef;
  const struct CF_BRIDGED_TYPE = function (0: id) __SCBondStatus* SCBondStatusRef; { kSCBondStatusOK =; 1: kSCBondStatusLinkInvalid =; 2: kSCBondStatusNoPartner =; 3: kSCBondStatusNotInActiveGroup =; (typedefs: kSCBondStatusUnknown = 999 };extern CFStringRef kSCBondStatusDeviceAggregationStatus ;extern CFStringRef kSCBondStatusDeviceCollecting ;extern CFStringRef kSCBondStatusDeviceDistributing ;#pragma mark -typedef SCNetworkInterfaceRef SCVLANInterfaceRef;#pragma mark -#pragma mark SCNetworkProtocol configuration; (typedefs: consts)typedef CF_BRIDGED_TYPE(id) __SCNetworkProtocol* SCNetworkProtocolRef;extern CFStringRef kSCNetworkProtocolTypeDNS ;extern CFStringRef kSCNetworkProtocolTypeIPv4 ;extern CFStringRef kSCNetworkProtocolTypeIPv6 ;extern CFStringRef kSCNetworkProtocolTypeProxies ;extern CFStringRef kSCNetworkProtocolTypeSMB ;#pragma mark -#pragma mark SCNetworkService configuration; (typedefs: consts)typedef CF_BRIDGED_TYPE(id) __SCNetworkService* SCNetworkServiceRef;#pragma mark -#pragma mark SCNetworkSet configuration; (void: consts)typedef CF_BRIDGED_TYPE(id) __SCNetworkSet* SCNetworkSetRef;__BEGIN_DECLS#pragma mark -#pragma mark SCNetworkInterface configuration (APIs)CFTypeIDSCNetworkInterfaceGetTypeID): ; cdecl { available starting in __MAC_10_4,__IPHONE_NA };
{$endif}

{$endif}
{$endif}
