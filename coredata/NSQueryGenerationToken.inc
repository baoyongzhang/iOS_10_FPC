{ Parsed from CoreData.framework NSQueryGenerationToken.h }

{$ifdef TYPES}
type
  NSQueryGenerationTokenPtr = ^NSQueryGenerationToken;
{$endif}

{$ifdef CLASSES}

type
  NSQueryGenerationToken = objcclass external (NSObject, NSCopyingProtocol)
  public
    function currentQueryGenerationToken: NSQueryGenerationToken; message 'currentQueryGenerationToken';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

