{$mode delphi}
{$modeswitch objectivec1}
{$modeswitch cvar}

unit DefinedClassesExternalAccessory;
interface

type
  EAAccessory = objcclass external;
  EAAccessoryManager = objcclass external;
  EASession = objcclass external;
  EAWiFiUnconfiguredAccessory = objcclass external;
  EAWiFiUnconfiguredAccessoryBrowser = objcclass external;
  EAAccessoryDelegateProtocol = objcprotocol external name 'EAAccessoryDelegate';
  EAWiFiUnconfiguredAccessoryBrowserDelegateProtocol = objcprotocol external name 'EAWiFiUnconfiguredAccessoryBrowserDelegate';

type
  EAAccessoryInternal = objcclass external;
  UIViewController = objcclass external;

implementation
end.
