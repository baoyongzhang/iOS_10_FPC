{ Parsed from CoreData.framework NSPersistentStoreDescription.h }

{$ifdef TYPES}
type
  NSPersistentStoreDescriptionPtr = ^NSPersistentStoreDescription;
{$endif}

{$ifdef CLASSES}

type
  NSPersistentStoreDescription = objcclass external (NSObject, NSCopyingProtocol)
  private
    {$if (not defined(__OBJC2__))}
    _type: id;
    _configuration: id;
    _url: id;
    _options: id;
    {$endif}
  public
    class function persistentStoreDescriptionWithURL (URL: NSURL): instancetype; message 'persistentStoreDescriptionWithURL:';
    procedure setType(newValue: NSString); message 'setType:';
    function type_: NSString; message 'type';
    procedure setConfiguration(newValue: NSString); message 'setConfiguration:';
    function configuration: NSString; message 'configuration';
    procedure setURL(newValue: NSURL); message 'setURL:';
    function URL: NSURL; message 'URL';
    function options: NSDictionary; message 'options';
    procedure setOption_forKey (option: nullable NSObjectPtr; key: NSString); message 'setOption:forKey:';
    procedure setReadOnly(newValue: boolean); message 'setReadOnly:';
    function isReadOnly: boolean; message 'isReadOnly';
    procedure setTimeout(newValue: NSTimeInterval); message 'setTimeout:';
    function timeout: NSTimeInterval; message 'timeout';
    function sqlitePragmas: NSDictionary; message 'sqlitePragmas';
    procedure setValue_forPragmaNamed (value: nullable NSObjectPtr; name: NSString); message 'setValue:forPragmaNamed:';
    procedure setShouldAddStoreAsynchronously(newValue: boolean); message 'setShouldAddStoreAsynchronously:';
    function shouldAddStoreAsynchronously: boolean; message 'shouldAddStoreAsynchronously';
    procedure setShouldMigrateStoreAutomatically(newValue: boolean); message 'setShouldMigrateStoreAutomatically:';
    function shouldMigrateStoreAutomatically: boolean; message 'shouldMigrateStoreAutomatically';
    procedure setShouldInferMappingModelAutomatically(newValue: boolean); message 'setShouldInferMappingModelAutomatically:';
    function shouldInferMappingModelAutomatically: boolean; message 'shouldInferMappingModelAutomatically';
    function initWithURL (url_: NSURL): instancetype; message 'initWithURL:'; { NS_DESIGNATED_INITIALIZER }

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

