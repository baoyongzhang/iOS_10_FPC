{ Parsed from CoreData.framework NSPersistentStore.h }

{$ifdef TYPES}
type
  NSPersistentStorePtr = ^NSPersistentStore;
{$endif}

{$ifdef CLASSES}

type
  NSPersistentStore = objcclass external (NSObject)
  private
  public
    class function metadataForPersistentStoreWithURL_error (url: NSURL; error: NSErrorPtr): nullable NSDictionaryPtr; message 'metadataForPersistentStoreWithURL:error:';
    class function setMetadata_forPersistentStoreWithURL_error (metadata: nullable NSDictionaryPtr; url: NSURL; error: NSErrorPtr): boolean; message 'setMetadata:forPersistentStoreWithURL:error:';
    class function migrationManagerClass                           ,ios(3.0)): pobjc_class; message 'migrationManagerClass                           ,ios(3.0))'; { available in macosx(10.6 }
    function initWithPersistentStoreCoordinator_configurationName_URL_options (root: nullable NSPersistentStoreCoordinatorPtr; name: nullable NSStringPtr; url: NSURL; options: nullable NSDictionaryPtr): instancetype; message 'initWithPersistentStoreCoordinator:configurationName:URL:options:'; { NS_DESIGNATED_INITIALIZER }
    function init: instancetype; message 'init';
    function loadMetadata (error: NSErrorPtr): boolean; message 'loadMetadata:';
    function persistentStoreCoordinator: NSPersistentStoreCoordinator; message 'persistentStoreCoordinator';
    function configurationName: NSString; message 'configurationName';
    function options: NSDictionary; message 'options';
    procedure setURL(newValue: NSURL); message 'setURL:';
    function URL: NSURL; message 'URL';
    procedure setIdentifier(newValue: NSString); message 'setIdentifier:';
    function identifier: NSString; message 'identifier';
    function type_: NSString; message 'type';
    procedure setReadOnly(newValue: boolean); message 'setReadOnly:';
    function isReadOnly: boolean; message 'isReadOnly';
    procedure setMetadata(newValue: NSDictionary); message 'setMetadata:';
    function metadata: NSDictionary; message 'metadata';
    procedure didAddToPersistentStoreCoordinator (coordinator: NSPersistentStoreCoordinator); message 'didAddToPersistentStoreCoordinator:';
    procedure willRemoveFromPersistentStoreCoordinator (coordinator: nullable NSPersistentStoreCoordinatorPtr); message 'willRemoveFromPersistentStoreCoordinator:';
  end;
{$endif}

