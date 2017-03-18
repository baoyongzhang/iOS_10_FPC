{ Parsed from Contacts.framework CNContactFetchRequest.h }

{$ifdef TYPES}
type
  CNContactFetchRequestPtr = ^CNContactFetchRequest;
{$endif}

{$ifdef CLASSES}

type
  CNContactFetchRequest = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    function initWithKeysToFetch (keysToFetch: id<CNKeyDescriptorProtocol>Ptr): instancetype; message 'initWithKeysToFetch:'; { NS_DESIGNATED_INITIALIZER }
    procedure setPredicate(newValue: NSPredicate); message 'setPredicate:';
    function predicate: NSPredicate; message 'predicate';
    procedure setKeysToFetch(newValue: CNKeyDescriptorProtocolProtocolPtr); message 'setKeysToFetch:';
    function keysToFetch: CNKeyDescriptorProtocolProtocolPtr; message 'keysToFetch';
    procedure setMutableObjects(newValue: boolean); message 'setMutableObjects:';
    function mutableObjects: boolean; message 'mutableObjects';
    procedure setUnifyResults(newValue: boolean); message 'setUnifyResults:';
    function unifyResults: boolean; message 'unifyResults';
    procedure setSortOrder(newValue: CNContactSortOrder); message 'setSortOrder:';
    function sortOrder: CNContactSortOrder; message 'sortOrder';

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

