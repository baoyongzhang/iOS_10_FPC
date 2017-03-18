{ Parsed from UserNotifications.framework UNNotificationSound.h }

{$ifdef TYPES}
type
  UNNotificationSoundPtr = ^UNNotificationSound;
{$endif}

{$ifdef CLASSES}

type
  UNNotificationSound = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    class function defaultSound: instancetype; message 'defaultSound';
    class function soundNamed (name: NSString): instancetype; message 'soundNamed:';
    function init: instancetype; message 'init';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

