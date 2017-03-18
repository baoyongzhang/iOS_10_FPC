{ Parsed from WebKit.framework WKUIDelegate.h }

{ Types from WKUIDelegateProtocol }
{$ifdef TYPES}


{$endif}


{$ifdef TYPES}
type
  WKUIDelegateProtocolPtr = ^WKUIDelegateProtocol;
{$endif}

{$if defined(WK_API_ENABLED)}
{$ifdef PROTOCOLS}

type
  WKUIDelegateProtocol = objcprotocol external name 'WKUIDelegate' (NSObjectProtocol)
  optional
    function webView_createWebViewWithConfiguration_forNavigationAction_windowFeatures (webView: WKWebView; configuration: WKWebViewConfiguration; navigationAction: WKNavigationAction; windowFeatures: WKWindowFeatures): nullable WKWebViewPtr; message 'webView:createWebViewWithConfiguration:forNavigationAction:windowFeatures:';
    procedure webViewDidClose (webView: WKWebView); message 'webViewDidClose:'; { available in macosx(10.11 }
    procedure webView_runJavaScriptAlertPanelWithMessage_initiatedByFrame_completionHandler (webView: WKWebView; message_: NSString; frame: WKFrameInfo; completionHandler: OpaqueCBlock); message 'webView:runJavaScriptAlertPanelWithMessage:initiatedByFrame:completionHandler:';
    procedure webView_runJavaScriptConfirmPanelWithMessage_initiatedByFrame_completionHandler (webView: WKWebView; message_: NSString; frame: WKFrameInfo; completionHandler: OpaqueCBlock); message 'webView:runJavaScriptConfirmPanelWithMessage:initiatedByFrame:completionHandler:';
    procedure webView_runJavaScriptTextInputPanelWithPrompt_defaultText_initiatedByFrame_completionHandler (webView: WKWebView; prompt: NSString; defaultText: nullable NSStringPtr; frame: WKFrameInfo; completionHandler: OpaqueCBlock); message 'webView:runJavaScriptTextInputPanelWithPrompt:defaultText:initiatedByFrame:completionHandler:';
    {$if defined(TARGET_OS_IPHONE)}
    function webView_shouldPreviewElement (webView: WKWebView; elementInfo: WKPreviewElementInfo): boolean; message 'webView:shouldPreviewElement:'; { available in ios(10.0 }
    function webView_previewingViewControllerForElement_defaultActions (webView: WKWebView; elementInfo: WKPreviewElementInfo; previewActions: id <WKPreviewActionItemProtocol>Ptr): nullable UIViewControllerPtr; message 'webView:previewingViewControllerForElement:defaultActions:'; { available in ios(10.0 }
    procedure webView_commitPreviewingViewController (webView: WKWebView; previewingViewController: UIViewController); message 'webView:commitPreviewingViewController:'; { available in ios(10.0 }
    {$endif}
    {$if  not defined(TARGET_OS_IPHONE)}
    procedure webView_runOpenPanelWithParameters_initiatedByFrame_completionHandler (webView: WKWebView; parameters: WKOpenPanelParameters; frame: WKFrameInfo; completionHandler: OpaqueCBlock); message 'webView:runOpenPanelWithParameters:initiatedByFrame:completionHandler:'; { available in macosx(10.12 }
    {$endif}
  end;
{$endif}

{$endif}
