{ Parsed from GameKit.framework GKGameSessionEventListener.h }

{$ifdef TYPES}
type
  GKGameSessionEventListenerProtocolPtr = ^GKGameSessionEventListenerProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  GKGameSessionEventListenerProtocol = objcprotocol external name 'GKGameSessionEventListener' (NSObjectProtocol)
  optional
    procedure session_didAddPlayer (session: GKGameSession; player: GKCloudPlayer); message 'session:didAddPlayer:'; { available in 10_12, 10_0 }
    procedure session_didRemovePlayer (session: GKGameSession; player: GKCloudPlayer); message 'session:didRemovePlayer:'; { available in 10_12, 10_0 }
    procedure session_player_didChangeConnectionState (session: GKGameSession; player: GKCloudPlayer; newState: GKConnectionState); message 'session:player:didChangeConnectionState:'; { available in 10_12, 10_0 }
    procedure session_player_didSaveData (session: GKGameSession; player: GKCloudPlayer; data: NSData); message 'session:player:didSaveData:'; { available in 10_12, 10_0 }
    procedure session_didReceiveData_fromPlayer (session: GKGameSession; data: NSData; player: GKCloudPlayer); message 'session:didReceiveData:fromPlayer:'; { available in 10_12, 10_0 }
    procedure session_didReceiveMessage_withData_fromPlayer (session: GKGameSession; message_: NSString; data: NSData; player: GKCloudPlayer); message 'session:didReceiveMessage:withData:fromPlayer:'; { available in 10_12, 10_0 }
  end;
{$endif}

{$ifdef CLASSES}

type
  GKGameSessionEventListener = objccategory external (GKGameSession)
    class procedure addEventListener (listener: GKGameSessionEventListenerProtocol); message 'addEventListener:'; { available in 10_12, 10_0 }
    class procedure removeEventListener (listener: GKGameSessionEventListenerProtocol); message 'removeEventListener:'; { available in 10_12, 10_0 }
  end;
{$endif}

