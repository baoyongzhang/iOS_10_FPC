{ Parsed from CoreData.framework NSRelationshipDescription.h }

{$ifdef TYPES}
type
  NSRelationshipDescriptionPtr = ^NSRelationshipDescription;
{$endif}

{$ifdef TYPES}
type
  NSDeleteRule = NSUInteger;
  NSDeleteRulePtr = ^NSDeleteRule;

const
  NSNoActionDeleteRule = 0;
  NSNullifyDeleteRule = 1;
  NSCascadeDeleteRule = 2;
  NSDenyDeleteRule = 3;
{$endif}

{$ifdef CLASSES}

type
  NSRelationshipDescription = objcclass external (NSPropertyDescription)
  private
  public
    procedure setDestinationEntity(newValue: NSEntityDescription); message 'setDestinationEntity:';
    function destinationEntity: NSEntityDescription; message 'destinationEntity';
    procedure setInverseRelationship(newValue: NSRelationshipDescription); message 'setInverseRelationship:';
    function inverseRelationship: NSRelationshipDescription; message 'inverseRelationship';
    procedure setMaxCount(newValue: NSUInteger); message 'setMaxCount:';
    function maxCount: NSUInteger; message 'maxCount';
    procedure setMinCount(newValue: NSUInteger); message 'setMinCount:';
    function minCount: NSUInteger; message 'minCount';
    procedure setDeleteRule(newValue: NSDeleteRule); message 'setDeleteRule:';
    function deleteRule: NSDeleteRule; message 'deleteRule';
    function isToMany: boolean; message 'isToMany';
    function versionHash: NSData; message 'versionHash';
    function ios(3.0)): NSData; message 'ios(3.0))';
    procedure setOrdered(newValue: boolean); message 'setOrdered:';
    function isOrdered: boolean; message 'isOrdered';
    procedure setIos(5.0))(newValue: boolean); message 'setIos(5.0)):';
    function isOrdered_: boolean; message 'isOrdered';
  end;
{$endif}

