{ Parsed from CallKit.framework CXCallDirectoryProvider.h }

{$ifdef TYPES}
type
  CXCallDirectoryProviderPtr = ^CXCallDirectoryProvider;
{$endif}

{$ifdef CLASSES}

type
  CXCallDirectoryProvider = objcclass external (NSObject, NSExtensionRequestHandlingProtocol)
  public
    procedure beginRequestWithExtensionContext (context: CXCallDirectoryExtensionContext); message 'beginRequestWithExtensionContext:';
  end;
{$endif}

