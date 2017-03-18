{ Parsed from Foundation.framework NSExtensionContext.h }

{$ifdef TYPES}
type
  NSExtensionContextPtr = ^NSExtensionContext;
{$endif}

{$if defined(__OBJC2__)}
{$ifdef CLASSES}

type
  NSExtensionContext = objcclass external (NSObject)
  public
    function inputItems: NSArray; message 'inputItems';
    procedure completeRequestReturningItems_completionHandler (items: nullable NSArrayPtr; completionHandler: void(^ __nullable)(BOOL expired)); message 'completeRequestReturningItems:completionHandler:';
    procedure cancelRequestWithError (error: NSError); message 'cancelRequestWithError:';
    procedure openURL_completionHandler (URL: NSURL; completionHandler: void (^ __nullable)(BOOL success)); message 'openURL:completionHandler:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSExtensionItemsAndErrorsKey: NSString *__null_unspecified { available in 10_10, 8_0 }; cvar; external;
  NSExtensionHostWillEnterForegroundNotification: NSString *__null_unspecified { available in 8_2 }; cvar; external;
  NSExtensionHostDidEnterBackgroundNotification: NSString *__null_unspecified { available in 8_2 }; cvar; external;
  NSExtensionHostWillResignActiveNotification: NSString *__null_unspecified { available in 8_2 }; cvar; external;
  NSExtensionHostDidBecomeActiveNotification: NSString *__null_unspecified { available in 8_2 }; cvar; external;
{$endif}

{$endif}
