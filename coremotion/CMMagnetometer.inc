{ Parsed from CoreMotion.framework CMMagnetometer.h }

{$ifdef TYPES}
type
  CMMagnetometerDataPtr = ^CMMagnetometerData;
{$endif}

{$ifdef TYPES}
type
  CMMagneticField = record
    x: double;
    y: double;
    z: double;
  end;
type
  CMMagneticFieldPtr = ^CMMagneticField;
{$endif}

{$ifdef CLASSES}

type
  CMMagnetometerData = objcclass external (CMLogItem)
  private
    _internal: id;
  public
    function magneticField: CMMagneticField; message 'magneticField';
  end;
{$endif}

