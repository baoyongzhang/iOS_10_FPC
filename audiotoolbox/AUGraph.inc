{ Parsed from AudioToolbox.framework AUGraph.h }

{$ifndef AudioToolbox_AUGraph_h}

{$ifdef TYPES}
type
  AUGraph = OpaqueType;
  AUNode = SInt32;
  AUNodePtr = ^AUNode;
{$endif}

{$ifdef FUNCTIONS}
function NewAUGraph(outGraph: AUGraph __nullable* __nonnull): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_2_0 }
function DisposeAUGraph(inGraph: AUGraph): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_2_0 }
function AUGraphAddNode(inGraph: AUGraph; inDescription: AudioComponentDescriptionPtr; outNode: AUNodePtr): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AUGraphRemoveNode(inGraph: AUGraph; inNode: AUNode): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_2_0 }
function AUGraphGetNodeCount(inGraph: AUGraph; outNumberOfNodes: UInt32Ptr): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_2_0 }
function AUGraphGetIndNode(inGraph: AUGraph; inIndex: UInt32; outNode: AUNodePtr): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_2_0 }
function AUGraphNodeInfo(inGraph: AUGraph; inNode: AUNode; outDescription: AudioComponentDescription* __nullable; outAudioUnit: AudioUnit __nullable* __nullable): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
{$endif}

{$if  not defined(TARGET_OS_IPHONE)}
{$ifdef FUNCTIONS}
function AUGraphNewNodeSubGraph(inGraph: AUGraph; outNode: AUNodePtr): OSStatus; cdecl; external; { available starting in __MAC_10_2,__IPHONE_NA }
function AUGraphGetNodeInfoSubGraph(inGraph: AUGraph; inNode: AUNode; outSubGraph: AUGraph __nullable* __nonnull): OSStatus; cdecl; external; { available starting in __MAC_10_2,__IPHONE_NA }
function AUGraphIsNodeSubGraph(inGraph: AUGraph; inNode: AUNode; outFlag: pboolean): OSStatus; cdecl; external; { available starting in __MAC_10_2,__IPHONE_NA }
{$endif}

{$endif}
{$ifdef TYPES}
type
  AudioUnitNodeConnection = record
    sourceNode: AUNode;
    sourceOutputNumber: UInt32;
    destNode: AUNode;
    destInputNumber: UInt32;
  end;
type
  AudioUnitNodeConnectionPtr = ^AudioUnitNodeConnection;

type
  AUNodeConnection = AudioUnitNodeConnection;
  AUNodeConnectionPtr = ^AUNodeConnection;

type
  AUNodeRenderCallback = record
    destNode: AUNode;
    destInputNumber: AudioUnitElement;
    cback: AURenderCallbackStruct;
  end;
type
  AUNodeRenderCallbackPtr = ^AUNodeRenderCallback;
type
  AUNodeInteraction = record
    nodeInteractionType: UInt32;
    nodeInteraction: record
      case longint of
        0: (connection: AUNodeConnection);
        1: (inputCallback: AUNodeRenderCallback);
    end;
  end;
type
  AUNodeInteractionPtr = ^AUNodeInteraction;
{$endif}

