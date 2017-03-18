{ Parsed from NetworkExtension.framework NEVPNConnection.h }

{$ifdef TYPES}
type
  NEVPNConnectionPtr = ^NEVPNConnection;
{$endif}

{$ifdef TYPES}
type
  NEVPNStatus = NSInteger;
  NEVPNStatusPtr = ^NEVPNStatus;

const
  NEVPNStatusInvalid = 0;
  NEVPNStatusDisconnected = 1;
  NEVPNStatusConnecting = 2;
  NEVPNStatusConnected = 3;
  NEVPNStatusReasserting = 4;
  NEVPNStatusDisconnecting = 5;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NEVPNStatusDidChangeNotification: NSString { available in 10_11, 8_0 }; cvar; external;
  NEVPNConnectionStartOptionUsername: NSString { available in 10_11, 9_0 }; cvar; external;
  NEVPNConnectionStartOptionPassword: NSString { available in 10_11, 9_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NEVPNConnection = objcclass external (NSObject)
  public
    function startVPNTunnelAndReturnError (error: NSErrorPtr): boolean; message 'startVPNTunnelAndReturnError:'; { available in 10_11, 8_0 }
    function startVPNTunnelWithOptions_andReturnError (options: nullable NSDictionaryPtr; error: NSErrorPtr): boolean; message 'startVPNTunnelWithOptions:andReturnError:'; { available in 10_11, 9_0 }
    procedure stopVPNTunnel; message 'stopVPNTunnel'; { available in 10_11, 8_0 }
    function status: NEVPNStatus; message 'status';
    function connectedDate: NSDate; message 'connectedDate';
    function manager: NEVPNManager; message 'manager';
  end;
{$endif}

