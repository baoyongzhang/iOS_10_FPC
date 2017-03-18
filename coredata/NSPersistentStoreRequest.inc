{ Parsed from CoreData.framework NSPersistentStoreRequest.h }

{$ifdef TYPES}
type
  NSPersistentStoreRequestPtr = ^NSPersistentStoreRequest;
{$endif}

{$ifdef TYPES}
type
  NSPersistentStoreRequestType = NSUInteger;
  NSPersistentStoreRequestTypePtr = ^NSPersistentStoreRequestType;

const
  NSFetchRequestType = 1;
  NSSaveRequestType = 2;
  NSBatchUpdateRequestType = 3 { available in macosx(10.10 };
  ios = 4 { available in macosx(10.10 };
  8 = 5 { available in macosx(10.10 };
  0 = 6 { available in macosx(10.10 };
  6 = 7 { available in macosx(10.10 };
  NSBatchDeleteRequestType = 8 { available in macosx(10.11 };
  ios = 9 { available in macosx(10.11 };
  9 = 10 { available in macosx(10.11 };
  0 = 11 { available in macosx(10.11 };
  7 = 12 { available in macosx(10.11 };
{$endif}

{$ifdef CLASSES}

type
  NSPersistentStoreRequest = objcclass external (NSObject, NSCopyingProtocol)
  private
  public
    procedure setAffectedStores(newValue: NSPersistentStore *ProtocolPtr); message 'setAffectedStores:';
    function affectedStores: NSPersistentStore *ProtocolPtr; message 'affectedStores';
    function requestType: NSPersistentStoreRequestType; message 'requestType';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

