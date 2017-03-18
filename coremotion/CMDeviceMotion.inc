{ Parsed from CoreMotion.framework CMDeviceMotion.h }

{$ifdef TYPES}
type
  CMDeviceMotionPtr = ^CMDeviceMotion;
{$endif}

{$ifdef TYPES}
type
  CMMagneticFieldCalibrationAccuracy = cint;
  CMMagneticFieldCalibrationAccuracyPtr = ^CMMagneticFieldCalibrationAccuracy;

const
  CMMagneticFieldCalibrationAccuracyUncalibrated = -1;
  CMMagneticFieldCalibrationAccuracyLow = 0;
  CMMagneticFieldCalibrationAccuracyMedium = 1;
  CMMagneticFieldCalibrationAccuracyHigh = 2;

type
  CMCalibratedMagneticField = record
    field: CMMagneticField;
    accuracy: CMMagneticFieldCalibrationAccuracy;
  end;
type
  CMCalibratedMagneticFieldPtr = ^CMCalibratedMagneticField;
{$endif}

{$ifdef CLASSES}

type
  CMDeviceMotion = objcclass external (CMLogItem)
  private
    _internal: id;
  public
    function attitude: CMAttitude; message 'attitude';
    function rotationRate: CMRotationRate; message 'rotationRate';
    function gravity: CMAcceleration; message 'gravity';
    function userAcceleration: CMAcceleration; message 'userAcceleration';
    function magneticField: CMCalibratedMagneticField; message 'magneticField';
  end;
{$endif}

