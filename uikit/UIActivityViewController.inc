{ Parsed from UIKit.framework UIActivityViewController.h }

{$ifdef TYPES}
type
  UIActivityViewControllerPtr = ^UIActivityViewController;
{$endif}

{$ifdef TYPES}
type
  UIActivityViewControllerCompletionHandler = OpaqueCBlock;
  UIActivityViewControllerCompletionWithItemsHandler = OpaqueCBlock { available in 6_0 };
{$endif}

{$ifdef CLASSES}

type
  UIActivityViewController = objcclass external (UIViewController)
  public
    function init: instancetype; message 'init';
    function initWithNibName_bundle (nibNameOrNil: nullable NSStringPtr; nibBundleOrNil: nullable NSBundlePtr): instancetype; message 'initWithNibName:bundle:';
    function initWithCoder (aDecoder: NSCoder): nullable instancetype; message 'initWithCoder:';
    function initWithActivityItems_applicationActivities (activityItems: NSArray; applicationActivities: nullable __kindof UIActivity *ProtocolPtr): instancetype; message 'initWithActivityItems:applicationActivities:'; { NS_DESIGNATED_INITIALIZER }
    procedure setCompletionHandler(newValue: UIActivityViewControllerCompletionHandler); message 'setCompletionHandler:';
    function completionHandler: UIActivityViewControllerCompletionHandler; message 'completionHandler';
    procedure setCompletionWithItemsHandler(newValue: UIActivityViewControllerCompletionWithItemsHandler); message 'setCompletionWithItemsHandler:';
    function completionWithItemsHandler: UIActivityViewControllerCompletionWithItemsHandler; message 'completionWithItemsHandler';
    procedure setExcludedActivityTypes(newValue: UIActivityTypeProtocolPtr); message 'setExcludedActivityTypes:';
    function excludedActivityTypes: UIActivityTypeProtocolPtr; message 'excludedActivityTypes';
  end;
{$endif}

