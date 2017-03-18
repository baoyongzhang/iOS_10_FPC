{ Parsed from NetworkExtension.framework NEFilterFlow.h }

{$ifdef TYPES}
type
  NEFilterFlowPtr = ^NEFilterFlow;
  NEFilterBrowserFlowPtr = ^NEFilterBrowserFlow;
  NEFilterSocketFlowPtr = ^NEFilterSocketFlow;
{$endif}

{$ifdef TYPES}
const
  NEFilterFlowBytesMax = UINT64_MAX;
{$endif}

{$ifdef CLASSES}

type
  NEFilterFlow = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function URL: NSURL; message 'URL';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;

type
  NEFilterBrowserFlow = objcclass external (NEFilterFlow, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function request: NSURLRequest; message 'request';
    function response: NSURLResponse; message 'response';
    function parentURL: NSURL; message 'parentURL';
  end;

type
  NEFilterSocketFlow = objcclass external (NEFilterFlow, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function remoteEndpoint: NWEndpoint; message 'remoteEndpoint';
    function localEndpoint: NWEndpoint; message 'localEndpoint';
    procedure setSocketFamily(newValue: cint); message 'setSocketFamily:';
    function socketFamily: cint; message 'socketFamily';
    procedure setSocketType(newValue: cint); message 'setSocketType:';
    function socketType: cint; message 'socketType';
    procedure setSocketProtocol(newValue: cint); message 'setSocketProtocol:';
    function socketProtocol: cint; message 'socketProtocol';
  end;
{$endif}

