{ Parsed from Twitter.framework TWTweetComposeViewController.h }

{$ifdef TYPES}
type
  TWTweetComposeViewControllerPtr = ^TWTweetComposeViewController;
{$endif}

{$ifdef TYPES}
const
  TWTweetComposeViewControllerResultCancelled = SLComposeViewControllerResultCancelled;
  TWTweetComposeViewControllerResultDone = SLComposeViewControllerResultDone;

type
  TWTweetComposeViewControllerResult = SLComposeViewControllerResult;
  TWTweetComposeViewControllerResultPtr = ^TWTweetComposeViewControllerResult;
  TWTweetComposeViewControllerCompletionHandler = SLComposeViewControllerCompletionHandler deprecated 'in NA, NA, 5_0, 6_0';
  TWTweetComposeViewControllerCompletionHandlerPtr = ^TWTweetComposeViewControllerCompletionHandler deprecated 'in NA, NA, 5_0, 6_0';
{$endif}

{$ifdef CLASSES}

type
  TWTweetComposeViewController = objcclass external (UIViewController)
  public
    class function canSendTweet: boolean; message 'canSendTweet';
    function setInitialText (text: NSString): boolean; message 'setInitialText:';
    function addImage (image: UIImage): boolean; message 'addImage:';
    function removeAllImages: boolean; message 'removeAllImages';
    function addURL (url: NSURL): boolean; message 'addURL:';
    function removeAllURLs: boolean; message 'removeAllURLs';
    procedure setCompletionHandler(newValue: TWTweetComposeViewControllerCompletionHandler); message 'setCompletionHandler:';
    function completionHandler: TWTweetComposeViewControllerCompletionHandler; message 'completionHandler';
  end;
{$endif}

