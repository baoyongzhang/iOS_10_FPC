{ Parsed from Foundation.framework NSDecimalNumber.h }

{ Types from NSDecimalNumber }
{$ifdef TYPES}


{$endif}


{$ifdef TYPES}
type
  NSDecimalNumberPtr = ^NSDecimalNumber;
  NSDecimalNumberHandlerPtr = ^NSDecimalNumberHandler;
  NSDecimalNumberBehaviorsProtocolPtr = ^NSDecimalNumberBehaviorsProtocol;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSDecimalNumberExactnessException: NSExceptionName; cvar; external;
  NSDecimalNumberOverflowException: NSExceptionName; cvar; external;
  NSDecimalNumberUnderflowException: NSExceptionName; cvar; external;
  NSDecimalNumberDivideByZeroException: NSExceptionName; cvar; external;
{$endif}

{$ifdef PROTOCOLS}

type
  NSDecimalNumberBehaviorsProtocol = objcprotocol external name 'NSDecimalNumberBehaviors'
    function roundingMode: NSRoundingMode; message 'roundingMode';
    function scale: cshort; message 'scale';
    function exceptionDuringOperation_error_leftOperand_rightOperand (operation: SEL; error: NSCalculationError; leftOperand: NSDecimalNumber; rightOperand: NSDecimalNumberPtr): NSDecimalNumberPtr; message 'exceptionDuringOperation:error:leftOperand:rightOperand:';
  end;
{$endif}

{$ifdef CLASSES}

type
  NSDecimalNumber = objcclass external (NSNumber)
  private
    _anonStruct_NSDecimalNumber0: record
      case byte of
        0: (anonBitField_NSDecimalNumber0: cuint);
        1: (data: bitpacked record
          _exponent: 0..((1 shl 8)-1);
          _length: 0..((1 shl 4)-1);
          _isNegative: 0..1;
          _isCompact: 0..1;
          _reserved: 0..1;
          _hasExternalRefCount: 0..1;
          _refs: 0..((1 shl 16)-1);
        end;
      );
    end;
    _mantissa:array[0..0] of cushort;
  public
    function initWithMantissa_exponent_isNegative (mantissa: culonglong; exponent: cshort; flag: boolean): instancetype; message 'initWithMantissa:exponent:isNegative:';
    function initWithDecimal (dcm: NSDecimal): instancetype; message 'initWithDecimal:'; { NS_DESIGNATED_INITIALIZER }
    function initWithString (numberValue: nullable NSStringPtr): instancetype; message 'initWithString:';
    function initWithString_locale (numberValue: nullable NSStringPtr; locale: nullable id): instancetype; message 'initWithString:locale:';
    function descriptionWithLocale (locale: nullable id): NSString; message 'descriptionWithLocale:';
    function decimalValue: NSDecimal; message 'decimalValue';
    class function decimalNumberWithMantissa_exponent_isNegative (mantissa: culonglong; exponent: cshort; flag: boolean): NSDecimalNumber; message 'decimalNumberWithMantissa:exponent:isNegative:';
    class function decimalNumberWithDecimal (dcm: NSDecimal): NSDecimalNumber; message 'decimalNumberWithDecimal:';
    class function decimalNumberWithString (numberValue: nullable NSStringPtr): NSDecimalNumber; message 'decimalNumberWithString:';
    class function decimalNumberWithString_locale (numberValue: nullable NSStringPtr; locale: nullable id): NSDecimalNumber; message 'decimalNumberWithString:locale:';
    {$if defined(FOUNDATION_SWIFT_SDK_EPOCH_AT_LEAST)}
    function zero: NSDecimalNumber; message 'zero';
    function one: NSDecimalNumber; message 'one';
    function minimumDecimalNumber: NSDecimalNumber; message 'minimumDecimalNumber';
    function maximumDecimalNumber: NSDecimalNumber; message 'maximumDecimalNumber';
    function notANumber: NSDecimalNumber; message 'notANumber';
    {$endif}
    function decimalNumberByAdding (decimalNumber: NSDecimalNumber): NSDecimalNumber; message 'decimalNumberByAdding:';
    function decimalNumberByAdding_withBehavior (decimalNumber: NSDecimalNumber; behavior: nullable NSDecimalNumberBehaviorsProtocol): NSDecimalNumber; message 'decimalNumberByAdding:withBehavior:';
    function decimalNumberBySubtracting (decimalNumber: NSDecimalNumber): NSDecimalNumber; message 'decimalNumberBySubtracting:';
    function decimalNumberBySubtracting_withBehavior (decimalNumber: NSDecimalNumber; behavior: nullable NSDecimalNumberBehaviorsProtocol): NSDecimalNumber; message 'decimalNumberBySubtracting:withBehavior:';
    function decimalNumberByMultiplyingBy (decimalNumber: NSDecimalNumber): NSDecimalNumber; message 'decimalNumberByMultiplyingBy:';
    function decimalNumberByMultiplyingBy_withBehavior (decimalNumber: NSDecimalNumber; behavior: nullable NSDecimalNumberBehaviorsProtocol): NSDecimalNumber; message 'decimalNumberByMultiplyingBy:withBehavior:';
    function decimalNumberByDividingBy (decimalNumber: NSDecimalNumber): NSDecimalNumber; message 'decimalNumberByDividingBy:';
    function decimalNumberByDividingBy_withBehavior (decimalNumber: NSDecimalNumber; behavior: nullable NSDecimalNumberBehaviorsProtocol): NSDecimalNumber; message 'decimalNumberByDividingBy:withBehavior:';
    function decimalNumberByRaisingToPower (power: NSUInteger): NSDecimalNumber; message 'decimalNumberByRaisingToPower:';
    function decimalNumberByRaisingToPower_withBehavior (power: NSUInteger; behavior: nullable NSDecimalNumberBehaviorsProtocol): NSDecimalNumber; message 'decimalNumberByRaisingToPower:withBehavior:';
    function decimalNumberByMultiplyingByPowerOf10 (power: cshort): NSDecimalNumber; message 'decimalNumberByMultiplyingByPowerOf10:';
    function decimalNumberByMultiplyingByPowerOf10_withBehavior (power: cshort; behavior: nullable NSDecimalNumberBehaviorsProtocol): NSDecimalNumber; message 'decimalNumberByMultiplyingByPowerOf10:withBehavior:';
    function decimalNumberByRoundingAccordingToBehavior (behavior: nullable NSDecimalNumberBehaviorsProtocol): NSDecimalNumber; message 'decimalNumberByRoundingAccordingToBehavior:';
    function compare (decimalNumber: NSNumber): NSComparisonResult; message 'compare:';
    {$if defined(FOUNDATION_SWIFT_SDK_EPOCH_AT_LEAST)}
    procedure setDefaultBehavior(newValue: NSDecimalNumberBehaviorsProtocol); message 'setDefaultBehavior:';
    function defaultBehavior: NSDecimalNumberBehaviorsProtocol; message 'defaultBehavior';
    {$endif}
    function objCType: PChar; message 'objCType';
    function doubleValue: double; message 'doubleValue';
  end;

