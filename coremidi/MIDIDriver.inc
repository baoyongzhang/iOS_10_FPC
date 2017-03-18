{ Parsed from CoreMIDI.framework MIDIDriver.h }

{$ifdef TYPES}
type
  MIDIDriverRef = ^MIDIDriverInterfacePtr;
  MIDIDeviceListRef = MIDIObjectRef;
  MIDIDeviceListRefPtr = ^MIDIDeviceListRef;

type
  MIDIDriverInterface = record
    FindDevices: function (self_: MIDIDriverRef; devList: MIDIDeviceListRef): OSStatus; cdecl;
    Start: function (self_: MIDIDriverRef; devList: MIDIDeviceListRef): OSStatus; cdecl;
    Stop: function (self_: MIDIDriverRef): OSStatus; cdecl;
    Configure: function (self_: MIDIDriverRef; device: MIDIDeviceRef): OSStatus; cdecl;
    Send: function (self_: MIDIDriverRef; pktlist: MIDIPacketListPtr; destRefCon1: pointer; destRefCon2: pointer): OSStatus; cdecl;
    EnableSource: function (self_: MIDIDriverRef; src: MIDIEndpointRef; enabled: Boolean): OSStatus; cdecl;
    Flush: function (self_: MIDIDriverRef; dest: MIDIEndpointRef; destRefCon1: pointer; destRefCon2: pointer): OSStatus; cdecl;
    Monitor: function (self_: MIDIDriverRef; dest: MIDIEndpointRef; pktlist: MIDIPacketListPtr): OSStatus; cdecl;
  end;
type
  MIDIDriverInterfacePtr = ^MIDIDriverInterface;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kMIDIDriverPropertyUsesSerial: CFStringRef { available starting in __MAC_10_1, __IPHONE_NA }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function MIDIDeviceCreate(owner: MIDIDriverRef; name: CFStringRef; manufacturer: CFStringRef; model: CFStringRef; var outDevice: MIDIDeviceRef): OSStatus; cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_2 }
function MIDIDeviceDispose(device: MIDIDeviceRef): OSStatus; cdecl; external; { available starting in __MAC_10_3, __IPHONE_4_2 }
function MIDIDeviceListGetNumberOfDevices(devList: MIDIDeviceListRef): ItemCount; cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_2 }
function MIDIDeviceListGetDevice(devList: MIDIDeviceListRef; index0: ItemCount): MIDIDeviceRef; cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_2 }
function MIDIDeviceListAddDevice(devList: MIDIDeviceListRef; dev: MIDIDeviceRef): OSStatus; cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_2 }
function MIDIDeviceListDispose(devList: MIDIDeviceListRef): OSStatus; cdecl; external; { available starting in __MAC_10_1, __IPHONE_4_2 }
function MIDIEndpointSetRefCons(endpt: MIDIEndpointRef; ref1: pointer; ref2: pointer): OSStatus; cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_2 }
function MIDIEndpointGetRefCons(endpt: MIDIEndpointRef; ref1: pointer; ref2: pointer): OSStatus; cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_2 }
function MIDIGetDriverDeviceList(driver: MIDIDriverRef): MIDIDeviceListRef; cdecl; external; { available starting in __MAC_10_1, __IPHONE_4_2 }
function MIDIDriverEnableMonitoring(driver: MIDIDriverRef; enabled: Boolean): OSStatus; cdecl; external; { available starting in __MAC_10_1, __IPHONE_NA }
{$endif}

