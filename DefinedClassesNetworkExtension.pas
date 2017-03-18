{$mode delphi}
{$modeswitch objectivec1}
{$modeswitch cvar}

unit DefinedClassesNetworkExtension;
interface

type
  NEAppProxyFlow = objcclass external;
  NEAppProxyProvider = objcclass external;
  NEAppProxyProviderManager = objcclass external;
  NEAppProxyTCPFlow = objcclass external;
  NEAppProxyUDPFlow = objcclass external;
  NEAppRule = objcclass external;
  NEDNSSettings = objcclass external;
  NEEvaluateConnectionRule = objcclass external;
  NEFilterBrowserFlow = objcclass external;
  NEFilterControlProvider = objcclass external;
  NEFilterControlVerdict = objcclass external;
  NEFilterDataProvider = objcclass external;
  NEFilterDataVerdict = objcclass external;
  NEFilterFlow = objcclass external;
  NEFilterManager = objcclass external;
  NEFilterNewFlowVerdict = objcclass external;
  NEFilterProvider = objcclass external;
  NEFilterProviderConfiguration = objcclass external;
  NEFilterRemediationVerdict = objcclass external;
  NEFilterSocketFlow = objcclass external;
  NEFilterVerdict = objcclass external;
  NEFlowMetaData = objcclass external;
  NEHotspotHelper = objcclass external;
  NEHotspotHelperCommand = objcclass external;
  NEHotspotHelperResponse = objcclass external;
  NEHotspotNetwork = objcclass external;
  NEIPv4Route = objcclass external;
  NEIPv4Settings = objcclass external;
  NEIPv6Route = objcclass external;
  NEIPv6Settings = objcclass external;
  NEOnDemandRule = objcclass external;
  NEOnDemandRuleConnect = objcclass external;
  NEOnDemandRuleDisconnect = objcclass external;
  NEOnDemandRuleEvaluateConnection = objcclass external;
  NEOnDemandRuleIgnore = objcclass external;
  NEPacket = objcclass external;
  NEPacketTunnelFlow = objcclass external;
  NEPacketTunnelNetworkSettings = objcclass external;
  NEPacketTunnelProvider = objcclass external;
  NEProvider = objcclass external;
  NEProxyServer = objcclass external;
  NEProxySettings = objcclass external;
  NETunnelNetworkSettings = objcclass external;
  NETunnelProvider = objcclass external;
  NETunnelProviderManager = objcclass external;
  NETunnelProviderProtocol = objcclass external;
  NETunnelProviderSession = objcclass external;
  NEVPNConnection = objcclass external;
  NEVPNIKEv2SecurityAssociationParameters = objcclass external;
  NEVPNManager = objcclass external;
  NEVPNProtocol = objcclass external;
  NEVPNProtocolIKEv2 = objcclass external;
  NEVPNProtocolIPSec = objcclass external;
  NWBonjourServiceEndpoint = objcclass external;
  NWEndpoint = objcclass external;
  NWHostEndpoint = objcclass external;
  NWPath = objcclass external;
  NWTCPConnection = objcclass external;
  NWTLSParameters = objcclass external;
  NWUDPSession = objcclass external;
  NWTCPConnectionAuthenticationDelegateProtocol = objcprotocol external name 'NWTCPConnectionAuthenticationDelegate';

type
  NEPacketFlow = objcclass external;

implementation
end.
