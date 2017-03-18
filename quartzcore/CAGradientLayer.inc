{ Parsed from QuartzCore.framework CAGradientLayer.h }

{$ifdef TYPES}
type
  CAGradientLayerPtr = ^CAGradientLayer;
{$endif}

{$ifdef CLASSES}

type
  CAGradientLayer = objcclass external (CALayer)
  public
    procedure setColors(newValue: NSArray); message 'setColors:';
    function colors: NSArray; message 'colors';
    procedure setLocations(newValue: NSNumber *ProtocolPtr); message 'setLocations:';
    function locations: NSNumber *ProtocolPtr; message 'locations';
    procedure setStartPoint(newValue: CGPoint); message 'setStartPoint:';
    function startPoint: CGPoint; message 'startPoint';
    procedure setEndPoint(newValue: CGPoint); message 'setEndPoint:';
    function endPoint: CGPoint; message 'endPoint';
    procedure setType(newValue: NSString); message 'setType:';
    function type_: NSString; message 'type';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCAGradientLayerAxial: NSString { available starting in 10.6, 3.0, 9.0, 2.0 }; cvar; external;
{$endif}

