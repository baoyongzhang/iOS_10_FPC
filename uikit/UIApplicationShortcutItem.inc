{ Parsed from UIKit.framework UIApplicationShortcutItem.h }

{$ifdef TYPES}
type
  UIApplicationShortcutIconPtr = ^UIApplicationShortcutIcon;
  UIApplicationShortcutItemPtr = ^UIApplicationShortcutItem;
  UIMutableApplicationShortcutItemPtr = ^UIMutableApplicationShortcutItem;
{$endif}

{$ifdef TYPES}
type
  UIApplicationShortcutIconType = NSInteger;
  UIApplicationShortcutIconTypePtr = ^UIApplicationShortcutIconType;

const
  UIApplicationShortcutIconTypeCompose = 0;
  UIApplicationShortcutIconTypePlay = 1;
  UIApplicationShortcutIconTypePause = 2;
  UIApplicationShortcutIconTypeAdd = 3;
  UIApplicationShortcutIconTypeLocation = 4;
  UIApplicationShortcutIconTypeSearch = 5;
  UIApplicationShortcutIconTypeShare = 6;
  UIApplicationShortcutIconTypeProhibit = 7 { available in 9_1 };
  UIApplicationShortcutIconTypeContact = 8 { available in 9_1 };
  UIApplicationShortcutIconTypeHome = 9 { available in 9_1 };
  UIApplicationShortcutIconTypeMarkLocation = 10 { available in 9_1 };
  UIApplicationShortcutIconTypeFavorite = 11 { available in 9_1 };
  UIApplicationShortcutIconTypeLove = 12 { available in 9_1 };
  UIApplicationShortcutIconTypeCloud = 13 { available in 9_1 };
  UIApplicationShortcutIconTypeInvitation = 14 { available in 9_1 };
  UIApplicationShortcutIconTypeConfirmation = 15 { available in 9_1 };
  UIApplicationShortcutIconTypeMail = 16 { available in 9_1 };
  UIApplicationShortcutIconTypeMessage = 17 { available in 9_1 };
  UIApplicationShortcutIconTypeDate = 18 { available in 9_1 };
  UIApplicationShortcutIconTypeTime = 19 { available in 9_1 };
  UIApplicationShortcutIconTypeCapturePhoto = 20 { available in 9_1 };
  UIApplicationShortcutIconTypeCaptureVideo = 21 { available in 9_1 };
  UIApplicationShortcutIconTypeTask = 22 { available in 9_1 };
  UIApplicationShortcutIconTypeTaskCompleted = 23 { available in 9_1 };
  UIApplicationShortcutIconTypeAlarm = 24 { available in 9_1 };
  UIApplicationShortcutIconTypeBookmark = 25 { available in 9_1 };
  UIApplicationShortcutIconTypeShuffle = 26 { available in 9_1 };
  UIApplicationShortcutIconTypeAudio = 27 { available in 9_1 };
  UIApplicationShortcutIconTypeUpdate = 28 { available in 9_1 };
{$endif}

{$ifdef CLASSES}

type
  UIApplicationShortcutIcon = objcclass external (NSObject, NSCopyingProtocol)
  public
    class function iconWithType (type_: UIApplicationShortcutIconType): instancetype; message 'iconWithType:';
    class function iconWithTemplateImageName (templateImageName: NSString): instancetype; message 'iconWithTemplateImageName:';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
  end;

type
  UIApplicationShortcutItem = objcclass external (NSObject, NSCopyingProtocol, NSMutableCopyingProtocol)
  public
    function init: instancetype; message 'init';
    function initWithType_localizedTitle_localizedSubtitle_icon_userInfo (type_: NSString; localizedTitle: NSString; localizedSubtitle: nullable NSStringPtr; icon: nullable UIApplicationShortcutIconPtr; userInfo: nullable NSDictionaryPtr): instancetype; message 'initWithType:localizedTitle:localizedSubtitle:icon:userInfo:'; { NS_DESIGNATED_INITIALIZER }
    function initWithType_localizedTitle (type_: NSString; localizedTitle: NSString): instancetype; message 'initWithType:localizedTitle:';
    function type_: NSString; message 'type';
    function localizedTitle: NSString; message 'localizedTitle';
    function localizedSubtitle: NSString; message 'localizedSubtitle';
    function icon: UIApplicationShortcutIcon; message 'icon';
    function userInfo: NSDictionary>Ptr; message 'userInfo';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
    function mutableCopyWithZone (zone: nullable NSZonePtr): id; message 'mutableCopyWithZone:';
  end;

type
  UIMutableApplicationShortcutItem = objcclass external (UIApplicationShortcutItem)
  public
    procedure setType(newValue: NSString); message 'setType:';
    function type_: NSString; message 'type';
    procedure setLocalizedTitle(newValue: NSString); message 'setLocalizedTitle:';
    function localizedTitle: NSString; message 'localizedTitle';
    procedure setLocalizedSubtitle(newValue: NSString); message 'setLocalizedSubtitle:';
    function localizedSubtitle: NSString; message 'localizedSubtitle';
    procedure setIcon(newValue: UIApplicationShortcutIcon); message 'setIcon:';
    function icon: UIApplicationShortcutIcon; message 'icon';
    procedure setUserInfo(newValue: NSDictionary>Ptr); message 'setUserInfo:';
    function userInfo: NSDictionary>Ptr; message 'userInfo';
  end;
{$endif}

