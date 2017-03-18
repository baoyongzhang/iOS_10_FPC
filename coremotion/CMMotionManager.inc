{ Parsed from CoreMotion.framework CMMotionManager.h }

{$ifdef TYPES}
type
  CMMotionManagerPtr = ^CMMotionManager;
{$endif}

{$ifdef TYPES}
type
  __TVOS_PROHIBITED = void (^CMAccelerometerHandler)(CMAccelerometerData *__nullable NSError *__nullable error);
  __TVOS_PROHIBITEDPtr = ^__TVOS_PROHIBITED;
  __TVOS_PROHIBITED = void (^CMGyroHandler)(CMGyroData *__nullable NSError *__nullable error);
  __TVOS_PROHIBITEDPtr = ^__TVOS_PROHIBITED;
  __TVOS_PROHIBITED = void (^CMDeviceMotionHandler)(CMDeviceMotion *__nullable NSError *__nullable error);
  __TVOS_PROHIBITEDPtr = ^__TVOS_PROHIBITED;
  __TVOS_PROHIBITED = void (^CMMagnetometerHandler)(CMMagnetometerData *__nullable NSError *__nullable error) { available in NA,5_0 };
  __TVOS_PROHIBITEDPtr = ^__TVOS_PROHIBITED { available in NA,5_0 };
{$endif}

{$ifdef CLASSES}

type
  CMMotionManager = objcclass external (NSObject)
  private
    _internal: id;
  public
    procedure set__TVOS_PROHIBITED(newValue: NSTimeInterval accelerometerUpdateInterval); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED_: NSTimeInterval accelerometerUpdateInterval; message 'TVOS_PROHIBITED';
    function isAccelerometerAvailable: BOOL accelerometerAvailable; message 'isAccelerometerAvailable';
    function isAccelerometerActive: BOOL accelerometerActive; message 'isAccelerometerActive';
    function __TVOS_PROHIBITED_: CMAccelerometerData *accelerometerData; message 'TVOS_PROHIBITED';
    procedure startAccelerometerUpdates __TVOS_PROHIBITED; message 'startAccelerometerUpdates __TVOS_PROHIBITED';
    procedure startAccelerometerUpdatesToQueue_withHandler (queue: NSOperationQueue; handler: CMAccelerometerHandler); message 'startAccelerometerUpdatesToQueue:withHandler:';
    procedure stopAccelerometerUpdates __TVOS_PROHIBITED; message 'stopAccelerometerUpdates __TVOS_PROHIBITED';
    procedure set__TVOS_PROHIBITED_(newValue: NSTimeInterval gyroUpdateInterval); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED__: NSTimeInterval gyroUpdateInterval; message 'TVOS_PROHIBITED';
    function isGyroAvailable: BOOL gyroAvailable; message 'isGyroAvailable';
    function isGyroActive: BOOL gyroActive; message 'isGyroActive';
    function __TVOS_PROHIBITED___: CMGyroData *gyroData; message 'TVOS_PROHIBITED';
    procedure startGyroUpdates __TVOS_PROHIBITED; message 'startGyroUpdates __TVOS_PROHIBITED';
    procedure startGyroUpdatesToQueue_withHandler (queue: NSOperationQueue; handler: CMGyroHandler); message 'startGyroUpdatesToQueue:withHandler:';
    procedure stopGyroUpdates __TVOS_PROHIBITED; message 'stopGyroUpdates __TVOS_PROHIBITED';
    procedure set__TVOS_PROHIBITED__(newValue: NSTimeInterval magnetometerUpdateInterval); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED____: NSTimeInterval magnetometerUpdateInterval; message 'TVOS_PROHIBITED';
    function isMagnetometerAvailable: BOOL magnetometerAvailable; message 'isMagnetometerAvailable';
    function isMagnetometerActive: BOOL magnetometerActive; message 'isMagnetometerActive';
    function __TVOS_PROHIBITED_____: CMMagnetometerData *magnetometerData; message 'TVOS_PROHIBITED';
    procedure startMagnetometerUpdates                      __TVOS_PROHIBITED; message 'startMagnetometerUpdates                      __TVOS_PROHIBITED'; { available in NA,5_0 }
    procedure startMagnetometerUpdatesToQueue_withHandler (queue: NSOperationQueue; handler: CMMagnetometerHandler); message 'startMagnetometerUpdatesToQueue:withHandler:'; { available in NA,5_0 }
    procedure stopMagnetometerUpdates                      __TVOS_PROHIBITED; message 'stopMagnetometerUpdates                      __TVOS_PROHIBITED'; { available in NA,5_0 }
    procedure set__TVOS_PROHIBITED___(newValue: NSTimeInterval deviceMotionUpdateInterval); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED______: NSTimeInterval deviceMotionUpdateInterval; message 'TVOS_PROHIBITED';
    class function availableAttitudeReferenceFrames                      __TVOS_PROHIBITED: CMAttitudeReferenceFrame; message 'availableAttitudeReferenceFrames                      __TVOS_PROHIBITED'; { available in NA,5_0 }
    function __TVOS_PROHIBITED_______: CMAttitudeReferenceFrame attitudeReferenceFrame; message 'TVOS_PROHIBITED';
    function isDeviceMotionAvailable: BOOL deviceMotionAvailable; message 'isDeviceMotionAvailable';
    function isDeviceMotionActive: BOOL deviceMotionActive; message 'isDeviceMotionActive';
    function __TVOS_PROHIBITED________: CMDeviceMotion *deviceMotion; message 'TVOS_PROHIBITED';
    procedure startDeviceMotionUpdates __TVOS_PROHIBITED; message 'startDeviceMotionUpdates __TVOS_PROHIBITED';
    procedure startDeviceMotionUpdatesToQueue_withHandler (queue: NSOperationQueue; handler: CMDeviceMotionHandler); message 'startDeviceMotionUpdatesToQueue:withHandler:';
    procedure startDeviceMotionUpdatesUsingReferenceFrame (referenceFrame: CMAttitudeReferenceFrame); message 'startDeviceMotionUpdatesUsingReferenceFrame:'; { available in NA,5_0 }
    procedure startDeviceMotionUpdatesUsingReferenceFrame_toQueue_withHandler (referenceFrame: CMAttitudeReferenceFrame; queue: NSOperationQueue; handler: CMDeviceMotionHandler); message 'startDeviceMotionUpdatesUsingReferenceFrame:toQueue:withHandler:'; { available in NA,5_0 }
    procedure stopDeviceMotionUpdates __TVOS_PROHIBITED; message 'stopDeviceMotionUpdates __TVOS_PROHIBITED';
    procedure set__TVOS_PROHIBITED____(newValue: BOOL showsDeviceMovementDisplay); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED_________: BOOL showsDeviceMovementDisplay; message 'TVOS_PROHIBITED';
  end;
{$endif}

