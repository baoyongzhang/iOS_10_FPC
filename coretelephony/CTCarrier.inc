{ Parsed from CoreTelephony.framework CTCarrier.h }

{$ifdef TYPES}
type
  CTCarrierPtr = ^CTCarrier;
{$endif}

{$ifdef CLASSES}

type
  CTCarrier = objcclass external (NSObject)
  public
    function carrierName: NSString; message 'carrierName';
    function mobileCountryCode: NSString; message 'mobileCountryCode';
    function mobileNetworkCode: NSString; message 'mobileNetworkCode';
    function isoCountryCode: NSString; message 'isoCountryCode';
    function allowsVOIP: boolean; message 'allowsVOIP';
  end;
{$endif}

