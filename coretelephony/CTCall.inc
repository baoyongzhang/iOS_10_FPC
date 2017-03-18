{ Parsed from CoreTelephony.framework CTCall.h }

{$ifdef TYPES}
type
  CTCallPtr = ^CTCall;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  CTCallStateDialing: NSString { available in __MAC_NA, __MAC_NA, __IPHONE_4_0, __IPHONE_10_0, "Replaced by <CallKit/CXCall.h> properties" }; cvar; external;
  CTCallStateIncoming: NSString { available in __MAC_NA, __MAC_NA, __IPHONE_4_0, __IPHONE_10_0, "Replaced by <CallKit/CXCall.h> properties" }; cvar; external;
  CTCallStateConnected: NSString { available in __MAC_NA, __MAC_NA, __IPHONE_4_0, __IPHONE_10_0, "Replaced by <CallKit/CXCall.h> properties" }; cvar; external;
  CTCallStateDisconnected: NSString { available in __MAC_NA, __MAC_NA, __IPHONE_4_0, __IPHONE_10_0, "Replaced by <CallKit/CXCall.h> properties" }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  CTCall = objcclass external (NSObject)
  private
    _callState: NSString;
    _callID: NSString;
  public
    function callState: NSString; message 'callState';
    function callID: NSString; message 'callID';
  end;
{$endif}

