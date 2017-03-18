{ Parsed from CoreData.framework NSEntityDescription.h }

{$ifdef TYPES}
type
  NSEntityDescriptionPtr = ^NSEntityDescription;
{$endif}

{$ifdef CLASSES}

type
  NSEntityDescription = objcclass external (NSObject, NSCodingProtocol, NSCopyingProtocol, NSFastEnumerationProtocol)
  private
  public
    class function entityForName_inManagedObjectContext (entityName: NSString; context: NSManagedObjectContext): nullable NSEntityDescriptionPtr; message 'entityForName:inManagedObjectContext:';
    class function insertNewObjectForEntityForName_inManagedObjectContext (entityName: NSString; context: NSManagedObjectContext): __kindof NSManagedObjectPtr; message 'insertNewObjectForEntityForName:inManagedObjectContext:';
    function managedObjectModel: NSManagedObjectModel; message 'managedObjectModel';
    procedure setManagedObjectClassName(newValue: NSString); message 'setManagedObjectClassName:';
    function managedObjectClassName: NSString; message 'managedObjectClassName';
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    procedure setAbstract(newValue: boolean); message 'setAbstract:';
    function isAbstract: boolean; message 'isAbstract';
    function subentitiesByName: NSDictionary; message 'subentitiesByName';
    procedure setSubentities(newValue: NSEntityDescription *ProtocolPtr); message 'setSubentities:';
    function subentities: NSEntityDescription *ProtocolPtr; message 'subentities';
    function superentity: NSEntityDescription; message 'superentity';
    function propertiesByName: NSDictionary; message 'propertiesByName';
    procedure setProperties(newValue: __kindof NSPropertyDescription *ProtocolPtr); message 'setProperties:';
    function properties: __kindof NSPropertyDescription *ProtocolPtr; message 'properties';
    procedure setUserInfo(newValue: NSDictionary); message 'setUserInfo:';
    function userInfo: NSDictionary; message 'userInfo';
    function attributesByName: NSDictionary; message 'attributesByName';
    function relationshipsByName: NSDictionary; message 'relationshipsByName';
    function relationshipsWithDestinationEntity (entity: NSEntityDescription): NSRelationshipDescription *ProtocolPtr; message 'relationshipsWithDestinationEntity:';
    function isKindOfEntity (entity: NSEntityDescription): boolean; message 'isKindOfEntity:'; { available in macosx(10.5 }
    function versionHash: NSData; message 'versionHash';
    function ios(3.0)): NSData; message 'ios(3.0))';
    procedure setVersionHashModifier(newValue: NSString); message 'setVersionHashModifier:';
    function versionHashModifier: NSString; message 'versionHashModifier';
    procedure setIos(3.0))(newValue: NSString); message 'setIos(3.0)):';
    function ios(3.0))_: NSString; message 'ios(3.0))';
    procedure setRenamingIdentifier(newValue: NSString); message 'setRenamingIdentifier:';
    function renamingIdentifier: NSString; message 'renamingIdentifier';
    procedure setIos(3.0))_(newValue: NSString); message 'setIos(3.0)):';
    function ios(3.0))__: NSString; message 'ios(3.0))';
    procedure setCompoundIndexes(newValue: idProtocol *ProtocolPtr); message 'setCompoundIndexes:';
    function compoundIndexes: idProtocol *ProtocolPtr; message 'compoundIndexes';
    procedure setIos(5.0))(newValue: idProtocol *ProtocolPtr); message 'setIos(5.0)):';
    function ios(5.0)): idProtocol *ProtocolPtr; message 'ios(5.0))';
    procedure setUniquenessConstraints(newValue: idProtocol *ProtocolPtr); message 'setUniquenessConstraints:';
    function uniquenessConstraints: idProtocol *ProtocolPtr; message 'uniquenessConstraints';
    procedure setIos(9.0))(newValue: idProtocol *ProtocolPtr); message 'setIos(9.0)):';
    function ios(9.0)): idProtocol *ProtocolPtr; message 'ios(9.0))';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    function countByEnumeratingWithState_objects_count (state: NSFastEnumerationStatePtr; buffer: id  _Nullable; len: NSUInteger): NSUInteger; message 'countByEnumeratingWithState:objects:count:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
  end;
{$endif}

