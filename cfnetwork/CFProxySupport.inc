{ Parsed from CFNetwork.framework CFProxySupport.h }

{$ifndef __CFPROXYSUPPORT__}

{$ifdef FUNCTIONS}
function CFNetworkCopySystemProxySettings: CFDictionaryRef; cdecl; external; { available in 10_6, 2_0 }
function CFNetworkCopyProxiesForURL(url: CFURLRef; proxySettings: CFDictionaryRef): CFArrayRef; cdecl; external; { available in 10_5, 2_0 }
{$endif}

{$ifdef TYPES}
type
   CFProxyAutoConfigurationResultCallback = procedure (client: pointer; proxyList: CFArrayRef; error: CFErrorRef); cdecl;
{$endif}

{$ifdef FUNCTIONS}
function CFNetworkCopyProxiesForAutoConfigurationScript(proxyAutoConfigurationScript: CFStringRef; targetURL: CFURLRef; var error: CFErrorRef): CFArrayRef; cdecl; external; { available in 10_5, 2_0 }
function CFNetworkExecuteProxyAutoConfigurationScript(proxyAutoConfigurationScript: CFStringRef; targetURL: CFURLRef; cb: CFProxyAutoConfigurationResultCallback; var clientContext: CFStreamClientContext): CFRunLoopSourceRef; cdecl; external; { available in 10_5, 2_0 }
function CFNetworkExecuteProxyAutoConfigurationURL(proxyAutoConfigURL: CFURLRef; targetURL: CFURLRef; cb: CFProxyAutoConfigurationResultCallback; var clientContext: CFStreamClientContext): CFRunLoopSourceRef; cdecl; external; { available in 10_5, 2_0 }
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCFProxyTypeKey: CFStringRef { available in 10_5, 2_0 }; cvar; external;
  kCFProxyHostNameKey: CFStringRef { available in 10_5, 2_0 }; cvar; external;
  kCFProxyPortNumberKey: CFStringRef { available in 10_5, 2_0 }; cvar; external;
  kCFProxyAutoConfigurationURLKey: CFStringRef { available in 10_5, 2_0 }; cvar; external;
  kCFProxyAutoConfigurationJavaScriptKey: CFStringRef { available in 10_7, 3_0 }; cvar; external;
  kCFProxyUsernameKey: CFStringRef { available in 10_5, 2_0 }; cvar; external;
  kCFProxyPasswordKey: CFStringRef { available in 10_5, 2_0 }; cvar; external;
  kCFProxyTypeNone: CFStringRef { available in 10_5, 2_0 }; cvar; external;
  kCFProxyTypeHTTP: CFStringRef { available in 10_5, 2_0 }; cvar; external;
  kCFProxyTypeHTTPS: CFStringRef { available in 10_5, 2_0 }; cvar; external;
  kCFProxyTypeSOCKS: CFStringRef { available in 10_5, 2_0 }; cvar; external;
  kCFProxyTypeFTP: CFStringRef { available in 10_5, 2_0 }; cvar; external;
  kCFProxyTypeAutoConfigurationURL: CFStringRef { available in 10_5, 2_0 }; cvar; external;
  kCFProxyTypeAutoConfigurationJavaScript: CFStringRef { available in 10_7, 3_0 }; cvar; external;
  kCFProxyAutoConfigurationHTTPResponseKey: CFStringRef { available in 10_5, 2_0 }; cvar; external;
{$endif}

{$if defined(TARGET_OS_MAC)}
{$ifdef EXTERNAL_SYMBOLS}
var
  kCFNetworkProxiesExceptionsList: CFStringRef { available in 10_6, NA }; cvar; external;
  kCFNetworkProxiesExcludeSimpleHostnames: CFStringRef { available in 10_6, NA }; cvar; external;
  kCFNetworkProxiesFTPEnable: CFStringRef { available in 10_6, NA }; cvar; external;
  kCFNetworkProxiesFTPPassive: CFStringRef { available in 10_6, NA }; cvar; external;
  kCFNetworkProxiesFTPPort: CFStringRef { available in 10_6, NA }; cvar; external;
  kCFNetworkProxiesFTPProxy: CFStringRef { available in 10_6, NA }; cvar; external;
  kCFNetworkProxiesGopherEnable: CFStringRef { available in 10_6, NA }; cvar; external;
  kCFNetworkProxiesGopherPort: CFStringRef { available in 10_6, NA }; cvar; external;
  kCFNetworkProxiesGopherProxy: CFStringRef { available in 10_6, NA }; cvar; external;
  kCFNetworkProxiesHTTPEnable: CFStringRef { available in 10_6, 2_0 }; cvar; external;
  kCFNetworkProxiesHTTPPort: CFStringRef { available in 10_6, 2_0 }; cvar; external;
  kCFNetworkProxiesHTTPProxy: CFStringRef { available in 10_6, 2_0 }; cvar; external;
  kCFNetworkProxiesHTTPSEnable: CFStringRef { available in 10_6, NA }; cvar; external;
  kCFNetworkProxiesHTTPSPort: CFStringRef { available in 10_6, NA }; cvar; external;
  kCFNetworkProxiesHTTPSProxy: CFStringRef { available in 10_6, NA }; cvar; external;
  kCFNetworkProxiesRTSPEnable: CFStringRef { available in 10_6, NA }; cvar; external;
  kCFNetworkProxiesRTSPPort: CFStringRef { available in 10_6, NA }; cvar; external;
  kCFNetworkProxiesRTSPProxy: CFStringRef { available in 10_6, NA }; cvar; external;
  kCFNetworkProxiesSOCKSEnable: CFStringRef { available in 10_6, NA }; cvar; external;
  kCFNetworkProxiesSOCKSPort: CFStringRef { available in 10_6, NA }; cvar; external;
  kCFNetworkProxiesSOCKSProxy: CFStringRef { available in 10_6, NA }; cvar; external;
  kCFNetworkProxiesProxyAutoConfigEnable: CFStringRef { available in 10_6, 2_0 }; cvar; external;
  kCFNetworkProxiesProxyAutoConfigURLString: CFStringRef { available in 10_6, 2_0 }; cvar; external;
  kCFNetworkProxiesProxyAutoConfigJavaScript: CFStringRef { available in 10_7, 3_0 }; cvar; external;
  kCFNetworkProxiesProxyAutoDiscoveryEnable: CFStringRef { available in 10_6, NA }; cvar; external;
{$endif}

{$endif}
{$endif}
