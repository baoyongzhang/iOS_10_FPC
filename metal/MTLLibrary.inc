{ Parsed from Metal.framework MTLLibrary.h }

{$ifdef TYPES}
type
  MTLVertexAttributePtr = ^MTLVertexAttribute;
  MTLAttributePtr = ^MTLAttribute;
  MTLFunctionConstantPtr = ^MTLFunctionConstant;
  MTLCompileOptionsPtr = ^MTLCompileOptions;
  MTLFunctionProtocolPtr = ^MTLFunctionProtocol;
  MTLLibraryProtocolPtr = ^MTLLibraryProtocol;
{$endif}

{$ifdef TYPES}
type
  MTLPatchType = NSUInteger;
  MTLPatchTypePtr = ^MTLPatchType;

const
  MTLPatchTypeNone = 0;
  MTLPatchTypeTriangle = 1;
  MTLPatchTypeQuad = 2;
{$endif}

{$ifdef CLASSES}

type
  MTLVertexAttribute = objcclass external (NSObject)
  public
    function name: NSString; message 'name';
    function attributeIndex: NSUInteger; message 'attributeIndex';
    function attributeType: MTLDataType; message 'attributeType';
    function isActive: boolean; message 'isActive';
    function isPatchData: boolean; message 'isPatchData';
    function isPatchControlPointData: boolean; message 'isPatchControlPointData';
  end;

type
  MTLAttribute = objcclass external (NSObject)
  public
    function name: NSString; message 'name';
    function attributeIndex: NSUInteger; message 'attributeIndex';
    function attributeType: MTLDataType; message 'attributeType';
    function isActive: boolean; message 'isActive';
    function isPatchData: boolean; message 'isPatchData';
    function isPatchControlPointData: boolean; message 'isPatchControlPointData';
  end;
{$endif}

{$ifdef TYPES}
type
  MTLFunctionType = NSUInteger;
  MTLFunctionTypePtr = ^MTLFunctionType;

const
  MTLFunctionTypeVertex = 1;
  MTLFunctionTypeFragment = 2;
  MTLFunctionTypeKernel = 3;
{$endif}

{$ifdef CLASSES}

type
  MTLFunctionConstant = objcclass external (NSObject)
  public
    function name: NSString; message 'name';
    function type_: MTLDataType; message 'type';
    function index: NSUInteger; message 'index';
    function required: boolean; message 'required';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  MTLFunctionProtocol = objcprotocol external name 'MTLFunction' (NSObjectProtocol)
    procedure setLabel(newValue: NSString); message 'setLabel:';
    function label_: NSString; message 'label';
    function device: MTLDeviceProtocol; message 'device';
    function functionType: MTLFunctionType; message 'functionType';
    function patchType: MTLPatchType; message 'patchType';
    function patchControlPointCount: NSInteger; message 'patchControlPointCount';
    function vertexAttributes: MTLVertexAttribute *ProtocolPtr; message 'vertexAttributes';
    function stageInputAttributes: MTLAttribute *ProtocolPtr; message 'stageInputAttributes';
    function name: NSString; message 'name';
    function functionConstantsDictionary: NSDictionary; message 'functionConstantsDictionary';
  end;
{$endif}

{$ifdef TYPES}
type
  MTLLanguageVersion = NSUInteger;
  MTLLanguageVersionPtr = ^MTLLanguageVersion;

const
  MTLLanguageVersion1_0 = 1 shl 16 { available in NA, 9_0 };
  MTLLanguageVersion1_1 = 1 shl 16 { available in 10_11, 9_0 };
  MTLLanguageVersion1_2 = 1 shl 16 { available in 10_12, 10_0 };
{$endif}

{$ifdef CLASSES}

type
  MTLCompileOptions = objcclass external (NSObject, NSCopyingProtocol)
  public
    procedure setPreprocessorMacros(newValue: NSDictionary); message 'setPreprocessorMacros:';
    function preprocessorMacros: NSDictionary; message 'preprocessorMacros';
    procedure setFastMathEnabled(newValue: boolean); message 'setFastMathEnabled:';
    function fastMathEnabled: boolean; message 'fastMathEnabled';
    procedure setLanguageVersion(newValue: MTLLanguageVersion); message 'setLanguageVersion:';
    function languageVersion: MTLLanguageVersion; message 'languageVersion';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  MTLLibraryErrorDomain: NSString; cvar; external;
{$endif}

{$ifdef TYPES}
type
  MTLLibraryError = NSUInteger;
  MTLLibraryErrorPtr = ^MTLLibraryError;

const
  MTLLibraryErrorUnsupported = 1;
  MTLLibraryErrorInternal = 2;
  MTLLibraryErrorCompileFailure = 3;
  MTLLibraryErrorCompileWarning = 4;
  MTLLibraryErrorFunctionNotFound = 5 { available in 10_12, 10_0 };
  MTLLibraryErrorFileNotFound = 6 { available in 10_12, 10_0 };
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  MTLRenderPipelineErrorDomain: NSString; cvar; external;
{$endif}

{$ifdef TYPES}
type
  MTLRenderPipelineError = NSUInteger;
  MTLRenderPipelineErrorPtr = ^MTLRenderPipelineError;

const
  MTLRenderPipelineErrorInternal = 1;
  MTLRenderPipelineErrorUnsupported = 2;
  MTLRenderPipelineErrorInvalidInput = 3;
{$endif}

{$ifdef PROTOCOLS}

type
  MTLLibraryProtocol = objcprotocol external name 'MTLLibrary' (NSObjectProtocol)
    procedure setLabel(newValue: NSString); message 'setLabel:';
    function label_: NSString; message 'label';
    function device: MTLDeviceProtocol; message 'device';
    function newFunctionWithName (functionName: NSString): nullable MTLFunctionProtocol; message 'newFunctionWithName:';
    function newFunctionWithName_constantValues_error (name: NSString; constantValues: MTLFunctionConstantValues; error: __autoreleasing NSErrorPtrPtr): nullable MTLFunctionProtocol; message 'newFunctionWithName:constantValues:error:'; { available in 10_12, 10_0 }
    procedure newFunctionWithName_constantValues_completionHandler (name: NSString; constantValues: MTLFunctionConstantValues; completionHandler: OpaqueCBlock); message 'newFunctionWithName:constantValues:completionHandler:'; { available in 10_12, 10_0 }
    function functionNames: NSString *ProtocolPtr; message 'functionNames';
  end;
{$endif}

