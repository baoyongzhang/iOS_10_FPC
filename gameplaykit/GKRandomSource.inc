{ Parsed from GameplayKit.framework GKRandomSource.h }

{$ifdef TYPES}
type
  GKRandomSourcePtr = ^GKRandomSource;
  NSArrayPtr = ^NSArray;
  GKARC4RandomSourcePtr = ^GKARC4RandomSource;
  GKLinearCongruentialRandomSourcePtr = ^GKLinearCongruentialRandomSource;
  GKMersenneTwisterRandomSourcePtr = ^GKMersenneTwisterRandomSource;
  GKRandomProtocolPtr = ^GKRandomProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  GKRandomProtocol = objcprotocol external name 'GKRandom'
  required
    function nextInt: NSInteger; message 'nextInt';
    function nextIntWithUpperBound (upperBound: NSUInteger): NSUInteger; message 'nextIntWithUpperBound:';
    function nextUniform: single; message 'nextUniform';
    function nextBool: boolean; message 'nextBool';
  end;
{$endif}

{$ifdef CLASSES}

type
  GKRandomSource = objcclass external (NSObject, GKRandomProtocol, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (aDecoder: NSCoder): instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    class function sharedRandom: GKRandomSource; message 'sharedRandom';
    function arrayByShufflingObjectsInArray (array_: NSArray): NSArray; message 'arrayByShufflingObjectsInArray:';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function nextBool: boolean; message 'nextBool';
    function nextInt: NSInteger; message 'nextInt';
    function nextIntWithUpperBound (upperBound: NSUInteger): NSUInteger; message 'nextIntWithUpperBound:';
    function nextUniform: single; message 'nextUniform';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;

type
  NSArray = objcclass external (NSObject, ObjectTypeProtocol)
  public
    function shuffledArrayWithRandomSource (randomSource: GKRandomSource): ObjectTypeProtocolPtr; message 'shuffledArrayWithRandomSource:';
    function shuffledArray: ObjectTypeProtocolPtr; message 'shuffledArray';
  end;

type
  GKARC4RandomSource = objcclass external (GKRandomSource)
  public
    procedure setSeed(newValue: NSData); message 'setSeed:';
    function seed: NSData; message 'seed';
    function init: instancetype; message 'init';
    function initWithSeed (seed_: NSData): instancetype; message 'initWithSeed:'; { NS_DESIGNATED_INITIALIZER }
    procedure dropValuesWithCount (count: NSUInteger); message 'dropValuesWithCount:';
  end;

type
  GKLinearCongruentialRandomSource = objcclass external (GKRandomSource)
  public
    procedure setSeed(newValue: cuint64); message 'setSeed:';
    function seed: cuint64; message 'seed';
    function init: instancetype; message 'init';
    function initWithSeed (seed_: cuint64): instancetype; message 'initWithSeed:'; { NS_DESIGNATED_INITIALIZER }
  end;

type
  GKMersenneTwisterRandomSource = objcclass external (GKRandomSource)
  public
    procedure setSeed(newValue: cuint64); message 'setSeed:';
    function seed: cuint64; message 'seed';
    function init: instancetype; message 'init';
    function initWithSeed (seed_: cuint64): instancetype; message 'initWithSeed:'; { NS_DESIGNATED_INITIALIZER }
  end;
{$endif}

