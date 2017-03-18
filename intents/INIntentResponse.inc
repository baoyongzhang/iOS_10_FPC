{ Parsed from Intents.framework INIntentResponse.h }

{$ifdef TYPES}
type
  INIntentResponsePtr = ^INIntentResponse;
{$endif}

{$ifdef CLASSES}

type
  INIntentResponse = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function userActivity: NSUserActivity; message 'userActivity';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

