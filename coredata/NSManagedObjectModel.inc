{ Parsed from CoreData.framework NSManagedObjectModel.h }

{$ifdef TYPES}
type
  NSManagedObjectModelPtr = ^NSManagedObjectModel;
{$endif}

{$ifdef CLASSES}

type
  NSManagedObjectModel = objcclass external (NSObject, NSCodingProtocol, NSCopyingProtocol, NSFastEnumerationProtocol)
  private
  public
    class function mergedModelFromBundles (bundles: nullable NSBundle *ProtocolPtr): nullable NSManagedObjectModelPtr; message 'mergedModelFromBundles:';
    class function modelByMergingModels (models: nullable NSManagedObjectModel *ProtocolPtr): nullable NSManagedObjectModelPtr; message 'modelByMergingModels:';
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithContentsOfURL (url: NSURL): nullable instancetype; message 'initWithContentsOfURL:';
    function entitiesByName: NSDictionary; message 'entitiesByName';
    procedure setEntities(newValue: NSEntityDescription *ProtocolPtr); message 'setEntities:';
    function entities: NSEntityDescription *ProtocolPtr; message 'entities';
    function configurations: NSString *ProtocolPtr; message 'configurations';
    function entitiesForConfiguration (configuration: nullable NSStringPtr): nullable NSEntityDescription *ProtocolPtr; message 'entitiesForConfiguration:';
    procedure setEntities_forConfiguration (entities_: NSEntityDescription *ProtocolPtr; configuration: NSString); message 'setEntities:forConfiguration:';
    procedure setFetchRequestTemplate_forName (fetchRequestTemplate: nullable NSFetchRequestPtr; name: NSString); message 'setFetchRequestTemplate:forName:';
    function fetchRequestTemplateForName (name: NSString): nullable NSFetchRequestPtr; message 'fetchRequestTemplateForName:';
    function fetchRequestFromTemplateWithName_substitutionVariables (name: NSString; variables: NSDictionary): nullable NSFetchRequestPtr; message 'fetchRequestFromTemplateWithName:substitutionVariables:';
    procedure setLocalizationDictionary(newValue: NSDictionary); message 'setLocalizationDictionary:';
    function localizationDictionary: NSDictionary; message 'localizationDictionary';
    class function mergedModelFromBundles_forStoreMetadata (bundles: nullable NSBundle *ProtocolPtr; metadata: NSDictionary): nullable NSManagedObjectModelPtr; message 'mergedModelFromBundles:forStoreMetadata:'; { available in macosx(10.5 }
    class function modelByMergingModels_forStoreMetadata (models: NSManagedObjectModel *ProtocolPtr; metadata: NSDictionary): nullable NSManagedObjectModelPtr; message 'modelByMergingModels:forStoreMetadata:'; { available in macosx(10.5 }
    function fetchRequestTemplatesByName: NSDictionary; message 'fetchRequestTemplatesByName';
    function ios(3.0)): NSDictionary; message 'ios(3.0))';
    procedure setVersionIdentifiers(newValue: NSSet); message 'setVersionIdentifiers:';
    function versionIdentifiers: NSSet; message 'versionIdentifiers';
    procedure setIos(3.0))(newValue: NSSet); message 'setIos(3.0)):';
    function ios(3.0))_: NSSet; message 'ios(3.0))';
    function isConfiguration_compatibleWithStoreMetadata (configuration: nullable NSStringPtr; metadata: NSDictionary): boolean; message 'isConfiguration:compatibleWithStoreMetadata:'; { available in macosx(10.5 }
    function entityVersionHashesByName: NSDictionary; message 'entityVersionHashesByName';
    function ios(3.0))__: NSDictionary; message 'ios(3.0))';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    function countByEnumeratingWithState_objects_count (state: NSFastEnumerationStatePtr; buffer: id  _Nullable; len: NSUInteger): NSUInteger; message 'countByEnumeratingWithState:objects:count:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
  end;
{$endif}

