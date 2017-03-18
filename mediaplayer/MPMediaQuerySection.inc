{ Parsed from MediaPlayer.framework MPMediaQuerySection.h }

{$ifdef TYPES}
type
  MPMediaQuerySectionPtr = ^MPMediaQuerySection;
{$endif}

{$ifdef CLASSES}

type
  MPMediaQuerySection = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function title: NSString; message 'title';
    function range: NSRange; message 'range';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

