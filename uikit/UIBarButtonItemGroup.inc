{ Parsed from UIKit.framework UIBarButtonItemGroup.h }

{$ifdef TYPES}
type
  UIBarButtonItemGroupPtr = ^UIBarButtonItemGroup;
{$endif}

{$ifdef CLASSES}

type
  UIBarButtonItemGroup = objcclass external (NSObject, NSCodingProtocol)
  public
    function initWithBarButtonItems_representativeItem (barButtonItems: UIBarButtonItem *ProtocolPtr; representativeItem: nullable UIBarButtonItemPtr): instancetype; message 'initWithBarButtonItems:representativeItem:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    procedure setBarButtonItems(newValue: UIBarButtonItem *ProtocolPtr); message 'setBarButtonItems:';
    function barButtonItems: UIBarButtonItem *ProtocolPtr; message 'barButtonItems';
    procedure setRepresentativeItem(newValue: UIBarButtonItem); message 'setRepresentativeItem:';
    function representativeItem: UIBarButtonItem; message 'representativeItem';
    function isDisplayingRepresentativeItem: boolean; message 'isDisplayingRepresentativeItem';

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
  end;


type
  UIBarButtonItem_UIBarButtonItemGroup = objccategory external name 'UIBarButtonItemGroup' (UIBarButtonItem)
    function buttonGroup: UIBarButtonItemGroup; message 'buttonGroup';
  end;
{$endif}

