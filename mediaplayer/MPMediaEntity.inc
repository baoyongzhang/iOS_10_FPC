{ Parsed from MediaPlayer.framework MPMediaEntity.h }

{$ifdef TYPES}
type
  MPMediaEntityPtr = ^MPMediaEntity;
{$endif}

{$ifdef TYPES}
type
  MPMediaEntityPersistentID = cuint64 { available in 4.2, 10.12.2, 4.2 };
  MPMediaEntityPersistentIDPtr = ^MPMediaEntityPersistentID { available in 4.2, 10.12.2, 4.2 };
{$endif}

{$ifdef CLASSES}

type
  MPMediaEntity = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    class function canFilterByProperty (property_: NSString): boolean; message 'canFilterByProperty:';
    procedure enumerateValuesForProperties_usingBlock (properties: NSString *ProtocolPtr; block: OpaqueCBlock); message 'enumerateValuesForProperties:usingBlock:'; { available in 4_0 }
    function objectForKeyedSubscript (key: id): nullable id; message 'objectForKeyedSubscript:'; { available in 8_0 }
    function valueForProperty (property_: NSString): nullable id; message 'valueForProperty:';
    function persistentID: MPMediaEntityPersistentID; message 'persistentID';

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

