{ Parsed from Speech.framework SFTranscription.h }

{$ifdef TYPES}
type
  SFTranscriptionPtr = ^SFTranscription;
{$endif}

{$ifdef CLASSES}

type
  SFTranscription = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function formattedString: NSString; message 'formattedString';
    function segments: SFTranscriptionSegment *ProtocolPtr; message 'segments';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

