{ Parsed from SceneKit.framework SCNShadable.h }

{$ifdef TYPES}
type
  SCNProgramPtr = ^SCNProgram;
  SCNBufferStreamProtocolPtr = ^SCNBufferStreamProtocol;
  SCNShadableProtocolPtr = ^SCNShadableProtocol;
  SCNProgramDelegateProtocolPtr = ^SCNProgramDelegateProtocol;
{$endif}

{$if (defined(SWIFT_SDK_OVERLAY2_SCENEKIT_EPOCH)) and (SWIFT_SDK_OVERLAY2_SCENEKIT_EPOCH >= 3)}
{$ifdef TYPES}
type
  NS_STRING_ENUM = NSString *SCNShaderModifierEntryPoint;
  NS_STRING_ENUMPtr = ^NS_STRING_ENUM;
{$endif}

{$else}
{$ifdef TYPES}
type
  SCNShaderModifierEntryPoint = ^NSString;
{$endif}

{$endif}
{$ifdef TYPES}
type
  SCNBufferFrequency = NSInteger;
  SCNBufferFrequencyPtr = ^SCNBufferFrequency;

const
  SCNBufferFrequencyPerFrame = 0;
  SCNBufferFrequencyPerNode = 1;
  SCNBufferFrequencyPerShadable = 2;
{$endif}

{$ifdef PROTOCOLS}

type
  SCNBufferStreamProtocol = objcprotocol external name 'SCNBufferStream' (NSObjectProtocol)
    procedure writeBytes_length (bytes: pointer; length: NSUInteger); message 'writeBytes:length:';
  end;
{$endif}

{$ifdef TYPES}
type
  SCNBufferBindingBlock = OpaqueCBlock;
  SCNBindingBlock = OpaqueCBlock;
{$endif}

{$ifdef PROTOCOLS}

type
  SCNShadableProtocol = objcprotocol external name 'SCNShadable' (NSObjectProtocol)
  optional
    procedure set__WATCHOS_PROHIBITED(newValue: SCNProgram *program); message 'set__WATCHOS_PROHIBITED:';
    function __WATCHOS_PROHIBITED_: SCNProgram *program; message 'WATCHOS_PROHIBITED';
    procedure handleBindingOfSymbol_usingBlock (symbol: NSString; block: nullable SCNBindingBlock); message 'handleBindingOfSymbol:usingBlock:'; { available in macosx(10.9 }
    procedure handleUnbindingOfSymbol_usingBlock (symbol: NSString; block: nullable SCNBindingBlock); message 'handleUnbindingOfSymbol:usingBlock:'; { available in macosx(10.9 }
    procedure set)(newValue: NSDictionary *shaderModifiers); message 'set):';
    function ): NSDictionary *shaderModifiers; message ')';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  __WATCHOS_PROHIBITED: NSString *SCNProgramMappingChannelKey; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  SCNProgram = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    class function program_: instancetype; message 'program';
    procedure setVertexShader(newValue: NSString); message 'setVertexShader:';
    function vertexShader: NSString; message 'vertexShader';
    procedure setFragmentShader(newValue: NSString); message 'setFragmentShader:';
    function fragmentShader: NSString; message 'fragmentShader';
    procedure setVertexFunctionName(newValue: NSString); message 'setVertexFunctionName:';
    function vertexFunctionName: NSString; message 'vertexFunctionName';
    procedure setIos(9.0))(newValue: NSString); message 'setIos(9.0)):';
    function ios(9.0)): NSString; message 'ios(9.0))';
    procedure setFragmentFunctionName(newValue: NSString); message 'setFragmentFunctionName:';
    function fragmentFunctionName: NSString; message 'fragmentFunctionName';
    procedure setIos(9.0))_(newValue: NSString); message 'setIos(9.0)):';
    function ios(9.0))_: NSString; message 'ios(9.0))';
    procedure handleBindingOfBufferNamed_frequency_usingBlock (name: NSString; frequency: SCNBufferFrequency; block: SCNBufferBindingBlock); message 'handleBindingOfBufferNamed:frequency:usingBlock:'; { available in macosx(10.11 }
    procedure set)(newValue: BOOL opaque); message 'set):';
    function isOpaque: BOOL opaque; message 'isOpaque';
    procedure setSemantic_forSymbol_options (semantic: nullable NSStringPtr; symbol: NSString; options: nullable NSDictionaryPtr); message 'setSemantic:forSymbol:options:';
    function semanticForSymbol (symbol: NSString): nullable NSStringPtr; message 'semanticForSymbol:';
    procedure setDelegate(newValue: SCNProgramDelegateProtocol); message 'setDelegate:';
    function delegate: SCNProgramDelegateProtocol; message 'delegate';
    procedure setLibrary(newValue: MTLLibraryProtocol); message 'setLibrary:';
    function library: MTLLibraryProtocol; message 'library';
    procedure setIos(9.0))__(newValue: MTLLibraryProtocol); message 'setIos(9.0)):';
    function ios(9.0))__: MTLLibraryProtocol; message 'ios(9.0))';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  SCNProgramDelegateProtocol = objcprotocol external name 'SCNProgramDelegate' (NSObjectProtocol)
  optional
    procedure program_handleError (program_: SCNProgram; error: NSError); message 'program:handleError:';
    function programIsOpaque (program_: SCNProgram): boolean; message 'programIsOpaque:'; deprecated 'in "Use SCNProgram.opaque instead", macosx(10.8, 10.10';
  end;
{$endif}

