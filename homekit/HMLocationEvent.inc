{ Parsed from HomeKit.framework HMLocationEvent.h }

{$ifdef TYPES}
type
  HMLocationEventPtr = ^HMLocationEvent;
{$endif}

{$ifdef CLASSES}

type
  HMLocationEvent = objcclass external (HMEvent)
  public
    function init: instancetype; message 'init';
    function initWithRegion (region: CLRegion): instancetype; message 'initWithRegion:';
    function region: CLRegion; message 'region';
    procedure updateRegion_completionHandler (region_: CLRegion; completion: OpaqueCBlock); message 'updateRegion:completionHandler:';
  end;
{$endif}

