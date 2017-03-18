{ Parsed from CoreBluetooth.framework CBManager.h }

{$ifdef TYPES}
type
  CBManagerPtr = ^CBManager;
{$endif}

{$ifdef CLASSES}

type
  CBManager = objcclass external (NSObject)
  private
  public
    function state: CBManagerState; message 'state';
  end;
{$endif}

