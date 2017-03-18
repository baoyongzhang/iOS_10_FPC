{ Parsed from GameplayKit.framework GKNoise.h }

{$ifdef TYPES}
type
  GKNoisePtr = ^GKNoise;
{$endif}

{$ifdef CLASSES}

type
  GKNoise = objcclass external (NSObject)
  public
    procedure setGradientColors(newValue: NSDictionary); message 'setGradientColors:';
    function gradientColors: NSDictionary; message 'gradientColors';
    function init: instancetype; message 'init';
    class function noiseWithNoiseSource (noiseSource: GKNoiseSource): instancetype; message 'noiseWithNoiseSource:';
    class function noiseWithNoiseSource_gradientColors (noiseSource: GKNoiseSource; gradientColors_: NSDictionary): instancetype; message 'noiseWithNoiseSource:gradientColors:';
    function initWithNoiseSource (noiseSource: GKNoiseSource): instancetype; message 'initWithNoiseSource:';
    function initWithNoiseSource_gradientColors (noiseSource: GKNoiseSource; gradientColors_: NSDictionary): instancetype; message 'initWithNoiseSource:gradientColors:'; { NS_DESIGNATED_INITIALIZER }
    class function noiseWithComponentNoises_selectionNoise (noises: GKNoise *ProtocolPtr; selectionNoise: GKNoise): instancetype; message 'noiseWithComponentNoises:selectionNoise:';
    class function noiseWithComponentNoises_selectionNoise_componentBoundaries_boundaryBlendDistances (noises: GKNoise *ProtocolPtr; selectionNoise: GKNoise; componentBoundaries: NSNumber *ProtocolPtr; blendDistances: NSNumber *ProtocolPtr): instancetype; message 'noiseWithComponentNoises:selectionNoise:componentBoundaries:boundaryBlendDistances:';
    function valueAtPosition (position: vector_float2): single; message 'valueAtPosition:';
    procedure applyAbsoluteValue; message 'applyAbsoluteValue';
    procedure clampWithLowerBound_upperBound (lowerBound: double; upperBound: double); message 'clampWithLowerBound:upperBound:';
    procedure raiseToPower (power: double); message 'raiseToPower:';
    procedure invert; message 'invert';
    procedure applyTurbulenceWithFrequency_power_roughness_seed (frequency: double; power: double; roughness: cint; seed: cint32); message 'applyTurbulenceWithFrequency:power:roughness:seed:';
    procedure remapValuesToCurveWithControlPoints (controlPoints: NSDictionary); message 'remapValuesToCurveWithControlPoints:';
    procedure remapValuesToTerracesWithPeaks_terracesInverted (peakInputValues: NSNumber *ProtocolPtr; inverted: boolean); message 'remapValuesToTerracesWithPeaks:terracesInverted:';
    procedure moveBy (delta: vector_double3); message 'moveBy:';
    procedure scaleBy (factor: vector_double3); message 'scaleBy:';
    procedure rotateBy (radians: vector_double3); message 'rotateBy:';
    procedure addWithNoise (noise: GKNoise); message 'addWithNoise:';
    procedure multiplyWithNoise (noise: GKNoise); message 'multiplyWithNoise:';
    procedure minimumWithNoise (noise: GKNoise); message 'minimumWithNoise:';
    procedure maximumWithNoise (noise: GKNoise); message 'maximumWithNoise:';
    procedure raiseToPowerWithNoise (noise: GKNoise); message 'raiseToPowerWithNoise:';
    procedure displaceXWithNoise_yWithNoise_zWithNoise (xDisplacementNoise: GKNoise; yDisplacementNoise: GKNoise; zDisplacementNoise: GKNoise); message 'displaceXWithNoise:yWithNoise:zWithNoise:';
  end;
{$endif}

