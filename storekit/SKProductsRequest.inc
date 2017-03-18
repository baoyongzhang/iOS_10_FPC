{ Parsed from StoreKit.framework SKProductsRequest.h }

{$ifdef TYPES}
type
  SKProductsRequestPtr = ^SKProductsRequest;
  SKProductsResponsePtr = ^SKProductsResponse;
  SKProductsRequestDelegateProtocolPtr = ^SKProductsRequestDelegateProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  SKProductsRequestDelegateProtocol = objcprotocol external name 'SKProductsRequestDelegate' (SKRequestDelegateProtocol)
  required
    procedure productsRequest_didReceiveResponse (request: SKProductsRequest; response: SKProductsResponse); message 'productsRequest:didReceiveResponse:'; { available in 3_0 }
  end;
{$endif}

{$ifdef CLASSES}

type
  SKProductsRequest = objcclass external (SKRequest)
  private
    _productsRequestInternal: id;
  public
    function initWithProductIdentifiers (productIdentifiers: NSString *ProtocolPtr): instancetype; message 'initWithProductIdentifiers:'; { available in 3_0 }
    procedure setDelegate(newValue: SKProductsRequestDelegateProtocol); message 'setDelegate:';
    function delegate: SKProductsRequestDelegateProtocol; message 'delegate';
  end;

type
  SKProductsResponse = objcclass external (NSObject)
  private
    _internal: id;
  public
    function products: SKProduct *ProtocolPtr; message 'products';
    function invalidProductIdentifiers: NSString *ProtocolPtr; message 'invalidProductIdentifiers';
  end;
{$endif}

