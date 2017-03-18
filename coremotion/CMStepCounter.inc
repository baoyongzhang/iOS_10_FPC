{ Parsed from CoreMotion.framework CMStepCounter.h }

{$ifdef TYPES}
type
  CMStepCounterPtr = ^CMStepCounter;
{$endif}

{$ifdef TYPES}
type
  __WATCHOS_PROHIBITED = void (^CMStepQueryHandler)(NSInteger NSError *__nullable error) __TVOS_PROHIBITED;
  __WATCHOS_PROHIBITEDPtr = ^__WATCHOS_PROHIBITED;
  numberOfSteps = void (^CMStepUpdateHandler)(NSInteger NSDate NSError *__nullable error) __TVOS_PROHIBITED deprecated 'in 7_0,8_0,"Use CMPedometer instead"';
  numberOfStepsPtr = ^numberOfSteps deprecated 'in 7_0,8_0,"Use CMPedometer instead"';
{$endif}

{$ifdef CLASSES}

type
  CMStepCounter = objcclass external (NSObject)
  public
    class function isStepCountingAvailable: boolean; message 'isStepCountingAvailable';
    procedure queryStepCountStartingFrom_to_toQueue_withHandler (start: NSDate; end_: NSDate; queue: NSOperationQueue; handler: CMStepQueryHandler); message 'queryStepCountStartingFrom:to:toQueue:withHandler:';
    procedure startStepCountingUpdatesToQueue_updateOn_withHandler (queue: NSOperationQueue; stepCounts: NSInteger; handler: CMStepUpdateHandler); message 'startStepCountingUpdatesToQueue:updateOn:withHandler:';
    procedure stopStepCountingUpdates; message 'stopStepCountingUpdates';
  end;
{$endif}

