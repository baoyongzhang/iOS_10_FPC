{ Parsed from Foundation.framework NSProxy.h }

{$ifdef TYPES}
type
  NSProxyPtr = ^NSProxy;
{$endif}

{$ifdef CLASSES}

type
  NSProxy = objcclass external (NSObject, NSObjectProtocol)
  private
    isa: pobjc_class;
  public
    class function alloc: id; message 'alloc';
    class function allocWithZone (zone: nullable NSZonePtr): id; message 'allocWithZone:';
    class function class_: pobjc_class; message 'class';
    procedure forwardInvocation (invocation: NSInvocation); message 'forwardInvocation:';
    function methodSignatureForSelector (sel_: SEL): nullable NSMethodSignaturePtr; message 'methodSignatureForSelector:';
    procedure dealloc; message 'dealloc';
    procedure finalize; message 'finalize';
    function description: NSString; message 'description';
    function debugDescription: NSString; message 'debugDescription';
    class function respondsToSelector (aSelector: SEL): boolean; message 'respondsToSelector:';
    function allowsWeakReference: boolean; message 'allowsWeakReference';
    function retainWeakReference: boolean; message 'retainWeakReference';
  end;
{$endif}

