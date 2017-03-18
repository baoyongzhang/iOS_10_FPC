{ Parsed from UIKit.framework UIWebView.h }

{$ifdef TYPES}
type
  UIWebViewPtr = ^UIWebView;
  UIWebViewDelegateProtocolPtr = ^UIWebViewDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  UIWebViewNavigationType = NSInteger;
  UIWebViewNavigationTypePtr = ^UIWebViewNavigationType;

const
  UIWebViewNavigationTypeLinkClicked = 0;
  UIWebViewNavigationTypeFormSubmitted = 1;
  UIWebViewNavigationTypeBackForward = 2;
  UIWebViewNavigationTypeReload = 3;
  UIWebViewNavigationTypeFormResubmitted = 4;
  UIWebViewNavigationTypeOther = 5;

type
  UIWebPaginationMode = NSInteger;
  UIWebPaginationModePtr = ^UIWebPaginationMode;

const
  UIWebPaginationModeUnpaginated = 0;
  UIWebPaginationModeLeftToRight = 1;
  UIWebPaginationModeTopToBottom = 2;
  UIWebPaginationModeBottomToTop = 3;
  UIWebPaginationModeRightToLeft = 4;

type
  UIWebPaginationBreakingMode = NSInteger;
  UIWebPaginationBreakingModePtr = ^UIWebPaginationBreakingMode;

const
  UIWebPaginationBreakingModePage = 0;
  UIWebPaginationBreakingModeColumn = 1;
{$endif}

{$ifdef CLASSES}

type
  UIWebView = objcclass external (UIView, NSCodingProtocol, UIScrollViewDelegateProtocol)
  public
    procedure setDelegate(newValue: UIWebViewDelegateProtocol); message 'setDelegate:';
    function delegate: UIWebViewDelegateProtocol; message 'delegate';
    function scrollView: UIScrollView; message 'scrollView';
    procedure loadRequest (request: NSURLRequest); message 'loadRequest:';
    procedure loadHTMLString_baseURL (string_: NSString; baseURL: nullable NSURLPtr); message 'loadHTMLString:baseURL:';
    procedure loadData_MIMEType_textEncodingName_baseURL (data: NSData; MIMEType: NSString; textEncodingName: NSString; baseURL: NSURL); message 'loadData:MIMEType:textEncodingName:baseURL:';
    function request: NSURLRequest; message 'request';
    procedure reload; message 'reload';
    procedure stopLoading; message 'stopLoading';
    procedure goBack; message 'goBack';
    procedure goForward; message 'goForward';
    function canGoBack: boolean; message 'canGoBack';
    function canGoForward: boolean; message 'canGoForward';
    function isLoading: boolean; message 'isLoading';
    function stringByEvaluatingJavaScriptFromString (script: NSString): nullable NSStringPtr; message 'stringByEvaluatingJavaScriptFromString:';
    procedure setScalesPageToFit(newValue: boolean); message 'setScalesPageToFit:';
    function scalesPageToFit: boolean; message 'scalesPageToFit';
    procedure setDetectsPhoneNumbers(newValue: boolean); message 'setDetectsPhoneNumbers:';
    function detectsPhoneNumbers: boolean; message 'detectsPhoneNumbers';
    procedure setDataDetectorTypes(newValue: UIDataDetectorTypes); message 'setDataDetectorTypes:';
    function dataDetectorTypes: UIDataDetectorTypes; message 'dataDetectorTypes';
    procedure setAllowsInlineMediaPlayback(newValue: boolean); message 'setAllowsInlineMediaPlayback:';
    function allowsInlineMediaPlayback: boolean; message 'allowsInlineMediaPlayback';
    procedure setMediaPlaybackRequiresUserAction(newValue: boolean); message 'setMediaPlaybackRequiresUserAction:';
    function mediaPlaybackRequiresUserAction: boolean; message 'mediaPlaybackRequiresUserAction';
    procedure setMediaPlaybackAllowsAirPlay(newValue: boolean); message 'setMediaPlaybackAllowsAirPlay:';
    function mediaPlaybackAllowsAirPlay: boolean; message 'mediaPlaybackAllowsAirPlay';
    procedure setSuppressesIncrementalRendering(newValue: boolean); message 'setSuppressesIncrementalRendering:';
    function suppressesIncrementalRendering: boolean; message 'suppressesIncrementalRendering';
    procedure setKeyboardDisplayRequiresUserAction(newValue: boolean); message 'setKeyboardDisplayRequiresUserAction:';
    function keyboardDisplayRequiresUserAction: boolean; message 'keyboardDisplayRequiresUserAction';
    procedure setPaginationMode(newValue: UIWebPaginationMode); message 'setPaginationMode:';
    function paginationMode: UIWebPaginationMode; message 'paginationMode';
    procedure setPaginationBreakingMode(newValue: UIWebPaginationBreakingMode); message 'setPaginationBreakingMode:';
    function paginationBreakingMode: UIWebPaginationBreakingMode; message 'paginationBreakingMode';
    procedure setPageLength(newValue: CGFloat); message 'setPageLength:';
    function pageLength: CGFloat; message 'pageLength';
    procedure setGapBetweenPages(newValue: CGFloat); message 'setGapBetweenPages:';
    function gapBetweenPages: CGFloat; message 'gapBetweenPages';
    function pageCount: NSUInteger; message 'pageCount';
    procedure setAllowsPictureInPictureMediaPlayback(newValue: boolean); message 'setAllowsPictureInPictureMediaPlayback:';
    function allowsPictureInPictureMediaPlayback: boolean; message 'allowsPictureInPictureMediaPlayback';
    procedure setAllowsLinkPreview(newValue: boolean); message 'setAllowsLinkPreview:';
    function allowsLinkPreview: boolean; message 'allowsLinkPreview';

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
    function viewForZoomingInScrollView (scrollView: UIScrollView): nullable UIViewPtr; message 'viewForZoomingInScrollView:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  UIWebViewDelegateProtocol = objcprotocol external name 'UIWebViewDelegate' (NSObjectProtocol)
  optional
    function webView_shouldStartLoadWithRequest_navigationType (webView: UIWebView; request: NSURLRequest; navigationType: UIWebViewNavigationType): boolean; message 'webView:shouldStartLoadWithRequest:navigationType:';
    procedure webViewDidStartLoad (webView: UIWebView); message 'webViewDidStartLoad:';
    procedure webViewDidFinishLoad (webView: UIWebView); message 'webViewDidFinishLoad:';
    procedure webView_didFailLoadWithError (webView: UIWebView; error: NSError); message 'webView:didFailLoadWithError:';
  end;
{$endif}

