{$mode delphi}
{$modeswitch objectivec1}
{$modeswitch cvar}

unit DefinedClassesHomeKit;
interface

type
  HMAccessory = objcclass external;
  HMAccessoryBrowser = objcclass external;
  HMAccessoryCategory = objcclass external;
  HMAccessoryProfile = objcclass external;
  HMAction = objcclass external;
  HMActionSet = objcclass external;
  HMCameraAudioControl = objcclass external;
  HMCameraControl = objcclass external;
  HMCameraProfile = objcclass external;
  HMCameraSettingsControl = objcclass external;
  HMCameraSnapshot = objcclass external;
  HMCameraSnapshotControl = objcclass external;
  HMCameraSource = objcclass external;
  HMCameraStream = objcclass external;
  HMCameraStreamControl = objcclass external;
  HMCameraView = objcclass external;
  HMCharacteristic = objcclass external;
  HMCharacteristicEvent = objcclass external;
  HMCharacteristicMetadata = objcclass external;
  HMCharacteristicWriteAction = objcclass external;
  HMEvent = objcclass external;
  HMEventTrigger = objcclass external;
  HMHome = objcclass external;
  HMHomeAccessControl = objcclass external;
  HMHomeManager = objcclass external;
  HMLocationEvent = objcclass external;
  HMRoom = objcclass external;
  HMService = objcclass external;
  HMServiceGroup = objcclass external;
  HMTimerTrigger = objcclass external;
  HMTrigger = objcclass external;
  HMUser = objcclass external;
  HMZone = objcclass external;
  HMAccessoryBrowserDelegateProtocol = objcprotocol external name 'HMAccessoryBrowserDelegate';
  HMAccessoryDelegateProtocol = objcprotocol external name 'HMAccessoryDelegate';
  HMCameraSnapshotControlDelegateProtocol = objcprotocol external name 'HMCameraSnapshotControlDelegate';
  HMCameraStreamControlDelegateProtocol = objcprotocol external name 'HMCameraStreamControlDelegate';
  HMHomeDelegateProtocol = objcprotocol external name 'HMHomeDelegate';
  HMHomeManagerDelegateProtocol = objcprotocol external name 'HMHomeManagerDelegate';

type
  CLRegion = objcclass external;

implementation
end.
