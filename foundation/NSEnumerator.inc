{ Parsed from Foundation.framework NSEnumerator.h }

{$ifdef TYPES}
type
  NSEnumeratorPtr = ^NSEnumerator;
  NSFastEnumerationProtocolPtr = ^NSFastEnumerationProtocol;
{$endif}

{$ifdef TYPES}
type
  NSFastEnumerationState = record
    state: culong;
    itemsPtr: pointer;
    mutationsPtr: Int64;
    extra:array[0..4] of culong;
  end;
type
  NSFastEnumerationStatePtr = ^NSFastEnumerationState;
{$endif}

{$ifdef PROTOCOLS}

type
  NSFastEnumerationProtocol = objcprotocol external name 'NSFastEnumeration'
    function countByEnumeratingWithState_objects_count (state: NSFastEnumerationStatePtr; buffer: id  _Nullable; len: NSUInteger): NSUInteger; message 'countByEnumeratingWithState:objects:count:';
  end;
{$endif}

{$ifdef CLASSES}

type
  NSEnumerator = objcclass external (NSObject, ObjectTypeProtocol)
  public
    function nextObject: nullable ObjectType; message 'nextObject';
  end;

type
  NSEnumerator = objcclass external (NSObject, ObjectTypeProtocol)
  public
    function allObjects: ObjectTypeProtocolPtr; message 'allObjects';
  end;
{$endif}

