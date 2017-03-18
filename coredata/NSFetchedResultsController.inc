{ Parsed from CoreData.framework NSFetchedResultsController.h }

{ Types from NSFetchedResultsControllerDelegateProtocol }
{$ifdef TYPES}

type
  NSFetchedResultsChangeType = NSUInteger;
type
  NSFetchedResultsChangeTypePtr = ^NSFetchedResultsChangeType;

const
  NSFetchedResultsChangeInsert = 1;
  NSFetchedResultsChangeDelete = 2;
  NSFetchedResultsChangeMove = 3;
  NSFetchedResultsChangeUpdate = 4;
{$endif}


{$ifdef TYPES}
type
  NSFetchedResultsControllerPtr = ^NSFetchedResultsController;
  NSFetchedResultsSectionInfoProtocolPtr = ^NSFetchedResultsSectionInfoProtocol;
  NSFetchedResultsControllerDelegateProtocolPtr = ^NSFetchedResultsControllerDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  NSFetchedResultsController = objcclass external (NSObject, ResultType:id<NSFetchRequestResultProtocol)
  public
    function initWithFetchRequest_managedObjectContext_sectionNameKeyPath_cacheName (fetchRequest: ResultTypeProtocolPtr; context: NSManagedObjectContext; sectionNameKeyPath: nullable NSStringPtr; name: nullable NSStringPtr): instancetype; message 'initWithFetchRequest:managedObjectContext:sectionNameKeyPath:cacheName:';
    function performFetch (error: NSErrorPtr): boolean; message 'performFetch:';
    function fetchRequest: ResultTypeProtocolPtr; message 'fetchRequest';
    function managedObjectContext: NSManagedObjectContext; message 'managedObjectContext';
    function sectionNameKeyPath: NSString; message 'sectionNameKeyPath';
    function cacheName: NSString; message 'cacheName';
    procedure setDelegate(newValue: NSFetchedResultsControllerDelegateProtocol); message 'setDelegate:';
    function delegate: NSFetchedResultsControllerDelegateProtocol; message 'delegate';
    class procedure deleteCacheWithName (name: nullable NSStringPtr); message 'deleteCacheWithName:';
    function fetchedObjects: ResultTypeProtocolPtr; message 'fetchedObjects';
    function objectAtIndexPath (indexPath: NSIndexPath): ResultType; message 'objectAtIndexPath:';
    function indexPathForObject (object_: ResultType): nullable NSIndexPathPtr; message 'indexPathForObject:';
    function sectionIndexTitleForSectionName (sectionName: NSString): nullable NSStringPtr; message 'sectionIndexTitleForSectionName:';
    function sectionIndexTitles: NSString *ProtocolPtr; message 'sectionIndexTitles';
    function sections: NSFetchedResultsSectionInfoProtocolProtocolPtr; message 'sections';
    function sectionForSectionIndexTitle_atIndex (title: NSString; sectionIndex: NSInteger): NSInteger; message 'sectionForSectionIndexTitle:atIndex:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSFetchedResultsSectionInfoProtocol = objcprotocol external name 'NSFetchedResultsSectionInfo'
    function name: NSString; message 'name';
    function indexTitle: NSString; message 'indexTitle';
    function numberOfObjects: NSUInteger; message 'numberOfObjects';
    function objects: NSArray; message 'objects';
  end;

type
  NSFetchedResultsControllerDelegateProtocol = objcprotocol external name 'NSFetchedResultsControllerDelegate' (NSObjectProtocol)
  optional
    procedure controller_didChangeObject_atIndexPath_forChangeType_newIndexPath (controller: NSFetchedResultsController; anObject: id; indexPath: nullable NSIndexPathPtr; type_: NSFetchedResultsChangeType; newIndexPath: nullable NSIndexPathPtr); message 'controller:didChangeObject:atIndexPath:forChangeType:newIndexPath:';
  optional
    procedure controller_didChangeSection_atIndex_forChangeType (controller: NSFetchedResultsController; sectionInfo: NSFetchedResultsSectionInfoProtocol; sectionIndex: NSUInteger; type_: NSFetchedResultsChangeType); message 'controller:didChangeSection:atIndex:forChangeType:';
  optional
    procedure controllerWillChangeContent (controller: NSFetchedResultsController); message 'controllerWillChangeContent:';
  optional
    procedure controllerDidChangeContent (controller: NSFetchedResultsController); message 'controllerDidChangeContent:';
  optional
    function controller_sectionIndexTitleForSectionName (controller: NSFetchedResultsController; sectionName: NSString): nullable NSStringPtr; message 'controller:sectionIndexTitleForSectionName:'; { available in macosx(10.12 }
  end;
{$endif}

