{ Parsed from Foundation.framework NSPointerArray.h }

{ Types from NSPointerArrayConveniences }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  NSPointerArrayPtr = ^NSPointerArray;
{$endif}

{$ifdef CLASSES}

type
  NSPointerArray = objcclass external (NSObject, NSFastEnumerationProtocol, NSCopyingProtocol, NSCodingProtocol)
  public
    function initWithOptions (options: NSPointerFunctionsOptions): instancetype; message 'initWithOptions:'; { NS_DESIGNATED_INITIALIZER }
    function initWithPointerFunctions (functions: NSPointerFunctions): instancetype; message 'initWithPointerFunctions:'; { NS_DESIGNATED_INITIALIZER }
    class function pointerArrayWithOptions (options: NSPointerFunctionsOptions): NSPointerArray; message 'pointerArrayWithOptions:';
    class function pointerArrayWithPointerFunctions (functions: NSPointerFunctions): NSPointerArray; message 'pointerArrayWithPointerFunctions:';
    function pointerFunctions: NSPointerFunctions; message 'pointerFunctions';
    function pointerAtIndex (index: NSUInteger): nullable voidPtr; message 'pointerAtIndex:';
    procedure addPointer (pointer_: nullable voidPtr); message 'addPointer:';
    procedure removePointerAtIndex (index: NSUInteger); message 'removePointerAtIndex:';
    procedure insertPointer_atIndex (item: nullable voidPtr; index: NSUInteger); message 'insertPointer:atIndex:';
    procedure replacePointerAtIndex_withPointer (index: NSUInteger; item: nullable voidPtr); message 'replacePointerAtIndex:withPointer:';
    procedure compact; message 'compact';
    procedure setCount(newValue: NSUInteger); message 'setCount:';
    function count: NSUInteger; message 'count';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    function countByEnumeratingWithState_objects_count (state: NSFastEnumerationStatePtr; buffer: id  _Nullable; len: NSUInteger): NSUInteger; message 'countByEnumeratingWithState:objects:count:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
  end;


type
  NSPointerArrayConveniences = objccategory external (NSPointerArray)
    {$if (defined(TARGET_OS_MAC) and not (defined(TARGET_OS_EMBEDDED) or defined(TARGET_OS_IPHONE)))}
    class function pointerArrayWithStrongObjects: id; message 'pointerArrayWithStrongObjects'; deprecated 'in 10_5, 10_8';
    class function pointerArrayWithWeakObjects: id; message 'pointerArrayWithWeakObjects'; deprecated 'in 10_5, 10_8';
    {$endif}
    class function strongObjectsPointerArray: NSPointerArray; message 'strongObjectsPointerArray'; { available in 10_8, 6_0 }
    class function weakObjectsPointerArray: NSPointerArray; message 'weakObjectsPointerArray'; { available in 10_8, 6_0 }
    function allObjects: NSArray; message 'allObjects';
  end;
{$endif}

