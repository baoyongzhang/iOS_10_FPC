{ Parsed from WebKit.framework WKOpenPanelParameters.h }

{$ifdef TYPES}
type
  WKOpenPanelParametersPtr = ^WKOpenPanelParameters;
{$endif}

{$if defined(WK_API_ENABLED) and not defined(TARGET_OS_IPHONE)}
{$ifdef CLASSES}

type
  WKOpenPanelParameters = objcclass external (NSObject)
  public
    function allowsMultipleSelection: boolean; message 'allowsMultipleSelection';
  end;
{$endif}

{$endif}
