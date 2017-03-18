{ Parsed from CoreMotion.framework CMMotionActivity.h }

{$ifdef TYPES}
type
  CMMotionActivityPtr = ^CMMotionActivity;
{$endif}

{$ifdef TYPES}
type
  CMMotionActivityConfidence = NSInteger;
  CMMotionActivityConfidencePtr = ^CMMotionActivityConfidence;

const
  CMMotionActivityConfidenceLow = 0;
  CMMotionActivityConfidenceMedium = 1;
  CMMotionActivityConfidenceHigh = 2;
{$endif}

{$ifdef CLASSES}

type
  CMMotionActivity = objcclass external (CMLogItem)
  public
    function confidence: CMMotionActivityConfidence; message 'confidence';
    function startDate: NSDate; message 'startDate';
    function unknown: boolean; message 'unknown';
    function stationary: boolean; message 'stationary';
    function walking: boolean; message 'walking';
    function running: boolean; message 'running';
    function automotive: boolean; message 'automotive';
    function cycling: boolean; message 'cycling';
  end;
{$endif}

