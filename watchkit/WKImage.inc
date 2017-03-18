{ Parsed from WatchKit.framework WKImage.h }

{$ifdef TYPES}
type
  WKImagePtr = ^WKImage;
{$endif}

{$ifdef CLASSES}

type
  WKImage = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    class function imageWithImage (image: UIImage): instancetype; message 'imageWithImage:';
    class function imageWithImageData (imageData: NSData): instancetype; message 'imageWithImageData:';
    class function imageWithImageName (imageName: NSString): instancetype; message 'imageWithImageName:';
    function init: instancetype; message 'init';
    function image: UIImage; message 'image';
    function imageData: NSData; message 'imageData';
    function imageName: NSString; message 'imageName';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

