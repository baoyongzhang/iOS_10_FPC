{ Parsed from NetworkExtension.framework NEPacketTunnelFlow.h }

{$ifdef TYPES}
type
  NEPacketTunnelFlowPtr = ^NEPacketTunnelFlow;
{$endif}

{$ifdef CLASSES}

type
  NEPacketTunnelFlow = objcclass external (NSObject)
  public
    procedure readPacketsWithCompletionHandler (completionHandler: OpaqueCBlock); message 'readPacketsWithCompletionHandler:'; { available in 10_11, 9_0 }
    function writePackets_withProtocols (packets: NSData *ProtocolPtr; protocols: NSNumber *ProtocolPtr): boolean; message 'writePackets:withProtocols:'; { available in 10_11, 9_0 }
    procedure readPacketObjectsWithCompletionHandler (completionHandler: OpaqueCBlock); message 'readPacketObjectsWithCompletionHandler:'; { available in 10_12, 10_0 }
    function writePacketObjects (packets: NEPacket *ProtocolPtr): boolean; message 'writePacketObjects:'; { available in 10_12, 10_0 }
  end;
{$endif}

