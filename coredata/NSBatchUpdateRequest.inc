{ Parsed from CoreData.framework NSBatchUpdateRequest.h }

{$ifdef TYPES}
type
  NSBatchUpdateRequestPtr = ^NSBatchUpdateRequest;
{$endif}

{$ifdef CLASSES}

type
  NSBatchUpdateRequest = objcclass external (NSPersistentStoreRequest)
  private
    {$if (not defined(__OBJC2__))}
    _entity: id;
    _predicate: NSPredicate;
    _requestFlags: bitpacked record
      case byte of
        0: (_anonBitField__requestFlags0: cuint);
        1: (
          includesSubentities: 0..1;
          resultType: 0..((1 shl 2)-1);
          entityIsName: 0..1;
          _RESERVED: 0..((1 shl 28)-1);
        );
      end;
    _columnsToUpdate: NSDictionary;
    {$endif}
  public
    class function batchUpdateRequestWithEntityName (entityName: NSString): instancetype; message 'batchUpdateRequestWithEntityName:';
    function initWithEntityName (entityName: NSString): instancetype; message 'initWithEntityName:'; { NS_DESIGNATED_INITIALIZER }
    function initWithEntity (entity: NSEntityDescription): instancetype; message 'initWithEntity:'; { NS_DESIGNATED_INITIALIZER }
    function entityName: NSString; message 'entityName';
    function entity: NSEntityDescription; message 'entity';
    procedure setPredicate(newValue: NSPredicate); message 'setPredicate:';
    function predicate: NSPredicate; message 'predicate';
    procedure setIncludesSubentities(newValue: boolean); message 'setIncludesSubentities:';
    function includesSubentities: boolean; message 'includesSubentities';
    procedure setResultType(newValue: NSBatchUpdateRequestResultType); message 'setResultType:';
    function resultType: NSBatchUpdateRequestResultType; message 'resultType';
    procedure setPropertiesToUpdate(newValue: NSDictionary); message 'setPropertiesToUpdate:';
    function propertiesToUpdate: NSDictionary; message 'propertiesToUpdate';
  end;
{$endif}

