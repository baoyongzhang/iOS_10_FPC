{ Parsed from StoreKit.framework SKPaymentQueue.h }

{$ifdef TYPES}
type
  SKPaymentQueuePtr = ^SKPaymentQueue;
  SKPaymentTransactionObserverProtocolPtr = ^SKPaymentTransactionObserverProtocol;
{$endif}

{$ifdef CLASSES}

type
  SKPaymentQueue = objcclass external (NSObject)
  private
    _internal: id;
  public
    class function defaultQueue: instancetype; message 'defaultQueue'; { available in 3_0 }
    class function canMakePayments: boolean; message 'canMakePayments'; { available in 3_0 }
    procedure addPayment (payment: SKPayment); message 'addPayment:'; { available in 3_0 }
    procedure restoreCompletedTransactions; message 'restoreCompletedTransactions'; { available in 3_0 }
    procedure restoreCompletedTransactionsWithApplicationUsername (username: nullable NSStringPtr); message 'restoreCompletedTransactionsWithApplicationUsername:'; { available in 7_0 }
    procedure finishTransaction (transaction: SKPaymentTransaction); message 'finishTransaction:'; { available in 3_0 }
    procedure startDownloads (downloads: SKDownload *ProtocolPtr); message 'startDownloads:'; { available in 6_0 }
    procedure pauseDownloads (downloads: SKDownload *ProtocolPtr); message 'pauseDownloads:'; { available in 6_0 }
    procedure resumeDownloads (downloads: SKDownload *ProtocolPtr); message 'resumeDownloads:'; { available in 6_0 }
    procedure cancelDownloads (downloads: SKDownload *ProtocolPtr); message 'cancelDownloads:'; { available in 6_0 }
    procedure addTransactionObserver (observer: SKPaymentTransactionObserverProtocol); message 'addTransactionObserver:'; { available in 3_0 }
    procedure removeTransactionObserver (observer: SKPaymentTransactionObserverProtocol); message 'removeTransactionObserver:'; { available in 3_0 }
    function transactions: SKPaymentTransaction *ProtocolPtr; message 'transactions';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  SKPaymentTransactionObserverProtocol = objcprotocol external name 'SKPaymentTransactionObserver' (NSObjectProtocol)
  required
    procedure paymentQueue_updatedTransactions (queue: SKPaymentQueue; transactions: SKPaymentTransaction *ProtocolPtr); message 'paymentQueue:updatedTransactions:'; { available in 3_0 }
  optional
    procedure paymentQueue_removedTransactions (queue: SKPaymentQueue; transactions: SKPaymentTransaction *ProtocolPtr); message 'paymentQueue:removedTransactions:'; { available in 3_0 }
    procedure paymentQueue_restoreCompletedTransactionsFailedWithError (queue: SKPaymentQueue; error: NSError); message 'paymentQueue:restoreCompletedTransactionsFailedWithError:'; { available in 3_0 }
    procedure paymentQueueRestoreCompletedTransactionsFinished (queue: SKPaymentQueue); message 'paymentQueueRestoreCompletedTransactionsFinished:'; { available in 3_0 }
    procedure paymentQueue_updatedDownloads (queue: SKPaymentQueue; downloads: SKDownload *ProtocolPtr); message 'paymentQueue:updatedDownloads:'; { available in 6_0 }
  end;
{$endif}

