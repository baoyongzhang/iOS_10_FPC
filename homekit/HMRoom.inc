{ Parsed from HomeKit.framework HMRoom.h }

{$ifdef TYPES}
type
  HMRoomPtr = ^HMRoom;
{$endif}

{$ifdef CLASSES}

type
  HMRoom = objcclass external (NSObject)
  public
    function init: instancetype; message 'init';
    function name: NSString; message 'name';
    function accessories: HMAccessory *ProtocolPtr; message 'accessories';
    function uniqueIdentifier: NSUUID; message 'uniqueIdentifier';
    procedure updateName_completionHandler (name_: NSString; completion: OpaqueCBlock); message 'updateName:completionHandler:';
  end;
{$endif}

