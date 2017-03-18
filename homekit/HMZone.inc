{ Parsed from HomeKit.framework HMZone.h }

{$ifdef TYPES}
type
  HMZonePtr = ^HMZone;
{$endif}

{$ifdef CLASSES}

type
  HMZone = objcclass external (NSObject)
  public
    function init: instancetype; message 'init';
    function name: NSString; message 'name';
    function rooms: HMRoom *ProtocolPtr; message 'rooms';
    function uniqueIdentifier: NSUUID; message 'uniqueIdentifier';
    procedure updateName_completionHandler (name_: NSString; completion: OpaqueCBlock); message 'updateName:completionHandler:';
    procedure addRoom_completionHandler (room: HMRoom; completion: OpaqueCBlock); message 'addRoom:completionHandler:';
    procedure removeRoom_completionHandler (room: HMRoom; completion: OpaqueCBlock); message 'removeRoom:completionHandler:';
  end;
{$endif}

