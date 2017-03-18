{ Parsed from Intents.framework INRideCompletionStatus.h }

{$ifdef TYPES}
type
  INRideCompletionStatusPtr = ^INRideCompletionStatus;
{$endif}

{$ifdef CLASSES}

type
  INRideCompletionStatus = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function init: instancetype; message 'init';
    class function classCompleted: instancetype; message 'completed';
    class function completedWithSettledPaymentAmount (settledPaymentAmount: INCurrencyAmount): instancetype; message 'completedWithSettledPaymentAmount:';
    class function completedWithOutstandingPaymentAmount (outstandingPaymentAmount: INCurrencyAmount): instancetype; message 'completedWithOutstandingPaymentAmount:';
    class function canceledByService: instancetype; message 'canceledByService';
    class function canceledByUser: instancetype; message 'canceledByUser';
    class function canceledMissedPickup: instancetype; message 'canceledMissedPickup';
    procedure setCompletionUserActivity(newValue: NSUserActivity); message 'setCompletionUserActivity:';
    function completionUserActivity: NSUserActivity; message 'completionUserActivity';
    function isCompleted: boolean; message 'isCompleted';
    function isCanceled: boolean; message 'isCanceled';
    function isMissedPickup: boolean; message 'isMissedPickup';
    function paymentAmount: INCurrencyAmount; message 'paymentAmount';
    function isOutstanding: boolean; message 'isOutstanding';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

