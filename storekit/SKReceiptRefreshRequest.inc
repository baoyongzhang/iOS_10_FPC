{ Parsed from StoreKit.framework SKReceiptRefreshRequest.h }

{$ifdef TYPES}
type
  SKReceiptRefreshRequestPtr = ^SKReceiptRefreshRequest;
{$endif}

{$ifdef CLASSES}

type
  SKReceiptRefreshRequest = objcclass external (SKRequest)
  public
    function initWithReceiptProperties (properties: nullable NSDictionaryPtr): instancetype; message 'initWithReceiptProperties:'; { available in 7_0 }
    function receiptProperties: NSDictionary; message 'receiptProperties';
  end;
{$endif}

{$ifdef FUNCTIONS}
procedure SKTerminateForInvalidReceipt; cdecl; external; { available in 7_1 }
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  SKReceiptPropertyIsExpired: NSString { available in 7_0 }; cvar; external;
  SKReceiptPropertyIsRevoked: NSString { available in 7_0 }; cvar; external;
  SKReceiptPropertyIsVolumePurchase: NSString { available in 7_0 }; cvar; external;
{$endif}

