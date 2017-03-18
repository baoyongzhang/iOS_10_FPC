{ Parsed from Foundation.framework NSIndexSet.h }

{$ifdef TYPES}
type
  NSIndexSetPtr = ^NSIndexSet;
  NSMutableIndexSetPtr = ^NSMutableIndexSet;
{$endif}

{$ifdef CLASSES}

type
  NSIndexSet = objcclass external (NSObject, NSCopyingProtocol, NSMutableCopyingProtocol, NSSecureCodingProtocol)
  private
    _indexSetFlags: bitpacked record
      case byte of
        0: (_anonBitField__indexSetFlags0: cuint);
        1: (
          _isEmpty: 0..1;
          _hasSingleRange: 0..1;
          _cacheValid: 0..1;
          _reservedArrayBinderController: 0..((1 shl 29)-1);
        );
      end;
    _internal: record
      case longint of
        0: (
          _singleRange: record
            _range: NSRange;
          end;
        );
        1: (
          _multipleRanges: record
            _data: pointer;
            _reserved: pointer;
          end;
        );
    end;
  public
    class function indexSet: instancetype; message 'indexSet';
    class function indexSetWithIndex (value: NSUInteger): instancetype; message 'indexSetWithIndex:';
    class function indexSetWithIndexesInRange (range: NSRange): instancetype; message 'indexSetWithIndexesInRange:';
    function initWithIndexesInRange (range: NSRange): instancetype; message 'initWithIndexesInRange:'; { NS_DESIGNATED_INITIALIZER }
    function initWithIndexSet (indexSet_: NSIndexSet): instancetype; message 'initWithIndexSet:'; { NS_DESIGNATED_INITIALIZER }
    function initWithIndex (value: NSUInteger): instancetype; message 'initWithIndex:';
    function isEqualToIndexSet (indexSet_: NSIndexSet): boolean; message 'isEqualToIndexSet:';
    function count: NSUInteger; message 'count';
    function firstIndex: NSUInteger; message 'firstIndex';
    function lastIndex: NSUInteger; message 'lastIndex';
    function indexGreaterThanIndex (value: NSUInteger): NSUInteger; message 'indexGreaterThanIndex:';
    function indexLessThanIndex (value: NSUInteger): NSUInteger; message 'indexLessThanIndex:';
    function indexGreaterThanOrEqualToIndex (value: NSUInteger): NSUInteger; message 'indexGreaterThanOrEqualToIndex:';
    function indexLessThanOrEqualToIndex (value: NSUInteger): NSUInteger; message 'indexLessThanOrEqualToIndex:';
    function getIndexes_maxCount_inIndexRange (indexBuffer: NSUIntegerPtr; bufferSize: NSUInteger; range: nullable NSRangePointer): NSUInteger; message 'getIndexes:maxCount:inIndexRange:';
    function countOfIndexesInRange (range: NSRange): NSUInteger; message 'countOfIndexesInRange:'; { available in 10_5, 2_0 }
    function containsIndex (value: NSUInteger): boolean; message 'containsIndex:';
    function containsIndexesInRange (range: NSRange): boolean; message 'containsIndexesInRange:';
    function containsIndexes (indexSet_: NSIndexSet): boolean; message 'containsIndexes:';
    function intersectsIndexesInRange (range: NSRange): boolean; message 'intersectsIndexesInRange:';
    procedure enumerateIndexesUsingBlock (block: void (NS_NOESCAPE ^)(NSUInteger idx, BOOL *stop)); message 'enumerateIndexesUsingBlock:'; { available in 10_6, 4_0 }
    procedure enumerateIndexesWithOptions_usingBlock (opts: NSEnumerationOptions; block: void (NS_NOESCAPE ^)(NSUInteger idx, BOOL *stop)); message 'enumerateIndexesWithOptions:usingBlock:'; { available in 10_6, 4_0 }
    procedure enumerateIndexesInRange_options_usingBlock (range: NSRange; opts: NSEnumerationOptions; block: void (NS_NOESCAPE ^)(NSUInteger idx, BOOL *stop)); message 'enumerateIndexesInRange:options:usingBlock:'; { available in 10_6, 4_0 }
    function indexPassingTest (predicate: BOOL (NS_NOESCAPE ^)(NSUInteger idx, BOOL *stop)): NSUInteger; message 'indexPassingTest:'; { available in 10_6, 4_0 }
    function indexWithOptions_passingTest (opts: NSEnumerationOptions; predicate: BOOL (NS_NOESCAPE ^)(NSUInteger idx, BOOL *stop)): NSUInteger; message 'indexWithOptions:passingTest:'; { available in 10_6, 4_0 }
    function indexInRange_options_passingTest (range: NSRange; opts: NSEnumerationOptions; predicate: BOOL (NS_NOESCAPE ^)(NSUInteger idx, BOOL *stop)): NSUInteger; message 'indexInRange:options:passingTest:'; { available in 10_6, 4_0 }
    function indexesPassingTest (predicate: BOOL (NS_NOESCAPE ^)(NSUInteger idx, BOOL *stop)): NSIndexSet; message 'indexesPassingTest:'; { available in 10_6, 4_0 }
    function indexesWithOptions_passingTest (opts: NSEnumerationOptions; predicate: BOOL (NS_NOESCAPE ^)(NSUInteger idx, BOOL *stop)): NSIndexSet; message 'indexesWithOptions:passingTest:'; { available in 10_6, 4_0 }
    function indexesInRange_options_passingTest (range: NSRange; opts: NSEnumerationOptions; predicate: BOOL (NS_NOESCAPE ^)(NSUInteger idx, BOOL *stop)): NSIndexSet; message 'indexesInRange:options:passingTest:'; { available in 10_6, 4_0 }
    procedure enumerateRangesUsingBlock (block: void (NS_NOESCAPE ^)(NSRange range, BOOL *stop)); message 'enumerateRangesUsingBlock:'; { available in 10_7, 5_0 }
    procedure enumerateRangesWithOptions_usingBlock (opts: NSEnumerationOptions; block: void (NS_NOESCAPE ^)(NSRange range, BOOL *stop)); message 'enumerateRangesWithOptions:usingBlock:'; { available in 10_7, 5_0 }
    procedure enumerateRangesInRange_options_usingBlock (range: NSRange; opts: NSEnumerationOptions; block: void (NS_NOESCAPE ^)(NSRange range, BOOL *stop)); message 'enumerateRangesInRange:options:usingBlock:'; { available in 10_7, 5_0 }

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function mutableCopyWithZone (zone: nullable NSZonePtr): id; message 'mutableCopyWithZone:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;

type
  NSMutableIndexSet = objcclass external (NSIndexSet)
  private
    _reserved: pointer;
  public
    procedure addIndexes (indexSet_: NSIndexSet); message 'addIndexes:';
    procedure removeIndexes (indexSet_: NSIndexSet); message 'removeIndexes:';
    procedure removeAllIndexes; message 'removeAllIndexes';
    procedure addIndex (value: NSUInteger); message 'addIndex:';
    procedure removeIndex (value: NSUInteger); message 'removeIndex:';
    procedure addIndexesInRange (range: NSRange); message 'addIndexesInRange:';
    procedure removeIndexesInRange (range: NSRange); message 'removeIndexesInRange:';
    procedure shiftIndexesStartingAtIndex_by (index: NSUInteger; delta: NSInteger); message 'shiftIndexesStartingAtIndex:by:';
  end;
{$endif}

