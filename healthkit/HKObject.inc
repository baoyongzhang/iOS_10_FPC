{ Parsed from HealthKit.framework HKObject.h }

{$ifdef TYPES}
type
  HKObjectPtr = ^HKObject;
{$endif}

{$ifdef CLASSES}

type
  HKObject = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    function UUID: NSUUID; message 'UUID';
    function source: HKSource; message 'source';
    function sourceRevision: HKSourceRevision; message 'sourceRevision';
    function device: HKDevice; message 'device';
    function metadata: NSDictionary; message 'metadata';
    function init: instancetype; message 'init';

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  HKPredicateKeyPathUUID: NSString { available in 8_0, 2_0 }; cvar; external;
  HKPredicateKeyPathSource: NSString { available in 8_0, 2_0 }; cvar; external;
  HKPredicateKeyPathMetadata: NSString { available in 8_0, 2_0 }; cvar; external;
  HKPredicateKeyPathCorrelation: NSString { available in 8_0, 2_0 }; cvar; external;
  HKPredicateKeyPathWorkout: NSString { available in 8_0, 2_0 }; cvar; external;
  HKPredicateKeyPathDevice: NSString { available in 9_0, 2_0 }; cvar; external;
  HKPredicateKeyPathSourceRevision: NSString { available in 9_0, 2_0 }; cvar; external;
{$endif}

