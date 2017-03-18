{ Parsed from CoreMotion.framework CMAltitude.h }

{$ifdef TYPES}
type
  CMAltitudeDataPtr = ^CMAltitudeData;
{$endif}

{$ifdef CLASSES}

type
  CMAltitudeData = objcclass external (CMLogItem)
  public
    function relativeAltitude: NSNumber; message 'relativeAltitude';
    function pressure: NSNumber; message 'pressure';
  end;
{$endif}

