{ Parsed from JavaScriptCore.framework JSExport.h }

{$ifdef TYPES}
type
  JSExportProtocolPtr = ^JSExportProtocol;
{$endif}

{$if defined(JSC_OBJC_API_ENABLED)}
{$ifdef PROTOCOLS}

type
  JSExportProtocol = objcprotocol external name 'JSExport'
  end;
{$endif}

{$endif}
