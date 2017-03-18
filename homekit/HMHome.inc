{ Parsed from HomeKit.framework HMHome.h }

{$ifdef TYPES}
type
  HMHomePtr = ^HMHome;
  HMHomeDelegateProtocolPtr = ^HMHomeDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  HMHome = objcclass external (NSObject)
  public
    function init: instancetype; message 'init';
    procedure setDelegate(newValue: HMHomeDelegateProtocol); message 'setDelegate:';
    function delegate: HMHomeDelegateProtocol; message 'delegate';
    function name: NSString; message 'name';
    function isPrimary: boolean; message 'isPrimary';
    function uniqueIdentifier: NSUUID; message 'uniqueIdentifier';
    procedure updateName_completionHandler (name_: NSString; completion: OpaqueCBlock); message 'updateName:completionHandler:';
  end;


type
  HMHome_HMAccessory = objccategory external name 'HMAccessory' (HMHome)
    function accessories: HMAccessory *ProtocolPtr; message 'accessories';
    procedure addAccessory_completionHandler (accessory: HMAccessory; completion: OpaqueCBlock); message 'addAccessory:completionHandler:';
    procedure removeAccessory_completionHandler (accessory: HMAccessory; completion: OpaqueCBlock); message 'removeAccessory:completionHandler:';
    procedure assignAccessory_toRoom_completionHandler (accessory: HMAccessory; room: HMRoom; completion: OpaqueCBlock); message 'assignAccessory:toRoom:completionHandler:';
    function servicesWithTypes (serviceTypes: NSString *ProtocolPtr): nullable HMService *ProtocolPtr; message 'servicesWithTypes:';
    procedure unblockAccessory_completionHandler (accessory: HMAccessory; completion: OpaqueCBlock); message 'unblockAccessory:completionHandler:';
    procedure addAndSetupAccessoriesWithCompletionHandler (completion: OpaqueCBlock); message 'addAndSetupAccessoriesWithCompletionHandler:'; { available in 10_0 }
  end;

type
  HMHome_HMUser = objccategory external name 'HMUser' (HMHome)
    function currentUser: HMUser; message 'currentUser';
    function __TVOS_PROHIBITED_: HMUser *Protocol *users __WATCHOS_PROHIBITED; message 'TVOS_PROHIBITED';
    procedure manageUsersWithCompletionHandler (completion: OpaqueCBlock); message 'manageUsersWithCompletionHandler:'; { available in 9_0 }
    procedure addUserWithCompletionHandler (completion: OpaqueCBlock); message 'addUserWithCompletionHandler:'; deprecated 'in 8_0, 9_0';
    procedure removeUser_completionHandler (user: HMUser; completion: OpaqueCBlock); message 'removeUser:completionHandler:'; deprecated 'in 8_0, 9_0';
    function homeAccessControlForUser (user: HMUser): HMHomeAccessControl; message 'homeAccessControlForUser:'; { available in 9_0 }
  end;

type
  HMHome_HMRoom = objccategory external name 'HMRoom' (HMHome)
    function rooms: HMRoom *ProtocolPtr; message 'rooms';
    procedure addRoomWithName_completionHandler (roomName: NSString; completion: OpaqueCBlock); message 'addRoomWithName:completionHandler:';
    procedure removeRoom_completionHandler (room: HMRoom; completion: OpaqueCBlock); message 'removeRoom:completionHandler:';
    function roomForEntireHome: HMRoom; message 'roomForEntireHome';
  end;

type
  HMHome_HMZone = objccategory external name 'HMZone' (HMHome)
    function zones: HMZone *ProtocolPtr; message 'zones';
    procedure addZoneWithName_completionHandler (zoneName: NSString; completion: OpaqueCBlock); message 'addZoneWithName:completionHandler:';
    procedure removeZone_completionHandler (zone: HMZone; completion: OpaqueCBlock); message 'removeZone:completionHandler:';
  end;

type
  HMHome_HMServiceGroup = objccategory external name 'HMServiceGroup' (HMHome)
    function serviceGroups: HMServiceGroup *ProtocolPtr; message 'serviceGroups';
    procedure addServiceGroupWithName_completionHandler (serviceGroupName: NSString; completion: OpaqueCBlock); message 'addServiceGroupWithName:completionHandler:';
    procedure removeServiceGroup_completionHandler (group: HMServiceGroup; completion: OpaqueCBlock); message 'removeServiceGroup:completionHandler:';
  end;

type
  HMHome_HMActionSet = objccategory external name 'HMActionSet' (HMHome)
    function actionSets: HMActionSet *ProtocolPtr; message 'actionSets';
    procedure addActionSetWithName_completionHandler (actionSetName: NSString; completion: OpaqueCBlock); message 'addActionSetWithName:completionHandler:';
    procedure removeActionSet_completionHandler (actionSet: HMActionSet; completion: OpaqueCBlock); message 'removeActionSet:completionHandler:';
    procedure executeActionSet_completionHandler (actionSet: HMActionSet; completion: OpaqueCBlock); message 'executeActionSet:completionHandler:';
    function builtinActionSetOfType (actionSetType: NSString): nullable HMActionSetPtr; message 'builtinActionSetOfType:'; { available in 9_0 }
  end;

