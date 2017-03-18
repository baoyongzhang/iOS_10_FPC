{ Parsed from WatchKit.framework WKAlertAction.h }

{$ifdef TYPES}
type
  WKAlertActionPtr = ^WKAlertAction;
{$endif}

{$ifdef TYPES}
type
  WKAlertActionStyle = NSInteger;
  WKAlertActionStylePtr = ^WKAlertActionStyle;

const
  WKAlertActionStyleDefault = 0;
  WKAlertActionStyleCancel = 1;
  WKAlertActionStyleDestructive = 2;

type
  WKAlertActionHandler = OpaqueCBlock { available in 2.0 };
{$endif}

{$ifdef CLASSES}

type
  WKAlertAction = objcclass external (NSObject)
  public
    class function actionWithTitle_style_handler (title: NSString; style: WKAlertActionStyle; handler: WKAlertActionHandler): instancetype; message 'actionWithTitle:style:handler:';
    function init: instancetype; message 'init';
  end;
{$endif}

