{ Parsed from CoreMotion.framework CMMotionActivityManager.h }

{$ifdef TYPES}
type
  CMMotionActivityManagerPtr = ^CMMotionActivityManager;
{$endif}

{$ifdef TYPES}
type
  __TVOS_PROHIBITED = void (^CMMotionActivityHandler)(CMMotionActivity *__nullable activity) { available in NA,7_0 };
  __TVOS_PROHIBITEDPtr = ^__TVOS_PROHIBITED { available in NA,7_0 };
  __TVOS_PROHIBITED = void (^CMMotionActivityQueryHandler)(NSArray<CMMotionActivity *> *__nullable NSError *__nullable error) { available in NA,7_0 };
  __TVOS_PROHIBITEDPtr = ^__TVOS_PROHIBITED { available in NA,7_0 };
{$endif}

{$ifdef CLASSES}

type
  CMMotionActivityManager = objcclass external (NSObject)
  public
    class function isActivityAvailable: boolean; message 'isActivityAvailable';
    procedure queryActivityStartingFromDate_toDate_toQueue_withHandler (start: NSDate; end_: NSDate; queue: NSOperationQueue; handler: CMMotionActivityQueryHandler); message 'queryActivityStartingFromDate:toDate:toQueue:withHandler:';
    procedure startActivityUpdatesToQueue_withHandler (queue: NSOperationQueue; handler: CMMotionActivityHandler); message 'startActivityUpdatesToQueue:withHandler:';
    procedure stopActivityUpdates; message 'stopActivityUpdates';
  end;
{$endif}

