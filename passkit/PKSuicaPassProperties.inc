{ Parsed from PassKit.framework PKSuicaPassProperties.h }

{$ifdef TYPES}
type
  PKSuicaPassPropertiesPtr = ^PKSuicaPassProperties;
{$endif}

{$ifdef CLASSES}

type
  PKSuicaPassProperties = objcclass external (NSObject)
  public
    class function passPropertiesForPass (pass: PKPass): nullable instancetype; message 'passPropertiesForPass:';
    function transitBalance: NSDecimalNumber; message 'transitBalance';
    function transitBalanceCurrencyCode: NSString; message 'transitBalanceCurrencyCode';
    function isInStation: boolean; message 'isInStation';
    function isInShinkansenStation: boolean; message 'isInShinkansenStation';
    function isGreenCarTicketUsed: boolean; message 'isGreenCarTicketUsed';
    function isBlacklisted: boolean; message 'isBlacklisted';
  end;
{$endif}

