{ Parsed from NetworkExtension.framework NEFilterControlProvider.h }

{$ifdef TYPES}
type
  NEFilterControlProviderPtr = ^NEFilterControlProvider;
{$endif}

{$ifdef CLASSES}

type
  NEFilterControlProvider = objcclass external (NEFilterProvider)
  public
    procedure setRemediationMap(newValue: NSDictionary *>Ptr); message 'setRemediationMap:';
    function remediationMap: NSDictionary *>Ptr; message 'remediationMap';
    procedure setURLAppendStringMap(newValue: NSDictionary); message 'setURLAppendStringMap:';
    function URLAppendStringMap: NSDictionary; message 'URLAppendStringMap';
    procedure handleRemediationForFlow_completionHandler (flow: NEFilterFlow; completionHandler: OpaqueCBlock); message 'handleRemediationForFlow:completionHandler:'; { available in NA, 9_0 }
    procedure handleNewFlow_completionHandler (flow: NEFilterFlow; completionHandler: OpaqueCBlock); message 'handleNewFlow:completionHandler:'; { available in NA, 9_0 }
    procedure notifyRulesChanged; message 'notifyRulesChanged'; { available in NA, 9_0 }
  end;
{$endif}

