{ Parsed from Foundation.framework NSIndexPath.h }

{$ifdef TYPES}
type
  NSIndexPathPtr = ^NSIndexPath;
{$endif}

{$ifdef CLASSES}

type
  NSIndexPath = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  private
    _indexes: NSUIntegerPtr;
    {$if  not defined(__OBJC2__)}
    _hash: NSUInteger;
    {$endif}
    _length: NSUInteger;
    _reserved: pointer;
  public
    class function indexPathWithIndex (index: NSUInteger): instancetype; message 'indexPathWithIndex:';
    class function indexPathWithIndexes_length (indexes: NSUIntegerPtr { variable size array of NSUInteger }; length: NSUInteger): instancetype; message 'indexPathWithIndexes:length:';
    function initWithIndexes_length (indexes: NSUIntegerPtr { variable size array of NSUInteger }; length: NSUInteger): instancetype; message 'initWithIndexes:length:'; { NS_DESIGNATED_INITIALIZER }
    function initWithIndex (index: NSUInteger): instancetype; message 'initWithIndex:';
    function indexPathByAddingIndex (index: NSUInteger): NSIndexPath; message 'indexPathByAddingIndex:';
    function indexPathByRemovingLastIndex: NSIndexPath; message 'indexPathByRemovingLastIndex';
    function indexAtPosition (position: NSUInteger): NSUInteger; message 'indexAtPosition:';
    function length: NSUInteger; message 'length';
    procedure getIndexes_range (indexes: NSUIntegerPtr; positionRange: NSRange); message 'getIndexes:range:'; { available in 10_9, 7_0 }
    function compare (otherObject: NSIndexPath): NSComparisonResult; message 'compare:';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;


type
  NSIndexPath_NSDeprecated = objccategory external name 'NSDeprecated' (NSIndexPath)
    procedure getIndexes (indexes: NSUIntegerPtr); message 'getIndexes:';
  end;
{$endif}