type
  NSDecimalNumberHandler = objcclass external (NSObject, NSDecimalNumberBehaviorsProtocol, NSCodingProtocol)
  private
    _anonStruct_NSDecimalNumber0: record
      case byte of
        0: (anonBitField_NSDecimalNumber0: cuint);
        1: (data: bitpacked record
          _scale: 0..((1 shl 16)-1);
          _roundingMode: 0..((1 shl 3)-1);
          _raiseOnExactness: 0..1;
          _raiseOnOverflow: 0..1;
          _raiseOnUnderflow: 0..1;
          _raiseOnDivideByZero: 0..1;
          _unused: 0..((1 shl 9)-1);
        end;
      );
    end;
    _reserved2: pointer;
    _reserved: pointer;
  public
    class function defaultDecimalNumberHandler: NSDecimalNumberHandler; message 'defaultDecimalNumberHandler';
    function initWithRoundingMode_scale_raiseOnExactness_raiseOnOverflow_raiseOnUnderflow_raiseOnDivideByZero (roundingMode: NSRoundingMode; scale: cshort; exact: boolean; overflow: boolean; underflow: boolean; divideByZero: boolean): instancetype; message 'initWithRoundingMode:scale:raiseOnExactness:raiseOnOverflow:raiseOnUnderflow:raiseOnDivideByZero:'; { NS_DESIGNATED_INITIALIZER }
    class function decimalNumberHandlerWithRoundingMode_scale_raiseOnExactness_raiseOnOverflow_raiseOnUnderflow_raiseOnDivideByZero (roundingMode: NSRoundingMode; scale: cshort; exact: boolean; overflow: boolean; underflow: boolean; divideByZero: boolean): instancetype; message 'decimalNumberHandlerWithRoundingMode:scale:raiseOnExactness:raiseOnOverflow:raiseOnUnderflow:raiseOnDivideByZero:';

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function exceptionDuringOperation_error_leftOperand_rightOperand (operation: SEL; error: NSCalculationError; leftOperand: NSDecimalNumber; rightOperand: nullable NSDecimalNumberPtr): nullable NSDecimalNumberPtr; message 'exceptionDuringOperation:error:leftOperand:rightOperand:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function roundingMode: NSRoundingMode; message 'roundingMode';
    function scale: cshort; message 'scale';
  end;


type
  NSDecimalNumberExtensions = objccategory external (NSNumber)
    function decimalValue: NSDecimal; message 'decimalValue';
  end;

type
  NSDecimalNumberScanning = objccategory external (NSScanner)
    function scanDecimal (dcm: nullable NSDecimalPtr): boolean; message 'scanDecimal:';
  end;
{$endif}

