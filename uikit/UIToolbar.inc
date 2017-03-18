{ Parsed from UIKit.framework UIToolbar.h }

{$ifdef TYPES}
type
  UIToolbarPtr = ^UIToolbar;
  UIToolbarDelegateProtocolPtr = ^UIToolbarDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  UIToolbar = objcclass external (UIView, UIBarPositioningProtocol)
  public
    procedure set__TVOS_PROHIBITED(newValue: UIBarStyle barStyle); message 'set__TVOS_PROHIBITED:';
    function __TVOS_PROHIBITED_: UIBarStyle barStyle; message 'TVOS_PROHIBITED';
    procedure setItems(newValue: UIBarButtonItem *ProtocolPtr); message 'setItems:';
    function items: UIBarButtonItem *ProtocolPtr; message 'items';
    procedure setTranslucent(newValue: boolean); message 'setTranslucent:';
    function isTranslucent: boolean; message 'isTranslucent';
    procedure setItems_animated (items_: nullable UIBarButtonItem *ProtocolPtr; animated: boolean); message 'setItems:animated:';
    procedure setTintColor(newValue: UIColor); message 'setTintColor:';
    function tintColor: UIColor; message 'tintColor';
    procedure setBarTintColor(newValue: UIColor); message 'setBarTintColor:';
    function barTintColor: UIColor; message 'barTintColor';
    procedure setBackgroundImage_forToolbarPosition_barMetrics (backgroundImage: nullable UIImagePtr; topOrBottom: UIBarPosition; barMetrics: UIBarMetrics); message 'setBackgroundImage:forToolbarPosition:barMetrics:'; { available in 5_0 }
    function backgroundImageForToolbarPosition_barMetrics (topOrBottom: UIBarPosition; barMetrics: UIBarMetrics): nullable UIImagePtr; message 'backgroundImageForToolbarPosition:barMetrics:'; { available in 5_0 }
    procedure setShadowImage_forToolbarPosition (shadowImage: nullable UIImagePtr; topOrBottom: UIBarPosition); message 'setShadowImage:forToolbarPosition:'; { available in 6_0 }
    function shadowImageForToolbarPosition (topOrBottom: UIBarPosition): nullable UIImagePtr; message 'shadowImageForToolbarPosition:'; { available in 6_0 }
    procedure setDelegate(newValue: UIToolbarDelegateProtocol); message 'setDelegate:';
    function delegate: UIToolbarDelegateProtocol; message 'delegate';

    { Adopted protocols }
    function barPosition: UIBarPosition; message 'barPosition';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  UIToolbarDelegateProtocol = objcprotocol external name 'UIToolbarDelegate' (UIBarPositioningDelegateProtocol)
  end;
{$endif}

