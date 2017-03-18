{ Parsed from UIKit.framework UIAlertController.h }

{$ifdef TYPES}
type
  UIAlertActionPtr = ^UIAlertAction;
  UIAlertControllerPtr = ^UIAlertController;
{$endif}

{$ifdef TYPES}
type
  UIAlertActionStyle = NSInteger;
  UIAlertActionStylePtr = ^UIAlertActionStyle;

const
  UIAlertActionStyleDefault = 0;
  UIAlertActionStyleCancel = 1;
  UIAlertActionStyleDestructive = 2;

type
  UIAlertControllerStyle = NSInteger;
  UIAlertControllerStylePtr = ^UIAlertControllerStyle;

const
  UIAlertControllerStyleActionSheet = 0;
  UIAlertControllerStyleAlert = 1;
{$endif}

{$ifdef CLASSES}

type
  UIAlertAction = objcclass external (NSObject, NSCopyingProtocol)
  public
    class function actionWithTitle_style_handler (title: nullable NSStringPtr; style: UIAlertActionStyle; handler: void (^ __nullable)(UIAlertAction *action)): instancetype; message 'actionWithTitle:style:handler:';
    function title: NSString; message 'title';
    function style: UIAlertActionStyle; message 'style';
    procedure setEnabled(newValue: boolean); message 'setEnabled:';
    function isEnabled: boolean; message 'isEnabled';

    { Adopted protocols }
    function copyWithZone (zone: nullable NSZonePtr): id; message 'copyWithZone:';
  end;

type
  UIAlertController = objcclass external (UIViewController)
  public
    class function alertControllerWithTitle_message_preferredStyle (title_: nullable NSStringPtr; message_: nullable NSStringPtr; preferredStyle: UIAlertControllerStyle): instancetype; message 'alertControllerWithTitle:message:preferredStyle:';
    procedure addAction (action: UIAlertAction); message 'addAction:';
    function actions: UIAlertAction *ProtocolPtr; message 'actions';
    procedure setPreferredAction(newValue: UIAlertAction); message 'setPreferredAction:';
    function preferredAction: UIAlertAction; message 'preferredAction';
    procedure addTextFieldWithConfigurationHandler (configurationHandler: void (^ __nullable)(UITextField *textField)); message 'addTextFieldWithConfigurationHandler:';
    function textFields: UITextField *ProtocolPtr; message 'textFields';
    procedure setTitle(newValue: NSString); message 'setTitle:';
    function title: NSString; message 'title';
    procedure setMessage(newValue: NSString); message 'setMessage:';
    function message_: NSString; message 'message';
    function preferredStyle: UIAlertControllerStyle; message 'preferredStyle';
  end;
{$endif}

