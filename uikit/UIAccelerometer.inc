{ Parsed from UIKit.framework UIAccelerometer.h }

{$ifdef TYPES}
type
  UIAccelerationPtr = ^UIAcceleration;
  UIAccelerometerPtr = ^UIAccelerometer;
  UIAccelerometerDelegateProtocolPtr = ^UIAccelerometerDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  UIAccelerationValue = double;
  UIAccelerationValuePtr = ^UIAccelerationValue;
{$endif}

{$ifdef CLASSES}

type
  UIAcceleration = objcclass external (NSObject)
  public
    function timestamp_: NSTimeInterval; message 'timestamp';
    function x: UIAccelerationValue; message 'x';
    function y: UIAccelerationValue; message 'y';
    function z: UIAccelerationValue; message 'z';
  end;

type
  UIAccelerometer = objcclass external (NSObject)
  public
    class function sharedAccelerometer: UIAccelerometer; message 'sharedAccelerometer';
    procedure setUpdateInterval(newValue: NSTimeInterval); message 'setUpdateInterval:';
    function updateInterval: NSTimeInterval; message 'updateInterval';
    procedure setDelegate(newValue: UIAccelerometerDelegateProtocol); message 'setDelegate:';
    function delegate: UIAccelerometerDelegateProtocol; message 'delegate';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  UIAccelerometerDelegateProtocol = objcprotocol external name 'UIAccelerometerDelegate' (NSObjectProtocol)
  optional
    procedure accelerometer_didAccelerate (accelerometer: UIAccelerometer; acceleration: UIAcceleration); message 'accelerometer:didAccelerate:'; deprecated 'in 2_0, 5_0';
  end;
{$endif}

