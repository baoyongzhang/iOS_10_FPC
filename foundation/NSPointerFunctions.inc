{ Parsed from Foundation.framework NSPointerFunctions.h }

{ Callbacks }
{$ifdef TYPES}
type
  NSPointerFunctionsSizeCallback = function (item: pointer): NSUInteger; cdecl;
  NSPointerFunctionsHashFunctionCallback = function (item: pointer; size: NSPointerFunctionsSizeCallback): NSUInteger; cdecl;
  NSPointerFunctionsIsEqualFunctionCallback = function (item1: pointer; item2: pointer; size: NSPointerFunctionsSizeCallback): boolean; cdecl;
  NSPointerFunctionsSizeFunctionCallback = function (item: pointer): NSUInteger; cdecl;
  NSPointerFunctionsDescriptionFunctionCallback = function (item: pointer): NSString; cdecl;
  NSPointerFunctionsRelinquishFunctionCallback = procedure (item: pointer; size: NSPointerFunctionsSizeCallback); cdecl;
  NSPointerFunctionsAcquireFunctionCallback = function (size: NSPointerFunctionsSizeCallback; shouldCopy: boolean): pointer; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSPointerFunctionsPtr = ^NSPointerFunctions;
{$endif}

{$if  not (defined(__FOUNDATION_NSPOINTERFUNCTIONS__))}
{$ifdef TYPES}
const
  __FOUNDATION_NSPOINTERFUNCTIONS__ = 1;

type
  NSPointerFunctionsOptions = NSUInteger;
  NSPointerFunctionsOptionsPtr = ^NSPointerFunctionsOptions;

const
  NSPointerFunctionsStrongMemory = 0 shl 0 { available in 10_5, 6_0 };
  {$if (defined(TARGET_OS_MAC) and not (defined(TARGET_OS_EMBEDDED) or defined(TARGET_OS_IPHONE))) or defined(TARGET_OS_WIN32)}
  NSPointerFunctionsZeroingWeakMemory = 1 shl 0 deprecated 'in 10_5, 10_8';
  {$endif}
  NSPointerFunctionsOpaqueMemory = 2 shl 0 { available in 10_5, 6_0 };
  NSPointerFunctionsMallocMemory = 3 shl 0 { available in 10_5, 6_0 };
  NSPointerFunctionsMachVirtualMemory = 4 shl 0 { available in 10_5, 6_0 };
  NSPointerFunctionsWeakMemory = 5 shl 0 { available in 10_8, 6_0 };
  NSPointerFunctionsObjectPersonality = 0 shl 8 { available in 10_5, 6_0 };
  NSPointerFunctionsOpaquePersonality = 1 shl 8 { available in 10_5, 6_0 };
  NSPointerFunctionsObjectPointerPersonality = 2 shl 8 { available in 10_5, 6_0 };
  NSPointerFunctionsCStringPersonality = 3 shl 8 { available in 10_5, 6_0 };
  NSPointerFunctionsStructPersonality = 4 shl 8 { available in 10_5, 6_0 };
  NSPointerFunctionsIntegerPersonality = 5 shl 8 { available in 10_5, 6_0 };
  NSPointerFunctionsCopyIn = 1 shl 16 { available in 10_5, 6_0 };
{$endif}

{$ifdef CLASSES}

type
  NSPointerFunctions = objcclass external (NSObject, NSCopyingProtocol)
  public
    function initWithOptions (options: NSPointerFunctionsOptions): instancetype; message 'initWithOptions:'; { NS_DESIGNATED_INITIALIZER }
    class function pointerFunctionsWithOptions (options: NSPointerFunctionsOptions): NSPointerFunctions; message 'pointerFunctionsWithOptions:';
    procedure setHashFunction(newValue: NSPointerFunctionsHashFunctionCallback); message 'setHashFunction:';
    function hashFunction: NSPointerFunctionsHashFunctionCallback; message 'hashFunction';
    procedure setIsEqualFunction(newValue: NSPointerFunctionsIsEqualFunctionCallback); message 'setIsEqualFunction:';
    function isEqualFunction: NSPointerFunctionsIsEqualFunctionCallback; message 'isEqualFunction';
    procedure setSizeFunction(newValue: NSPointerFunctionsSizeFunctionCallback); message 'setSizeFunction:';
    function sizeFunction: NSPointerFunctionsSizeFunctionCallback; message 'sizeFunction';
    procedure setDescriptionFunction(newValue: NSPointerFunctionsDescriptionFunctionCallback); message 'setDescriptionFunction:';
    function descriptionFunction: NSPointerFunctionsDescriptionFunctionCallback; message 'descriptionFunction';
    procedure setRelinquishFunction(newValue: NSPointerFunctionsRelinquishFunctionCallback); message 'setRelinquishFunction:';
    function relinquishFunction: NSPointerFunctionsRelinquishFunctionCallback; message 'relinquishFunction';
    procedure setAcquireFunction(newValue: NSPointerFunctionsAcquireFunctionCallback); message 'setAcquireFunction:';
    function acquireFunction: NSPointerFunctionsAcquireFunctionCallback; message 'acquireFunction';
    procedure setUsesStrongWriteBarrier(newValue: BOOL 10.0), 3.0),); message 'setUsesStrongWriteBarrier:';
    function usesStrongWriteBarrier: BOOL 10.0), 3.0),; message 'usesStrongWriteBarrier';
    procedure set0(newValue: BOOL 10.0), 3.0),); message 'set0:';
    function 0: BOOL 10.0), 3.0),; message '0';

    procedure set10.0))(newValue: BOOL 10.0), 3.0),); message 'set10.0)):';
    function 10.0)): BOOL 10.0), 3.0),; message '10.0))';
    procedure setUsesWeakReadAndWriteBarriers(newValue: BOOL 10.0), 3.0),); message 'setUsesWeakReadAndWriteBarriers:';
    function usesWeakReadAndWriteBarriers: BOOL 10.0), 3.0),; message 'usesWeakReadAndWriteBarriers';
    procedure set0_(newValue: BOOL 10.0), 3.0),); message 'set0:';
    function 0_: BOOL 10.0), 3.0),; message '0';

    procedure set10.0))_(newValue: BOOL 10.0), 3.0),); message 'set10.0)):';
    function 10.0))_: BOOL 10.0), 3.0),; message '10.0))';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

{$endif}
