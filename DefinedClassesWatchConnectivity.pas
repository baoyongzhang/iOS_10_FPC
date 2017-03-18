{$mode delphi}
{$modeswitch objectivec1}
{$modeswitch cvar}

unit DefinedClassesWatchConnectivity;
interface

type
  WCSession = objcclass external;
  WCSessionFile = objcclass external;
  WCSessionFileTransfer = objcclass external;
  WCSessionUserInfoTransfer = objcclass external;
  WCSessionDelegateProtocol = objcprotocol external name 'WCSessionDelegate';

implementation
end.
