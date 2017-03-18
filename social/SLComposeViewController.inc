{ Parsed from Social.framework SLComposeViewController.h }

{$ifdef TYPES}
type
  SLComposeViewControllerPtr = ^SLComposeViewController;
{$endif}

{$ifdef TYPES}
type
  SLComposeViewControllerResult = NSInteger;
  SLComposeViewControllerResultPtr = ^SLComposeViewControllerResult;

const
  SLComposeViewControllerResultCancelled = 0;
  SLComposeViewControllerResultDone = 1;

type
  SLComposeViewControllerCompletionHandler = OpaqueCBlock;
{$endif}

{$ifdef CLASSES}

type
  SLComposeViewController = objcclass external (UIViewController)
  public
    class function isAvailableForServiceType (serviceType: NSString): boolean; message 'isAvailableForServiceType:';
    class function composeViewControllerForServiceType (serviceType: NSString): SLComposeViewController; message 'composeViewControllerForServiceType:';
    function serviceType: NSString; message 'serviceType';
    function setInitialText (text: NSString): boolean; message 'setInitialText:';
    function addImage (image: UIImage): boolean; message 'addImage:';
    function removeAllImages: boolean; message 'removeAllImages';
    function addURL (url: NSURL): boolean; message 'addURL:';
    function removeAllURLs: boolean; message 'removeAllURLs';
    procedure setCompletionHandler(newValue: SLComposeViewControllerCompletionHandler); message 'setCompletionHandler:';
    function completionHandler: SLComposeViewControllerCompletionHandler; message 'completionHandler';
  end;
{$endif}

