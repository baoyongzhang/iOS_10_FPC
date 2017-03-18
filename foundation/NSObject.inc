{ Parsed from Foundation.framework NSObject.h }

{ Types from NSDeprecatedMethods }
{$ifdef TYPES}

{$endif}


{ Types from NSSecureCodingProtocol }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  NSCopyingProtocolPtr = ^NSCopyingProtocol;
  NSMutableCopyingProtocolPtr = ^NSMutableCopyingProtocol;
  NSCodingProtocolPtr = ^NSCodingProtocol;
  NSSecureCodingProtocolPtr = ^NSSecureCodingProtocol;
  NSDiscardableContentProtocolPtr = ^NSDiscardableContentProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  NSCopyingProtocol = objcprotocol external name 'NSCopying'
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
  end;

type
  NSMutableCopyingProtocol = objcprotocol external name 'NSMutableCopying'
    function mutableCopyWithZone (zone: nullable NSZonePtr): id; message 'mutableCopyWithZone:';
  end;

type
  NSCodingProtocol = objcprotocol external name 'NSCoding'
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
  end;

type
  NSSecureCodingProtocol = objcprotocol external name 'NSSecureCoding' (NSCodingProtocol)
  required
    {$if defined(FOUNDATION_SWIFT_SDK_EPOCH_AT_LEAST)}
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
    {$else}
    class function supportsSecureCoding: boolean; message 'supportsSecureCoding';
    {$endif}
  end;
{$endif}

{$ifdef CLASSES}

type
  NSCoderMethods = objccategory external (NSObject)
    class function version: NSInteger; message 'version';
    class procedure setVersion (aVersion: NSInteger); message 'setVersion:';
    function classForCoder: pobjc_class; message 'classForCoder';
    function replacementObjectForCoder (aCoder: NSCoder): nullable id; message 'replacementObjectForCoder:';
    function awakeAfterUsingCoder (aDecoder: NSCoder): nullable id; message 'awakeAfterUsingCoder:';
  end;
{$endif}

{$if (defined(TARGET_OS_MAC) and not (defined(TARGET_OS_EMBEDDED) or defined(TARGET_OS_IPHONE)))}
{$ifdef CLASSES}

type
  NSDeprecatedMethods = objccategory external (NSObject)
  end;
{$endif}

{$endif}
{$ifdef PROTOCOLS}

type
  NSDiscardableContentProtocol = objcprotocol external name 'NSDiscardableContent'
  required
    function beginContentAccess: boolean; message 'beginContentAccess';
    procedure endContentAccess; message 'endContentAccess';
    procedure discardContentIfPossible; message 'discardContentIfPossible';
    function isContentDiscarded: boolean; message 'isContentDiscarded';
  end;
{$endif}

{$ifdef CLASSES}

type
  NSDiscardableContentProxy = objccategory external (NSObject)
    function autoContentAccessingProxy: id; message 'autoContentAccessingProxy';
  end;
{$endif}

{$ifdef FUNCTIONS}
function NSAllocateObject(aClass: pobjc_class; extraBytes: NSUInteger; zone: NSZone* _Nullable): id; cdecl; external;
procedure NSDeallocateObject(object_: id); cdecl; external;
function NSCopyObject(object_: id; extraBytes: NSUInteger; zone: NSZone* _Nullable): id; cdecl; external; deprecated 'in 10_0, 10_8, 2_0, 6_0';
function NSShouldRetainWithZone(anObject: id; requestedZone: NSZone* _Nullable): boolean; cdecl; external;
procedure NSIncrementExtraRefCount(object_: id); cdecl; external;
function NSDecrementExtraRefCountWasZero(object_: id): boolean; cdecl; external;
function NSExtraRefCount(object_: id): NSUInteger; cdecl; external;
{$endif}

