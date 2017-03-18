{ Parsed from NetworkExtension.framework NEFlowMetaData.h }

{$ifdef TYPES}
type
  NEFlowMetaDataPtr = ^NEFlowMetaData;
{$endif}

{$ifdef CLASSES}

type
  NEFlowMetaData = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function sourceAppUniqueIdentifier: NSData; message 'sourceAppUniqueIdentifier';
    function sourceAppSigningIdentifier: NSString; message 'sourceAppSigningIdentifier';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

