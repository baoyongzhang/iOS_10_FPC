{ Parsed from NotificationCenter.framework NCWidgetController.h }

{$ifdef TYPES}
type
  NCWidgetControllerPtr = ^NCWidgetController;
{$endif}

{$ifdef CLASSES}

type
  NCWidgetController = objcclass external (NSObject)
  public
    class function widgetController: instancetype; message 'widgetController';
    procedure setHasContent_forWidgetWithBundleIdentifier (flag: boolean; bundleID: NSString); message 'setHasContent:forWidgetWithBundleIdentifier:';
  end;
{$endif}

