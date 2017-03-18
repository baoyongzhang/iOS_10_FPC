{ Parsed from Messages.framework MSMessageLayout.h }

{$ifdef TYPES}
type
  MSMessageLayoutPtr = ^MSMessageLayout;
{$endif}

{$ifdef CLASSES}

type
  MSMessageLayout = objcclass external (NSObject, NSCopyingProtocol)

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

