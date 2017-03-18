{ Parsed from Photos.framework PHFetchResult.h }

{$ifdef TYPES}
type
  PHFetchResultPtr = ^PHFetchResult;
{$endif}

{$ifdef CLASSES}

type
  PHFetchResult = objcclass external (NSObject, ObjectTypeProtocol)
  public
    function count: NSUInteger; message 'count';
    function objectAtIndex (index: NSUInteger): ObjectType; message 'objectAtIndex:';
    function objectAtIndexedSubscript (idx: NSUInteger): ObjectType; message 'objectAtIndexedSubscript:';
    function containsObject (anObject: ObjectType): boolean; message 'containsObject:';
    function indexOfObject (anObject: ObjectType): NSUInteger; message 'indexOfObject:';
    function indexOfObject_inRange (anObject: ObjectType; range: NSRange): NSUInteger; message 'indexOfObject:inRange:';
    function firstObject: ObjectType; message 'firstObject';
    function lastObject: ObjectType; message 'lastObject';
    function objectsAtIndexes (indexes: NSIndexSet): ObjectTypeProtocolPtr; message 'objectsAtIndexes:';
    procedure enumerateObjectsUsingBlock (block: OpaqueCBlock); message 'enumerateObjectsUsingBlock:';
    procedure enumerateObjectsWithOptions_usingBlock (opts: NSEnumerationOptions; block: OpaqueCBlock); message 'enumerateObjectsWithOptions:usingBlock:';
    procedure enumerateObjectsAtIndexes_options_usingBlock (s: NSIndexSet; opts: NSEnumerationOptions; block: OpaqueCBlock); message 'enumerateObjectsAtIndexes:options:usingBlock:';
    function countOfAssetsWithMediaType (mediaType: PHAssetMediaType): NSUInteger; message 'countOfAssetsWithMediaType:';
  end;
{$endif}

