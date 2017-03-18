{ Parsed from CoreAudioKit.framework AUViewController.h }

{$ifdef TYPES}
type
  AUViewControllerPtr = ^AUViewController;
{$endif}

{$if defined(TARGET_OS_IPHONE)}
{$ifdef TYPES}
type
  AUViewControllerBase = UIViewController;
  AUViewControllerBasePtr = ^AUViewControllerBase;
{$endif}

{$else}
{$ifdef TYPES}
type
  AUViewControllerBase = NSViewController;
  AUViewControllerBasePtr = ^AUViewControllerBase;
{$endif}

{$endif}
{$ifdef CLASSES}

type
  AUViewController = objcclass external (AUViewControllerBase, NSExtensionRequestHandlingProtocol)

    { Adopted protocols }
    procedure beginRequestWithExtensionContext (context: NSExtensionContext); message 'beginRequestWithExtensionContext:';
  end;


type
  AUAudioUnit_ViewController = objccategory external (AUAudioUnit)
    procedure requestViewControllerWithCompletionHandler (completionHandler: OpaqueCBlock); message 'requestViewControllerWithCompletionHandler:';
  end;
{$endif}

