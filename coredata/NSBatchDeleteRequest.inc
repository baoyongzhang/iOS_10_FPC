{ Parsed from CoreData.framework NSBatchDeleteRequest.h }

{$ifdef TYPES}
type
  NSBatchDeleteRequestPtr = ^NSBatchDeleteRequest;
{$endif}

{$ifdef CLASSES}

type
  NSBatchDeleteRequest = objcclass external (NSPersistentStoreRequest)
  private
    {$if (not defined(__OBJC2__))}
    _resultType: NSBatchDeleteRequestResultType;
    _deleteTarget: NSFetchRequest;
    _reserved: pointer;
    {$endif}
  public
    function init: instancetype; message 'init';
    function initWithFetchRequest (fetch: NSFetchRequest): instancetype; message 'initWithFetchRequest:'; { NS_DESIGNATED_INITIALIZER }
    function initWithObjectIDs (objects: NSManagedObjectID *ProtocolPtr): instancetype; message 'initWithObjectIDs:';
    procedure setResultType(newValue: NSBatchDeleteRequestResultType); message 'setResultType:';
    function resultType: NSBatchDeleteRequestResultType; message 'resultType';
    function fetchRequest: NSFetchRequest; message 'fetchRequest';
  end;
{$endif}

