{ Parsed from Foundation.framework NSKeyedArchiver.h }

{$ifdef TYPES}
type
  NSKeyedArchiverPtr = ^NSKeyedArchiver;
  NSKeyedUnarchiverPtr = ^NSKeyedUnarchiver;
  NSKeyedArchiverDelegateProtocolPtr = ^NSKeyedArchiverDelegateProtocol;
  NSKeyedUnarchiverDelegateProtocolPtr = ^NSKeyedUnarchiverDelegateProtocol;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSInvalidArchiveOperationException: NSExceptionName; cvar; external;
  NSInvalidUnarchiveOperationException: NSExceptionName; cvar; external;
  NSKeyedArchiveRootObjectKey: NSString { available in 10_9, 7_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSKeyedArchiver = objcclass external (NSCoder)
  private
    _stream: pointer;
    _flags: NSUInteger;
    _delegate: id;
    _containers: id;
    _objects: id;
    _objRefMap: id;
    _replacementMap: id;
    _classNameMap: id;
    _conditionals: id;
    _classes: id;
    _genericKey: NSUInteger;
    _cache: pointer;
    _cacheSize: NSUInteger;
    _estimatedCount: NSUInteger;
    _reserved2: pointer;
    _visited: id;
    _reserved0: pointer;
  public
    function init                            , ios(10.0), watchos(3.0), tvos(10.0)): instancetype; message 'init                            , ios(10.0), watchos(3.0), tvos(10.0))'; { available in macosx(10.12 }
    class function archivedDataWithRootObject (rootObject: id): NSData; message 'archivedDataWithRootObject:';
    class function archiveRootObject_toFile (rootObject: id; path: NSString): boolean; message 'archiveRootObject:toFile:';
    function initForWritingWithMutableData (data: NSMutableData): instancetype; message 'initForWritingWithMutableData:';
    procedure setDelegate(newValue: NSKeyedArchiverDelegateProtocol); message 'setDelegate:';
    function delegate: NSKeyedArchiverDelegateProtocol; message 'delegate';
    procedure setOutputFormat(newValue: NSPropertyListFormat); message 'setOutputFormat:';
    function outputFormat: NSPropertyListFormat; message 'outputFormat';
    function encodedData: NSData ios(10.0), watchos(3.0),Ptr; message 'encodedData';
    function tvos(10.0)): NSData ios(10.0), watchos(3.0),Ptr; message 'tvos(10.0))';
    procedure finishEncoding; message 'finishEncoding';
    class procedure classSetClassName_forClass (codedName: nullable NSStringPtr; cls: pobjc_class); message 'setClassName:forClass:';
    procedure setClassName_forClass (codedName: nullable NSStringPtr; cls: pobjc_class); message 'setClassName:forClass:';
    class function classClassNameForClass (cls: pobjc_class): nullable NSStringPtr; message 'classNameForClass:';
    function classNameForClass (cls: pobjc_class): nullable NSStringPtr; message 'classNameForClass:';
    procedure encodeObject_forKey (objv: nullable id; key: NSString); message 'encodeObject:forKey:';
    procedure encodeConditionalObject_forKey (objv: nullable id; key: NSString); message 'encodeConditionalObject:forKey:';
    procedure encodeBool_forKey (boolv: boolean; key: NSString); message 'encodeBool:forKey:';
    procedure encodeInt_forKey (intv: cint; key: NSString); message 'encodeInt:forKey:';
    procedure encodeInt32_forKey (intv: cint32; key: NSString); message 'encodeInt32:forKey:';
    procedure encodeInt64_forKey (intv: cint64; key: NSString); message 'encodeInt64:forKey:';
    procedure encodeFloat_forKey (realv: single; key: NSString); message 'encodeFloat:forKey:';
    procedure encodeDouble_forKey (realv: double; key: NSString); message 'encodeDouble:forKey:';
    procedure encodeBytes_length_forKey (bytesp: nullable  uint8_tPtr; lenv: NSUInteger; key: NSString); message 'encodeBytes:length:forKey:';
    procedure setRequiresSecureCoding(newValue: boolean); message 'setRequiresSecureCoding:';
    function requiresSecureCoding: boolean; message 'requiresSecureCoding';
  end;

