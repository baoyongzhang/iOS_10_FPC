{ Parsed from UIKit.framework UIBarItem.h }

{$ifdef TYPES}
type
  UIBarItemPtr = ^UIBarItem;
{$endif}

{$ifdef CLASSES}

type
  UIBarItem = objcclass external (NSObject, NSCodingProtocol, UIAppearanceProtocol)
  public
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    procedure setEnabled(newValue: boolean); message 'setEnabled:';
    function isEnabled: boolean; message 'isEnabled';
    procedure setTitle(newValue: NSString); message 'setTitle:';
    function title: NSString; message 'title';
    procedure setImage(newValue: UIImage); message 'setImage:';
    function image: UIImage; message 'image';
    procedure set__TVOS_PROHIBITED(newValue: UIImage *landscapeImagePhone); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED_: UIImage *landscapeImagePhone; message 'TVOS_PROHIBITED';
    procedure setImageInsets(newValue: UIEdgeInsets); message 'setImageInsets:';
    function imageInsets: UIEdgeInsets; message 'imageInsets';
    procedure set__TVOS_PROHIBITED_(newValue: UIEdgeInsets landscapeImagePhoneInsets); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED_: UIEdgeInsets landscapeImagePhoneInsets; message 'TVOS_PROHIBITED';
    procedure setTag(newValue: NSInteger); message 'setTag:';
    function tag: NSInteger; message 'tag';
    procedure setTitleTextAttributes_forState (attributes: nullable NSDictionaryPtr; state: UIControlState); message 'setTitleTextAttributes:forState:'; { available in 5_0 }
    function titleTextAttributesForState (state: UIControlState): nullable NSDictionaryPtr; message 'titleTextAttributesForState:'; { available in 5_0 }

    { Adopted protocols }
    class function appearance: instancetype; message 'appearance';
    class function appearanceForTraitCollection (trait: UITraitCollection): instancetype; message 'appearanceForTraitCollection:'; { available in 8_0 }
    class function appearanceForTraitCollection_whenContainedIn (trait: UITraitCollection; ContainerClass: nullable UIAppearanceContainerProtocol): instancetype; message 'appearanceForTraitCollection:whenContainedIn:'; deprecated 'in 8_0, 9_0, "Use +appearanceForTraitCollection:whenContainedInInstancesOfClasses: instead"';
    class function appearanceForTraitCollection_whenContainedInInstancesOfClasses (trait: UITraitCollection; containerTypes: Class <UIAppearanceContainerProtocol>Ptr): instancetype; message 'appearanceForTraitCollection:whenContainedInInstancesOfClasses:'; { available in 9_0 }
    class function appearanceWhenContainedIn (ContainerClass: nullable UIAppearanceContainerProtocol): instancetype; message 'appearanceWhenContainedIn:'; deprecated 'in 5_0, 9_0, "Use +appearanceWhenContainedInInstancesOfClasses: instead"';
    class function appearanceWhenContainedInInstancesOfClasses (containerTypes: Class <UIAppearanceContainerProtocol>Ptr): instancetype; message 'appearanceWhenContainedInInstancesOfClasses:'; { available in 9_0 }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
  end;
{$endif}

