{ Parsed from EventKit.framework EKObject.h }

{ Types from EKObject }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  EKObjectPtr = ^EKObject;
{$endif}

{$ifdef CLASSES}

type
  EKObject = objcclass external (NSObject)
  public
    function hasChanges: boolean; message 'hasChanges';
    {$if (defined(__cplusplus))}
    function isNew: boolean; message 'isNew';
    {$else}
    function isNew_: boolean; message 'isNew';
    {$endif}
    procedure reset; message 'reset';
    procedure rollback; message 'rollback';
    function refresh: boolean; message 'refresh';
  end;
{$endif}

