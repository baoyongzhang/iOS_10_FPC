{ Parsed from Speech.framework SFSpeechRecognitionResult.h }

{$ifdef TYPES}
type
  SFSpeechRecognitionResultPtr = ^SFSpeechRecognitionResult;
{$endif}

{$ifdef CLASSES}

type
  SFSpeechRecognitionResult = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function bestTranscription: SFTranscription; message 'bestTranscription';
    function transcriptions: SFTranscription *ProtocolPtr; message 'transcriptions';
    function isFinal: boolean; message 'isFinal';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

