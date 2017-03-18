{ Parsed from CoreMotion.framework CMAltimeter.h }

{$ifdef TYPES}
type
  CMAltimeterPtr = ^CMAltimeter;
{$endif}

{$ifdef TYPES}
type
  __TVOS_PROHIBITED = void (^CMAltitudeHandler)(CMAltitudeData *__nullable NSError *__nullable error) { available in NA,8_0 };
  __TVOS_PROHIBITEDPtr = ^__TVOS_PROHIBITED { available in NA,8_0 };
{$endif}

{$ifdef CLASSES}

type
  CMAltimeter = objcclass external (NSObject)
  public
    class function isRelativeAltitudeAvailable: boolean; message 'isRelativeAltitudeAvailable';
    procedure startRelativeAltitudeUpdatesToQueue_withHandler (queue: NSOperationQueue; handler: CMAltitudeHandler); message 'startRelativeAltitudeUpdatesToQueue:withHandler:';
    procedure stopRelativeAltitudeUpdates; message 'stopRelativeAltitudeUpdates';
  end;
{$endif}

