{ Parsed from CoreMotion.framework CMGyro.h }

{$ifdef TYPES}
type
  CMGyroDataPtr = ^CMGyroData;
{$endif}

{$ifdef TYPES}
type
  CMRotationRate = record
    x: double;
    y: double;
    z: double;
  end;
type
  CMRotationRatePtr = ^CMRotationRate;
{$endif}

{$ifdef CLASSES}

type
  CMGyroData = objcclass external (CMLogItem)
  private
    _internal: id;
  public
    function rotationRate: CMRotationRate; message 'rotationRate';
  end;
{$endif}

