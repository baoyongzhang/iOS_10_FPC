{$mode delphi}
{$modeswitch objectivec1}
{$modeswitch cvar}

unit DefinedClassesStoreKit;
interface

type
  SKCloudServiceController = objcclass external;
  SKCloudServiceSetupViewController = objcclass external;
  SKDownload = objcclass external;
  SKMutablePayment = objcclass external;
  SKPayment = objcclass external;
  SKPaymentQueue = objcclass external;
  SKPaymentTransaction = objcclass external;
  SKProduct = objcclass external;
  SKProductsRequest = objcclass external;
  SKProductsResponse = objcclass external;
  SKReceiptRefreshRequest = objcclass external;
  SKRequest = objcclass external;
  SKStoreProductViewController = objcclass external;
  SKCloudServiceSetupViewControllerDelegateProtocol = objcprotocol external name 'SKCloudServiceSetupViewControllerDelegate';
  SKPaymentTransactionObserverProtocol = objcprotocol external name 'SKPaymentTransactionObserver';
  SKProductsRequestDelegateProtocol = objcprotocol external name 'SKProductsRequestDelegate';
  SKRequestDelegateProtocol = objcprotocol external name 'SKRequestDelegate';
  SKStoreProductViewControllerDelegateProtocol = objcprotocol external name 'SKStoreProductViewControllerDelegate';

implementation
end.
