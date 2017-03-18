{ Parsed from Foundation.framework NSSortDescriptor.h }

{$ifdef TYPES}
type
  NSSortDescriptorPtr = ^NSSortDescriptor;
{$endif}

{$ifdef CLASSES}

type
  NSSortDescriptor = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  private
    _sortDescriptorFlags: NSUInteger;
    _key: NSString;
    _selector: SEL;
    _selectorOrBlock: id;
  public
    class function sortDescriptorWithKey_ascending (key: nullable NSStringPtr; ascending: boolean): instancetype; message 'sortDescriptorWithKey:ascending:'; { available in 10_6, 4_0 }
    class function sortDescriptorWithKey_ascending_selector (key: nullable NSStringPtr; ascending: boolean; selector: nullable SEL): instancetype; message 'sortDescriptorWithKey:ascending:selector:'; { available in 10_6, 4_0 }
    function initWithKey_ascending (key: nullable NSStringPtr; ascending: boolean): instancetype; message 'initWithKey:ascending:';
    function initWithKey_ascending_selector (key: nullable NSStringPtr; ascending: boolean; selector: nullable SEL): instancetype; message 'initWithKey:ascending:selector:';
    function initWithCoder (coder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function key: NSString; message 'key';
    function ascending: boolean; message 'ascending';
    function selector: SEL; message 'selector';
    procedure allowEvaluation; message 'allowEvaluation'; { available in 10_9, 7_0 }
    class function sortDescriptorWithKey_ascending_comparator (key_: nullable NSStringPtr; ascending_: boolean; cmptr: NSComparator): instancetype; message 'sortDescriptorWithKey:ascending:comparator:'; { available in 10_6, 4_0 }
    function initWithKey_ascending_comparator (key_: nullable NSStringPtr; ascending_: boolean; cmptr: NSComparator): instancetype; message 'initWithKey:ascending:comparator:'; { available in 10_6, 4_0 }
    function comparator: NSComparator; message 'comparator';
    function compareObject_toObject (object1: id; object2: id): NSComparisonResult; message 'compareObject:toObject:';
    function reversedSortDescriptor: id; message 'reversedSortDescriptor';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;

type
  NSSet = objcclass external (NSObject, ObjectTypeProtocol)
  public
    function sortedArrayUsingDescriptors (sortDescriptors: NSSortDescriptor *ProtocolPtr): ObjectTypeProtocolPtr; message 'sortedArrayUsingDescriptors:'; { available in 10_6, 4_0 }
  end;

type
  NSArray = objcclass external (NSObject, ObjectTypeProtocol)
  public
    function sortedArrayUsingDescriptors (sortDescriptors: NSSortDescriptor *ProtocolPtr): ObjectTypeProtocolPtr; message 'sortedArrayUsingDescriptors:';
  end;

type
  NSMutableArray = objcclass external (NSObject, ObjectTypeProtocol)
  public
    procedure sortUsingDescriptors (sortDescriptors: NSSortDescriptor *ProtocolPtr); message 'sortUsingDescriptors:';
  end;

type
  NSOrderedSet = objcclass external (NSObject, ObjectTypeProtocol)
  public
    function sortedArrayUsingDescriptors (sortDescriptors: NSSortDescriptor *ProtocolPtr): ObjectTypeProtocolPtr; message 'sortedArrayUsingDescriptors:'; { available in 10_7, 5_0 }
  end;

type
  NSMutableOrderedSet = objcclass external (NSObject, ObjectTypeProtocol)
  public
    procedure sortUsingDescriptors (sortDescriptors: NSSortDescriptor *ProtocolPtr); message 'sortUsingDescriptors:'; { available in 10_7, 5_0 }
  end;
{$endif}

