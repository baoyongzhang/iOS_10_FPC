{ Parsed from NetworkExtension.framework NEFilterProvider.h }

{$ifdef TYPES}
type
  NEFilterProviderPtr = ^NEFilterProvider;
  NEFilterVerdictPtr = ^NEFilterVerdict;
  NEFilterNewFlowVerdictPtr = ^NEFilterNewFlowVerdict;
  NEFilterControlVerdictPtr = ^NEFilterControlVerdict;
{$endif}

{$ifdef TYPES}
const
  NEFilterProviderRemediationURLFlowURLHostname = 'NE_FLOW_HOSTNAME';
  NEFilterProviderRemediationURLFlowURL = 'NE_FLOW_URL';
  NEFilterProviderRemediationURLOrganization = 'NE_ORGANIZATION';
{$endif}

{$ifdef CLASSES}

type
  NEFilterProvider = objcclass external (NEProvider)
  public
    procedure startFilterWithCompletionHandler (completionHandler: OpaqueCBlock); message 'startFilterWithCompletionHandler:'; { available in NA, 9_0 }
    procedure stopFilterWithReason_completionHandler (reason: NEProviderStopReason; completionHandler: OpaqueCBlock); message 'stopFilterWithReason:completionHandler:'; { available in NA, 9_0 }
    function filterConfiguration: NEFilterProviderConfiguration; message 'filterConfiguration';
  end;

type
  NEFilterVerdict = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;

type
  NEFilterNewFlowVerdict = objcclass external (NEFilterVerdict, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    class function needRulesVerdict: NEFilterNewFlowVerdict; message 'needRulesVerdict'; { available in NA, 9_0 }
    class function allowVerdict: NEFilterNewFlowVerdict; message 'allowVerdict'; { available in NA, 9_0 }
    class function dropVerdict: NEFilterNewFlowVerdict; message 'dropVerdict'; { available in NA, 9_0 }
    class function remediateVerdictWithRemediationURLMapKey_remediationButtonTextMapKey (remediationURLMapKey: NSString; remediationButtonTextMapKey: NSString): NEFilterNewFlowVerdict; message 'remediateVerdictWithRemediationURLMapKey:remediationButtonTextMapKey:'; { available in NA, 9_0 }
    class function URLAppendStringVerdictWithMapKey (urlAppendMapKey: NSString): NEFilterNewFlowVerdict; message 'URLAppendStringVerdictWithMapKey:'; { available in NA, 9_0 }
    class function filterDataVerdictWithFilterInbound_peekInboundBytes_filterOutbound_peekOutboundBytes (filterInbound: boolean; peekInboundBytes: NSUInteger; filterOutbound: boolean; peekOutboundBytes: NSUInteger): NEFilterNewFlowVerdict; message 'filterDataVerdictWithFilterInbound:peekInboundBytes:filterOutbound:peekOutboundBytes:'; { available in NA, 9_0 }
  end;

type
  NEFilterControlVerdict = objcclass external (NEFilterNewFlowVerdict, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    class function allowVerdictWithUpdateRules (updateRules: boolean): NEFilterControlVerdict; message 'allowVerdictWithUpdateRules:'; { available in NA, 9_0 }
    class function dropVerdictWithUpdateRules (updateRules: boolean): NEFilterControlVerdict; message 'dropVerdictWithUpdateRules:'; { available in NA, 9_0 }
    class function updateRules: NEFilterControlVerdict; message 'updateRules'; { available in NA, 9_0 }
  end;
{$endif}

