{ Parsed from StoreKit.framework SKPayment.h }

{$ifdef TYPES}
type
  SKPaymentPtr = ^SKPayment;
  SKMutablePaymentPtr = ^SKMutablePayment;
{$endif}

{$ifdef CLASSES}

type
  SKPayment = objcclass external (NSObject, NSCopyingProtocol, NSMutableCopyingProtocol)
  private
    _internal: id;
  public
    class function paymentWithProduct (product: SKProduct): instancetype; message 'paymentWithProduct:'; { available in 3_0 }
    class function paymentWithProductIdentifier (identifier: NSString): id; message 'paymentWithProductIdentifier:'; deprecated 'in 3_0, 5_0, "Use +paymentWithProduct: after fetching the available products using SKProductsRequest"';
    function productIdentifier: NSString; message 'productIdentifier';
    function requestData: NSData; message 'requestData';
    function quantity: NSInteger; message 'quantity';
    function applicationUsername: NSString; message 'applicationUsername';
    function simulatesAskToBuyInSandbox: boolean; message 'simulatesAskToBuyInSandbox';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    function mutableCopyWithZone (zone: nullable NSZonePtr): id; message 'mutableCopyWithZone:';
  end;

type
  SKMutablePayment = objcclass external (SKPayment)
  public
    procedure setApplicationUsername(newValue: NSString); message 'setApplicationUsername:';
    function applicationUsername: NSString; message 'applicationUsername';
    procedure setProductIdentifier(newValue: NSString); message 'setProductIdentifier:';
    function productIdentifier: NSString; message 'productIdentifier';
    procedure setQuantity(newValue: NSInteger); message 'setQuantity:';
    function quantity: NSInteger; message 'quantity';
    procedure setRequestData(newValue: NSData); message 'setRequestData:';
    function requestData: NSData; message 'requestData';
    procedure setSimulatesAskToBuyInSandbox(newValue: boolean); message 'setSimulatesAskToBuyInSandbox:';
    function simulatesAskToBuyInSandbox: boolean; message 'simulatesAskToBuyInSandbox';
  end;
{$endif}

