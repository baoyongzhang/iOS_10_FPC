{ Parsed from GameplayKit.framework GKNoiseSource.h }

{$ifdef TYPES}
type
  GKNoiseSourcePtr = ^GKNoiseSource;
  GKCoherentNoiseSourcePtr = ^GKCoherentNoiseSource;
  GKPerlinNoiseSourcePtr = ^GKPerlinNoiseSource;
  GKBillowNoiseSourcePtr = ^GKBillowNoiseSource;
  GKRidgedNoiseSourcePtr = ^GKRidgedNoiseSource;
  GKVoronoiNoiseSourcePtr = ^GKVoronoiNoiseSource;
  GKConstantNoiseSourcePtr = ^GKConstantNoiseSource;
  GKCylindersNoiseSourcePtr = ^GKCylindersNoiseSource;
  GKSpheresNoiseSourcePtr = ^GKSpheresNoiseSource;
  GKCheckerboardNoiseSourcePtr = ^GKCheckerboardNoiseSource;
{$endif}

{$ifdef CLASSES}

type
  GKNoiseSource = objcclass external (NSObject)
  end;

type
  GKCoherentNoiseSource = objcclass external (GKNoiseSource)
  public
    procedure setFrequency(newValue: double); message 'setFrequency:';
    function frequency: double; message 'frequency';
    procedure setOctaveCount(newValue: NSInteger); message 'setOctaveCount:';
    function octaveCount: NSInteger; message 'octaveCount';
    procedure setLacunarity(newValue: double); message 'setLacunarity:';
    function lacunarity: double; message 'lacunarity';
    procedure setSeed(newValue: cint32); message 'setSeed:';
    function seed: cint32; message 'seed';
  end;

type
  GKPerlinNoiseSource = objcclass external (GKCoherentNoiseSource)
  public
    procedure setPersistence(newValue: double); message 'setPersistence:';
    function persistence: double; message 'persistence';
    class function perlinNoiseSourceWithFrequency_octaveCount_persistence_lacunarity_seed (frequency_: double; octaveCount_: NSInteger; persistence_: double; lacunarity_: double; seed_: cint32): instancetype; message 'perlinNoiseSourceWithFrequency:octaveCount:persistence:lacunarity:seed:';
    function initWithFrequency_octaveCount_persistence_lacunarity_seed (frequency_: double; octaveCount_: NSInteger; persistence_: double; lacunarity_: double; seed_: cint32): instancetype; message 'initWithFrequency:octaveCount:persistence:lacunarity:seed:'; { NS_DESIGNATED_INITIALIZER }
  end;

type
  GKBillowNoiseSource = objcclass external (GKCoherentNoiseSource)
  public
    procedure setPersistence(newValue: double); message 'setPersistence:';
    function persistence: double; message 'persistence';
    class function billowNoiseSourceWithFrequency_octaveCount_persistence_lacunarity_seed (frequency_: double; octaveCount_: NSInteger; persistence_: double; lacunarity_: double; seed_: cint32): instancetype; message 'billowNoiseSourceWithFrequency:octaveCount:persistence:lacunarity:seed:';
    function initWithFrequency_octaveCount_persistence_lacunarity_seed (frequency_: double; octaveCount_: NSInteger; persistence_: double; lacunarity_: double; seed_: cint32): instancetype; message 'initWithFrequency:octaveCount:persistence:lacunarity:seed:'; { NS_DESIGNATED_INITIALIZER }
  end;

type
  GKRidgedNoiseSource = objcclass external (GKCoherentNoiseSource)
  public
    class function ridgedNoiseSourceWithFrequency_octaveCount_lacunarity_seed (frequency_: double; octaveCount_: NSInteger; lacunarity_: double; seed_: cint32): instancetype; message 'ridgedNoiseSourceWithFrequency:octaveCount:lacunarity:seed:';
    function initWithFrequency_octaveCount_lacunarity_seed (frequency_: double; octaveCount_: NSInteger; lacunarity_: double; seed_: cint32): instancetype; message 'initWithFrequency:octaveCount:lacunarity:seed:'; { NS_DESIGNATED_INITIALIZER }
  end;

type
  GKVoronoiNoiseSource = objcclass external (GKNoiseSource)
  public
    procedure setFrequency(newValue: double); message 'setFrequency:';
    function frequency: double; message 'frequency';
    procedure setDisplacement(newValue: double); message 'setDisplacement:';
    function displacement: double; message 'displacement';
    procedure setDistanceEnabled(newValue: boolean); message 'setDistanceEnabled:';
    function isDistanceEnabled: boolean; message 'isDistanceEnabled';
    procedure setSeed(newValue: cint32); message 'setSeed:';
    function seed: cint32; message 'seed';
    class function voronoiNoiseWithFrequency_displacement_distanceEnabled_seed (frequency_: double; displacement_: double; distanceEnabled: boolean; seed_: cint32): instancetype; message 'voronoiNoiseWithFrequency:displacement:distanceEnabled:seed:';
    function initWithFrequency_displacement_distanceEnabled_seed (frequency_: double; displacement_: double; distanceEnabled: boolean; seed_: cint32): instancetype; message 'initWithFrequency:displacement:distanceEnabled:seed:'; { NS_DESIGNATED_INITIALIZER }
  end;

type
  GKConstantNoiseSource = objcclass external (GKNoiseSource)
  public
    procedure setValue(newValue: double); message 'setValue:';
    function value: double; message 'value';
    class function constantNoiseWithValue (value_: double): instancetype; message 'constantNoiseWithValue:';
    function initWithValue (value_: double): instancetype; message 'initWithValue:'; { NS_DESIGNATED_INITIALIZER }
  end;

type
  GKCylindersNoiseSource = objcclass external (GKNoiseSource)
  public
    procedure setFrequency(newValue: double); message 'setFrequency:';
    function frequency: double; message 'frequency';
    class function cylindersNoiseWithFrequency (frequency_: double): instancetype; message 'cylindersNoiseWithFrequency:';
    function initWithFrequency (frequency_: double): instancetype; message 'initWithFrequency:'; { NS_DESIGNATED_INITIALIZER }
  end;

type
  GKSpheresNoiseSource = objcclass external (GKNoiseSource)
  public
    procedure setFrequency(newValue: double); message 'setFrequency:';
    function frequency: double; message 'frequency';
    class function spheresNoiseWithFrequency (frequency_: double): instancetype; message 'spheresNoiseWithFrequency:';
    function initWithFrequency (frequency_: double): instancetype; message 'initWithFrequency:'; { NS_DESIGNATED_INITIALIZER }
  end;

type
  GKCheckerboardNoiseSource = objcclass external (GKNoiseSource)
  public
    procedure setSquareSize(newValue: double); message 'setSquareSize:';
    function squareSize: double; message 'squareSize';
    class function checkerboardNoiseWithSquareSize (squareSize_: double): instancetype; message 'checkerboardNoiseWithSquareSize:';
    function initWithSquareSize (squareSize_: double): instancetype; message 'initWithSquareSize:'; { NS_DESIGNATED_INITIALIZER }
  end;
{$endif}

