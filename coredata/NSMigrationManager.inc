{ Parsed from CoreData.framework NSMigrationManager.h }

{$ifdef TYPES}
type
  NSMigrationManagerPtr = ^NSMigrationManager;
{$endif}

{$ifdef CLASSES}

type
  NSMigrationManager = objcclass external (NSObject)
  private
  public
    function initWithSourceModel_destinationModel (sourceModel: NSManagedObjectModel; destinationModel: NSManagedObjectModel): instancetype; message 'initWithSourceModel:destinationModel:';
    function migrateStoreFromURL_type_options_withMappingModel_toDestinationURL_destinationType_destinationOptions_error (sourceURL: NSURL; sStoreType: NSString; sOptions: nullable NSDictionaryPtr; mappings: nullable NSMappingModelPtr; dURL: NSURL; dStoreType: NSString; dOptions: nullable NSDictionaryPtr; error: NSErrorPtr): boolean; message 'migrateStoreFromURL:type:options:withMappingModel:toDestinationURL:destinationType:destinationOptions:error:';
    procedure setUsesStoreSpecificMigrationManager(newValue: boolean); message 'setUsesStoreSpecificMigrationManager:';
    function usesStoreSpecificMigrationManager: boolean; message 'usesStoreSpecificMigrationManager';
    procedure setIos(5.0))(newValue: boolean); message 'setIos(5.0)):';
    function ios(5.0)): boolean; message 'ios(5.0))';
    procedure reset; message 'reset';
    function mappingModel: NSMappingModel; message 'mappingModel';
    function sourceModel: NSManagedObjectModel; message 'sourceModel';
    function destinationModel: NSManagedObjectModel; message 'destinationModel';
    function sourceContext: NSManagedObjectContext; message 'sourceContext';
    function destinationContext: NSManagedObjectContext; message 'destinationContext';
    function sourceEntityForEntityMapping (mEntity: NSEntityMapping): nullable NSEntityDescriptionPtr; message 'sourceEntityForEntityMapping:';
    function destinationEntityForEntityMapping (mEntity: NSEntityMapping): nullable NSEntityDescriptionPtr; message 'destinationEntityForEntityMapping:';
    procedure associateSourceInstance_withDestinationInstance_forEntityMapping (sourceInstance: NSManagedObject; destinationInstance: NSManagedObject; entityMapping: NSEntityMapping); message 'associateSourceInstance:withDestinationInstance:forEntityMapping:';
    function destinationInstancesForEntityMappingNamed_sourceInstances (mappingName: NSString; sourceInstances: nullable __kindof NSManagedObject *ProtocolPtr): __kindof NSManagedObject *ProtocolPtr; message 'destinationInstancesForEntityMappingNamed:sourceInstances:';
    function sourceInstancesForEntityMappingNamed_destinationInstances (mappingName: NSString; destinationInstances: nullable __kindof NSManagedObject *ProtocolPtr): __kindof NSManagedObject *ProtocolPtr; message 'sourceInstancesForEntityMappingNamed:destinationInstances:';
    function currentEntityMapping: NSEntityMapping; message 'currentEntityMapping';
    function migrationProgress: single; message 'migrationProgress';
    procedure setUserInfo(newValue: NSDictionary); message 'setUserInfo:';
    function userInfo: NSDictionary; message 'userInfo';
    procedure cancelMigrationWithError (error: NSError); message 'cancelMigrationWithError:';
  end;
{$endif}

