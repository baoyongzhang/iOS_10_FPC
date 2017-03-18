{ Parsed from GameController.framework GCController.h }

{ Types from GCController }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  GCEventViewControllerPtr = ^GCEventViewController;
  GCControllerPtr = ^GCController;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  GCControllerDidConnectNotification: NSString; cvar; external;
  GCControllerDidDisconnectNotification: NSString; cvar; external;
{$endif}

{$else}
{$ifdef CLASSES}

type
  GCEventViewController = objcclass external (NSViewController)
  public
    procedure setControllerUserInteractionEnabled(newValue: boolean); message 'setControllerUserInteractionEnabled:';
    function controllerUserInteractionEnabled: boolean; message 'controllerUserInteractionEnabled';
  end;
{$endif}

{$ifdef TYPES}
type
  GCControllerPlayerIndex = NSInteger;
  GCControllerPlayerIndexPtr = ^GCControllerPlayerIndex;

const
  GCControllerPlayerIndexUnset = -1;
  GCControllerPlayerIndex1 = 0;
  GCControllerPlayerIndex2 = 1;
  GCControllerPlayerIndex3 = 2;
  GCControllerPlayerIndex4 = 3;
{$endif}

{$ifdef CLASSES}

type
  GCController = objcclass external (NSObject)
  public
    procedure setControllerPausedHandler(newValue: OpaqueCBlock); message 'setControllerPausedHandler:';
    function controllerPausedHandler: OpaqueCBlock; message 'controllerPausedHandler';
    {$if (defined(OS_OBJECT_USE_OBJC)) and (OS_OBJECT_USE_OBJC = 1)}
    procedure setHandlerQueue(newValue: dispatch_queue_t); message 'setHandlerQueue:';
    function handlerQueue: dispatch_queue_t; message 'handlerQueue';
    {$else}
    procedure setHandlerQueue_(newValue: dispatch_queue_t); message 'setHandlerQueue:';
    function handlerQueue_: dispatch_queue_t; message 'handlerQueue';
    {$endif}
    function vendorName: NSString; message 'vendorName';
    function isAttachedToDevice: boolean; message 'isAttachedToDevice';
    procedure setPlayerIndex(newValue: GCControllerPlayerIndex); message 'setPlayerIndex:';
    function playerIndex: GCControllerPlayerIndex; message 'playerIndex';
    function gamepad: GCGamepad; message 'gamepad';
    function microGamepad: GCMicroGamepad; message 'microGamepad';
    function extendedGamepad: GCExtendedGamepad; message 'extendedGamepad';
    function motion_: GCMotion; message 'motion';
    class function controllers: GCController *ProtocolPtr; message 'controllers';
    class procedure startWirelessControllerDiscoveryWithCompletionHandler (completionHandler: OpaqueCBlock); message 'startWirelessControllerDiscoveryWithCompletionHandler:';
    class procedure stopWirelessControllerDiscovery; message 'stopWirelessControllerDiscovery';
  end;
{$endif}

