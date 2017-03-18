{ Parsed from CoreMotion.framework CMSensorRecorder.h }

{$ifdef TYPES}
type
  CMRecordedAccelerometerDataPtr = ^CMRecordedAccelerometerData;
{$endif}

{$ifdef CLASSES}

type
  CMRecordedAccelerometerData = objcclass external (CMAccelerometerData)
  public
    function identifier: cuint64; message 'identifier';
    function startDate: NSDate; message 'startDate';
    class function isAccelerometerRecordingAvailable: boolean; message 'isAccelerometerRecordingAvailable';
    class function isAuthorizedForRecording: boolean; message 'isAuthorizedForRecording';
    function accelerometerDataFromDate_toDate (fromDate: NSDate; toDate: NSDate): nullable CMSensorDataListPtr; message 'accelerometerDataFromDate:toDate:';
    procedure recordAccelerometerForDuration (duration: NSTimeInterval); message 'recordAccelerometerForDuration:';
  end;
{$endif}

