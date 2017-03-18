{ Parsed from Foundation.framework NSCoder.h }

{ Types from NSExtendedCoder }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  NSCoderPtr = ^NSCoder;
{$endif}

{$ifdef TYPES}
type
  NSDecodingFailurePolicy = NSInteger;
  NSDecodingFailurePolicyPtr = ^NSDecodingFailurePolicy;

const
  NSDecodingFailurePolicyRaiseException = 0;
  NSDecodingFailurePolicySetErrorAndReturn = 1;
{$endif}

{$ifdef CLASSES}

type
  NSCoder = objcclass external (NSObject)
  public
    procedure encodeValueOfObjCType_at (type_: PChar; addr: pointer); message 'encodeValueOfObjCType:at:';
    procedure encodeDataObject (data: NSData); message 'encodeDataObject:';
    procedure decodeValueOfObjCType_at (type_: PChar; data: pointer); message 'decodeValueOfObjCType:at:';
    function decodeDataObject: nullable NSDataPtr; message 'decodeDataObject';
    function versionForClassName (className: NSString): NSInteger; message 'versionForClassName:';
  end;


type
  NSExtendedCoder = objccategory external (NSCoder)
    procedure encodeObject (object_: nullable id); message 'encodeObject:';
    procedure encodeRootObject (rootObject: id); message 'encodeRootObject:';
    procedure encodeBycopyObject (anObject: nullable id); message 'encodeBycopyObject:';
    procedure encodeByrefObject (anObject: nullable id); message 'encodeByrefObject:';
    procedure encodeConditionalObject (object_: nullable id); message 'encodeConditionalObject:';
    procedure encodeValuesOfObjCTypes (types: PChar); varargs; message 'encodeValuesOfObjCTypes:';
    procedure encodeArrayOfObjCType_count_at (type_: PChar; count: NSUInteger; array_: pointer); message 'encodeArrayOfObjCType:count:at:';
    procedure encodeBytes_length (byteaddr: nullable  voidPtr; length: NSUInteger); message 'encodeBytes:length:';
    function decodeObject: nullable id; message 'decodeObject';
    function decodeTopLevelObjectAndReturnError (error: NSErrorPtr): nullable id; message 'decodeTopLevelObjectAndReturnError:'; { available in 10_11, 9_0 }
    procedure decodeValuesOfObjCTypes (types: PChar); varargs; message 'decodeValuesOfObjCTypes:';
    procedure decodeArrayOfObjCType_count_at (itemType: PChar; count: NSUInteger; array_: pointer); message 'decodeArrayOfObjCType:count:at:';
    function decodeBytesWithReturnedLength (lengthp: NSUIntegerPtr): nullable voidPtr; message 'decodeBytesWithReturnedLength:';
    {$if (defined(TARGET_OS_MAC) and not (defined(TARGET_OS_EMBEDDED) or defined(TARGET_OS_IPHONE)))}
    procedure encodePropertyList (aPropertyList: id); message 'encodePropertyList:';
    function decodePropertyList: nullable id; message 'decodePropertyList';
    {$endif}
    procedure setObjectZone (zone: nullable NSZonePtr); message 'setObjectZone:';
    function objectZone: nullable NSZonePtr; message 'objectZone';
    function systemVersion: cuint; message 'systemVersion';
    function allowsKeyedCoding: boolean; message 'allowsKeyedCoding';
    procedure encodeObject_forKey (objv: nullable id; key: NSString); message 'encodeObject:forKey:';
    procedure encodeConditionalObject_forKey (objv: nullable id; key: NSString); message 'encodeConditionalObject:forKey:';
    procedure encodeBool_forKey (boolv: boolean; key: NSString); message 'encodeBool:forKey:';
    procedure encodeInt_forKey (intv: cint; key: NSString); message 'encodeInt:forKey:';
    procedure encodeInt32_forKey (intv: cint32; key: NSString); message 'encodeInt32:forKey:';
    procedure encodeInt64_forKey (intv: cint64; key: NSString); message 'encodeInt64:forKey:';
    procedure encodeFloat_forKey (realv: single; key: NSString); message 'encodeFloat:forKey:';
    procedure encodeDouble_forKey (realv: double; key: NSString); message 'encodeDouble:forKey:';
    procedure encodeBytes_length_forKey (bytesp: nullable  uint8_tPtr; lenv: NSUInteger; key: NSString); message 'encodeBytes:length:forKey:';
    function containsValueForKey (key: NSString): boolean; message 'containsValueForKey:';
    function decodeObjectForKey (key: NSString): nullable id; message 'decodeObjectForKey:';
    function decodeTopLevelObjectForKey_error (key: NSString; error: NSErrorPtr): nullable id; message 'decodeTopLevelObjectForKey:error:'; { available in 10_11, 9_0 }
    function decodeBoolForKey (key: NSString): boolean; message 'decodeBoolForKey:';
    function decodeIntForKey (key: NSString): cint; message 'decodeIntForKey:';
    function decodeInt32ForKey (key: NSString): cint32; message 'decodeInt32ForKey:';
    function decodeInt64ForKey (key: NSString): cint64; message 'decodeInt64ForKey:';
    function decodeFloatForKey (key: NSString): single; message 'decodeFloatForKey:';
    function decodeDoubleForKey (key: NSString): double; message 'decodeDoubleForKey:';
    function decodeBytesForKey_returnedLength (key: NSString; lengthp: nullable NSUIntegerPtr): nullable  uint8_tPtr; message 'decodeBytesForKey:returnedLength:';
    procedure encodeInteger_forKey (intv: NSInteger; key: NSString); message 'encodeInteger:forKey:'; { available in 10_5, 2_0 }
    function decodeIntegerForKey (key: NSString): NSInteger; message 'decodeIntegerForKey:'; { available in 10_5, 2_0 }
    function requiresSecureCoding: boolean; message 'requiresSecureCoding';
    function decodeObjectOfClass_forKey (aClass: pobjc_class; key: NSString): nullable id; message 'decodeObjectOfClass:forKey:'; { available in 10_8, 6_0 }
    function decodeTopLevelObjectOfClass_forKey_error (aClass: pobjc_class; key: NSString; error: NSErrorPtr): nullable id; message 'decodeTopLevelObjectOfClass:forKey:error:'; { available in 10_11, 9_0 }
    function decodeObjectOfClasses_forKey (classes: nullable ClassProtocolPtr; key: NSString): nullable id; message 'decodeObjectOfClasses:forKey:'; { available in 10_8, 6_0 }
    function decodeTopLevelObjectOfClasses_forKey_error (classes: nullable ClassProtocolPtr; key: NSString; error: NSErrorPtr): nullable id; message 'decodeTopLevelObjectOfClasses:forKey:error:'; { available in 10_11, 9_0 }
    function decodePropertyListForKey (key: NSString): nullable id; message 'decodePropertyListForKey:'; { available in 10_8, 6_0 }
    function allowedClasses: ClassProtocolPtr; message 'allowedClasses';
    procedure failWithError (error: NSError); message 'failWithError:'; { available in 10_11, 9_0 }
    function decodingFailurePolicy: NSDecodingFailurePolicy; message 'decodingFailurePolicy';
    function error: NSError; message 'error';
  end;
{$endif}

{$if (defined(TARGET_OS_MAC) and not (defined(TARGET_OS_EMBEDDED) or defined(TARGET_OS_IPHONE)))}
{$ifdef FUNCTIONS}
function NXReadNSObjectFromCoder(decoder: NSCoder): NSObject * _Nullable; cdecl; external; deprecated 'in 10_0, 10_5, 2_0, 2_0';
{$endif}

{$ifdef CLASSES}

type
  NSTypedstreamCompatibility = objccategory external (NSCoder)
    procedure encodeNXObject (object_: id); message 'encodeNXObject:'; deprecated 'in 10_0, 10_5, 2_0, 2_0';
    function decodeNXObject: nullable id; message 'decodeNXObject'; deprecated 'in 10_0, 10_5, 2_0, 2_0';
  end;
{$endif}

{$endif}
