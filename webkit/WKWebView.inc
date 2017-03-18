{ Parsed from WebKit.framework WKWebView.h }

{ Types from WKWebView }
{$ifdef TYPES}
{$else}


{$endif}


{$ifdef TYPES}
type
  WKWebViewPtr = ^WKWebView;
{$endif}

{$if defined(TARGET_OS_IPHONE)}
{$ifdef CLASSES}

type
  WKWebView = objcclass external (UIView)
  public
    {$else}
    function configuration: WKWebViewConfiguration; message 'configuration';
    procedure setNavigationDelegate(newValue: WKNavigationDelegateProtocol); message 'setNavigationDelegate:';
    function navigationDelegate: WKNavigationDelegateProtocol; message 'navigationDelegate';
    procedure setUIDelegate(newValue: WKUIDelegateProtocol); message 'setUIDelegate:';
    function UIDelegate: WKUIDelegateProtocol; message 'UIDelegate';
    function backForwardList: WKBackForwardList; message 'backForwardList';
    function initWithFrame_configuration (frame: CGRect; configuration_: WKWebViewConfiguration): instancetype; message 'initWithFrame:configuration:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (coder: NSCoder): nullable instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function loadRequest (request: NSURLRequest): nullable WKNavigationPtr; message 'loadRequest:';
    function loadFileURL_allowingReadAccessToURL (URL: NSURL; readAccessURL: NSURL): nullable WKNavigationPtr; message 'loadFileURL:allowingReadAccessToURL:'; { available in macosx(10.11 }
    function loadHTMLString_baseURL (string_: NSString; baseURL: nullable NSURLPtr): nullable WKNavigationPtr; message 'loadHTMLString:baseURL:';
    function loadData_MIMEType_characterEncodingName_baseURL (data: NSData; MIMEType: NSString; characterEncodingName: NSString; baseURL: NSURL): nullable WKNavigationPtr; message 'loadData:MIMEType:characterEncodingName:baseURL:'; { available in macosx(10.11 }
    function goToBackForwardListItem (item: WKBackForwardListItem): nullable WKNavigationPtr; message 'goToBackForwardListItem:';
    function title: NSString; message 'title';
    function URL: NSURL; message 'URL';
    function isLoading: boolean; message 'isLoading';
    function estimatedProgress: double; message 'estimatedProgress';
    function hasOnlySecureContent: boolean; message 'hasOnlySecureContent';
    function serverTrust: SecTrustRef; message 'serverTrust';
    function ios(10.0)): SecTrustRef; message 'ios(10.0))';
    function canGoBack: boolean; message 'canGoBack';
    function canGoForward: boolean; message 'canGoForward';
    function goBack: nullable WKNavigationPtr; message 'goBack';
    function goForward: nullable WKNavigationPtr; message 'goForward';
    function reload: nullable WKNavigationPtr; message 'reload';
    function reloadFromOrigin: nullable WKNavigationPtr; message 'reloadFromOrigin';
    procedure stopLoading; message 'stopLoading';
    procedure evaluateJavaScript_completionHandler (javaScriptString: NSString; completionHandler: void (^ _Nullable)(_Nullable id, NSError * _Nullable error)); message 'evaluateJavaScript:completionHandler:';
    procedure setAllowsBackForwardNavigationGestures(newValue: boolean); message 'setAllowsBackForwardNavigationGestures:';
    function allowsBackForwardNavigationGestures: boolean; message 'allowsBackForwardNavigationGestures';
    procedure setCustomUserAgent(newValue: NSString); message 'setCustomUserAgent:';
    function customUserAgent: NSString; message 'customUserAgent';
    procedure setIos(9.0))(newValue: NSString); message 'setIos(9.0)):';
    function ios(9.0)): NSString; message 'ios(9.0))';
    procedure setAllowsLinkPreview(newValue: boolean); message 'setAllowsLinkPreview:';
    function allowsLinkPreview: boolean; message 'allowsLinkPreview';
    procedure setIos(9.0))_(newValue: boolean); message 'setIos(9.0)):';
    function ios(9.0))_: boolean; message 'ios(9.0))';
    {$if defined(TARGET_OS_IPHONE)}
    function scrollView: UIScrollView; message 'scrollView';
    {$endif}
    {$if  not defined(TARGET_OS_IPHONE)}
    procedure setAllowsMagnification(newValue: boolean); message 'setAllowsMagnification:';
    function allowsMagnification: boolean; message 'allowsMagnification';
    procedure setMagnification(newValue: CGFloat); message 'setMagnification:';
    function magnification: CGFloat; message 'magnification';
    procedure setMagnification_centeredAtPoint (magnification_: CGFloat; point: CGPoint); message 'setMagnification:centeredAtPoint:';
    {$endif}
  end;
{$endif}

{$if  not defined(TARGET_OS_IPHONE)}
{$ifdef CLASSES}

type
  WKIBActions = objccategory external (WKWebView)
    procedure goBack_ (sender: nullable id); message 'goBack:';
    procedure goForward_ (sender: nullable id); message 'goForward:';
    procedure reload_ (sender: nullable id); message 'reload:';
    procedure reloadFromOrigin_ (sender: nullable id); message 'reloadFromOrigin:';
    procedure stopLoading_ (sender: nullable id); message 'stopLoading:';
  end;
{$endif}

{$endif}
{$ifdef CLASSES}

type
  WKWebView_WKDeprecated = objccategory external name 'WKDeprecated' (WKWebView)
    function certificateChain: NSArray; message 'certificateChain';
    function 0: NSArray; message '0';

    function 10.0)): NSArray; message '10.0))';
  end;
{$endif}

{$endif}
