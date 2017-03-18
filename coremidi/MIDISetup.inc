{ Parsed from CoreMIDI.framework MIDISetup.h }

{$ifdef TYPES}
type
  MIDISetupRef = MIDIObjectRef;
  MIDISetupRefPtr = ^MIDISetupRef;
{$endif}

{$ifdef FUNCTIONS}
function MIDISetupCreate(var outSetup: MIDISetupRef): OSStatus; cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_6, __IPHONE_NA, __IPHONE_NA';
function MIDISetupDispose(setup: MIDISetupRef): OSStatus; cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_6, __IPHONE_NA, __IPHONE_NA';
function MIDISetupInstall(setup: MIDISetupRef): OSStatus; cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_6, __IPHONE_NA, __IPHONE_NA';
function MIDISetupGetCurrent(var outSetup: MIDISetupRef): OSStatus; cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_6, __IPHONE_NA, __IPHONE_NA';
function MIDISetupToData(setup: MIDISetupRef; var outData: CFDataRef __nullable* __nonnull): OSStatus; cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_6, __IPHONE_NA, __IPHONE_NA';
function MIDISetupFromData(data: CFDataRef; var outSetup: MIDISetupRef): OSStatus; cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_6, __IPHONE_NA, __IPHONE_NA';
function MIDIDeviceAddEntity(device: MIDIDeviceRef; name: CFStringRef; embedded: Boolean; numSourceEndpoints: ItemCount; numDestinationEndpoints: ItemCount; var newEntity: MIDIEntityRef): OSStatus; cdecl; external; { available starting in __MAC_10_0, __IPHONE_4_2 }
function MIDIDeviceRemoveEntity(device: MIDIDeviceRef; entity: MIDIEntityRef): OSStatus; cdecl; external; { available starting in __MAC_10_1, __IPHONE_4_2 }
function MIDIEntityAddOrRemoveEndpoints(entity: MIDIEntityRef; numSourceEndpoints: ItemCount; numDestinationEndpoints: ItemCount): OSStatus; cdecl; external; { available starting in __MAC_10_2, __IPHONE_4_2 }
function MIDISetupAddDevice(device: MIDIDeviceRef): OSStatus; cdecl; external; { available starting in __MAC_10_1, __IPHONE_4_2 }
function MIDISetupRemoveDevice(device: MIDIDeviceRef): OSStatus; cdecl; external; { available starting in __MAC_10_1, __IPHONE_4_2 }
function MIDISetupAddExternalDevice(device: MIDIDeviceRef): OSStatus; cdecl; external; { available starting in __MAC_10_1, __IPHONE_4_2 }
function MIDISetupRemoveExternalDevice(device: MIDIDeviceRef): OSStatus; cdecl; external; { available starting in __MAC_10_1, __IPHONE_4_2 }
function MIDIGetSerialPortOwner(portName: CFStringRef; var outDriverName: CFStringRef __nullable* __nonnull): OSStatus; cdecl; external; deprecated 'in __MAC_10_1, __MAC_10_6, __IPHONE_NA, __IPHONE_NA';
function MIDISetSerialPortOwner(portName: CFStringRef; driverName: CFStringRef): OSStatus; cdecl; external; deprecated 'in __MAC_10_1, __MAC_10_6, __IPHONE_NA, __IPHONE_NA';
function MIDIGetSerialPortDrivers(var outDriverNames: CFArrayRef __nullable* __nonnull): OSStatus; cdecl; external; deprecated 'in __MAC_10_1, __MAC_10_6, __IPHONE_NA, __IPHONE_NA';
function MIDIExternalDeviceCreate(name: CFStringRef; manufacturer: CFStringRef; model: CFStringRef; var outDevice: MIDIDeviceRef): OSStatus; cdecl; external; { available starting in __MAC_10_1, __IPHONE_4_2 }
{$endif}

