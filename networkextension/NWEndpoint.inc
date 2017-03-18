{ Parsed from NetworkExtension.framework NWEndpoint.h }

{$ifdef TYPES}
type
  NWEndpointPtr = ^NWEndpoint;
{$endif}

{$ifndef __NWEndpoint_h_}
{$ifdef CLASSES}

type
  NWEndpoint = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

{$endif}
