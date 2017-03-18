{$mode delphi}
{$modeswitch objectivec1}
{$modeswitch cvar}

unit DefinedClassesJavaScriptCore;
interface

type
  JSContext = objcclass external;
  JSManagedValue = objcclass external;
  JSValue = objcclass external;
  JSExportProtocol = objcprotocol external name 'JSExport';

type
  JSVirtualMachine = objcclass external;

implementation
end.
