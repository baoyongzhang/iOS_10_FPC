{ Parsed from PassKit.framework PKPass.h }

{ Types from PKPass }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  PKPassPtr = ^PKPass;
{$endif}

{$ifndef __PKPASS_H}
{$ifdef TYPES}
type
  PKPassType = NSUInteger;
  PKPassTypePtr = ^PKPassType;

const
  PKPassTypeBarcode = 0;
  PKPassTypePayment = 1;
  PKPassTypeAny = not(0);
{$endif}

{$ifdef CLASSES}

type
  PKPass = objcclass external (PKObject)
  public
    function initWithData_error (data: NSData; error: NSErrorPtr): instancetype; message 'initWithData:error:';
    function passType: PKPassType; message 'passType';
    function paymentPass: PKPaymentPass; message 'paymentPass';
    function serialNumber: NSString; message 'serialNumber';
    function passTypeIdentifier: NSString; message 'passTypeIdentifier';
    function webServiceURL: NSURL; message 'webServiceURL';
    function authenticationToken: NSString; message 'authenticationToken';
    {$if defined(TARGET_OS_IPHONE)}
    function __WATCHOS_PROHIBITED_: UIImage *icon; message 'WATCHOS_PROHIBITED';
    {$endif}
    function localizedName: NSString; message 'localizedName';
    function localizedDescription: NSString; message 'localizedDescription';
    function organizationName: NSString; message 'organizationName';
    function relevantDate: NSDate; message 'relevantDate';
    function userInfo: NSDictionary; message 'userInfo';
    function passURL: NSURL; message 'passURL';
    function isRemotePass: boolean; message 'isRemotePass';
    function deviceName: NSString; message 'deviceName';
    function localizedValueForFieldKey (key: NSString): nullable id; message 'localizedValueForFieldKey:';
  end;
{$endif}

{$endif}
