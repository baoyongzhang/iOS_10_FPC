{ Parsed from JavaScriptCore.framework JSContext.h }

{$ifdef TYPES}
type
  JSContextPtr = ^JSContext;
{$endif}

{$ifndef JSContext_h}

{$if defined(JSC_OBJC_API_ENABLED)}
{$ifdef CLASSES}

type
  JSContext = objcclass external (NSObject)
  public
    function init: instancetype; message 'init';
    function initWithVirtualMachine (virtualMachine: JSVirtualMachine): instancetype; message 'initWithVirtualMachine:';
    function evaluateScript (script: NSString): JSValue; message 'evaluateScript:';
    function evaluateScript_withSourceURL (script: NSString; sourceURL: NSURL): JSValue; message 'evaluateScript:withSourceURL:'; { available in 10_10, 8_0 }
    class function currentContext: JSContext; message 'currentContext';
    class function currentCallee: JSValue; message 'currentCallee'; { available in 10_10, 8_0 }
    class function currentThis: JSValue; message 'currentThis';
    class function currentArguments: NSArray; message 'currentArguments';
    function globalObject: JSValue; message 'globalObject';
    procedure setException(newValue: JSValue); message 'setException:';
    function exception: JSValue; message 'exception';
    procedure setExceptionHandler(newValue: OpaqueCBlock); message 'setExceptionHandler:';
    function exceptionHandler: OpaqueCBlock; message 'exceptionHandler';
    function virtualMachine: JSVirtualMachine; message 'virtualMachine';
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
  end;


type
  JSContext_SubscriptSupport = objccategory external name 'SubscriptSupport' (JSContext)
    function objectForKeyedSubscript (key: id): JSValue; message 'objectForKeyedSubscript:';
    procedure setObject_forKeyedSubscript (object_: id; key: NSCopyingProtocol); message 'setObject:forKeyedSubscript:';
  end;

type
  JSContextRefSupport = objccategory external (JSContext)
    class function contextWithJSGlobalContextRef (jsGlobalContextRef_: JSGlobalContextRef): JSContext; message 'contextWithJSGlobalContextRef:';
    function JSGlobalContextRef_: JSGlobalContextRef; message 'JSGlobalContextRef';
  end;
{$endif}

{$endif}
{$endif}
