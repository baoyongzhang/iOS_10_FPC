{ Parsed from NetworkExtension.framework NEOnDemandRule.h }

{$ifdef TYPES}
type
  NEOnDemandRulePtr = ^NEOnDemandRule;
  NEOnDemandRuleConnectPtr = ^NEOnDemandRuleConnect;
  NEOnDemandRuleDisconnectPtr = ^NEOnDemandRuleDisconnect;
  NEOnDemandRuleIgnorePtr = ^NEOnDemandRuleIgnore;
  NEOnDemandRuleEvaluateConnectionPtr = ^NEOnDemandRuleEvaluateConnection;
  NEEvaluateConnectionRulePtr = ^NEEvaluateConnectionRule;
{$endif}

{$ifdef TYPES}
type
  NEOnDemandRuleAction = NSInteger;
  NEOnDemandRuleActionPtr = ^NEOnDemandRuleAction;

const
  NEOnDemandRuleActionConnect = 1;
  NEOnDemandRuleActionDisconnect = 2;
  NEOnDemandRuleActionEvaluateConnection = 3;
  NEOnDemandRuleActionIgnore = 4;

type
  NEOnDemandRuleInterfaceType = NSInteger;
  NEOnDemandRuleInterfaceTypePtr = ^NEOnDemandRuleInterfaceType;

const
  NEOnDemandRuleInterfaceTypeAny = 0 { available in 10_11, 9_0 };
  NEOnDemandRuleInterfaceTypeEthernet = 1 { available in 10_11, NA };
  NEOnDemandRuleInterfaceTypeWiFi = 2 { available in 10_11, 8_0 };
  NEOnDemandRuleInterfaceTypeCellular = 3 { available in NA, 8_0 };
{$endif}

{$ifdef CLASSES}

type
  NEOnDemandRule = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function action: NEOnDemandRuleAction; message 'action';
    procedure setDNSSearchDomainMatch(newValue: NSString *ProtocolPtr); message 'setDNSSearchDomainMatch:';
    function DNSSearchDomainMatch: NSString *ProtocolPtr; message 'DNSSearchDomainMatch';
    procedure setDNSServerAddressMatch(newValue: NSString *ProtocolPtr); message 'setDNSServerAddressMatch:';
    function DNSServerAddressMatch: NSString *ProtocolPtr; message 'DNSServerAddressMatch';
    procedure setInterfaceTypeMatch(newValue: NEOnDemandRuleInterfaceType); message 'setInterfaceTypeMatch:';
    function interfaceTypeMatch: NEOnDemandRuleInterfaceType; message 'interfaceTypeMatch';
    procedure setSSIDMatch(newValue: NSString *ProtocolPtr); message 'setSSIDMatch:';
    function SSIDMatch: NSString *ProtocolPtr; message 'SSIDMatch';
    procedure setProbeURL(newValue: NSURL); message 'setProbeURL:';
    function probeURL: NSURL; message 'probeURL';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;

type
  NEOnDemandRuleConnect = objcclass external (NEOnDemandRule)
  end;

type
  NEOnDemandRuleDisconnect = objcclass external (NEOnDemandRule)
  end;

type
  NEOnDemandRuleIgnore = objcclass external (NEOnDemandRule)
  end;

type
  NEOnDemandRuleEvaluateConnection = objcclass external (NEOnDemandRule)
  public
    procedure setConnectionRules(newValue: NEEvaluateConnectionRule *ProtocolPtr); message 'setConnectionRules:';
    function connectionRules: NEEvaluateConnectionRule *ProtocolPtr; message 'connectionRules';
  end;
{$endif}

{$ifdef TYPES}
type
  NEEvaluateConnectionRuleAction = NSInteger;
  NEEvaluateConnectionRuleActionPtr = ^NEEvaluateConnectionRuleAction;

const
  NEEvaluateConnectionRuleActionConnectIfNeeded = 1;
  NEEvaluateConnectionRuleActionNeverConnect = 2;
{$endif}

{$ifdef CLASSES}

type
  NEEvaluateConnectionRule = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function initWithMatchDomains_andAction (domains: NSString *ProtocolPtr; action: NEEvaluateConnectionRuleAction): instancetype; message 'initWithMatchDomains:andAction:'; { available in 10_11, 8_0 }
    function action: NEEvaluateConnectionRuleAction; message 'action';
    function matchDomains: NSString *ProtocolPtr; message 'matchDomains';
    procedure setUseDNSServers(newValue: NSString *ProtocolPtr); message 'setUseDNSServers:';
    function useDNSServers: NSString *ProtocolPtr; message 'useDNSServers';
    procedure setProbeURL(newValue: NSURL); message 'setProbeURL:';
    function probeURL: NSURL; message 'probeURL';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

