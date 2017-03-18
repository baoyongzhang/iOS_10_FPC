{ Parsed from NetworkExtension.framework NEFilterDataProvider.h }

{$ifdef TYPES}
type
  NEFilterDataProviderPtr = ^NEFilterDataProvider;
  NEFilterDataVerdictPtr = ^NEFilterDataVerdict;
  NEFilterRemediationVerdictPtr = ^NEFilterRemediationVerdict;
{$endif}

{$ifdef CLASSES}

type
  NEFilterDataProvider = objcclass external (NEFilterProvider)
  public
    function handleNewFlow (flow: NEFilterFlow): NEFilterNewFlowVerdict; message 'handleNewFlow:'; { available in NA, 9_0 }
    function handleInboundDataFromFlow_readBytesStartOffset_readBytes (flow: NEFilterFlow; offset: NSUInteger; readBytes: NSData): NEFilterDataVerdict; message 'handleInboundDataFromFlow:readBytesStartOffset:readBytes:'; { available in NA, 9_0 }
    function handleOutboundDataFromFlow_readBytesStartOffset_readBytes (flow: NEFilterFlow; offset: NSUInteger; readBytes: NSData): NEFilterDataVerdict; message 'handleOutboundDataFromFlow:readBytesStartOffset:readBytes:'; { available in NA, 9_0 }
    function handleInboundDataCompleteForFlow (flow: NEFilterFlow): NEFilterDataVerdict; message 'handleInboundDataCompleteForFlow:'; { available in NA, 9_0 }
    function handleOutboundDataCompleteForFlow (flow: NEFilterFlow): NEFilterDataVerdict; message 'handleOutboundDataCompleteForFlow:'; { available in NA, 9_0 }
    function handleRemediationForFlow (flow: NEFilterFlow): NEFilterRemediationVerdict; message 'handleRemediationForFlow:'; { available in NA, 9_0 }
    procedure handleRulesChanged; message 'handleRulesChanged'; { available in NA, 9_0 }
  end;

type
  NEFilterDataVerdict = objcclass external (NEFilterVerdict, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    class function allowVerdict: NEFilterDataVerdict; message 'allowVerdict'; { available in NA, 9_0 }
    class function dropVerdict: NEFilterDataVerdict; message 'dropVerdict'; { available in NA, 9_0 }
    class function remediateVerdictWithRemediationURLMapKey_remediationButtonTextMapKey (remediationURLMapKey: nullable NSStringPtr; remediationButtonTextMapKey: nullable NSStringPtr): NEFilterDataVerdict; message 'remediateVerdictWithRemediationURLMapKey:remediationButtonTextMapKey:'; { available in NA, 9_0 }
    class function dataVerdictWithPassBytes_peekBytes (passBytes: NSUInteger; peekBytes: NSUInteger): NEFilterDataVerdict; message 'dataVerdictWithPassBytes:peekBytes:'; { available in NA, 9_0 }
    class function needRulesVerdict: NEFilterDataVerdict; message 'needRulesVerdict'; { available in NA, 9_0 }
  end;

type
  NEFilterRemediationVerdict = objcclass external (NEFilterVerdict, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    class function allowVerdict: NEFilterRemediationVerdict; message 'allowVerdict'; { available in NA, 9_0 }
    class function dropVerdict: NEFilterRemediationVerdict; message 'dropVerdict'; { available in NA, 9_0 }
    class function needRulesVerdict: NEFilterRemediationVerdict; message 'needRulesVerdict'; { available in NA, 9_0 }
  end;
{$endif}