type
  NSKeyedUnarchiver = objcclass external (NSCoder)
  private
    _delegate: id;
    _flags: cuint32;
    _objRefMap: id;
    _replacementMap: id;
    _nameClassMap: id;
    _tmpRefObjMap: id;
    _refObjMap: id;
    _genericKey: cint32;
    _data: id;
    _offsetData: pointer;
    _containers: id;
    _objects: id;
    _bytes: pbyte;
    _len: cuint64;
    _helper: id;
    _reserved0: pointer;
  public
    class function unarchiveObjectWithData (data: NSData): nullable id; message 'unarchiveObjectWithData:';
    class function unarchiveTopLevelObjectWithData_error (data: NSData; error: NSErrorPtr): nullable id; message 'unarchiveTopLevelObjectWithData:error:'; { available in 10_11, 9_0 }
    class function unarchiveObjectWithFile (path: NSString): nullable id; message 'unarchiveObjectWithFile:';
    function initForReadingWithData (data: NSData): instancetype; message 'initForReadingWithData:';
    procedure setDelegate(newValue: NSKeyedUnarchiverDelegateProtocol); message 'setDelegate:';
    function delegate: NSKeyedUnarchiverDelegateProtocol; message 'delegate';
    procedure finishDecoding; message 'finishDecoding';
    class procedure classSetClass_forClassName (cls: nullable Class; codedName: NSString); message 'setClass:forClassName:';
    procedure setClass_forClassName (cls: nullable Class; codedName: NSString); message 'setClass:forClassName:';
    class function classClassForClassName (codedName: NSString): nullable Class; message 'classForClassName:';
    function classForClassName (codedName: NSString): nullable Class; message 'classForClassName:';
    function containsValueForKey (key: NSString): boolean; message 'containsValueForKey:';
    function decodeObjectForKey (key: NSString): nullable id; message 'decodeObjectForKey:';
    function decodeBoolForKey (key: NSString): boolean; message 'decodeBoolForKey:';
    function decodeIntForKey (key: NSString): cint; message 'decodeIntForKey:';
    function decodeInt32ForKey (key: NSString): cint32; message 'decodeInt32ForKey:';
    function decodeInt64ForKey (key: NSString): cint64; message 'decodeInt64ForKey:';
    function decodeFloatForKey (key: NSString): single; message 'decodeFloatForKey:';
    function decodeDoubleForKey (key: NSString): double; message 'decodeDoubleForKey:';
    function decodeBytesForKey_returnedLength (key: NSString; lengthp: nullable NSUIntegerPtr): nullable  uint8_tPtr; message 'decodeBytesForKey:returnedLength:';
    procedure setRequiresSecureCoding(newValue: boolean); message 'setRequiresSecureCoding:';
    function requiresSecureCoding: boolean; message 'requiresSecureCoding';
    procedure setDecodingFailurePolicy(newValue: NSDecodingFailurePolicy); message 'setDecodingFailurePolicy:';
    function decodingFailurePolicy: NSDecodingFailurePolicy; message 'decodingFailurePolicy';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSKeyedArchiverDelegateProtocol = objcprotocol external name 'NSKeyedArchiverDelegate' (NSObjectProtocol)
  optional
    function archiver_willEncodeObject (archiver: NSKeyedArchiver; object_: id): id; message 'archiver:willEncodeObject:';
    procedure archiver_didEncodeObject (archiver: NSKeyedArchiver; object_: id); message 'archiver:didEncodeObject:';
    procedure archiver_willReplaceObject_withObject (archiver: NSKeyedArchiver; object_: id; newObject: id); message 'archiver:willReplaceObject:withObject:';
    procedure archiverWillFinish (archiver: NSKeyedArchiver); message 'archiverWillFinish:';
    procedure archiverDidFinish (archiver: NSKeyedArchiver); message 'archiverDidFinish:';
  end;

type
  NSKeyedUnarchiverDelegateProtocol = objcprotocol external name 'NSKeyedUnarchiverDelegate' (NSObjectProtocol)
  optional
    function unarchiver_cannotDecodeObjectOfClassName_originalClasses (unarchiver: NSKeyedUnarchiver; name: NSString; classNames: NSString): OpaqueType; message 'unarchiver:cannotDecodeObjectOfClassName:originalClasses:';
    function unarchiver_didDecodeObject (unarchiver: NSKeyedUnarchiver; object_: id): id; message 'unarchiver:didDecodeObject:';
    procedure unarchiver_willReplaceObject_withObject (unarchiver: NSKeyedUnarchiver; object_: id; newObject: id); message 'unarchiver:willReplaceObject:withObject:';
    procedure unarchiverWillFinish (unarchiver: NSKeyedUnarchiver); message 'unarchiverWillFinish:';
    procedure unarchiverDidFinish (unarchiver: NSKeyedUnarchiver); message 'unarchiverDidFinish:';
  end;
{$endif}

{$ifdef CLASSES}

type
  NSKeyedArchiverObjectSubstitution = objccategory external (NSObject)
    function classForKeyedArchiver: pobjc_class; message 'classForKeyedArchiver';
    function replacementObjectForKeyedArchiver (archiver: NSKeyedArchiver): id; message 'replacementObjectForKeyedArchiver:';
    class function classFallbacksForKeyedArchiver: NSString *ProtocolPtr; message 'classFallbacksForKeyedArchiver';
  end;

type
  NSKeyedUnarchiverObjectSubstitution = objccategory external (NSObject)
    class function classForKeyedUnarchiver: pobjc_class; message 'classForKeyedUnarchiver';
  end;
{$endif}