{$ifdef FUNCTIONS}
function AUGraphConnectNodeInput(inGraph: AUGraph; inSourceNode: AUNode; inSourceOutputNumber: UInt32; inDestNode: AUNode; inDestInputNumber: UInt32): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_2_0 }
function AUGraphSetNodeInputCallback(inGraph: AUGraph; inDestNode: AUNode; inDestInputNumber: UInt32; inInputCallback: AURenderCallbackStructPtr): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AUGraphDisconnectNodeInput(inGraph: AUGraph; inDestNode: AUNode; inDestInputNumber: UInt32): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_2_0 }
function AUGraphClearConnections(inGraph: AUGraph): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_2_0 }
function AUGraphGetNumberOfInteractions(inGraph: AUGraph; outNumInteractions: UInt32Ptr): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AUGraphGetInteractionInfo(inGraph: AUGraph; inInteractionIndex: UInt32; outInteraction: AUNodeInteractionPtr): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AUGraphCountNodeInteractions(inGraph: AUGraph; inNode: AUNode; outNumInteractions: UInt32Ptr): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AUGraphGetNodeInteractions(inGraph: AUGraph; inNode: AUNode; ioNumInteractions: UInt32Ptr; outInteractions: AUNodeInteractionPtr): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AUGraphUpdate(inGraph: AUGraph; outIsUpdated: Boolean* __nullable): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_2_0 }
function AUGraphOpen(inGraph: AUGraph): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_2_0 }
function AUGraphClose(inGraph: AUGraph): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_2_0 }
function AUGraphInitialize(inGraph: AUGraph): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_2_0 }
function AUGraphUninitialize(inGraph: AUGraph): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_2_0 }
function AUGraphStart(inGraph: AUGraph): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_2_0 }
function AUGraphStop(inGraph: AUGraph): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_2_0 }
function AUGraphIsOpen(inGraph: AUGraph; outIsOpen: pboolean): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_2_0 }
function AUGraphIsInitialized(inGraph: AUGraph; outIsInitialized: pboolean): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_2_0 }
function AUGraphIsRunning(inGraph: AUGraph; outIsRunning: pboolean): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_2_0 }
function AUGraphGetCPULoad(inGraph: AUGraph; outAverageCPULoad: Float32Ptr): OSStatus; cdecl; external; { available starting in __MAC_10_1,__IPHONE_2_0 }
function AUGraphGetMaxCPULoad(inGraph: AUGraph; outMaxLoad: Float32Ptr): OSStatus; cdecl; external; { available starting in __MAC_10_3,__IPHONE_2_0 }
function AUGraphAddRenderNotify(inGraph: AUGraph; inCallback: AURenderCallback; inRefCon: void* __nullable): OSStatus; cdecl; external; { available starting in __MAC_10_2,__IPHONE_2_0 }
function AUGraphRemoveRenderNotify(inGraph: AUGraph; inCallback: AURenderCallback; inRefCon: void* __nullable): OSStatus; cdecl; external; { available starting in __MAC_10_2,__IPHONE_2_0 }
{$endif}

{$if  not defined(TARGET_OS_IPHONE)}
{$ifdef FUNCTIONS}
function AUGraphNewNode(inGraph: AUGraph; inDescription: ComponentDescriptionPtr; inClassDataSize: UInt32; inClassData: pointer; outNode: AUNodePtr): OSStatus; cdecl; external; deprecated 'in __MAC_10_0,__MAC_10_5, __IPHONE_NA, __IPHONE_NA';
function AUGraphGetNodeInfo(inGraph: AUGraph; inNode: AUNode; outDescription: ComponentDescriptionPtr; outClassDataSize: UInt32Ptr; outClassData: void* __nullable* __nullable; outAudioUnit: AudioUnit __nullable* __nullable): OSStatus; cdecl; external; deprecated 'in __MAC_10_0,__MAC_10_5, __IPHONE_NA, __IPHONE_NA';
function AUGraphGetNumberOfConnections(inGraph: AUGraph; outNumConnections: UInt32Ptr): OSStatus; cdecl; external; deprecated 'in __MAC_10_1,__MAC_10_5, __IPHONE_NA, __IPHONE_NA';
function AUGraphGetConnectionInfo(inGraph: AUGraph; inConnectionIndex: UInt32; outSourceNode: AUNodePtr; outSourceOutputNumber: UInt32Ptr; outDestNode: AUNodePtr; outDestInputNumber: UInt32Ptr): OSStatus; cdecl; external; deprecated 'in __MAC_10_1,__MAC_10_5, __IPHONE_NA, __IPHONE_NA';
function AUGraphCountNodeConnections(inGraph: AUGraph; inNode: AUNode; outNumConnections: UInt32Ptr): OSStatus; cdecl; external; deprecated 'in __MAC_10_3,__MAC_10_5, __IPHONE_NA, __IPHONE_NA';
function AUGraphGetNodeConnections(inGraph: AUGraph; inNode: AUNode; outConnections: AudioUnitNodeConnectionPtr; ioNumConnections: UInt32Ptr): OSStatus; cdecl; external; deprecated 'in __MAC_10_3,__MAC_10_5, __IPHONE_NA, __IPHONE_NA';
{$endif}

{$endif}

{$endif}
