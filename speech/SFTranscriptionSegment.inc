{ Parsed from Speech.framework SFTranscriptionSegment.h }

{$ifdef TYPES}
type
  SFTranscriptionSegmentPtr = ^SFTranscriptionSegment;
{$endif}

{$ifdef CLASSES}

type
  SFTranscriptionSegment = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function substring: NSString; message 'substring';
    function substringRange: NSRange; message 'substringRange';
    function timestamp_: NSTimeInterval; message 'timestamp';
    function duration: NSTimeInterval; message 'duration';
    function confidence: single; message 'confidence';
    function alternativeSubstrings: NSString *ProtocolPtr; message 'alternativeSubstrings';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

