{ Parsed from WatchKit.framework WKInterfacePicker.h }

{$ifdef TYPES}
type
  WKInterfacePickerPtr = ^WKInterfacePicker;
  WKPickerItemPtr = ^WKPickerItem;
{$endif}

{$ifdef CLASSES}

type
  WKInterfacePicker = objcclass external (WKInterfaceObject)
  public
    procedure focus; message 'focus';
    procedure resignFocus; message 'resignFocus';
    procedure setSelectedItemIndex (itemIndex: NSInteger); message 'setSelectedItemIndex:';
    procedure setItems (items: nullable WKPickerItem *ProtocolPtr); message 'setItems:';
    procedure setCoordinatedAnimations (coordinatedAnimations: nullable WKInterfaceObject<WKImageAnimatableProtocol *>Ptr); message 'setCoordinatedAnimations:';
    procedure setEnabled (enabled: boolean); message 'setEnabled:';
  end;

type
  WKPickerItem = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    procedure setTitle(newValue: NSString); message 'setTitle:';
    function title: NSString; message 'title';
    procedure setCaption(newValue: NSString); message 'setCaption:';
    function caption: NSString; message 'caption';
    procedure setAccessoryImage(newValue: WKImage); message 'setAccessoryImage:';
    function accessoryImage: WKImage; message 'accessoryImage';
    procedure setContentImage(newValue: WKImage); message 'setContentImage:';
    function contentImage: WKImage; message 'contentImage';

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