type
  HMHome_HMTrigger = objccategory external name 'HMTrigger' (HMHome)
    function triggers: HMTrigger *ProtocolPtr; message 'triggers';
    procedure addTrigger_completionHandler (trigger: HMTrigger; completion: OpaqueCBlock); message 'addTrigger:completionHandler:';
    procedure removeTrigger_completionHandler (trigger: HMTrigger; completion: OpaqueCBlock); message 'removeTrigger:completionHandler:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  HMHomeDelegateProtocol = objcprotocol external name 'HMHomeDelegate' (NSObjectProtocol)
  optional
    procedure homeDidUpdateName (home: HMHome); message 'homeDidUpdateName:';
    procedure home_didAddAccessory (home: HMHome; accessory: HMAccessory); message 'home:didAddAccessory:';
    procedure home_didRemoveAccessory (home: HMHome; accessory: HMAccessory); message 'home:didRemoveAccessory:';
    procedure home_didAddUser (home: HMHome; user: HMUser); message 'home:didAddUser:';
    procedure home_didRemoveUser (home: HMHome; user: HMUser); message 'home:didRemoveUser:';
    procedure home_didUpdateRoom_forAccessory (home: HMHome; room: HMRoom; accessory: HMAccessory); message 'home:didUpdateRoom:forAccessory:';
    procedure home_didAddRoom (home: HMHome; room: HMRoom); message 'home:didAddRoom:';
    procedure home_didRemoveRoom (home: HMHome; room: HMRoom); message 'home:didRemoveRoom:';
    procedure home_didUpdateNameForRoom (home: HMHome; room: HMRoom); message 'home:didUpdateNameForRoom:';
    procedure home_didAddZone (home: HMHome; zone: HMZone); message 'home:didAddZone:';
    procedure home_didRemoveZone (home: HMHome; zone: HMZone); message 'home:didRemoveZone:';
    procedure home_didUpdateNameForZone (home: HMHome; zone: HMZone); message 'home:didUpdateNameForZone:';
    procedure home_didAddRoom_toZone (home: HMHome; room: HMRoom; zone: HMZone); message 'home:didAddRoom:toZone:';
    procedure home_didRemoveRoom_fromZone (home: HMHome; room: HMRoom; zone: HMZone); message 'home:didRemoveRoom:fromZone:';
    procedure home_didAddServiceGroup (home: HMHome; group: HMServiceGroup); message 'home:didAddServiceGroup:';
    procedure home_didRemoveServiceGroup (home: HMHome; group: HMServiceGroup); message 'home:didRemoveServiceGroup:';
    procedure home_didUpdateNameForServiceGroup (home: HMHome; group: HMServiceGroup); message 'home:didUpdateNameForServiceGroup:';
    procedure home_didAddService_toServiceGroup (home: HMHome; service: HMService; group: HMServiceGroup); message 'home:didAddService:toServiceGroup:';
    procedure home_didRemoveService_fromServiceGroup (home: HMHome; service: HMService; group: HMServiceGroup); message 'home:didRemoveService:fromServiceGroup:';
    procedure home_didAddActionSet (home: HMHome; actionSet: HMActionSet); message 'home:didAddActionSet:';
    procedure home_didRemoveActionSet (home: HMHome; actionSet: HMActionSet); message 'home:didRemoveActionSet:';
    procedure home_didUpdateNameForActionSet (home: HMHome; actionSet: HMActionSet); message 'home:didUpdateNameForActionSet:';
    procedure home_didUpdateActionsForActionSet (home: HMHome; actionSet: HMActionSet); message 'home:didUpdateActionsForActionSet:';
    procedure home_didAddTrigger (home: HMHome; trigger: HMTrigger); message 'home:didAddTrigger:';
    procedure home_didRemoveTrigger (home: HMHome; trigger: HMTrigger); message 'home:didRemoveTrigger:';
    procedure home_didUpdateNameForTrigger (home: HMHome; trigger: HMTrigger); message 'home:didUpdateNameForTrigger:';
    procedure home_didUpdateTrigger (home: HMHome; trigger: HMTrigger); message 'home:didUpdateTrigger:';
    procedure home_didUnblockAccessory (home: HMHome; accessory: HMAccessory); message 'home:didUnblockAccessory:';
    procedure home_didEncounterError_forAccessory (home: HMHome; error: NSError; accessory: HMAccessory); message 'home:didEncounterError:forAccessory:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  HMUserFailedAccessoriesKey: NSString { available in 8_0 }; cvar; external;
{$endif}

