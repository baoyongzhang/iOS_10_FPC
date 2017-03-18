{ Parsed from NetworkExtension.framework NWPath.h }

{$ifdef TYPES}
type
  NWPathPtr = ^NWPath;
{$endif}

{$ifndef __NWPath_h_}
{$ifdef TYPES}
type
  NWPathStatus = NSInteger;
  NWPathStatusPtr = ^NWPathStatus;

const
  NWPathStatusInvalid = 0;
  NWPathStatusSatisfied = 1;
  NWPathStatusUnsatisfied = 2;
  NWPathStatusSatisfiable = 3;
{$endif}

{$ifdef CLASSES}

type
  NWPath = objcclass external (NSObject)
  public
    function status: NWPathStatus; message 'status';
    function isExpensive: boolean; message 'isExpensive';
    function isEqualToPath (path: NWPath): boolean; message 'isEqualToPath:'; { available in 10_11, 9_0 }
  end;
{$endif}

{$endif}
