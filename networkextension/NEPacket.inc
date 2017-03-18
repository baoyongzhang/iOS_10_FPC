{ Parsed from NetworkExtension.framework NEPacket.h }

{$ifdef TYPES}
type
  NEPacketPtr = ^NEPacket;
{$endif}

{$ifdef CLASSES}

type
  NEPacket = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function initWithData_protocolFamily (data: NSData; protocolFamily: sa_family_t): instancetype; message 'initWithData:protocolFamily:'; { available in macosx(10.12 }
    function data: NSData ios(10.0), watchos(3.0),Ptr; message 'data';
    function tvos(10.0)): NSData ios(10.0), watchos(3.0),Ptr; message 'tvos(10.0))';
    function protocolFamily: sa_family_t ios(10.0), watchos(3.0),; message 'protocolFamily';
    function tvos(10.0))_: sa_family_t ios(10.0), watchos(3.0),; message 'tvos(10.0))';
    function metadata: NEFlowMetaData ios(10.0), watchos(3.0),Ptr; message 'metadata';
    function tvos(10.0))__: NEFlowMetaData ios(10.0), watchos(3.0),Ptr; message 'tvos(10.0))';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

