{ Parsed from PassKit.framework PKPaymentRequest.h }

{ Types from PKPaymentRequest }
{$ifdef TYPES}


{$endif}


{$ifdef TYPES}
type
  PKPaymentSummaryItemPtr = ^PKPaymentSummaryItem;
  PKShippingMethodPtr = ^PKShippingMethod;
  PKPaymentRequestPtr = ^PKPaymentRequest;
{$endif}

{$ifdef TYPES}
type
  PKMerchantCapability = NSUInteger;
  PKMerchantCapabilityPtr = ^PKMerchantCapability;

const
  PKMerchantCapability3DS = 1 shl 0;
  PKMerchantCapabilityEMV = 1 shl 1;
  PKMerchantCapabilityCredit = 1 shl 2 { available in 9_0 };
  PKMerchantCapabilityDebit = 1 shl 3 { available in 9_0 };

type
  PKAddressField = NSUInteger;
  PKAddressFieldPtr = ^PKAddressField;

const
  PKAddressFieldNone = 0;
  PKAddressFieldPostalAddress = 1 shl 0;
  PKAddressFieldPhone = 1 shl 1;
  PKAddressFieldEmail = 1 shl 2;
  PKAddressFieldName = 1 shl 3 { available in 8_3 };
  PKAddressFieldAll = PKAddressFieldPostalAddress + PKAddressFieldPhone + PKAddressFieldEmail + PKAddressFieldName;

type
  PKShippingType = NSUInteger;
  PKShippingTypePtr = ^PKShippingType;

const
  PKShippingTypeShipping = 0;
  PKShippingTypeDelivery = 1;
  PKShippingTypeStorePickup = 2;
  PKShippingTypeServicePickup = 3;

type
  PKPaymentSummaryItemType = NSUInteger;
  PKPaymentSummaryItemTypePtr = ^PKPaymentSummaryItemType;

const
  PKPaymentSummaryItemTypeFinal = 0;
  PKPaymentSummaryItemTypePending = 1;
{$endif}

{$ifdef CLASSES}

type
  PKPaymentSummaryItem = objcclass external (NSObject)
  public
    class function summaryItemWithLabel_amount (label_: NSString; amount: NSDecimalNumber): instancetype; message 'summaryItemWithLabel:amount:';
    class function summaryItemWithLabel_amount_type (label_: NSString; amount: NSDecimalNumber; type_: PKPaymentSummaryItemType): instancetype; message 'summaryItemWithLabel:amount:type:'; { available in 9_0 }
    procedure setLabel(newValue: NSString); message 'setLabel:';
    function label_: NSString; message 'label';
    procedure setAmount(newValue: NSDecimalNumber); message 'setAmount:';
    function amount: NSDecimalNumber; message 'amount';
    procedure setType(newValue: PKPaymentSummaryItemType); message 'setType:';
    function type_: PKPaymentSummaryItemType; message 'type';
  end;

type
  PKShippingMethod = objcclass external (PKPaymentSummaryItem)
  public
    procedure setIdentifier(newValue: NSString); message 'setIdentifier:';
    function identifier: NSString; message 'identifier';
    procedure setDetail(newValue: NSString); message 'setDetail:';
    function detail: NSString; message 'detail';
  end;

type
  PKPaymentRequest = objcclass external (NSObject)
  public
    class function availableNetworks: PKPaymentNetworkProtocolPtr; message 'availableNetworks'; { available in 10_0 }
    procedure setMerchantIdentifier(newValue: NSString); message 'setMerchantIdentifier:';
    function merchantIdentifier: NSString; message 'merchantIdentifier';
    procedure setCountryCode(newValue: NSString); message 'setCountryCode:';
    function countryCode: NSString; message 'countryCode';
    procedure setSupportedNetworks(newValue: PKPaymentNetworkProtocolPtr); message 'setSupportedNetworks:';
    function supportedNetworks: PKPaymentNetworkProtocolPtr; message 'supportedNetworks';
    procedure setMerchantCapabilities(newValue: PKMerchantCapability); message 'setMerchantCapabilities:';
    function merchantCapabilities: PKMerchantCapability; message 'merchantCapabilities';
    procedure setPaymentSummaryItems(newValue: PKPaymentSummaryItem *ProtocolPtr); message 'setPaymentSummaryItems:';
    function paymentSummaryItems: PKPaymentSummaryItem *ProtocolPtr; message 'paymentSummaryItems';
    procedure setCurrencyCode(newValue: NSString); message 'setCurrencyCode:';
    function currencyCode: NSString; message 'currencyCode';
    procedure setRequiredBillingAddressFields(newValue: PKAddressField); message 'setRequiredBillingAddressFields:';
    function requiredBillingAddressFields: PKAddressField; message 'requiredBillingAddressFields';
    procedure setBillingContact(newValue: PKContact); message 'setBillingContact:';
    function billingContact: PKContact; message 'billingContact';
    {$if defined(TARGET_OS_IOS)}
    procedure set__WATCHOS_PROHIBITED(newValue: ABRecordRef billingAddress); message 'set__WATCHOS_PROHIBITED:';
    function __WATCHOS_PROHIBITED_: ABRecordRef billingAddress; message 'WATCHOS_PROHIBITED';
    {$endif}
    procedure setRequiredShippingAddressFields(newValue: PKAddressField); message 'setRequiredShippingAddressFields:';
    function requiredShippingAddressFields: PKAddressField; message 'requiredShippingAddressFields';
    procedure setShippingContact(newValue: PKContact); message 'setShippingContact:';
    function shippingContact: PKContact; message 'shippingContact';
    {$if defined(TARGET_OS_IOS)}
    procedure set__WATCHOS_PROHIBITED_(newValue: ABRecordRef shippingAddress); message 'set__WATCHOS_PROHIBITED:';
    function __WATCHOS_PROHIBITED_: ABRecordRef shippingAddress; message 'WATCHOS_PROHIBITED';
    {$endif}
    procedure setShippingMethods(newValue: PKShippingMethod *ProtocolPtr); message 'setShippingMethods:';
    function shippingMethods: PKShippingMethod *ProtocolPtr; message 'shippingMethods';
    procedure setShippingType(newValue: PKShippingType); message 'setShippingType:';
    function shippingType: PKShippingType; message 'shippingType';
    procedure setApplicationData(newValue: NSData); message 'setApplicationData:';
    function applicationData: NSData; message 'applicationData';
  end;
{$endif}

