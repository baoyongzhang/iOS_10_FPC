{$mode delphi}
{$modeswitch objectivec1}
{$modeswitch cvar}

unit DefinedClassesWebKit;
interface

type
  WKBackForwardList = objcclass external;
  WKBackForwardListItem = objcclass external;
  WKFrameInfo = objcclass external;
  WKNavigation = objcclass external;
  WKNavigationAction = objcclass external;
  WKNavigationResponse = objcclass external;
  WKOpenPanelParameters = objcclass external;
  WKPreferences = objcclass external;
  WKPreviewElementInfo = objcclass external;
  WKProcessPool = objcclass external;
  WKScriptMessage = objcclass external;
  WKSecurityOrigin = objcclass external;
  WKUserContentController = objcclass external;
  WKUserScript = objcclass external;
  WKWebView = objcclass external;
  WKWebViewConfiguration = objcclass external;
  WKWebsiteDataRecord = objcclass external;
  WKWebsiteDataStore = objcclass external;
  WKWindowFeatures = objcclass external;
  WKNavigationDelegateProtocol = objcprotocol external name 'WKNavigationDelegate';
  WKPreviewActionItemProtocol = objcprotocol external name 'WKPreviewActionItem';
  WKScriptMessageHandlerProtocol = objcprotocol external name 'WKScriptMessageHandler';
  WKUIDelegateProtocol = objcprotocol external name 'WKUIDelegate';

implementation
end.
