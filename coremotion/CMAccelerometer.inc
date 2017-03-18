{ Parsed from CoreMotion.framework CMAccelerometer.h }

{$ifdef TYPES}
type
  CMAccelerometerDataPtr = ^CMAccelerometerData;
{$endif}

{$ifdef TYPES}
type
  CMAcceleration = record
    x: double;
    y: double;
    z: double;
  end;
type
  CMAccelerationPtr = ^CMAcceleration;
{$endif}

{$ifdef CLASSES}

type
  CMAccelerometerData = objcclass external (CMLogItem)
  private
    _internal: id;
  public
    function acceleration: CMAcceleration; message 'acceleration';
  end;
{$endif}

