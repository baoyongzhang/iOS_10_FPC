{ Parsed from Social.framework SLComposeServiceViewController.h }

{ Types from SLComposeServiceViewController }
{$ifdef TYPES}





{$endif}


{$ifdef TYPES}
type
  SLComposeServiceViewControllerPtr = ^SLComposeServiceViewController;
{$endif}

{$ifdef CLASSES}

type
  SLComposeServiceViewController = objcclass external (UIViewController, UITextViewDelegateProtocol)
  public
    procedure presentationAnimationDidFinish; message 'presentationAnimationDidFinish';
    {$if defined(TARGET_OS_IPHONE)}
    function textView: UITextView; message 'textView';
    {$else}
    function textView_: NSTextViewPtr; message 'textView';
    {$endif}
    function contentText: NSString; message 'contentText';
    procedure setPlaceholder(newValue: NSString); message 'setPlaceholder:';
    function placeholder: NSString; message 'placeholder';
    procedure didSelectPost; message 'didSelectPost';
    procedure didSelectCancel; message 'didSelectCancel';
    procedure cancel; message 'cancel';
    function isContentValid: boolean; message 'isContentValid';
    procedure validateContent; message 'validateContent';
    procedure setCharactersRemaining(newValue: NSNumber); message 'setCharactersRemaining:';
    function charactersRemaining: NSNumber; message 'charactersRemaining';
    {$if defined(TARGET_OS_IPHONE)}
    function configurationItems: NSArray; message 'configurationItems';
    procedure reloadConfigurationItems; message 'reloadConfigurationItems';
    procedure pushConfigurationViewController (viewController: UIViewController); message 'pushConfigurationViewController:';
    procedure popConfigurationViewController; message 'popConfigurationViewController';
    {$endif}
    {$if defined(TARGET_OS_IPHONE)}
    function loadPreviewView: UIView; message 'loadPreviewView';
    {$endif}
    {$if defined(TARGET_OS_IPHONE)}
    procedure setAutoCompletionViewController(newValue: UIViewController); message 'setAutoCompletionViewController:';
    function autoCompletionViewController: UIViewController; message 'autoCompletionViewController';
    {$endif}

    { Adopted protocols }
    procedure scrollViewDidEndDecelerating (scrollView: UIScrollView); message 'scrollViewDidEndDecelerating:';
    procedure scrollViewDidEndDragging_willDecelerate (scrollView: UIScrollView; decelerate: boolean); message 'scrollViewDidEndDragging:willDecelerate:';
    procedure scrollViewDidEndScrollingAnimation (scrollView: UIScrollView); message 'scrollViewDidEndScrollingAnimation:';
    procedure scrollViewDidEndZooming_withView_atScale (scrollView: UIScrollView; view: nullable UIViewPtr; scale: CGFloat); message 'scrollViewDidEndZooming:withView:atScale:';
    procedure scrollViewDidScroll (scrollView: UIScrollView); message 'scrollViewDidScroll:';
    procedure scrollViewDidScrollToTop (scrollView: UIScrollView); message 'scrollViewDidScrollToTop:';
    procedure scrollViewDidZoom (scrollView: UIScrollView); message 'scrollViewDidZoom:'; { available in 3_2 }
    function scrollViewShouldScrollToTop (scrollView: UIScrollView): boolean; message 'scrollViewShouldScrollToTop:';
    procedure scrollViewWillBeginDecelerating (scrollView: UIScrollView); message 'scrollViewWillBeginDecelerating:';
    procedure scrollViewWillBeginDragging (scrollView: UIScrollView); message 'scrollViewWillBeginDragging:';
    procedure scrollViewWillBeginZooming_withView (scrollView: UIScrollView; view: nullable UIViewPtr); message 'scrollViewWillBeginZooming:withView:'; { available in 3_2 }
    procedure scrollViewWillEndDragging_withVelocity_targetContentOffset (scrollView: UIScrollView; velocity: CGPoint; targetContentOffset: CGPointPtr); message 'scrollViewWillEndDragging:withVelocity:targetContentOffset:'; { available in 5_0 }
    function textView_shouldChangeTextInRange_replacementText (textView: UITextView; range: NSRange; text: NSString): boolean; message 'textView:shouldChangeTextInRange:replacementText:';
    function textView_shouldInteractWithTextAttachment_inRange (textView: UITextView; textAttachment: NSTextAttachment; characterRange: NSRange): boolean; message 'textView:shouldInteractWithTextAttachment:inRange:'; deprecated 'in 7_0, 10_0, "Use textView:shouldInteractWithTextAttachment:inRange:forInteractionType: instead"';
    function textView_shouldInteractWithTextAttachment_inRange_interaction (textView: UITextView; textAttachment: NSTextAttachment; characterRange: NSRange; interaction: UITextItemInteraction): boolean; message 'textView:shouldInteractWithTextAttachment:inRange:interaction:'; { available in 10_0 }
    function textView_shouldInteractWithURL_inRange (textView: UITextView; URL: NSURL; characterRange: NSRange): boolean; message 'textView:shouldInteractWithURL:inRange:'; deprecated 'in 7_0, 10_0, "Use textView:shouldInteractWithURL:inRange:forInteractionType: instead"';
    function textView_shouldInteractWithURL_inRange_interaction (textView: UITextView; URL: NSURL; characterRange: NSRange; interaction: UITextItemInteraction): boolean; message 'textView:shouldInteractWithURL:inRange:interaction:'; { available in 10_0 }
    procedure textViewDidBeginEditing (textView: UITextView); message 'textViewDidBeginEditing:';
    procedure textViewDidChange (textView: UITextView); message 'textViewDidChange:';
    procedure textViewDidChangeSelection (textView: UITextView); message 'textViewDidChangeSelection:';
    procedure textViewDidEndEditing (textView: UITextView); message 'textViewDidEndEditing:';
    function textViewShouldBeginEditing (textView: UITextView): boolean; message 'textViewShouldBeginEditing:';
    function textViewShouldEndEditing (textView: UITextView): boolean; message 'textViewShouldEndEditing:';
    function viewForZoomingInScrollView (scrollView: UIScrollView): nullable UIViewPtr; message 'viewForZoomingInScrollView:';
  end;
{$endif}

