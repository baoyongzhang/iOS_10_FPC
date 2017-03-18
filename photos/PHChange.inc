{ Parsed from Photos.framework PHChange.h }

{$ifdef TYPES}
type
  PHChangePtr = ^PHChange;
  PHObjectChangeDetailsPtr = ^PHObjectChangeDetails;
  PHFetchResultChangeDetailsPtr = ^PHFetchResultChangeDetails;
{$endif}

{$ifdef CLASSES}

type
  PHChange = objcclass external (NSObject)
  public
    function changeDetailsForObject (object_: PHObject): nullable PHObjectChangeDetailsPtr; message 'changeDetailsForObject:';
    function changeDetailsForFetchResult (object_: PHFetchResult): nullable PHFetchResultChangeDetailsPtr; message 'changeDetailsForFetchResult:';
  end;

type
  PHObjectChangeDetails = objcclass external (NSObject, ObjectType: PHObject *Protocol)
  public
    function objectBeforeChanges: __kindof ObjectType; message 'objectBeforeChanges';
    function objectAfterChanges: __kindof ObjectType; message 'objectAfterChanges';
    function assetContentChanged: boolean; message 'assetContentChanged';
    function objectWasDeleted: boolean; message 'objectWasDeleted';
  end;

type
  PHFetchResultChangeDetails = objcclass external (NSObject, ObjectType: PHObject *Protocol)
  public
    function fetchResultBeforeChanges: ObjectTypeProtocolPtr; message 'fetchResultBeforeChanges';
    function fetchResultAfterChanges: ObjectTypeProtocolPtr; message 'fetchResultAfterChanges';
    function hasIncrementalChanges: boolean; message 'hasIncrementalChanges';
    function removedIndexes: NSIndexSet; message 'removedIndexes';
    function removedObjects: ObjectTypeProtocolPtr; message 'removedObjects';
    function insertedIndexes: NSIndexSet; message 'insertedIndexes';
    function insertedObjects: ObjectTypeProtocolPtr; message 'insertedObjects';
    function changedIndexes: NSIndexSet; message 'changedIndexes';
    function changedObjects: ObjectTypeProtocolPtr; message 'changedObjects';
    procedure enumerateMovesWithBlock (handler: OpaqueCBlock); message 'enumerateMovesWithBlock:';
    function hasMoves: boolean; message 'hasMoves';
    class function changeDetailsFromFetchResult_toFetchResult_changedObjects (fromResult: ObjectTypeProtocolPtr; toResult: ObjectTypeProtocolPtr; changedObjects_: ObjectTypeProtocolPtr): instancetype; message 'changeDetailsFromFetchResult:toFetchResult:changedObjects:';
  end;
{$endif}

