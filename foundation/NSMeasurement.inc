{ Parsed from Foundation.framework NSMeasurement.h }

{$ifdef TYPES}
type
  NSMeasurementPtr = ^NSMeasurement;
{$endif}

{$ifdef CLASSES}

type
  NSMeasurement = objcclass external (NSObject, UnitType: NSUnit *Protocol)
  private
    _unit: UnitType;
    _doubleValue: double;
  public
    function unit_: UnitType; message 'unit';
    function doubleValue: double; message 'doubleValue';
    function init: instancetype; message 'init';
    function initWithDoubleValue_unit (doubleValue_: double; unit_: UnitType): instancetype; message 'initWithDoubleValue:unit:'; { NS_DESIGNATED_INITIALIZER }
    function canBeConvertedToUnit (unit_: NSUnit): boolean; message 'canBeConvertedToUnit:';
    function measurementByConvertingToUnit (unit_: NSUnit): NSMeasurement; message 'measurementByConvertingToUnit:';
    function measurementByAddingMeasurement (measurement: UnitTypeProtocolPtr): UnitTypeProtocolPtr; message 'measurementByAddingMeasurement:';
    function measurementBySubtractingMeasurement (measurement: UnitTypeProtocolPtr): UnitTypeProtocolPtr; message 'measurementBySubtractingMeasurement:';
  end;
{$endif}

