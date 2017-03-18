{ Parsed from Intents.framework INImage.h }

{$ifdef TYPES}
type
  INImagePtr = ^INImage;
{$endif}

{$ifdef CLASSES}

type
  INImage = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    class function imageNamed (name: NSString): instancetype; message 'imageNamed:';
    class function imageWithImageData (imageData: NSData): instancetype; message 'imageWithImageData:';
    class function imageWithURL (URL: NSURL): instancetype; message 'imageWithURL:';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

